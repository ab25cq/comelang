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

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
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
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
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
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sSemicolonNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value0,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__1 = (struct sSemicolonNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__1,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__1;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value1 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string("sSemicolonNode"))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__2;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value2 = (void*)0;
struct sLambdaNode* __result_obj__3;
    ((struct sNodeBase*)(__right_value2=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value2,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mFun=fun;
    __result_obj__3 = (struct sLambdaNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__3,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__3;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value3 = (void*)0;
char* __result_obj__4;
    __result_obj__4 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string("sLambdaNode"))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__4 = come_decrement_ref_count(__result_obj__4, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__4;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_0;
int block_level_1;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct CVALUE* come_value_2;
void* __right_value6 = (void*)0;
char* __dec_obj1;
void* __right_value44 = (void*)0;
struct sType* __dec_obj25;
_Bool __result_obj__22;
    come_fun_0=info->come_fun;
    info->come_fun=self->mFun;
    block_level_1=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_1;
    come_value_2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj1=come_value_2->c_value,
    come_value_2->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj25=come_value_2->type,
    come_value_2->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_2->var=((void*)0);
    add_come_last_code(info,"%s",come_value_2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_2));
    info->come_fun=come_fun_0;
    __result_obj__22 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_2,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__22;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__5;
void* __right_value7 = (void*)0;
struct sType* result_9;
void* __right_value8 = (void*)0;
struct sType* __dec_obj2;
void* __right_value9 = (void*)0;
struct sType* __dec_obj3;
void* __right_value17 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value18 = (void*)0;
struct sType* __dec_obj8;
void* __right_value20 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value21 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value22 = (void*)0;
char* __dec_obj11;
void* __right_value23 = (void*)0;
char* __dec_obj12;
void* __right_value24 = (void*)0;
char* __dec_obj13;
void* __right_value32 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value33 = (void*)0;
char* __dec_obj18;
void* __right_value34 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value42 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value43 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__20;
    if(    self==(void*)0) {
        __result_obj__5 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__5,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__5;
    }
    result_9=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_9->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj2=result_9->mOriginalLoadVarType,
        result_9->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj2,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj3=result_9->mChannelType,
        result_9->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj7=result_9->mGenericsTypes,
        result_9->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj7,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj8=result_9->mNoSolvedGenericsType,
        result_9->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj9=result_9->mSizeNum,
        result_9->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj10=result_9->mAlignas,
        result_9->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj11=result_9->mTupleName,
        result_9->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj12=result_9->mAttribute,
        result_9->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_9->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_9->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_9->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_9->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_9->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_9->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_9->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_9->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_9->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_9->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_9->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_9->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_9->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_9->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_9->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_9->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_9->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_9->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_9->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_9->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_9->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_9->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_9->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj13=result_9->mAsmName,
        result_9->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_9->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_9->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_9->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj17=result_9->mArrayNum,
        result_9->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj17,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_9->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_9->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_9->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_9->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_9->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj18=result_9->mOriginalTypeName,
        result_9->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_9->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_9->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_9->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_9->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj19=result_9->mParamTypes,
        result_9->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj19,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj23=result_9->mParamNames,
        result_9->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj24=result_9->mResultType,
        result_9->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_9->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_9->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)) {
        result_9->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__20 = (struct sType*)come_increment_ref_count(result_9);
    /*c*/ come_call_finalizer3(result_9,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__20,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__20;
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
struct list_item$1sType$ph* it_3;
struct list_item$1sType$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)) {
        prev_it_4=it_3;
        it_3=it_3->next;
        /*c*/ come_call_finalizer3(prev_it_4,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_5;
struct list_item$1sNode$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)) {
        prev_it_6=it_5;
        it_5=it_5->next;
        /*c*/ come_call_finalizer3(prev_it_6,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_7;
struct list_item$1char$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)) {
        prev_it_8=it_7;
        it_7=it_7->next;
        /*c*/ come_call_finalizer3(prev_it_8,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__6;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* result_10;
struct list_item$1sType$ph* it_11;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* __result_obj__9;
    if(    self==((void*)0)) {
        __result_obj__6 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__6,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__6;
    }
    result_10=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_11=self->head;
    while(    it_11!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_10,(struct sType*)come_increment_ref_count(sType_clone(it_11->item)));
        }
        else {
            list$1sType$ph_add(result_10,(struct sType*)come_increment_ref_count(sType_clone(it_11->item)));
        }
        it_11=it_11->next;
    }
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(result_10);
    /*c*/ come_call_finalizer3(result_10,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__9,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__7;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__7,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list_item$1sType$ph* litem_13;
struct sType* __dec_obj5;
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_14;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__8;
    if(    self->len==0) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_12->prev=((void*)0);
        litem_12->next=((void*)0);
        __dec_obj4=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_12;
        self->head=litem_12;
    }
    else if(    self->len==1) {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value13=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj5=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj6=litem_14->item,
        litem_14->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
    __result_obj__8 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__8;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_15;
struct list_item$1sType$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)) {
        prev_it_16=it_15;
        it_15=it_15->next;
        /*c*/ come_call_finalizer3(prev_it_16,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__10;
void* __right_value19 = (void*)0;
struct sNode* result_17;
struct sNode* __result_obj__11;
    if(    self==(void*)0) {
        __result_obj__10 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__10;
    }
    result_17=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_17->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_17->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_17->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_17->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_17->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_17->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_17->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_17->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_17->kind=self->kind;
    }
    __result_obj__11 = (struct sNode*)come_increment_ref_count(result_17);
    ((result_17) ? result_17 = come_decrement_ref_count(result_17, ((struct sNode*)result_17)->finalize, ((struct sNode*)result_17)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__12;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* result_18;
struct list_item$1sNode$ph* it_19;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* __result_obj__15;
    if(    self==((void*)0)) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__12,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__12;
    }
    result_18=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_19=self->head;
    while(    it_19!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_18,(struct sNode*)come_increment_ref_count(sNode_clone(it_19->item)));
        }
        else {
            list$1sNode$ph_add(result_18,(struct sNode*)come_increment_ref_count(sNode_clone(it_19->item)));
        }
        it_19=it_19->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result_18);
    /*c*/ come_call_finalizer3(result_18,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__15,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__13,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value27 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj14;
void* __right_value28 = (void*)0;
struct list_item$1sNode$ph* litem_21;
struct sNode* __dec_obj15;
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__14;
    if(    self->len==0) {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value27=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        __dec_obj14=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1) {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value28=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj15=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj16=litem_22->item,
        litem_22->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_23;
struct list_item$1sNode$ph* prev_it_24;
    it_23=self->head;
    while(    it_23!=((void*)0)) {
        prev_it_24=it_23;
        it_23=it_23->next;
        /*c*/ come_call_finalizer3(prev_it_24,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__16;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* result_25;
struct list_item$1char$ph* it_26;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* __result_obj__19;
    if(    self==((void*)0)) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__16,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__16;
    }
    result_25=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_25,(char*)come_increment_ref_count((char*)come_memdup(it_26->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_25,(char*)come_increment_ref_count((char*)come_memdup(it_26->item, "./comelang.h", 1032, "char*")));
        }
        it_26=it_26->next;
    }
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result_25);
    /*c*/ come_call_finalizer3(result_25,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__19,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__17,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value37 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj20;
void* __right_value38 = (void*)0;
struct list_item$1char$ph* litem_28;
char* __dec_obj21;
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_29;
char* __dec_obj22;
struct list$1char$ph* __result_obj__18;
    if(    self->len==0) {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value37=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj20=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value38=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj21=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj22=litem_29->item,
        litem_29->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__18;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_30;
struct list_item$1char$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)) {
        prev_it_31=it_30;
        it_30=it_30->next;
        /*c*/ come_call_finalizer3(prev_it_31,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value45 = (void*)0;
struct list_item$1CVALUE$ph* litem_32;
struct CVALUE* __dec_obj26;
void* __right_value46 = (void*)0;
struct list_item$1CVALUE$ph* litem_33;
struct CVALUE* __dec_obj27;
void* __right_value47 = (void*)0;
struct list_item$1CVALUE$ph* litem_34;
struct CVALUE* __dec_obj28;
struct list$1CVALUE$ph* __result_obj__21;
    if(    self->len==0) {
        litem_32=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value45=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        __dec_obj26=litem_32->item,
        litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value46=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj27=litem_33->item,
        litem_33->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value47=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj28=litem_34->item,
        litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__21 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__21;
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

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value48 = (void*)0;
struct sFun* __dec_obj29;
struct sFunNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value48=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value48,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj29=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    /*b*/ come_call_finalizer3(__dec_obj29,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__23 = (struct sFunNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__23,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__23;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value49 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value49=__builtin_string("sFunNode"))));
    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__24;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_35;
int block_level_36;
void* __right_value50 = (void*)0;
    come_fun_35=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_36=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_36;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value50=xsprintf("come_heap_final();\n"))));
            (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_35;
    return (_Bool)1;
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sBlock* result_37;
int sline_top_38;
int block_level_39;
char* p_saved_40;
int sline_saved_41;
char* sname_saved_42;
void* __right_value53 = (void*)0;
char* __dec_obj30;
char* __dec_obj31;
struct map$2char$phchar$ph* __dec_obj32;
char* p_45;
int sline_46;
void* __right_value54 = (void*)0;
char* sname_47;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
char* module_name_48;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$ph* params_49;
void* __right_value59 = (void*)0;
char* word_50;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
char* __dec_obj33;
void* __right_value63 = (void*)0;
char* __dec_obj34;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
_Bool _if_conditional1;
void* __right_value67 = (void*)0;
struct sBlock* __result_obj__33;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct sClassModule* module_57;
void* __right_value71 = (void*)0;
struct sBlock* __result_obj__34;
void* __right_value72 = (void*)0;
void* __right_value78 = (void*)0;
struct map$2char$phchar$ph* __dec_obj36;
int i_63;
struct list$1char$ph* _foreach_var_name1_64;
char* it_67;
void* __right_value79 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
char* __dec_obj40;
void* __right_value94 = (void*)0;
struct sNode* node_116;
void* __right_value95 = (void*)0;
char* __dec_obj41;
void* __right_value96 = (void*)0;
struct sBlock* __result_obj__63;
_Bool omit_semicolon_120;
void* __right_value100 = (void*)0;
char* __dec_obj45;
char* head_135;
void* __right_value101 = (void*)0;
struct sNode* value_136;
char* tail_137;
void* __right_value102 = (void*)0;
struct sNode* __dec_obj46;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct sNode* node_139;
void* __right_value105 = (void*)0;
char* __dec_obj47;
struct sNode* node_140;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value110 = (void*)0;
struct sNode* __dec_obj49;
void* __right_value111 = (void*)0;
struct sNode* __dec_obj50;
void* __right_value112 = (void*)0;
struct sBlock* __result_obj__70;
_Bool omit_semicolon_142;
char* p_143;
char* head_144;
void* __right_value113 = (void*)0;
char* source_145;
void* __right_value114 = (void*)0;
struct sNode* node_146;
void* __right_value115 = (void*)0;
struct sBlock* __result_obj__71;
struct sBlock* __result_obj__72;
node_140 = (void*)0;
    result_37=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 116, "struct sBlock*"))));
    sline_top_38=info->sline_top;
    info->sline_top=info->sline;
    block_level_39=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_40=((void*)0);
        sline_saved_41=0;
        sname_saved_42=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1) {
            if(            p_saved_40) {
                if(                *info->p==0) {
                    info->p=p_saved_40;
                    info->sline=sline_saved_41;
                    __dec_obj30=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_42));
                    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_40=((void*)0);
                    sline_saved_41=0;
                    __dec_obj31=sname_saved_42,
                    sname_saved_42=((void*)0);
                    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj32=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj32,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_45=info->p;
            sline_46=info->sline;
            sname_47=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_46;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value55=parse_word(info)));
                (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_48=(char*)come_increment_ref_count(parse_word(info));
                params_49=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 172, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1) {
                        word_50=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_49,(char*)come_increment_ref_count(word_50));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            ((struct tuple2$2int$bool$*)(__right_value60=err_msg(info,"invalid source end")));
                            /*c*/ come_call_finalizer3(__right_value60,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_50 = come_decrement_ref_count(word_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"invalid charactor(%c)",*info->p)));
                            /*c*/ come_call_finalizer3(__right_value61,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                        }
                        (word_50 = come_decrement_ref_count(word_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_40=info->p;
                sline_saved_41=info->sline;
                __dec_obj33=sname_saved_42,
                sname_saved_42=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj34=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_48));
                __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value66=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value65=__builtin_string(module_name_48))))))==((void*)0))),                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value66,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional1) {
                    ((struct tuple2$2int$bool$*)(__right_value67=err_msg(info,"module not found")));
                    /*c*/ come_call_finalizer3(__right_value67,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__33 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_49,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_37,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__33,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__33;
                }
                module_57=((struct sClassModule*)(__right_value70=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value69=__builtin_string(module_name_48))))));
                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value70,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_57->mParams)!=list$1char$ph_length(params_49)) {
                    ((struct tuple2$2int$bool$*)(__right_value71=err_msg(info,"invalid parametor number")));
                    /*c*/ come_call_finalizer3(__right_value71,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_49,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_37,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__34,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__34;
                }
                __dec_obj36=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 226, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj36,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_63=0;
                for(                _foreach_var_name1_64=(struct list$1char$ph*)come_increment_ref_count(module_57->mParams),                it_67=list$1char$ph_begin(_foreach_var_name1_64);                !list$1char$ph_end(_foreach_var_name1_64);                it_67=list$1char$ph_next(_foreach_var_name1_64)                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_67)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value91=list$1char$ph_operator_load_element(params_49,i_63))))));
                    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_63++;
                }
                /*c*/ come_call_finalizer3(_foreach_var_name1_64,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_57->mText;
                info->sline=module_57->mSLine;
                __dec_obj40=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_57->mSName));
                __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_49,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            node_116=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj41=info->sname,
            info->sname=(char*)come_increment_ref_count(node_116->sname(node_116->_protocol_obj));
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=node_116->sline(node_116->_protocol_obj);
            if(            node_116==((void*)0)) {
                ((struct tuple2$2int$bool$*)(__right_value96=err_msg(info,"Invalid expression")));
                /*c*/ come_call_finalizer3(__right_value96,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
                (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_37,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__63,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__63;
            }
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_116));
            parse_sharp_v5(info);
            if(            node_116->terminated(node_116->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_120=(_Bool)1;
            if(            node_116->terminated(node_116->_protocol_obj)) {
                omit_semicolon_120=(_Bool)0;
            }
            while(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_120=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_37->mOmitSemicolon=omit_semicolon_120;
                if(                omit_semicolon_120&&in_function) {
                    list$1sNode$ph_delete(result_37->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_45;
                    info->sline=sline_46;
                    __dec_obj45=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_47));
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    head_135=info->p;
                    value_136=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_137=info->p;
                    __dec_obj46=value_136,
                    value_136=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_136),info));
                    (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    char buf_138[tail_137-head_135+1];
                    memset(&buf_138, 0, sizeof(char)                    *(tail_137-head_135+1)                    );
                    memcpy(buf_138,head_135,tail_137-head_135);
                    buf_138[tail_137-head_135]=0;
                    expected_next_character(125,info);
                    node_139=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_136),(char*)come_increment_ref_count(__builtin_string(buf_138)),info));
                    list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_139));
                    ((value_136) ? value_136 = come_decrement_ref_count(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_136) ? value_136 = come_decrement_ref_count(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_40) {
            if(            info->p==0) {
                info->p=p_saved_40;
                info->sline=sline_saved_41;
                __dec_obj47=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_42));
                __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_40=((void*)0);
                sline_saved_41=0;
            }
        }
        (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 329, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value107=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 329, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj49=node_140,
            node_140=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value107,sSemicolonNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        else {
            __dec_obj50=node_140,
            node_140=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_140==((void*)0)) {
                ((struct tuple2$2int$bool$*)(__right_value112=err_msg(info,"Invalid expression")));
                /*c*/ come_call_finalizer3(__right_value112,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__70 = (void*)come_increment_ref_count(((void*)0));
                ((node_140) ? node_140 = come_decrement_ref_count(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_37,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__70,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__70;
            }
            parse_sharp_v5(info);
            if(            node_140->terminated(node_140->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_142=(_Bool)1;
            if(            node_140->terminated(node_140->_protocol_obj)) {
                omit_semicolon_142=(_Bool)0;
            }
            while(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_142=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_37->mOmitSemicolon=omit_semicolon_142;
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        ((node_140) ? node_140 = come_decrement_ref_count(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_143=info->p;
        head_144=info->head;
        source_145=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_145;
        info->head=source_145;
        node_146=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_146==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value115=err_msg(info,"Invalid expression")));
            /*c*/ come_call_finalizer3(__right_value115,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
            (source_145 = come_decrement_ref_count(source_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(result_37,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__71,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__71;
        }
        list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_146));
        info->p=p_143;
        info->head=head_144;
        (source_145 = come_decrement_ref_count(source_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_39;
    __result_obj__72 = (struct sBlock*)come_increment_ref_count(result_37);
    /*c*/ come_call_finalizer3(result_37,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_43;
int i_44;
    for(    i_43=0;    i_43<self->size;    i_43++    ){
        if(        self->item_existance[i_43]) {
            if(            1) {
                (self->items[i_43] = come_decrement_ref_count(self->items[i_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_44=0;    i_44<self->size;    i_44++    ){
        if(        self->item_existance[i_44]) {
            if(            1) {
                (self->keys[i_44] = come_decrement_ref_count(self->keys[i_44], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_51;
unsigned int hash_52;
unsigned int it_53;
struct sClassModule* __result_obj__25;
struct sClassModule* __result_obj__26;
struct sClassModule* __result_obj__27;
struct sClassModule* __result_obj__28;
default_value_51 = (void*)0;
    memset(&default_value_51,0,sizeof(struct sClassModule*));
    hash_52=string_get_hash_key(((char*)key))%self->size;
    it_53=hash_52;
    while(    (_Bool)1) {
        if(        self->item_existance[it_53]) {
            if(            string_equals(self->keys[it_53],key)) {
                __result_obj__25 = (struct sClassModule*)come_increment_ref_count(self->items[it_53]);
                /*c*/ come_call_finalizer3(default_value_51,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__25,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__25;
            }
            it_53++;
            if(            it_53>=self->size) {
                it_53=0;
            }
            else if(            it_53==hash_52) {
                __result_obj__26 = (struct sClassModule*)come_increment_ref_count(default_value_51);
                /*c*/ come_call_finalizer3(default_value_51,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__26,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sClassModule*)come_increment_ref_count(default_value_51);
            /*c*/ come_call_finalizer3(default_value_51,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__27,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sClassModule*)come_increment_ref_count(default_value_51);
    /*c*/ come_call_finalizer3(default_value_51,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__28,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__28;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_54;
unsigned int hash_55;
unsigned int it_56;
struct sClassModule* __result_obj__29;
struct sClassModule* __result_obj__30;
struct sClassModule* __result_obj__31;
struct sClassModule* __result_obj__32;
default_value_54 = (void*)0;
    memset(&default_value_54,0,sizeof(struct sClassModule*));
    hash_55=string_get_hash_key(((char*)key))%self->size;
    it_56=hash_55;
    while(    (_Bool)1) {
        if(        self->item_existance[it_56]) {
            if(            string_equals(self->keys[it_56],key)) {
                __result_obj__29 = (struct sClassModule*)come_increment_ref_count(self->items[it_56]);
                /*c*/ come_call_finalizer3(default_value_54,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__29,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__29;
            }
            it_56++;
            if(            it_56>=self->size) {
                it_56=0;
            }
            else if(            it_56==hash_55) {
                __result_obj__30 = (struct sClassModule*)come_increment_ref_count(default_value_54);
                /*c*/ come_call_finalizer3(default_value_54,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__30,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__30;
            }
        }
        else {
            __result_obj__31 = (struct sClassModule*)come_increment_ref_count(default_value_54);
            /*c*/ come_call_finalizer3(default_value_54,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__31,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__31;
        }
    }
    __result_obj__32 = (struct sClassModule*)come_increment_ref_count(default_value_54);
    /*c*/ come_call_finalizer3(default_value_54,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__32,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__32;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
int i_58;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1char$ph* __dec_obj35;
struct map$2char$phchar$ph* __result_obj__36;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value73=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value74=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1915, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value75=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_58=0;    i_58<128;    i_58++    ){
        self->item_existance[i_58]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj35=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj35,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__36 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__36,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__35;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__35 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__35,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__35;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_59;
struct list_item$1char$p* prev_it_60;
    it_59=self->head;
    while(    it_59!=((void*)0)) {
        prev_it_60=it_59;
        it_59=it_59->next;
        /*c*/ come_call_finalizer3(prev_it_60,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_61;
int i_62;
    for(    i_61=0;    i_61<self->size;    i_61++    ){
        if(        self->item_existance[i_61]) {
            if(            1) {
                (self->items[i_61] = come_decrement_ref_count(self->items[i_61], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_62=0;    i_62<self->size;    i_62++    ){
        if(        self->item_existance[i_62]) {
            if(            1) {
                (self->keys[i_62] = come_decrement_ref_count(self->keys[i_62], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_65;
char* __result_obj__37;
char* __result_obj__38;
char* result_66;
char* __result_obj__39;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_65,0,sizeof(char*));
        __result_obj__37 = result_65;
        return __result_obj__37;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_66,0,sizeof(char*));
    __result_obj__39 = result_66;
    return __result_obj__39;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_68;
char* __result_obj__40;
char* __result_obj__41;
char* result_69;
char* __result_obj__42;
result_68 = (void*)0;
result_69 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_68,0,sizeof(char*));
        __result_obj__40 = result_68;
        return __result_obj__40;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__41 = self->it->item;
        return __result_obj__41;
    }
    memset(&result_69,0,sizeof(char*));
    __result_obj__42 = result_69;
    return __result_obj__42;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_87;
unsigned int it_88;
_Bool same_key_exist_105;
char* it2_106;
struct map$2char$phchar$ph* __result_obj__58;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_87=string_get_hash_key(((char*)key))%self->size;
    it_88=hash_87;
    while(    (_Bool)1) {
        if(        self->item_existance[it_88]) {
            if(            string_equals(self->keys[it_88],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_88]);
                    (self->keys[it_88] = come_decrement_ref_count(self->keys[it_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_88]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_88]);
                    self->keys[it_88]=key;
                }
                if(                1) {
                    (self->items[it_88] = come_decrement_ref_count(self->items[it_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_88]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_88]=item;
                }
                break;
            }
            it_88++;
            if(            it_88>=self->size) {
                it_88=0;
            }
            else if(            it_88==hash_87) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_88]=(_Bool)1;
            if(            1) {
                self->keys[it_88]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_88]=key;
            }
            if(            1) {
                self->items[it_88]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_88]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_105=(_Bool)0;
    for(    it2_106=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_106=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_106,key)) {
            same_key_exist_105=(_Bool)1;
        }
    }
    if(    !same_key_exist_105) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__58 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__58;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_70;
void* __right_value80 = (void*)0;
char** keys_71;
void* __right_value81 = (void*)0;
char** items_72;
void* __right_value82 = (void*)0;
_Bool* item_existance_73;
int len_74;
char* it_77;
char* default_value_80;
void* __right_value83 = (void*)0;
char* it2_81;
unsigned int hash_84;
int n_85;
char* default_value_86;
void* __right_value84 = (void*)0;
default_value_80 = (void*)0;
default_value_86 = (void*)0;
    size_70=self->size*10;
    keys_71=(char**)come_increment_ref_count(((char**)(__right_value80=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_70)), "./comelang.h", 2153, "char**"))));
    items_72=(char**)come_increment_ref_count(((char**)(__right_value81=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_70)), "./comelang.h", 2154, "char**"))));
    item_existance_73=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value82=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_70)), "./comelang.h", 2155, "_Bool*"))));
    len_74=0;
    for(    it_77=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_77=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_80,0,sizeof(char*));
        it2_81=((char*)(__right_value83=map$2char$phchar$ph_at(self,it_77,(char*)come_increment_ref_count(default_value_80))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_84=string_get_hash_key(((char*)it_77))%size_70;
        n_85=hash_84;
        while(        (_Bool)1) {
            if(            item_existance_73[n_85]) {
                n_85++;
                if(                n_85>=size_70) {
                    n_85=0;
                }
                else if(                n_85==hash_84) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_73[n_85]=(_Bool)1;
                keys_71[n_85]=it_77;
                items_72[n_85]=((char*)(__right_value84=map$2char$phchar$ph_at(self,it_77,(char*)come_increment_ref_count(default_value_86))));
                (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_74++;
                (default_value_86 = come_decrement_ref_count(default_value_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_86 = come_decrement_ref_count(default_value_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_80 = come_decrement_ref_count(default_value_80, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_71;
    self->items=items_72;
    self->item_existance=item_existance_73;
    self->size=size_70;
    self->len=len_74;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_75;
char* __result_obj__43;
char* __result_obj__44;
char* result_76;
char* __result_obj__45;
result_75 = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_75,0,sizeof(char*));
        __result_obj__43 = result_75;
        return __result_obj__43;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__44 = self->key_list->it->item;
        return __result_obj__44;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__45 = result_76;
    return __result_obj__45;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_78;
char* __result_obj__46;
char* __result_obj__47;
char* result_79;
char* __result_obj__48;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_78,0,sizeof(char*));
        __result_obj__46 = result_78;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__48 = result_79;
    return __result_obj__48;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_82;
unsigned int it_83;
char* __result_obj__49;
char* __result_obj__50;
char* __result_obj__51;
char* __result_obj__52;
    hash_82=string_get_hash_key(((char*)key))%self->size;
    it_83=hash_82;
    while(    (_Bool)1) {
        if(        self->item_existance[it_83]) {
            if(            string_equals(self->keys[it_83],key)) {
                __result_obj__49 = (char*)come_increment_ref_count(self->items[it_83]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__49;
            }
            it_83++;
            if(            it_83>=self->size) {
                it_83=0;
            }
            else if(            it_83==hash_82) {
                __result_obj__50 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__50;
            }
        }
        else {
            __result_obj__51 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__51;
        }
    }
    __result_obj__52 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__52;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_89;
struct list_item$1char$ph* it_90;
struct list$1char$ph* __result_obj__56;
    it2_89=0;
    it_90=self->head;
    while(    it_90!=((void*)0)) {
        if(        string_equals(it_90->item,item)) {
            list$1char$ph_delete(self,it2_89,it2_89+1);
            break;
        }
        it2_89++;
        it_90=it_90->next;
    }
    __result_obj__56 = self;
    return __result_obj__56;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_91;
struct list$1char$ph* __result_obj__53;
struct list_item$1char$ph* it_94;
int i_95;
struct list_item$1char$ph* prev_it_96;
struct list_item$1char$ph* it_97;
int i_98;
struct list_item$1char$ph* prev_it_99;
struct list_item$1char$ph* it_100;
struct list_item$1char$ph* head_prev_it_101;
struct list_item$1char$ph* tail_it_102;
int i_103;
struct list_item$1char$ph* prev_it_104;
struct list$1char$ph* __result_obj__55;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_91=tail;
        tail=head;
        head=tmp_91;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_94=self->head;
        i_95=0;
        while(        it_94!=((void*)0)) {
            if(            i_95<tail) {
                prev_it_96=it_94;
                it_94=it_94->next;
                i_95++;
                /*c*/ come_call_finalizer3(prev_it_96,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_95==tail) {
                self->head=it_94;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_94=it_94->next;
                i_95++;
            }
        }
    }
    else if(    tail==self->len) {
        it_97=self->head;
        i_98=0;
        while(        it_97!=((void*)0)) {
            if(            i_98==head) {
                self->tail=it_97->prev;
                self->tail->next=((void*)0);
            }
            if(            i_98>=head) {
                prev_it_99=it_97;
                it_97=it_97->next;
                i_98++;
                /*c*/ come_call_finalizer3(prev_it_99,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_97=it_97->next;
                i_98++;
            }
        }
    }
    else {
        it_100=self->head;
        head_prev_it_101=((void*)0);
        tail_it_102=((void*)0);
        i_103=0;
        while(        it_100!=((void*)0)) {
            if(            i_103==head) {
                head_prev_it_101=it_100->prev;
            }
            if(            i_103==tail) {
                tail_it_102=it_100;
            }
            if(            i_103>=head&&i_103<tail) {
                prev_it_104=it_100;
                it_100=it_100->next;
                i_103++;
                /*c*/ come_call_finalizer3(prev_it_104,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_100=it_100->next;
                i_103++;
            }
        }
        if(        head_prev_it_101!=((void*)0)) {
            head_prev_it_101->next=tail_it_102;
        }
        if(        tail_it_102!=((void*)0)) {
            tail_it_102->prev=head_prev_it_101;
        }
    }
    __result_obj__55 = self;
    return __result_obj__55;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_92;
struct list_item$1char$ph* prev_it_93;
struct list$1char$ph* __result_obj__54;
    it_92=self->head;
    while(    it_92!=((void*)0)) {
        prev_it_93=it_92;
        it_92=it_92->next;
        /*c*/ come_call_finalizer3(prev_it_93,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value85 = (void*)0;
struct list_item$1char$ph* litem_107;
char* __dec_obj37;
void* __right_value86 = (void*)0;
struct list_item$1char$ph* litem_108;
char* __dec_obj38;
void* __right_value87 = (void*)0;
struct list_item$1char$ph* litem_109;
char* __dec_obj39;
struct list$1char$ph* __result_obj__57;
    if(    self->len==0) {
        litem_107=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value85=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_107->prev=((void*)0);
        litem_107->next=((void*)0);
        __dec_obj37=litem_107->item,
        litem_107->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_107;
        self->head=litem_107;
    }
    else if(    self->len==1) {
        litem_108=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value86=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_108->prev=self->head;
        litem_108->next=((void*)0);
        __dec_obj38=litem_108->item,
        litem_108->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_108;
        self->head->next=litem_108;
    }
    else {
        litem_109=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value87=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_109->prev=self->tail;
        litem_109->next=((void*)0);
        __dec_obj39=litem_109->item,
        litem_109->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_109;
        self->tail=litem_109;
    }
    self->len++;
    __result_obj__57 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__57;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_110;
int i_111;
char* __result_obj__59;
char* default_value_112;
char* __result_obj__60;
default_value_112 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_110=self->head;
    i_111=0;
    while(    it_110!=((void*)0)) {
        if(        position==i_111) {
            __result_obj__59 = (char*)come_increment_ref_count(it_110->item);
            (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__59;
        }
        it_110=it_110->next;
        i_111++;
    }
    memset(&default_value_112,0,sizeof(char*));
    __result_obj__60 = (char*)come_increment_ref_count(default_value_112);
    (default_value_112 = come_decrement_ref_count(default_value_112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__60;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_113;
int i_114;
char* __result_obj__61;
char* default_value_115;
char* __result_obj__62;
default_value_115 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_113=self->head;
    i_114=0;
    while(    it_113!=((void*)0)) {
        if(        position==i_114) {
            __result_obj__61 = (char*)come_increment_ref_count(it_113->item);
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__61;
        }
        it_113=it_113->next;
        i_114++;
    }
    memset(&default_value_115,0,sizeof(char*));
    __result_obj__62 = (char*)come_increment_ref_count(default_value_115);
    (default_value_115 = come_decrement_ref_count(default_value_115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__62;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value97 = (void*)0;
struct list_item$1sNode$ph* litem_117;
struct sNode* __dec_obj42;
void* __right_value98 = (void*)0;
struct list_item$1sNode$ph* litem_118;
struct sNode* __dec_obj43;
void* __right_value99 = (void*)0;
struct list_item$1sNode$ph* litem_119;
struct sNode* __dec_obj44;
struct list$1sNode$ph* __result_obj__64;
    if(    self->len==0) {
        litem_117=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value97=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_117->prev=((void*)0);
        litem_117->next=((void*)0);
        __dec_obj42=litem_117->item,
        litem_117->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_117;
        self->head=litem_117;
    }
    else if(    self->len==1) {
        litem_118=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value98=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_118->prev=self->head;
        litem_118->next=((void*)0);
        __dec_obj43=litem_118->item,
        litem_118->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_118;
        self->head->next=litem_118;
    }
    else {
        litem_119=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value99=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_119->prev=self->tail;
        litem_119->next=((void*)0);
        __dec_obj44=litem_119->item,
        litem_119->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_119;
        self->tail=litem_119;
    }
    self->len++;
    __result_obj__64 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_121;
struct list$1sNode$ph* __result_obj__65;
struct list_item$1sNode$ph* it_124;
int i_125;
struct list_item$1sNode$ph* prev_it_126;
struct list_item$1sNode$ph* it_127;
int i_128;
struct list_item$1sNode$ph* prev_it_129;
struct list_item$1sNode$ph* it_130;
struct list_item$1sNode$ph* head_prev_it_131;
struct list_item$1sNode$ph* tail_it_132;
int i_133;
struct list_item$1sNode$ph* prev_it_134;
struct list$1sNode$ph* __result_obj__67;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_121=tail;
        tail=head;
        head=tmp_121;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__65 = self;
        return __result_obj__65;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_124=self->head;
        i_125=0;
        while(        it_124!=((void*)0)) {
            if(            i_125<tail) {
                prev_it_126=it_124;
                it_124=it_124->next;
                i_125++;
                /*c*/ come_call_finalizer3(prev_it_126,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_125==tail) {
                self->head=it_124;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_124=it_124->next;
                i_125++;
            }
        }
    }
    else if(    tail==self->len) {
        it_127=self->head;
        i_128=0;
        while(        it_127!=((void*)0)) {
            if(            i_128==head) {
                self->tail=it_127->prev;
                self->tail->next=((void*)0);
            }
            if(            i_128>=head) {
                prev_it_129=it_127;
                it_127=it_127->next;
                i_128++;
                /*c*/ come_call_finalizer3(prev_it_129,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_127=it_127->next;
                i_128++;
            }
        }
    }
    else {
        it_130=self->head;
        head_prev_it_131=((void*)0);
        tail_it_132=((void*)0);
        i_133=0;
        while(        it_130!=((void*)0)) {
            if(            i_133==head) {
                head_prev_it_131=it_130->prev;
            }
            if(            i_133==tail) {
                tail_it_132=it_130;
            }
            if(            i_133>=head&&i_133<tail) {
                prev_it_134=it_130;
                it_130=it_130->next;
                i_133++;
                /*c*/ come_call_finalizer3(prev_it_134,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_130=it_130->next;
                i_133++;
            }
        }
        if(        head_prev_it_131!=((void*)0)) {
            head_prev_it_131->next=tail_it_132;
        }
        if(        tail_it_132!=((void*)0)) {
            tail_it_132->prev=head_prev_it_131;
        }
    }
    __result_obj__67 = self;
    return __result_obj__67;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_122;
struct list_item$1sNode$ph* prev_it_123;
struct list$1sNode$ph* __result_obj__66;
    it_122=self->head;
    while(    it_122!=((void*)0)) {
        prev_it_123=it_122;
        it_122=it_122->next;
        /*c*/ come_call_finalizer3(prev_it_123,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__68;
void* __right_value108 = (void*)0;
struct sSemicolonNode* result_141;
void* __right_value109 = (void*)0;
char* __dec_obj48;
struct sSemicolonNode* __result_obj__69;
    if(    self==(void*)0) {
        __result_obj__68 = (void*)0;
        return __result_obj__68;
    }
    result_141=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)) {
        result_141->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj48=result_141->sname,
        result_141->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_141->sline_real=self->sline_real;
    }
    __result_obj__69 = result_141;
    /*c*/ come_call_finalizer3(result_141,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__69;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_147;
struct sVarTable* old_table_148;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct sVarTable* __dec_obj51;
struct sVarTable* current_loop_vtable_149;
int i_150;
struct list$1char$ph* _foreach_var_name2_151;
char* name_152;
void* __right_value118 = (void*)0;
struct sType* type_153;
void* __right_value119 = (void*)0;
int block_level_160;
int i_161;
struct list$1sNode$ph* _foreach_var_name3_162;
struct sNode* node_165;
struct list$1sRightValueObject$ph* right_value_objects_168;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
int stack_num_before_173;
int sline_174;
void* __right_value122 = (void*)0;
char* sname_175;
void* __right_value123 = (void*)0;
char* __dec_obj55;
_Bool Value_176;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_177;
void* __right_value130 = (void*)0;
struct CVALUE* come_value2_178;
void* __right_value131 = (void*)0;
char* __dec_obj60;
void* __right_value132 = (void*)0;
struct CVALUE* come_value2_180;
struct sVar* var__181;
void* __right_value133 = (void*)0;
struct CVALUE* come_value3_182;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sType* __dec_obj61;
void* __right_value136 = (void*)0;
char* c_value_199;
void* __right_value137 = (void*)0;
char* __dec_obj62;
void* __right_value138 = (void*)0;
char* __dec_obj63;
void* __right_value139 = (void*)0;
char* __dec_obj64;
_Bool Value_200;
void* __right_value140 = (void*)0;
char* __dec_obj65;
struct list$1sRightValueObject$ph* __dec_obj66;
void* __if_result__0_203 = (void*)0;
struct list$1sVar$ph* _foreach_var_name4_204;
struct sVar* it_207;
void* __right_value141 = (void*)0;
struct list$1sVar$ph* __dec_obj67;
memset(&i_150, 0, sizeof(int));
memset(&i_161, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_147=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_148=info->lv_table;
    if(    !no_var_table) {
        __dec_obj51=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 403, "struct sVarTable*")),(_Bool)0,old_table_148));
        /*b*/ come_call_finalizer3(__dec_obj51,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_149=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        _foreach_var_name2_151=param_names,        name_152=list$1char$ph_begin(_foreach_var_name2_151);        !list$1char$ph_end(_foreach_var_name2_151);        name_152=list$1char$ph_next(_foreach_var_name2_151)        ){
            type_153=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_150));
            type_153->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_152,(struct sType*)come_increment_ref_count(sType_clone(type_153)),info,(_Bool)1,(_Bool)0);
            i_150++;
            /*c*/ come_call_finalizer3(type_153,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    block_level_160=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(        _foreach_var_name3_162=(struct list$1sNode$ph*)come_increment_ref_count(block->mNodes),        node_165=list$1sNode$ph_begin(_foreach_var_name3_162);        !list$1sNode$ph_end(_foreach_var_name3_162);        node_165=list$1sNode$ph_next(_foreach_var_name3_162)        ){
            right_value_objects_168=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj52=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 433, "struct list$1sRightValueObject$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj52,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj53=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj54=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            stack_num_before_173=list$1CVALUE$ph_length(info->stack);
            sline_174=info->sline;
            sname_175=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_165->sline(node_165->_protocol_obj);
            __dec_obj55=info->sname,
            info->sname=(char*)come_increment_ref_count(node_165->sname(node_165->_protocol_obj));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            i_161==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_176=node_compile(node_165,info);
                if(                !Value_176) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_173+1) {
                    come_value_177=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_177->type->mClass->mName,"void")&&come_value_177->type->mPointerNum==0) {
                        come_value2_178=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_177));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_178));
                        __dec_obj60=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_178->c_value));
                        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_178,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        come_value2_180=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_177));
                        var__181=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__181) {
                            come_value3_182=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 468, "struct CVALUE*"));
                            if(                            var__181->mType->mClass=="void"&&var__181->mType->mPointerNum==1) {
                                check_assign_type("invalid if result value",var__181->mType,((struct sType*)(__right_value134=sType_clone(come_value_177->type))),come_value3_182,(_Bool)0,(_Bool)1,(_Bool)1,info);
                                /*c*/ come_call_finalizer3(__right_value134,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                            __dec_obj61=var__181->mType,
                            var__181->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_177->type));
                            /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_177->type->mHeap) {
                                c_value_199=(char*)come_increment_ref_count(increment_ref_count_object(come_value_177->type,come_value_177->c_value,info));
                                __dec_obj62=come_value2_180->c_value,
                                come_value2_180->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__181->mCValueName,c_value_199));
                                __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                (c_value_199 = come_decrement_ref_count(c_value_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj63=come_value2_180->c_value,
                                come_value2_180->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__181->mCValueName,come_value_177->c_value));
                                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            /*c*/ come_call_finalizer3(come_value3_182,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_180));
                        __dec_obj64=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_180->c_value));
                        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_180,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(come_value_177,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            else {
                Value_200=node_compile(node_165,info);
                if(                !Value_200) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_174;
            __dec_obj65=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_175));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_173);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj66=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_168);
            /*b*/ come_call_finalizer3(__dec_obj66,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_161++;
            /*c*/ come_call_finalizer3(right_value_objects_168,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_175 = come_decrement_ref_count(sname_175, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name3_162,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_160==0) {
            for(            _foreach_var_name4_204=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),            it_207=list$1sVar$ph_begin(_foreach_var_name4_204);            !list$1sVar$ph_end(_foreach_var_name4_204);            it_207=list$1sVar$ph_next(_foreach_var_name4_204)            ){
                free_object(((struct sType*)(__right_value141=sType_clone(it_207->mType))),it_207->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value141,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name4_204,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj67=info->match_it_var,
            __if_result__0_203=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            /*b*/ come_call_finalizer3(__dec_obj67,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        /*c*/ come_call_finalizer3(__if_result__0_203,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->lv_table=old_table_148;
    info->block_level=block_level_160;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_149;
    info->inhibits_output_code=inhibits_output_code_147;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_154;
int i_155;
struct sType* __result_obj__73;
struct sType* default_value_156;
struct sType* __result_obj__74;
default_value_156 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_154=self->head;
    i_155=0;
    while(    it_154!=((void*)0)) {
        if(        position==i_155) {
            __result_obj__73 = (struct sType*)come_increment_ref_count(it_154->item);
            /*c*/ come_call_finalizer3(__result_obj__73,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__73;
        }
        it_154=it_154->next;
        i_155++;
    }
    memset(&default_value_156,0,sizeof(struct sType*));
    __result_obj__74 = (struct sType*)come_increment_ref_count(default_value_156);
    /*c*/ come_call_finalizer3(default_value_156,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_157;
int i_158;
struct sType* __result_obj__75;
struct sType* default_value_159;
struct sType* __result_obj__76;
default_value_159 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_157=self->head;
    i_158=0;
    while(    it_157!=((void*)0)) {
        if(        position==i_158) {
            __result_obj__75 = (struct sType*)come_increment_ref_count(it_157->item);
            /*c*/ come_call_finalizer3(__result_obj__75,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__75;
        }
        it_157=it_157->next;
        i_158++;
    }
    memset(&default_value_159,0,sizeof(struct sType*));
    __result_obj__76 = (struct sType*)come_increment_ref_count(default_value_159);
    /*c*/ come_call_finalizer3(default_value_159,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__76,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_163;
struct sNode* __result_obj__77;
struct sNode* __result_obj__78;
struct sNode* result_164;
struct sNode* __result_obj__79;
result_163 = (void*)0;
result_164 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_163,0,sizeof(struct sNode*));
        __result_obj__77 = result_163;
        return __result_obj__77;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__78 = self->it->item;
        return __result_obj__78;
    }
    memset(&result_164,0,sizeof(struct sNode*));
    __result_obj__79 = result_164;
    return __result_obj__79;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_166;
struct sNode* __result_obj__80;
struct sNode* __result_obj__81;
struct sNode* result_167;
struct sNode* __result_obj__82;
result_166 = (void*)0;
result_167 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_166,0,sizeof(struct sNode*));
        __result_obj__80 = result_166;
        return __result_obj__80;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__81 = self->it->item;
        return __result_obj__81;
    }
    memset(&result_167,0,sizeof(struct sNode*));
    __result_obj__82 = result_167;
    return __result_obj__82;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__83 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__83,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__83;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_169;
struct list_item$1sRightValueObject$ph* prev_it_170;
    it_169=self->head;
    while(    it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*c*/ come_call_finalizer3(prev_it_170,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_171;
struct list_item$1sRightValueObject$ph* prev_it_172;
    it_171=self->head;
    while(    it_171!=((void*)0)) {
        prev_it_172=it_171;
        it_171=it_171->next;
        /*c*/ come_call_finalizer3(prev_it_172,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__84;
void* __right_value125 = (void*)0;
struct CVALUE* result_179;
void* __right_value126 = (void*)0;
char* __dec_obj56;
void* __right_value127 = (void*)0;
struct sType* __dec_obj57;
void* __right_value128 = (void*)0;
char* __dec_obj58;
void* __right_value129 = (void*)0;
char* __dec_obj59;
struct CVALUE* __result_obj__85;
    if(    self==(void*)0) {
        __result_obj__84 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__84,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__84;
    }
    result_179=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj56=result_179->c_value,
        result_179->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj57=result_179->type,
        result_179->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_179->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_179->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj58=result_179->c_value_without_right_value_objects,
        result_179->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj59=result_179->c_value_without_cast_object_value,
        result_179->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(result_179);
    /*c*/ come_call_finalizer3(result_179,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_183;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_184;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_183=left->head;
    it2_184=right->head;
    while(    it_183!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_183->item,it2_184->item)) {
            return (_Bool)0;
        }
        it_183=it_183->next;
        it2_184=it2_184->next;
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

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_185;
struct list_item$1sType$ph* it2_186;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_185=left->head;
    it2_186=right->head;
    while(    it_185!=((void*)0)) {
        if(        !sType_equals(it_185->item,it2_186->item)) {
            return (_Bool)0;
        }
        it_185=it_185->next;
        it2_186=it2_186->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_187;
struct list_item$1sNode$ph* it2_188;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_187=left->head;
    it2_188=right->head;
    while(    it_187!=((void*)0)) {
        if(        !sNode_equals(it_187->item,it2_188->item)) {
            return (_Bool)0;
        }
        it_187=it_187->next;
        it2_188=it2_188->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_189;
struct list_item$1char$ph* it2_190;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_189=left->head;
    it2_190=right->head;
    while(    it_189!=((void*)0)) {
        if(        !string_equals(it_189->item,it2_190->item)) {
            return (_Bool)0;
        }
        it_189=it_189->next;
        it2_190=it2_190->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2char$phsType$ph$ph_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
    return !list$1tuple2$2char$phsType$ph$ph_operator_equals(left,right);
}

static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_191;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_192;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_191=left->head;
    it2_192=right->head;
    while(    it_191!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_191->item,it2_192->item))) {
            return (_Bool)0;
        }
        it_191=it_191->next;
        it2_192=it2_192->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    list$1sNode$ph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1char$ph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDefferRightValue,right->mDefferRightValue)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&bool_equals(left->mUniq,right->mUniq)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)&&string_equals(left->mParentClassName,right->mParentClassName)&&string_equals(left->mAttribute,right->mAttribute));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2char$phsType$ph$ph_operator_equals(left->mFields,right->mFields))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))));
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mChannelType,right->mChannelType)&&list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&sNode_equals(left->mAlignas,right->mAlignas)&&string_equals(left->mTupleName,right->mTupleName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&string_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&string_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)&&list$1char$ph_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs)&&bool_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)&&bool_equals(left->mDefferRightValue,right->mDefferRightValue));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(list$1sType$ph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(list$1sNode$ph_operator_equals(left->mArrayNum,right->mArrayNum))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(list$1sType$ph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1char$ph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))&&(bool_operator_equals(left->mExceptionGenericsType,right->mExceptionGenericsType))&&(bool_operator_equals(left->mDefferRightValue,right->mDefferRightValue))));
}

static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_193;
struct list_item$1sType$ph* it2_194;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_193=left->head;
    it2_194=right->head;
    while(    it_193!=((void*)0)) {
        if(        !(sType_operator_equals(it_193->item,it2_194->item))) {
            return (_Bool)0;
        }
        it_193=it_193->next;
        it2_194=it2_194->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_195;
struct list_item$1sNode$ph* it2_196;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_195=left->head;
    it2_196=right->head;
    while(    it_195!=((void*)0)) {
        if(        !(sNode_operator_equals(it_195->item,it2_196->item))) {
            return (_Bool)0;
        }
        it_195=it_195->next;
        it2_196=it2_196->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_197;
struct list_item$1char$ph* it2_198;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_197=left->head;
    it2_198=right->head;
    while(    it_197!=((void*)0)) {
        if(        !(string_operator_equals(it_197->item,it2_198->item))) {
            return (_Bool)0;
        }
        it_197=it_197->next;
        it2_198=it2_198->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    return !list$1sType$ph_operator_equals(left,right);
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    return !list$1sNode$ph_operator_equals(left,right);
}

static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    return !list$1char$ph_operator_equals(left,right);
}

static _Bool list$1tuple2$2char$phsType$ph$ph_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
    return !list$1tuple2$2char$phsType$ph$ph_operator_equals(left,right);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_201;
struct list_item$1sRightValueObject$ph* prev_it_202;
struct list$1sRightValueObject$ph* __result_obj__86;
    it_201=self->head;
    while(    it_201!=((void*)0)) {
        prev_it_202=it_201;
        it_201=it_201->next;
        /*c*/ come_call_finalizer3(prev_it_202,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_205;
struct sVar* __result_obj__87;
struct sVar* __result_obj__88;
struct sVar* result_206;
struct sVar* __result_obj__89;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_205,0,sizeof(struct sVar*));
        __result_obj__87 = result_205;
        return __result_obj__87;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_206,0,sizeof(struct sVar*));
    __result_obj__89 = result_206;
    return __result_obj__89;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_208;
struct sVar* __result_obj__90;
struct sVar* __result_obj__91;
struct sVar* result_209;
struct sVar* __result_obj__92;
result_208 = (void*)0;
result_209 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_208,0,sizeof(struct sVar*));
        __result_obj__90 = result_208;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_209,0,sizeof(struct sVar*));
    __result_obj__92 = result_209;
    return __result_obj__92;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_210;
struct list_item$1sVar$ph* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)) {
        prev_it_211=it_210;
        it_210=it_210->next;
        /*c*/ come_call_finalizer3(prev_it_211,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sVar$ph* it_212;
struct list_item$1sVar$ph* prev_it_213;
    it_212=self->head;
    while(    it_212!=((void*)0)) {
        prev_it_213=it_212;
        it_212=it_212->next;
        /*c*/ come_call_finalizer3(prev_it_213,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info, _Bool return_self_at_last){
char* head_214;
_Bool dquort_215;
_Bool squort_216;
int sline_217;
int nest_218;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
char* tail_219;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* buf_220;
void* __right_value152 = (void*)0;
char* __result_obj__93;
    head_214=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_215=(_Bool)0;
        squort_216=(_Bool)0;
        sline_217=0;
        nest_218=0;
        while(        1) {
            if(            dquort_215) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        ((struct tuple2$2int$bool$*)(__right_value142=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_217)));
                        /*c*/ come_call_finalizer3(__right_value142,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_215=!dquort_215;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        ((struct tuple2$2int$bool$*)(__right_value143=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_217)));
                        /*c*/ come_call_finalizer3(__right_value143,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        ((struct tuple2$2int$bool$*)(__right_value144=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_217)));
                        /*c*/ come_call_finalizer3(__right_value144,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            squort_216) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        ((struct tuple2$2int$bool$*)(__right_value145=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_217)));
                        /*c*/ come_call_finalizer3(__right_value145,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_216=!squort_216;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        ((struct tuple2$2int$bool$*)(__right_value146=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_217)));
                        /*c*/ come_call_finalizer3(__right_value146,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        ((struct tuple2$2int$bool$*)(__right_value147=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_217)));
                        /*c*/ come_call_finalizer3(__right_value147,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_217=info->sline;
                info->p++;
                squort_216=!squort_216;
            }
            else if(            *info->p==34) {
                sline_217=info->sline;
                info->p++;
                dquort_215=!dquort_215;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_218++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_218==0) {
                    break;
                }
                nest_218--;
            }
            else if(            *info->p==0) {
                ((struct tuple2$2int$bool$*)(__right_value148=err_msg(info,"The block requires } character for closing block")));
                /*c*/ come_call_finalizer3(__right_value148,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
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
    else {
        ((struct tuple2$2int$bool$*)(__right_value149=err_msg(info,"Require block. This is %c",*info->p)));
        /*c*/ come_call_finalizer3(__right_value149,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(1);
    }
    tail_219=info->p;
    buf_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 683, "struct buffer*"))));
    buffer_append(buf_220,head_214,tail_219-head_214-1);
    if(    return_self_at_last) {
        buffer_append_str(buf_220,"return self; }");
    }
    else {
        buffer_append_str(buf_220,"}");
    }
    skip_spaces_and_lf(info);
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value152=buffer_to_string(buf_220))));
    /*c*/ come_call_finalizer3(buf_220,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__93;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* asm_fun_name_221;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct buffer* result_222;
char* head_223;
int brace_num_224;
char* tail_225;
char* head_226;
int brace_num_227;
char* tail_228;
char* head_229;
char* tail_230;
char* head_231;
char* tail_232;
int len_233;
_Bool in_dquort_234;
int brace_num_235;
char* head_236;
char* tail_237;
char* head_238;
char* tail_239;
char* head_240;
char* tail_241;
char* head_242;
int nest_243;
char* tail_244;
char* head_245;
int nest_246;
char* tail_247;
char* head_248;
int nest_249;
char* tail_250;
char* head_251;
int nest_252;
char* tail_253;
char* head_254;
int nest_255;
char* tail_256;
char* head_257;
char* tail_258;
char* head_259;
char* tail_260;
char* head_261;
char* tail_262;
char* head_263;
char* tail_264;
char* head_265;
char* tail_266;
char* head_267;
int brace_num_268;
char* tail_269;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__95;
    asm_fun_name_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 701, "struct buffer*"))));
    result_222=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 702, "struct buffer*"))));
    while(    (_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_223=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_224=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_224++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_224--;
                        if(                        brace_num_224==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_225=info->p;
            buffer_append(result_222,head_223,tail_225-head_223);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_226=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_227=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_227++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_227--;
                        if(                        brace_num_227==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_228=info->p;
            buffer_append(result_222,head_226,tail_228-head_226);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_229=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_230=info->p;
            buffer_append(result_222,head_229,tail_230-head_229);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_231=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_232=info->p;
            buffer_append(result_222,head_231,tail_232-head_231);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_233=0;
            if(            *info->p==40) {
                in_dquort_234=(_Bool)0;
                brace_num_235=0;
                while(                *info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_234=!in_dquort_234;
                    }
                    else if(                    in_dquort_234) {
                        buffer_append_char(asm_fun_name_221,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_235++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_235--;
                        if(                        brace_num_235==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_236=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_237=info->p;
            buffer_append(result_222,head_236,tail_237-head_236);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_238=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_239=info->p;
            buffer_append(result_222,head_238,tail_239-head_238);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_240=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_241=info->p;
            buffer_append(result_222,head_240,tail_241-head_240);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_242=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_243=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_243++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_243--;
                        if(                        nest_243==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_244=info->p;
            buffer_append(result_222,head_242,tail_244-head_242);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_245=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_246=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_246++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_246--;
                        if(                        nest_246==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_247=info->p;
            buffer_append(result_222,head_245,tail_247-head_245);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_248=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_249=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_249++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_249--;
                        if(                        nest_249==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_250=info->p;
            buffer_append(result_222,head_248,tail_250-head_248);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_251=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_252=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_252++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_252--;
                        if(                        nest_252==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_253=info->p;
            buffer_append(result_222,head_251,tail_253-head_251);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_254=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_255=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_255++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_255--;
                        if(                        nest_255==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_256=info->p;
            buffer_append(result_222,head_254,tail_256-head_254);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_257=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_258=info->p;
            buffer_append(result_222,head_257,tail_258-head_257);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_259=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_260=info->p;
            buffer_append(result_222,head_259,tail_260-head_259);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_261=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_262=info->p;
            buffer_append(result_222,head_261,tail_262-head_261);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_263=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_264=info->p;
            buffer_append(result_222,head_263,tail_264-head_263);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_265=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_266=info->p;
            buffer_append(result_222,head_265,tail_266-head_265);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_267=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_268=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_268++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_268--;
                        if(                        brace_num_268==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_269=info->p;
            buffer_append(result_222,head_267,tail_269-head_267);
        }
        else {
            break;
        }
    }
    __result_obj__95 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value160=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1116, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_221)),(char*)come_increment_ref_count(buffer_to_string(result_222))))));
    /*c*/ come_call_finalizer3(asm_fun_name_221,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_222,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value160,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__95,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__95;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj68;
char* __dec_obj69;
struct tuple2$2char$phchar$ph* __result_obj__94;
    __dec_obj68=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj69=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__94 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__94,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__94;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct buffer* asm_fun_name_270;
void* __right_value163 = (void*)0;
char* attribute_271;
int nest_272;
int nest_273;
int nest_274;
int nest_275;
int nest_276;
void* __right_value164 = (void*)0;
char* __dec_obj70;
int len_277;
_Bool in_dquort_278;
int brace_num_279;
int brace_num_280;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__96;
    asm_fun_name_270=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1121, "struct buffer*"))));
    attribute_271=(char*)come_increment_ref_count(xsprintf(""));
    while(    (_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_272=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_272++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_272--;
                        if(                        nest_272==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_273=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_273++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_273--;
                        if(                        nest_273==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_274=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_274++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_274--;
                        if(                        nest_274==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_275=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_275++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_275--;
                        if(                        nest_275==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_276=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_276++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_276--;
                        if(                        nest_276==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj70=attribute_271,
            attribute_271=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_277=0;
            if(            *info->p==40) {
                in_dquort_278=(_Bool)0;
                brace_num_279=0;
                while(                *info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_278=!in_dquort_278;
                    }
                    else if(                    in_dquort_278) {
                        buffer_append_char(asm_fun_name_270,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_279++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_279--;
                        if(                        brace_num_279==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_280=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_280++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_280--;
                        if(                        brace_num_280==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__96 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value167=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1390, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_270)),(char*)come_increment_ref_count(attribute_271)))));
    /*c*/ come_call_finalizer3(asm_fun_name_270,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute_271 = come_decrement_ref_count(attribute_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value167,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__96,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__96;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value168 = (void*)0;
char* __dec_obj71;
char* head_281;
int head_sline_282;
void* __right_value169 = (void*)0;
char* buf_283;
void* __right_value170 = (void*)0;
struct sNode* node_284;
_Bool Value_285;
    while(    *info->p) {
        __dec_obj71=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1396, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        head_281=info->p;
        head_sline_282=info->sline;
        buf_283=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_283 = come_decrement_ref_count(buf_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_284=(struct sNode*)come_increment_ref_count(top_level_v99(buf_283,head_281,head_sline_282,info));
        parse_sharp_v5(info);
        while(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_284!=((void*)0)) {
            Value_285=node_compile(node_284,info);
            if(            !Value_285) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_283 = come_decrement_ref_count(buf_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_284) ? node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_283 = come_decrement_ref_count(buf_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_284) ? node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value171 = (void*)0;
char* name_286;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct sType* result_type_287;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1sType$ph* param_types_288;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct list$1char$ph* param_names_289;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct list$1char$ph* param_default_parametors_290;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sFun* fun_291;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
char* name_313;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sType* result_type_314;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1sType$ph* param_types_315;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* param_names_316;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct list$1char$ph* param_default_parametors_317;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sFun* fun_318;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
char* name_319;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sType* result_type_320;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sType* __list_values1___321[3];
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1sType$ph* param_types_326;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
char* __list_values2___327[3];
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1char$ph* param_names_329;
char* __list_values3___330[3];
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1char$ph* param_default_parametors_331;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sFun* fun_332;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
char* name_333;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sType* result_type_334;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sType* __list_values4___335[3];
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sType$ph* param_types_336;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __list_values5___337[3];
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1char$ph* param_names_338;
char* __list_values6___339[3];
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1char$ph* param_default_parametors_340;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sFun* fun_341;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* name_342;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sType* result_type_343;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sType* __list_values7___344[3];
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1sType$ph* param_types_345;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
char* __list_values8___346[3];
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1char$ph* param_names_347;
char* __list_values9___348[3];
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1char$ph* param_default_parametors_349;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sFun* fun_350;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
char* name_351;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* result_type_352;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __list_values10___353[3];
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1sType$ph* param_types_354;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* __list_values11___355[3];
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1char$ph* param_names_356;
char* __list_values12___357[3];
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1char$ph* param_default_parametors_358;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sFun* fun_359;
void* __right_value316 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_286=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_287=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1446, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_288=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1447, "struct list$1sType$ph*"))));
        param_names_289=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1448, "struct list$1char$ph*"))));
        param_default_parametors_290=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1449, "struct list$1char$ph*"))));
        fun_291=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1450, "struct sFun*")),(char*)come_increment_ref_count(name_286),(struct sType*)come_increment_ref_count(result_type_287),(struct list$1sType$ph*)come_increment_ref_count(param_types_288),(struct list$1char$ph*)come_increment_ref_count(param_names_289),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_290),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_286)),(struct sFun*)come_increment_ref_count(fun_291));
        (name_286 = come_decrement_ref_count(name_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_287,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_288,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_289,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_290,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_291,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_313=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1459, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_315=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1460, "struct list$1sType$ph*"))));
        param_names_316=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1461, "struct list$1char$ph*"))));
        param_default_parametors_317=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1462, "struct list$1char$ph*"))));
        fun_318=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1463, "struct sFun*")),(char*)come_increment_ref_count(name_313),(struct sType*)come_increment_ref_count(result_type_314),(struct list$1sType$ph*)come_increment_ref_count(param_types_315),(struct list$1char$ph*)come_increment_ref_count(param_names_316),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_317),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_313)),(struct sFun*)come_increment_ref_count(fun_318));
        (name_313 = come_decrement_ref_count(name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_315,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_316,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_317,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_318,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_319=(char*)come_increment_ref_count(__builtin_string("strtol"));
        result_type_320=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1472, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        param_types_326=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___321[0]=((struct sType*)(__right_value212=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1473, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___321[1]=((struct sType*)(__right_value215=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1473, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values1___321[2]=((struct sType*)(__right_value218=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1473, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1473, "struct list$1sType$ph")),3,__list_values1___321)));
        /*c*/ come_call_finalizer3(__right_value212,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value215,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value218,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        param_names_329=(struct list$1char$ph*)come_increment_ref_count((__list_values2___327[0]=((char*)(__right_value224=xsprintf("arg1"))),
__list_values2___327[1]=((char*)(__right_value225=xsprintf("arg2"))),
__list_values2___327[2]=((char*)(__right_value226=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1474, "struct list$1char$ph")),3,__list_values2___327)));
        (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_331=(struct list$1char$ph*)come_increment_ref_count((__list_values3___330[0]=(char*)((void*)0),
__list_values3___330[1]=(char*)((void*)0),
__list_values3___330[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1475, "struct list$1char$ph")),3,__list_values3___330)));
        fun_332=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1476, "struct sFun*")),(char*)come_increment_ref_count(name_319),(struct sType*)come_increment_ref_count(result_type_320),(struct list$1sType$ph*)come_increment_ref_count(param_types_326),(struct list$1char$ph*)come_increment_ref_count(param_names_329),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_331),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_319)),(struct sFun*)come_increment_ref_count(fun_332));
        (name_319 = come_decrement_ref_count(name_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_326,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_329,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_331,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_332,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_333=(char*)come_increment_ref_count(__builtin_string("strtoul"));
        result_type_334=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1485, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_334->mUnsigned=(_Bool)1;
        param_types_336=(struct list$1sType$ph*)come_increment_ref_count((__list_values4___335[0]=((struct sType*)(__right_value242=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1487, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values4___335[1]=((struct sType*)(__right_value245=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1487, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values4___335[2]=((struct sType*)(__right_value248=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1487, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1487, "struct list$1sType$ph")),3,__list_values4___335)));
        /*c*/ come_call_finalizer3(__right_value242,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value245,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value248,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        param_names_338=(struct list$1char$ph*)come_increment_ref_count((__list_values5___337[0]=((char*)(__right_value251=xsprintf("arg1"))),
__list_values5___337[1]=((char*)(__right_value252=xsprintf("arg2"))),
__list_values5___337[2]=((char*)(__right_value253=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1488, "struct list$1char$ph")),3,__list_values5___337)));
        (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_340=(struct list$1char$ph*)come_increment_ref_count((__list_values6___339[0]=(char*)((void*)0),
__list_values6___339[1]=(char*)((void*)0),
__list_values6___339[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1489, "struct list$1char$ph")),3,__list_values6___339)));
        fun_341=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1490, "struct sFun*")),(char*)come_increment_ref_count(name_333),(struct sType*)come_increment_ref_count(result_type_334),(struct list$1sType$ph*)come_increment_ref_count(param_types_336),(struct list$1char$ph*)come_increment_ref_count(param_names_338),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_340),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_333)),(struct sFun*)come_increment_ref_count(fun_341));
        (name_333 = come_decrement_ref_count(name_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_334,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_336,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_338,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_340,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_341,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_342=(char*)come_increment_ref_count(__builtin_string("strtoull"));
        result_type_343=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1499, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_343->mUnsigned=(_Bool)1;
        result_type_343->mLong=(_Bool)1;
        param_types_345=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___344[0]=((struct sType*)(__right_value269=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1502, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values7___344[1]=((struct sType*)(__right_value272=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1502, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values7___344[2]=((struct sType*)(__right_value275=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1502, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1502, "struct list$1sType$ph")),3,__list_values7___344)));
        /*c*/ come_call_finalizer3(__right_value269,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value272,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value275,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        param_names_347=(struct list$1char$ph*)come_increment_ref_count((__list_values8___346[0]=((char*)(__right_value278=xsprintf("arg1"))),
__list_values8___346[1]=((char*)(__right_value279=xsprintf("arg2"))),
__list_values8___346[2]=((char*)(__right_value280=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1503, "struct list$1char$ph")),3,__list_values8___346)));
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_349=(struct list$1char$ph*)come_increment_ref_count((__list_values9___348[0]=(char*)((void*)0),
__list_values9___348[1]=(char*)((void*)0),
__list_values9___348[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1504, "struct list$1char$ph")),3,__list_values9___348)));
        fun_350=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1505, "struct sFun*")),(char*)come_increment_ref_count(name_342),(struct sType*)come_increment_ref_count(result_type_343),(struct list$1sType$ph*)come_increment_ref_count(param_types_345),(struct list$1char$ph*)come_increment_ref_count(param_names_347),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_349),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_342)),(struct sFun*)come_increment_ref_count(fun_350));
        (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_345,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_347,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_349,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_350,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_351=(char*)come_increment_ref_count(__builtin_string("strtoll"));
        result_type_352=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1514, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_352->mLong=(_Bool)1;
        param_types_354=(struct list$1sType$ph*)come_increment_ref_count((__list_values10___353[0]=((struct sType*)(__right_value296=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1516, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values10___353[1]=((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1516, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values10___353[2]=((struct sType*)(__right_value302=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1516, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1516, "struct list$1sType$ph")),3,__list_values10___353)));
        /*c*/ come_call_finalizer3(__right_value296,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value299,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value302,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        param_names_356=(struct list$1char$ph*)come_increment_ref_count((__list_values11___355[0]=((char*)(__right_value305=xsprintf("arg1"))),
__list_values11___355[1]=((char*)(__right_value306=xsprintf("arg2"))),
__list_values11___355[2]=((char*)(__right_value307=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1517, "struct list$1char$ph")),3,__list_values11___355)));
        (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_358=(struct list$1char$ph*)come_increment_ref_count((__list_values12___357[0]=(char*)((void*)0),
__list_values12___357[1]=(char*)((void*)0),
__list_values12___357[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1518, "struct list$1char$ph")),3,__list_values12___357)));
        fun_359=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1519, "struct sFun*")),(char*)come_increment_ref_count(name_351),(struct sType*)come_increment_ref_count(result_type_352),(struct list$1sType$ph*)come_increment_ref_count(param_types_354),(struct list$1char$ph*)come_increment_ref_count(param_names_356),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_358),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_351)),(struct sFun*)come_increment_ref_count(fun_359));
        (name_351 = come_decrement_ref_count(name_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_354,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_356,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_358,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_359,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_309;
unsigned int it_310;
_Bool same_key_exist_311;
char* it2_312;
struct map$2char$phsFun$ph* __result_obj__107;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_309=string_get_hash_key(((char*)key))%self->size;
    it_310=hash_309;
    while(    (_Bool)1) {
        if(        self->item_existance[it_310]) {
            if(            string_equals(self->keys[it_310],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_310]);
                    (self->keys[it_310] = come_decrement_ref_count(self->keys[it_310], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_310]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_310]);
                    self->keys[it_310]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_310],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_310]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_310]=item;
                }
                break;
            }
            it_310++;
            if(            it_310>=self->size) {
                it_310=0;
            }
            else if(            it_310==hash_309) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_310]=(_Bool)1;
            if(            1) {
                self->keys[it_310]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_310]=key;
            }
            if(            1) {
                self->items[it_310]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_310]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_311=(_Bool)0;
    for(    it2_312=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_312=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_312,key)) {
            same_key_exist_311=(_Bool)1;
        }
    }
    if(    !same_key_exist_311) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__107 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__107;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_292;
void* __right_value185 = (void*)0;
char** keys_293;
void* __right_value186 = (void*)0;
struct sFun** items_294;
void* __right_value187 = (void*)0;
_Bool* item_existance_295;
int len_296;
char* it_299;
struct sFun* default_value_302;
void* __right_value188 = (void*)0;
struct sFun* it2_303;
unsigned int hash_306;
int n_307;
struct sFun* default_value_308;
void* __right_value189 = (void*)0;
default_value_302 = (void*)0;
default_value_308 = (void*)0;
    size_292=self->size*10;
    keys_293=(char**)come_increment_ref_count(((char**)(__right_value185=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_292)), "./comelang.h", 2153, "char**"))));
    items_294=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value186=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_292)), "./comelang.h", 2154, "struct sFun**"))));
    item_existance_295=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value187=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_292)), "./comelang.h", 2155, "_Bool*"))));
    len_296=0;
    for(    it_299=map$2char$phsFun$ph_begin(self);    !map$2char$phsFun$ph_end(self);    it_299=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_302,0,sizeof(struct sFun*));
        it2_303=((struct sFun*)(__right_value188=map$2char$phsFun$ph_at(self,it_299,(struct sFun*)come_increment_ref_count(default_value_302))));
        /*c*/ come_call_finalizer3(__right_value188,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_306=string_get_hash_key(((char*)it_299))%size_292;
        n_307=hash_306;
        while(        (_Bool)1) {
            if(            item_existance_295[n_307]) {
                n_307++;
                if(                n_307>=size_292) {
                    n_307=0;
                }
                else if(                n_307==hash_306) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_295[n_307]=(_Bool)1;
                keys_293[n_307]=it_299;
                items_294[n_307]=((struct sFun*)(__right_value189=map$2char$phsFun$ph_at(self,it_299,(struct sFun*)come_increment_ref_count(default_value_308))));
                /*c*/ come_call_finalizer3(__right_value189,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_296++;
                /*c*/ come_call_finalizer3(default_value_308,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_308,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_302,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_293;
    self->items=items_294;
    self->item_existance=item_existance_295;
    self->size=size_292;
    self->len=len_296;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_297;
char* __result_obj__97;
char* __result_obj__98;
char* result_298;
char* __result_obj__99;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_297,0,sizeof(char*));
        __result_obj__97 = result_297;
        return __result_obj__97;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__98 = self->key_list->it->item;
        return __result_obj__98;
    }
    memset(&result_298,0,sizeof(char*));
    __result_obj__99 = result_298;
    return __result_obj__99;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_300;
char* __result_obj__100;
char* __result_obj__101;
char* result_301;
char* __result_obj__102;
result_300 = (void*)0;
result_301 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_300,0,sizeof(char*));
        __result_obj__100 = result_300;
        return __result_obj__100;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__101 = self->key_list->it->item;
        return __result_obj__101;
    }
    memset(&result_301,0,sizeof(char*));
    __result_obj__102 = result_301;
    return __result_obj__102;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_304;
unsigned int it_305;
struct sFun* __result_obj__103;
struct sFun* __result_obj__104;
struct sFun* __result_obj__105;
struct sFun* __result_obj__106;
    hash_304=string_get_hash_key(((char*)key))%self->size;
    it_305=hash_304;
    while(    (_Bool)1) {
        if(        self->item_existance[it_305]) {
            if(            string_equals(self->keys[it_305],key)) {
                __result_obj__103 = (struct sFun*)come_increment_ref_count(self->items[it_305]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__103,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__103;
            }
            it_305++;
            if(            it_305>=self->size) {
                it_305=0;
            }
            else if(            it_305==hash_304) {
                __result_obj__104 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__104,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__104;
            }
        }
        else {
            __result_obj__105 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__105,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__105;
        }
    }
    __result_obj__106 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__106,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__106;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_322;
struct list$1sType$ph* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_322=0;    i_322<num_value;    i_322++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_322]));
    }
    __result_obj__109 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__109,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__109;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value219 = (void*)0;
struct list_item$1sType$ph* litem_323;
struct sType* __dec_obj72;
void* __right_value220 = (void*)0;
struct list_item$1sType$ph* litem_324;
struct sType* __dec_obj73;
void* __right_value221 = (void*)0;
struct list_item$1sType$ph* litem_325;
struct sType* __dec_obj74;
struct list$1sType$ph* __result_obj__108;
    if(    self->len==0) {
        litem_323=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value219=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_323->prev=((void*)0);
        litem_323->next=((void*)0);
        __dec_obj72=litem_323->item,
        litem_323->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_323;
        self->head=litem_323;
    }
    else if(    self->len==1) {
        litem_324=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value220=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_324->prev=self->head;
        litem_324->next=((void*)0);
        __dec_obj73=litem_324->item,
        litem_324->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_324;
        self->head->next=litem_324;
    }
    else {
        litem_325=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value221=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_325->prev=self->tail;
        litem_325->next=((void*)0);
        __dec_obj74=litem_325->item,
        litem_325->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_325;
        self->tail=litem_325;
    }
    self->len++;
    __result_obj__108 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__108;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_328;
struct list$1char$ph* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_328=0;    i_328<num_value;    i_328++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_328]));
    }
    __result_obj__110 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__110,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__110;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_360;
_Bool is_type_name_flag_361;
int sline_362;
_Bool define_struct_nobody_363;
char* p_364;
int sline_365;
void* __right_value317 = (void*)0;
char* word_366;
_Bool uniq_class_367;
char* p_368;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* buf2_369;
_Bool define_function_pointer_result_function_370;
_Bool define_variable_between_brace_371;
char* p_372;
void* __right_value320 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* result_type_373=0;
char* fun_name_374=0;
_Bool err_375=0;
void* __right_value321 = (void*)0;
char* word_376;
_Bool define_function_flag_377;
char* p_378;
void* __right_value322 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type_379=0;
char* fun_name_380=0;
_Bool err_381=0;
char* word_382;
void* __right_value323 = (void*)0;
char* __dec_obj75;
void* __right_value324 = (void*)0;
char* __dec_obj76;
char* __dec_obj77;
void* __right_value325 = (void*)0;
char* __dec_obj78;
_Bool define_variable_383;
char* p_384;
void* __right_value326 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* result_type_385=0;
char* fun_name_386=0;
_Bool err_387=0;
void* __right_value327 = (void*)0;
char* word_388;
void* __right_value328 = (void*)0;
char* word_389;
char* p_390;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* word_391;
void* __right_value332 = (void*)0;
char* __dec_obj79;
void* __right_value333 = (void*)0;
char* buf2_392;
void* __right_value334 = (void*)0;
struct sNode* __result_obj__111;
void* __right_value335 = (void*)0;
char* word_393;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* word_394;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* node_395;
struct sNode* __result_obj__112;
void* __right_value340 = (void*)0;
struct sNode* __result_obj__113;
char* header_head_396;
void* __right_value341 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* result_type_397=0;
char* fun_name_398=0;
_Bool err_399=0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1sType$ph* param_types_400;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1char$ph* param_names_401;
void* __right_value346 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* param_type_402=0;
char* param_name_403=0;
_Bool err_404=0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct list$1sType$ph* param_types2_406;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct list$1char$ph* param_names2_407;
void* __right_value355 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* param_type_408=0;
char* param_name_409=0;
_Bool err_410=0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
char* header_tail_412;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* result_type2_413;
struct sType* __dec_obj80;
void* __right_value363 = (void*)0;
struct list$1sType$ph* __dec_obj81;
void* __right_value364 = (void*)0;
struct list$1char$ph* __dec_obj82;
_Bool var_args_414;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1char$ph* param_default_parametors_415;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sFun* fun_416;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value425 = (void*)0;
struct sNode* result_417;
struct sNode* __result_obj__138;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* node_453;
struct sNode* __result_obj__139;
void* __right_value428 = (void*)0;
struct sNode* node_454;
struct sNode* __result_obj__140;
void* __right_value429 = (void*)0;
struct sNode* node_455;
char* source_tail_456;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct buffer* header_457;
struct sNode* __result_obj__141;
void* __right_value432 = (void*)0;
char* buf2_458;
void* __right_value433 = (void*)0;
struct sNode* __result_obj__142;
    info->in_top_level=(_Bool)1;
    source_head_360=info->p;
    is_type_name_flag_361=is_type_name(buf,info);
    sline_362=info->sline;
    define_struct_nobody_363=(_Bool)0;
    {
        p_364=info->p;
        sline_365=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_366=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_363=(_Bool)1;
                }
                (word_366 = come_decrement_ref_count(word_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_365;
    }
    uniq_class_367=(_Bool)0;
    if(    charp_operator_equals(buf,"uniq")) {
        p_368=info->p;
        info->p=head;
        (void)((char*)(__right_value318=parse_word(info)));
        (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        xisalpha(*info->p)||*info->p==95) {
            buf2_369=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(buf2_369,"class")) {
                uniq_class_367=(_Bool)1;
            }
            (buf2_369 = come_decrement_ref_count(buf2_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_368;
        info->sline=sline_362;
    }
    define_function_pointer_result_function_370=(_Bool)0;
    define_variable_between_brace_371=(_Bool)0;
    if(    is_type_name_flag_361&&!uniq_class_367) {
        p_372=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value320=backtrace_parse_type((_Bool)0,info)));
            result_type_373=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_374=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_375=multiple_assign_var1->v3;
            /*c*/ come_call_finalizer3(__right_value320,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_370=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_376=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_376,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_371=(_Bool)1;
                            }
                        }
                        (word_376 = come_decrement_ref_count(word_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            /*c*/ come_call_finalizer3(result_type_373,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_374 = come_decrement_ref_count(fun_name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_362;
    }
    define_function_flag_377=(_Bool)0;
    if(    is_type_name_flag_361&&!define_function_pointer_result_function_370&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class_367) {
        p_378=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value322=backtrace_parse_type((_Bool)0,info)));
            result_type_379=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_380=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_381=multiple_assign_var2->v3;
            /*c*/ come_call_finalizer3(__right_value322,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_379,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_380 = come_decrement_ref_count(fun_name_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_382=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj75=word_382,
                word_382=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(word_382,"extern")) {
                    __dec_obj76=word_382,
                    word_382=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj77=word_382,
                word_382=((void*)0);
                __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_382) {
                if(                is_type_name(word_382,info)) {
                    while(                    *info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj78=word_382,
                        word_382=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                }
                if(                strlen(word_382)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_361) {
                        define_function_flag_377=(_Bool)1;
                    }
                }
            }
            (word_382 = come_decrement_ref_count(word_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_378;
        info->sline=sline_362;
    }
    define_variable_383=(_Bool)1;
    if(    is_type_name_flag_361&&!define_function_pointer_result_function_370&&!uniq_class_367) {
        p_384=info->p;
        info->p=head;
        if(        !is_type_name_flag_361) {
            define_variable_383=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value326=backtrace_parse_type((_Bool)0,info)));
            result_type_385=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_386=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_387=multiple_assign_var3->v3;
            /*c*/ come_call_finalizer3(__right_value326,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_388=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_383=(_Bool)1;
                            }
                        }
                        (word_388 = come_decrement_ref_count(word_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_389=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_389,info)&&*info->p!=40) {
                            define_variable_383=(_Bool)1;
                        }
                    }
                    (word_389 = come_decrement_ref_count(word_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(result_type_385,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_386 = come_decrement_ref_count(fun_name_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_383=(_Bool)0;
        }
        else if(        define_variable_383) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_383=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_383=(_Bool)0;
            }
        }
        info->p=p_384;
        info->sline=sline_362;
    }
    else {
        define_variable_383=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_370) {
        p_390=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value329=parse_struct_attribute(info)));
            (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value330=parse_word(info)));
                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_391=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj79=word_391,
                        word_391=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_391,"extends")) {
                            define_variable_383=(_Bool)0;
                        }
                    }
                    (word_391 = come_decrement_ref_count(word_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_383=(_Bool)0;
        }
        else if(        define_variable_383) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_383=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_383=(_Bool)0;
            }
        }
        info->p=p_390;
        info->sline=sline_362;
    }
    if(    uniq_class_367) {
        info->p=head;
        info->sline=sline_362;
        buf2_392=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__111 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value334=top_level_v98(buf2_392,head,head_sline,info))));
        (buf2_392 = come_decrement_ref_count(buf2_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value334) ? __right_value334 = come_decrement_ref_count(__right_value334, ((struct sNode*)__right_value334)->finalize, ((struct sNode*)__right_value334)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__111;
        (buf2_392 = come_decrement_ref_count(buf2_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"template")) {
        word_393=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while(            (_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    ((struct tuple2$2int$bool$*)(__right_value336=err_msg(info,"unexpected source end")));
                    /*c*/ come_call_finalizer3(__right_value336,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                else {
                    word_394=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_394, "05function.c", 1841, "char*")));
                    (word_394 = come_decrement_ref_count(word_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_395=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__112 = (struct sNode*)come_increment_ref_count(node_395);
            ((node_395) ? node_395 = come_decrement_ref_count(node_395, ((struct sNode*)node_395)->finalize, ((struct sNode*)node_395)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (word_393 = come_decrement_ref_count(word_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__112) ? __result_obj__112 = come_decrement_ref_count(__result_obj__112, ((struct sNode*)__result_obj__112)->finalize, ((struct sNode*)__result_obj__112)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__112;
            ((node_395) ? node_395 = come_decrement_ref_count(node_395, ((struct sNode*)node_395)->finalize, ((struct sNode*)node_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_393 = come_decrement_ref_count(word_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_363) {
    }
    else if(    define_variable_between_brace_371) {
        info->p=head;
        info->sline=sline_362;
        __result_obj__113 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value340=parse_global_variable(info))));
        ((__right_value340) ? __right_value340 = come_decrement_ref_count(__right_value340, ((struct sNode*)__right_value340)->finalize, ((struct sNode*)__right_value340)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__113) ? __result_obj__113 = come_decrement_ref_count(__result_obj__113, ((struct sNode*)__result_obj__113)->finalize, ((struct sNode*)__result_obj__113)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__113;
    }
    else if(    define_function_pointer_result_function_370) {
        header_head_396=info->p;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value341=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_397=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_398=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_399=multiple_assign_var4->v3;
        /*c*/ come_call_finalizer3(__right_value341,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_400=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1870, "struct list$1sType$ph*"))));
            param_names_401=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1871, "struct list$1char$ph*"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(                (_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value346=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_402=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_403=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_404=multiple_assign_var5->v3;
                    /*c*/ come_call_finalizer3(__right_value346,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_404) {
                        ((struct tuple2$2int$bool$*)(__right_value347=err_msg(info,"parse_type is failed")));
                        /*c*/ come_call_finalizer3(__right_value347,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types_400,(struct sType*)come_increment_ref_count(param_type_402));
                    static int num_function_pointer_result_var_name_a_405=0;
                    list$1char$ph_push_back(param_names_401,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_405)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value349=parse_word(info)));
                        (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*c*/ come_call_finalizer3(param_type_402,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_403 = come_decrement_ref_count(param_name_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value350=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        /*c*/ come_call_finalizer3(__right_value350,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                    /*c*/ come_call_finalizer3(param_type_402,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_403 = come_decrement_ref_count(param_name_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_406=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1917, "struct list$1sType$ph*"))));
                param_names2_407=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1918, "struct list$1char$ph*"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while(                    (_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value355=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_408=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_409=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_410=multiple_assign_var6->v3;
                        /*c*/ come_call_finalizer3(__right_value355,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        !err_410) {
                            ((struct tuple2$2int$bool$*)(__right_value356=err_msg(info,"parse_type is failed")));
                            /*c*/ come_call_finalizer3(__right_value356,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2_406,(struct sType*)come_increment_ref_count(param_type_408));
                        static int num_function_pointer_result_var_name_b_411=0;
                        list$1char$ph_push_back(param_names2_407,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_411)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value358=parse_word(info)));
                            (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*c*/ come_call_finalizer3(param_type_408,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (param_name_409 = come_decrement_ref_count(param_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value359=err_msg(info,"require , or ) (2)")));
                            /*c*/ come_call_finalizer3(__right_value359,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                        }
                        /*c*/ come_call_finalizer3(param_type_408,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_409 = come_decrement_ref_count(param_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_412=info->p;
                result_type2_413=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1960, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj80=result_type2_413->mResultType,
                result_type2_413->mResultType=(struct sType*)come_increment_ref_count(result_type_397);
                /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj81=result_type2_413->mParamTypes,
                result_type2_413->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2_406));
                /*b*/ come_call_finalizer3(__dec_obj81,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj82=result_type2_413->mParamNames,
                result_type2_413->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2_407));
                /*b*/ come_call_finalizer3(__dec_obj82,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_413->mVarArgs=(_Bool)0;
                result_type2_413->mStatic=(_Bool)0;
                var_args_414=(_Bool)0;
                param_default_parametors_415=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1970, "struct list$1char$ph*"))));
                fun_416=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1972, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_398)),(struct sType*)come_increment_ref_count(result_type2_413),(struct list$1sType$ph*)come_increment_ref_count(param_types_400),(struct list$1char$ph*)come_increment_ref_count(param_names_401),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_415),(_Bool)1,var_args_414,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_398)),(struct sFun*)come_increment_ref_count(fun_416));
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1984, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value374=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 1984, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_416),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_417=(struct sNode*)come_increment_ref_count(_inf_value2);
                /*c*/ come_call_finalizer3(__right_value374,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__138 = (struct sNode*)come_increment_ref_count(result_417);
                /*c*/ come_call_finalizer3(param_types2_406,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_407,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_413,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_415,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_416,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_417) ? result_417 = come_decrement_ref_count(result_417, ((struct sNode*)result_417)->finalize, ((struct sNode*)result_417)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(param_types_400,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_401,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_398 = come_decrement_ref_count(fun_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__138) ? __result_obj__138 = come_decrement_ref_count(__result_obj__138, ((struct sNode*)__result_obj__138)->finalize, ((struct sNode*)__result_obj__138)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__138;
                /*c*/ come_call_finalizer3(param_types2_406,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_407,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_413,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_415,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_416,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_417) ? result_417 = come_decrement_ref_count(result_417, ((struct sNode*)result_417)->finalize, ((struct sNode*)result_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value426=err_msg(info,"require (")));
                /*c*/ come_call_finalizer3(__right_value426,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            /*c*/ come_call_finalizer3(param_types_400,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_401,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(result_type_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_398 = come_decrement_ref_count(fun_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_362;
        node_453=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__139 = (struct sNode*)come_increment_ref_count(node_453);
        ((node_453) ? node_453 = come_decrement_ref_count(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__139;
        ((node_453) ? node_453 = come_decrement_ref_count(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_377) {
        info->p=head;
        info->sline=sline_362;
        node_454=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__140 = (struct sNode*)come_increment_ref_count(node_454);
        ((node_454) ? node_454 = come_decrement_ref_count(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__140;
        ((node_454) ? node_454 = come_decrement_ref_count(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_383) {
        info->p=head;
        info->sline=sline_362;
        node_455=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_456=info->p;
        header_457=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2018, "struct buffer*"))));
        buffer_append(header_457,source_head_360,source_tail_456-source_head_360);
        __result_obj__141 = (struct sNode*)come_increment_ref_count(node_455);
        ((node_455) ? node_455 = come_decrement_ref_count(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_457,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__141;
        ((node_455) ? node_455 = come_decrement_ref_count(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_457,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->p=head;
    info->sline=sline_362;
    buf2_458=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__142 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value433=top_level_v98(buf2_458,head,head_sline,info))));
    (buf2_458 = come_decrement_ref_count(buf2_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value433) ? __right_value433 = come_decrement_ref_count(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__142;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__114;
void* __right_value375 = (void*)0;
struct sFunNode* result_418;
void* __right_value376 = (void*)0;
char* __dec_obj83;
void* __right_value424 = (void*)0;
struct sFun* __dec_obj108;
struct sFunNode* __result_obj__137;
    if(    self==(void*)0) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result_418=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)) {
        result_418->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj83=result_418->sname,
        result_418->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_418->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj108=result_418->mFun,
        result_418->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        /*b*/ come_call_finalizer3(__dec_obj108,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__137 = result_418;
    /*c*/ come_call_finalizer3(result_418,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__137;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__115;
void* __right_value377 = (void*)0;
struct sFun* result_419;
void* __right_value378 = (void*)0;
char* __dec_obj84;
void* __right_value379 = (void*)0;
struct sType* __dec_obj85;
void* __right_value380 = (void*)0;
struct list$1sType$ph* __dec_obj86;
void* __right_value381 = (void*)0;
struct list$1char$ph* __dec_obj87;
void* __right_value382 = (void*)0;
struct list$1char$ph* __dec_obj88;
void* __right_value383 = (void*)0;
struct sType* __dec_obj89;
void* __right_value415 = (void*)0;
struct sBlock* __dec_obj99;
void* __right_value416 = (void*)0;
char* __dec_obj100;
void* __right_value417 = (void*)0;
char* __dec_obj101;
void* __right_value418 = (void*)0;
struct buffer* __dec_obj102;
void* __right_value419 = (void*)0;
struct buffer* __dec_obj103;
void* __right_value420 = (void*)0;
struct buffer* __dec_obj104;
void* __right_value421 = (void*)0;
struct buffer* __dec_obj105;
void* __right_value422 = (void*)0;
char* __dec_obj106;
void* __right_value423 = (void*)0;
char* __dec_obj107;
struct sFun* __result_obj__136;
    if(    self==(void*)0) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__115,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__115;
    }
    result_419=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj84=result_419->mName,
        result_419->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj85=result_419->mResultType,
        result_419->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj86=result_419->mParamTypes,
        result_419->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj86,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj87=result_419->mParamNames,
        result_419->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj87,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj88=result_419->mParamDefaultParametors,
        result_419->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        /*b*/ come_call_finalizer3(__dec_obj88,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj89=result_419->mLambdaType,
        result_419->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj99=result_419->mBlock,
        result_419->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj99,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        __dec_obj100=result_419->mTextBlock,
        result_419->mTextBlock=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlock, "sFun_clone", 11, "char*"));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        __dec_obj101=result_419->mTextBlockSName,
        result_419->mTextBlockSName=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlockSName, "sFun_clone", 12, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mTextBlockSline=self->mTextBlockSline;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj102=result_419->mSource,
        result_419->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        /*b*/ come_call_finalizer3(__dec_obj102,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj103=result_419->mSourceHead,
        result_419->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        /*b*/ come_call_finalizer3(__dec_obj103,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj104=result_419->mSourceHead2,
        result_419->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        /*b*/ come_call_finalizer3(__dec_obj104,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj105=result_419->mSourceDefer,
        result_419->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        /*b*/ come_call_finalizer3(__dec_obj105,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_419->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_419->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_419->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_419->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_419->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_419->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_419->mConstFun=self->mConstFun;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj106=result_419->mAttribute,
        result_419->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 26, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj107=result_419->mFunAttribute,
        result_419->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 27, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mGenericsFun=self->mGenericsFun;
    }
    if(    self!=((void*)0)) {
        result_419->mImmutable=self->mImmutable;
    }
    __result_obj__136 = (struct sFun*)come_increment_ref_count(result_419);
    /*c*/ come_call_finalizer3(result_419,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__136,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__136;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__116;
void* __right_value384 = (void*)0;
struct sBlock* result_420;
void* __right_value385 = (void*)0;
struct list$1sNode$ph* __dec_obj90;
void* __right_value414 = (void*)0;
struct sVarTable* __dec_obj98;
struct sBlock* __result_obj__135;
    if(    self==(void*)0) {
        __result_obj__116 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__116,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__116;
    }
    result_420=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj90=result_420->mNodes,
        result_420->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj90,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj98=result_420->mVarTable,
        result_420->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj98,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__135 = (struct sBlock*)come_increment_ref_count(result_420);
    /*c*/ come_call_finalizer3(result_420,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__135,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__135;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__117;
void* __right_value386 = (void*)0;
struct sVarTable* result_421;
void* __right_value413 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj97;
struct sVarTable* __result_obj__134;
    if(    self==(void*)0) {
        __result_obj__117 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__117,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__117;
    }
    result_421=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj97=result_421->mVars,
        result_421->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj97,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_421->mParent=self->mParent;
    }
    __result_obj__134 = (struct sVarTable*)come_increment_ref_count(result_421);
    /*c*/ come_call_finalizer3(result_421,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__134,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__134;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__118;
void* __right_value387 = (void*)0;
void* __right_value393 = (void*)0;
struct map$2char$phsVar$ph* result_425;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct list$1char$ph* __dec_obj92;
char* it_428;
struct sVar* default_value_431;
void* __right_value396 = (void*)0;
struct sVar* it2_434;
void* __right_value402 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__133;
default_value_431 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__118 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__118,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__118;
    }
    result_425=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1985, "struct map$2char$phsVar$ph*"))));
    __dec_obj92=result_425->key_list,
    result_425->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1987, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj92,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_428=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_428=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_431,0,sizeof(struct sVar*));
        it2_434=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_428,(struct sVar*)come_increment_ref_count(default_value_431)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_425,(char*)come_increment_ref_count((char*)come_memdup(it_428, "./comelang.h", 1996, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_434)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_425,(char*)come_increment_ref_count((char*)come_memdup(it_428, "./comelang.h", 1999, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_434)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_425,(char*)come_increment_ref_count(it_428),(struct sVar*)come_increment_ref_count(sVar_clone(it2_434)));
        }
        else {
            map$2char$phsVar$ph_put(result_425,(char*)come_increment_ref_count(it_428),(struct sVar*)come_increment_ref_count(sVar_clone(it2_434)));
        }
        /*c*/ come_call_finalizer3(default_value_431,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_434,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__133 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_425);
    /*c*/ come_call_finalizer3(result_425,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__133,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__133;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_422;
int i_423;
    for(    i_422=0;    i_422<self->size;    i_422++    ){
        if(        self->item_existance[i_422]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_422],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_423=0;    i_423<self->size;    i_423++    ){
        if(        self->item_existance[i_423]) {
            if(            1) {
                (self->keys[i_423] = come_decrement_ref_count(self->keys[i_423], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
int i_424;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1char$ph* __dec_obj91;
struct map$2char$phsVar$ph* __result_obj__119;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value388=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value389=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1915, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value390=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_424=0;    i_424<128;    i_424++    ){
        self->item_existance[i_424]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj91=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj91,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__119 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__119,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__119;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_426;
char* __result_obj__120;
char* __result_obj__121;
char* result_427;
char* __result_obj__122;
result_426 = (void*)0;
result_427 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_426,0,sizeof(char*));
        __result_obj__120 = result_426;
        return __result_obj__120;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__121 = self->key_list->it->item;
        return __result_obj__121;
    }
    memset(&result_427,0,sizeof(char*));
    __result_obj__122 = result_427;
    return __result_obj__122;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_429;
char* __result_obj__123;
char* __result_obj__124;
char* result_430;
char* __result_obj__125;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_429,0,sizeof(char*));
        __result_obj__123 = result_429;
        return __result_obj__123;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__124 = self->key_list->it->item;
        return __result_obj__124;
    }
    memset(&result_430,0,sizeof(char*));
    __result_obj__125 = result_430;
    return __result_obj__125;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_432;
unsigned int it_433;
struct sVar* __result_obj__126;
struct sVar* __result_obj__127;
struct sVar* __result_obj__128;
struct sVar* __result_obj__129;
    hash_432=string_get_hash_key(((char*)key))%self->size;
    it_433=hash_432;
    while(    (_Bool)1) {
        if(        self->item_existance[it_433]) {
            if(            string_equals(self->keys[it_433],key)) {
                __result_obj__126 = (struct sVar*)come_increment_ref_count(self->items[it_433]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__126,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__126;
            }
            it_433++;
            if(            it_433>=self->size) {
                it_433=0;
            }
            else if(            it_433==hash_432) {
                __result_obj__127 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__127,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__127;
            }
        }
        else {
            __result_obj__128 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__128,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__128;
        }
    }
    __result_obj__129 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__129,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__129;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_446;
int it_447;
_Bool same_key_exist_448;
char* it2_449;
struct map$2char$phsVar$ph* __result_obj__130;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_446=string_get_hash_key(((char*)key))%self->size;
    it_447=hash_446;
    while(    (_Bool)1) {
        if(        self->item_existance[it_447]) {
            if(            string_equals(self->keys[it_447],key)) {
                if(                1) {
                    (self->keys[it_447] = come_decrement_ref_count(self->keys[it_447], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_447]);
                    self->keys[it_447]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_447]);
                    self->keys[it_447]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_447],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_447]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_447]=item;
                }
                break;
            }
            it_447++;
            if(            it_447>=self->size) {
                it_447=0;
            }
            else if(            it_447==hash_446) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_447]=(_Bool)1;
            if(            1) {
                self->keys[it_447]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_447]=key;
            }
            if(            1) {
                self->items[it_447]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_447]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_448=(_Bool)0;
    for(    it2_449=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_449=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_449,key)) {
            same_key_exist_448=(_Bool)1;
        }
    }
    if(    !same_key_exist_448) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__130 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__130;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_435;
void* __right_value397 = (void*)0;
char** keys_436;
void* __right_value398 = (void*)0;
struct sVar** items_437;
void* __right_value399 = (void*)0;
_Bool* item_existance_438;
int len_439;
char* it_440;
struct sVar* default_value_441;
void* __right_value400 = (void*)0;
struct sVar* it2_442;
unsigned int hash_443;
int n_444;
struct sVar* default_value_445;
void* __right_value401 = (void*)0;
default_value_441 = (void*)0;
default_value_445 = (void*)0;
    size_435=self->size*10;
    keys_436=(char**)come_increment_ref_count(((char**)(__right_value397=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_435)), "./comelang.h", 2153, "char**"))));
    items_437=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value398=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_435)), "./comelang.h", 2154, "struct sVar**"))));
    item_existance_438=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value399=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_435)), "./comelang.h", 2155, "_Bool*"))));
    len_439=0;
    for(    it_440=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_440=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_441,0,sizeof(struct sVar*));
        it2_442=((struct sVar*)(__right_value400=map$2char$phsVar$ph_at(self,it_440,(struct sVar*)come_increment_ref_count(default_value_441))));
        /*c*/ come_call_finalizer3(__right_value400,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_443=string_get_hash_key(((char*)it_440))%size_435;
        n_444=hash_443;
        while(        (_Bool)1) {
            if(            item_existance_438[n_444]) {
                n_444++;
                if(                n_444>=size_435) {
                    n_444=0;
                }
                else if(                n_444==hash_443) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_438[n_444]=(_Bool)1;
                keys_436[n_444]=it_440;
                items_437[n_444]=((struct sVar*)(__right_value401=map$2char$phsVar$ph_at(self,it_440,(struct sVar*)come_increment_ref_count(default_value_445))));
                /*c*/ come_call_finalizer3(__right_value401,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_439++;
                /*c*/ come_call_finalizer3(default_value_445,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_445,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_441,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_436;
    self->items=items_437;
    self->item_existance=item_existance_438;
    self->size=size_435;
    self->len=len_439;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__131;
void* __right_value403 = (void*)0;
struct sVar* result_450;
void* __right_value404 = (void*)0;
char* __dec_obj93;
void* __right_value405 = (void*)0;
char* __dec_obj94;
void* __right_value406 = (void*)0;
struct sType* __dec_obj95;
void* __right_value407 = (void*)0;
char* __dec_obj96;
struct sVar* __result_obj__132;
    if(    self==(void*)0) {
        __result_obj__131 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__131,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__131;
    }
    result_450=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj93=result_450->mName,
        result_450->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj94=result_450->mCValueName,
        result_450->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj95=result_450->mType,
        result_450->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_450->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_450->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_450->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_450->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj96=result_450->mFunName,
        result_450->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__132 = (struct sVar*)come_increment_ref_count(result_450);
    /*c*/ come_call_finalizer3(result_450,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__132,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__132;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_451;
int i_452;
    for(    i_451=0;    i_451<self->size;    i_451++    ){
        if(        self->item_existance[i_451]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_451],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_452=0;    i_452<self->size;    i_452++    ){
        if(        self->item_existance[i_452]) {
            if(            1) {
                (self->keys[i_452] = come_decrement_ref_count(self->keys[i_452], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_459;
int caller_line_460;
char* caller_sname_461;
_Bool comma_instead_of_semicolon_462;
_Bool without_semicolon_463;
char* last_code_464;
char* __dec_obj109;
char* last_code2_465;
char* __dec_obj110;
void* __right_value434 = (void*)0;
char* sname_top_466;
int sline_top_467;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sFun* funX_468;
void* __right_value438 = (void*)0;
char* __dec_obj111;
char* __dec_obj112;
char* __dec_obj113;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__152;
void* __right_value441 = (void*)0;
struct sType* result_type_475;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sType$ph* param_types_476;
struct list$1sType$ph* _foreach_var_name5_477;
struct sType* it_480;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* param_type_483;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1char$ph* param_names_484;
void* __right_value448 = (void*)0;
struct list$1char$ph* param_default_parametors_485;
char* p_486;
int sline_487;
char* sname_488;
char* head_489;
struct buffer* source_490;
void* __right_value449 = (void*)0;
struct buffer* __dec_obj115;
struct sType* generics_type_saved_491;
void* __right_value450 = (void*)0;
struct sType* __dec_obj116;
struct list$1char$ph* method_generics_type_names_492;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1char$ph* __dec_obj117;
struct list$1char$ph* _foreach_var_name6_493;
char* it_494;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1char$ph* __dec_obj118;
char* __dec_obj119;
void* __right_value455 = (void*)0;
struct sBlock* block_495;
struct buffer* __dec_obj120;
char* __dec_obj121;
_Bool const_fun_496;
_Bool var_args_497;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sFun* fun_498;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value463 = (void*)0;
struct sNode* node_499;
_Bool in_generics_fun_500;
_Bool Value_501;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__159;
struct sType* __dec_obj122;
struct list$1char$ph* __dec_obj123;
void* __right_value467 = (void*)0;
char* __dec_obj124;
char* __dec_obj125;
char* __dec_obj126;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__160;
    caller_fun_459=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_460=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_461=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_462=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_463=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_464=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj109=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_465=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj110=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_466=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_467=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_468=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value436=__builtin_string(fun_name)))));
    (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value436 = come_decrement_ref_count(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_468) {
        __dec_obj111=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_466));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_top_467;
        __dec_obj112=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_464);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj113=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_465);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->caller_fun=caller_fun_459;
        info->caller_line=caller_line_460;
        info->caller_sname=caller_sname_461;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_462;
        info->without_semicolon=without_semicolon_463;
        __result_obj__152 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value440=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2070, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_464 = come_decrement_ref_count(last_code_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_465 = come_decrement_ref_count(last_code2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_466 = come_decrement_ref_count(sname_top_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_468,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value440,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__152,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__152;
    }
    result_type_475=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_476=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2075, "struct list$1sType$ph*"))));
    for(    _foreach_var_name5_477=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),    it_480=list$1sType$ph_begin(_foreach_var_name5_477);    !list$1sType$ph_end(_foreach_var_name5_477);    it_480=list$1sType$ph_next(_foreach_var_name5_477)    ){
        param_type_483=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value444=sType_clone(it_480))),generics_type,info));
        /*c*/ come_call_finalizer3(__right_value444,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_476,(struct sType*)come_increment_ref_count(sType_clone(param_type_483)));
        /*c*/ come_call_finalizer3(param_type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(_foreach_var_name5_477,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_484=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_485=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_486=info->p;
    sline_487=info->sline;
    sname_488=(char*)come_increment_ref_count(info->sname);
    head_489=info->head;
    source_490=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj115=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj115,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_491=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj116=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_492=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj117=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2103, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj117,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    _foreach_var_name6_493=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames),    it_494=list$1char$ph_begin(_foreach_var_name6_493);    !list$1char$ph_end(_foreach_var_name6_493);    it_494=list$1char$ph_next(_foreach_var_name6_493)    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_494, "05function.c", 2105, "char*")));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name6_493,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj118=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj118,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj119=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_495=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_489;
    __dec_obj120=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_490);
    /*b*/ come_call_finalizer3(__dec_obj120,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_486;
    info->sline=sline_487;
    __dec_obj121=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_488);
    __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_475->mInline=(_Bool)0;
    result_type_475->mStatic=(_Bool)0;
    result_type_475->mUniq=(_Bool)0;
    const_fun_496=generics_fun->mConstFun;
    var_args_497=generics_fun->mVarArgs;
    fun_498=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2129, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_475),(struct list$1sType$ph*)come_increment_ref_count(param_types_476),(struct list$1char$ph*)come_increment_ref_count(param_names_484),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_485),(_Bool)0,var_args_497,(struct sBlock*)come_increment_ref_count(block_495),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_496,((void*)0),((void*)0),0,(_Bool)0));
    fun_498->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_498));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2138, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value462=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2138, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_498),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_499=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value462,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    in_generics_fun_500=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_501=node_compile(node_499,info);
    if(    !Value_501) {
        __result_obj__159 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value466=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2143, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_464 = come_decrement_ref_count(last_code_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_465 = come_decrement_ref_count(last_code2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_466 = come_decrement_ref_count(sname_top_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_468,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_476,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_484,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_485,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_488 = come_decrement_ref_count(sname_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_490,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type_saved_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_492,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_495,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_498,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_499) ? node_499 = come_decrement_ref_count(node_499, ((struct sNode*)node_499)->finalize, ((struct sNode*)node_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value466,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__159,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__159;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_500;
    __dec_obj122=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_491);
    /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj123=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_492);
    /*b*/ come_call_finalizer3(__dec_obj123,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj124=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_466));
    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_467;
    __dec_obj125=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_464);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj126=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_465);
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_459;
    info->caller_line=caller_line_460;
    info->caller_sname=caller_sname_461;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_462;
    info->without_semicolon=without_semicolon_463;
    __result_obj__160 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value470=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2164, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_464 = come_decrement_ref_count(last_code_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_465 = come_decrement_ref_count(last_code2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_466 = come_decrement_ref_count(sname_top_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(funX_468,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_476,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_484,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_485,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_488 = come_decrement_ref_count(sname_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_490,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(generics_type_saved_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_492,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_495,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_498,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_499) ? node_499 = come_decrement_ref_count(node_499, ((struct sNode*)node_499)->finalize, ((struct sNode*)node_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value470,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__160,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__160;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_469;
unsigned int hash_470;
unsigned int it_471;
struct sFun* __result_obj__143;
struct sFun* __result_obj__144;
struct sFun* __result_obj__145;
struct sFun* __result_obj__146;
default_value_469 = (void*)0;
    memset(&default_value_469,0,sizeof(struct sFun*));
    hash_470=string_get_hash_key(((char*)key))%self->size;
    it_471=hash_470;
    while(    (_Bool)1) {
        if(        self->item_existance[it_471]) {
            if(            string_equals(self->keys[it_471],key)) {
                __result_obj__143 = (struct sFun*)come_increment_ref_count(self->items[it_471]);
                /*c*/ come_call_finalizer3(default_value_469,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__143,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__143;
            }
            it_471++;
            if(            it_471>=self->size) {
                it_471=0;
            }
            else if(            it_471==hash_470) {
                __result_obj__144 = (struct sFun*)come_increment_ref_count(default_value_469);
                /*c*/ come_call_finalizer3(default_value_469,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__144,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__144;
            }
        }
        else {
            __result_obj__145 = (struct sFun*)come_increment_ref_count(default_value_469);
            /*c*/ come_call_finalizer3(default_value_469,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__145,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__145;
        }
    }
    __result_obj__146 = (struct sFun*)come_increment_ref_count(default_value_469);
    /*c*/ come_call_finalizer3(default_value_469,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__146,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__146;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_472;
unsigned int hash_473;
unsigned int it_474;
struct sFun* __result_obj__147;
struct sFun* __result_obj__148;
struct sFun* __result_obj__149;
struct sFun* __result_obj__150;
default_value_472 = (void*)0;
    memset(&default_value_472,0,sizeof(struct sFun*));
    hash_473=string_get_hash_key(((char*)key))%self->size;
    it_474=hash_473;
    while(    (_Bool)1) {
        if(        self->item_existance[it_474]) {
            if(            string_equals(self->keys[it_474],key)) {
                __result_obj__147 = (struct sFun*)come_increment_ref_count(self->items[it_474]);
                /*c*/ come_call_finalizer3(default_value_472,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__147,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__147;
            }
            it_474++;
            if(            it_474>=self->size) {
                it_474=0;
            }
            else if(            it_474==hash_473) {
                __result_obj__148 = (struct sFun*)come_increment_ref_count(default_value_472);
                /*c*/ come_call_finalizer3(default_value_472,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__148,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__148;
            }
        }
        else {
            __result_obj__149 = (struct sFun*)come_increment_ref_count(default_value_472);
            /*c*/ come_call_finalizer3(default_value_472,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__149,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__149;
        }
    }
    __result_obj__150 = (struct sFun*)come_increment_ref_count(default_value_472);
    /*c*/ come_call_finalizer3(default_value_472,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__150,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__150;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj114;
struct tuple2$2char$phbool$* __result_obj__151;
    __dec_obj114=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__151 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__151,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__151;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_478;
struct sType* __result_obj__153;
struct sType* __result_obj__154;
struct sType* result_479;
struct sType* __result_obj__155;
result_478 = (void*)0;
result_479 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_478,0,sizeof(struct sType*));
        __result_obj__153 = result_478;
        return __result_obj__153;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__154 = self->it->item;
        return __result_obj__154;
    }
    memset(&result_479,0,sizeof(struct sType*));
    __result_obj__155 = result_479;
    return __result_obj__155;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_481;
struct sType* __result_obj__156;
struct sType* __result_obj__157;
struct sType* result_482;
struct sType* __result_obj__158;
result_481 = (void*)0;
result_482 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_481,0,sizeof(struct sType*));
        __result_obj__156 = result_481;
        return __result_obj__156;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__157 = self->it->item;
        return __result_obj__157;
    }
    memset(&result_482,0,sizeof(struct sType*));
    __result_obj__158 = result_482;
    return __result_obj__158;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_502;
int caller_line_503;
char* caller_sname_504;
_Bool comma_instead_of_semicolon_505;
_Bool without_semicolon_506;
char* last_code_507;
char* __dec_obj127;
char* last_code2_508;
char* __dec_obj128;
void* __right_value471 = (void*)0;
char* sname_top_509;
int sline_top_510;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sFun* funX_511;
void* __right_value475 = (void*)0;
char* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
_Bool __result_obj__161;
void* __right_value476 = (void*)0;
struct sType* result_type_512;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1sType$ph* param_types_513;
struct list$1sType$ph* _foreach_var_name7_514;
struct sType* it_515;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* param_type_516;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1char$ph* param_names_517;
void* __right_value483 = (void*)0;
struct list$1char$ph* param_default_parametors_518;
char* p_519;
int sline_520;
char* sname_521;
char* head_522;
struct buffer* source_523;
void* __right_value484 = (void*)0;
struct buffer* __dec_obj132;
struct list$1char$ph* method_generics_type_names_524;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1char$ph* __dec_obj133;
struct list$1char$ph* _foreach_var_name8_525;
char* it_526;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1char$ph* __dec_obj134;
char* __dec_obj135;
void* __right_value489 = (void*)0;
struct sBlock* block_527;
struct buffer* __dec_obj136;
char* __dec_obj137;
_Bool var_args_528;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sFun* fun_529;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value498 = (void*)0;
struct sNode* node_530;
_Bool Value_531;
void* __if_result__1_532 = (void*)0;
_Bool __result_obj__162;
struct list$1char$ph* __dec_obj138;
void* __right_value499 = (void*)0;
char* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
_Bool __result_obj__163;
    caller_fun_502=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_503=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_504=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_505=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_506=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_507=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj127=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_508=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj128=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_509=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_510=info->sline;
    funX_511=((struct sFun*)(__right_value474=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value473=__builtin_string(fun_name))))));
    (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value474,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    funX_511) {
        __dec_obj129=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_509));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_top_510;
        __dec_obj130=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_507);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj131=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_508);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->caller_fun=caller_fun_502;
        info->caller_line=caller_line_503;
        info->caller_sname=caller_sname_504;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_505;
        info->without_semicolon=without_semicolon_506;
        __result_obj__161 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_507 = come_decrement_ref_count(last_code_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_508 = come_decrement_ref_count(last_code2_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_509 = come_decrement_ref_count(sname_top_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__161;
    }
    result_type_512=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_513=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2206, "struct list$1sType$ph*"))));
    for(    _foreach_var_name7_514=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),    it_515=list$1sType$ph_begin(_foreach_var_name7_514);    !list$1sType$ph_end(_foreach_var_name7_514);    it_515=list$1sType$ph_next(_foreach_var_name7_514)    ){
        param_type_516=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value479=sType_clone(it_515))),info));
        /*c*/ come_call_finalizer3(__right_value479,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_513,(struct sType*)come_increment_ref_count(sType_clone(param_type_516)));
        /*c*/ come_call_finalizer3(param_type_516,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(_foreach_var_name7_514,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_517=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_518=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_519=info->p;
    sline_520=info->sline;
    sname_521=(char*)come_increment_ref_count(info->sname);
    head_522=info->head;
    source_523=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj132=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj132,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_524=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj133=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2228, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj133,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    _foreach_var_name8_525=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames),    it_526=list$1char$ph_begin(_foreach_var_name8_525);    !list$1char$ph_end(_foreach_var_name8_525);    it_526=list$1char$ph_next(_foreach_var_name8_525)    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_526, "05function.c", 2230, "char*")));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name8_525,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj134=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj134,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj135=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_527=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_522;
    __dec_obj136=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_523);
    /*b*/ come_call_finalizer3(__dec_obj136,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_519;
    info->sline=sline_520;
    __dec_obj137=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_521);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_512->mInline=(_Bool)0;
    result_type_512->mStatic=(_Bool)0;
    result_type_512->mUniq=(_Bool)0;
    var_args_528=generics_fun->mVarArgs;
    fun_529=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2252, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_512),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_513)),(struct list$1char$ph*)come_increment_ref_count(param_names_517),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_518),(_Bool)0,var_args_528,(struct sBlock*)come_increment_ref_count(block_527),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
    fun_529->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_529));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2260, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value497=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2260, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_529),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_530=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value497,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_531=node_compile(node_530,info);
    if(    !Value_531) {
        __result_obj__162 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_507 = come_decrement_ref_count(last_code_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_508 = come_decrement_ref_count(last_code2_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_509 = come_decrement_ref_count(sname_top_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_512,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_517,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_518,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_521 = come_decrement_ref_count(sname_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_523,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_524,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_527,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_529,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_530) ? node_530 = come_decrement_ref_count(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__162;
    }
    else {
        __if_result__1_532=(void*)(Value_531);
;
    }
    __dec_obj138=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_524);
    /*b*/ come_call_finalizer3(__dec_obj138,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj139=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_509));
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_510;
    __dec_obj140=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_507);
    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj141=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_508);
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_502;
    info->caller_line=caller_line_503;
    info->caller_sname=caller_sname_504;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_505;
    __result_obj__163 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_507 = come_decrement_ref_count(last_code_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_508 = come_decrement_ref_count(last_code2_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_509 = come_decrement_ref_count(sname_top_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_512,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_517,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_518,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_521 = come_decrement_ref_count(sname_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_523,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_524,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_527,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_529,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_530) ? node_530 = come_decrement_ref_count(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__163;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_533;
char* source_head_534;
void* __right_value500 = (void*)0;
char* attribute_535;
struct sType* result_type_536;
char* var_name_537;
_Bool constructor__538;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj142;
void* __right_value503 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* result_type2_539=0;
char* var_name2_540=0;
_Bool err_541=0;
struct sType* __dec_obj143;
char* __dec_obj144;
_Bool method_definition_542;
char* p_543;
int sline_544;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct buffer* buf2_545;
char* fun_name_546;
char* base_fun_name_547;
struct sType* obj_type2_548;
void* __right_value506 = (void*)0;
char* __dec_obj145;
void* __right_value507 = (void*)0;
char* __dec_obj146;
void* __right_value508 = (void*)0;
struct sType* __dec_obj147;
void* __right_value509 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* obj_type_549=0;
char* name_550=0;
_Bool err_551=0;
void* __right_value510 = (void*)0;
char* __dec_obj148;
void* __right_value511 = (void*)0;
char* __dec_obj149;
void* __right_value512 = (void*)0;
struct sType* __dec_obj150;
void* __right_value513 = (void*)0;
char* __dec_obj151;
void* __right_value514 = (void*)0;
char* __dec_obj152;
void* __right_value515 = (void*)0;
struct sType* __dec_obj153;
void* __right_value516 = (void*)0;
char* __dec_obj154;
void* __right_value517 = (void*)0;
char* __dec_obj155;
void* __right_value518 = (void*)0;
struct sType* __dec_obj156;
void* __right_value519 = (void*)0;
char* __dec_obj157;
void* __right_value520 = (void*)0;
char* __dec_obj158;
void* __right_value521 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var9 = (void*)0;
struct list$1sType$ph* param_types_552=0;
struct list$1char$ph* param_names_553=0;
struct list$1char$ph* param_default_parametors_554=0;
_Bool var_args_555=0;
char* header_tail_556;
void* __right_value522 = (void*)0;
_Bool const_fun_557;
int version_558;
int n_559;
void* __right_value523 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var10 = (void*)0;
char* asm_fun_560=0;
char* fun_attribute_561=0;
void* __right_value524 = (void*)0;
char* __dec_obj159;
_Bool in_top_level_562;
void* __right_value525 = (void*)0;
struct sBlock* block_563;
void* __right_value526 = (void*)0;
char* fun_name_565;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sFun* fun_566;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sFun* fun2_567;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value540 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value541 = (void*)0;
char* none_generics_name_569;
void* __right_value542 = (void*)0;
char* generics_sname_570;
int generics_sline_571;
void* __right_value543 = (void*)0;
char* block_572;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sGenericsFun* fun_573;
void* __right_value550 = (void*)0;
char* fun_name3_574;
void* __right_value556 = (void*)0;
struct sNode* __result_obj__178;
void* __right_value557 = (void*)0;
char* generics_sname_596;
int generics_sline_597;
void* __right_value558 = (void*)0;
char* block_598;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sGenericsFun* fun_599;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* __result_obj__179;
char* source_tail_600;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* new_fun_name_601;
void* __right_value569 = (void*)0;
char* __dec_obj161;
_Bool static_fun_602;
_Bool inline_fun_603;
_Bool uniq_fun_604;
void* __right_value570 = (void*)0;
char* generics_sname_605;
int generics_sline_606;
void* __right_value571 = (void*)0;
char* block_607;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sFun* fun_608;
void* __right_value575 = (void*)0;
char* header_609;
void* __right_value576 = (void*)0;
char* id_610;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value583 = (void*)0;
struct sNode* __result_obj__180;
void* __right_value584 = (void*)0;
struct sBlock* block_611;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sFun* fun_612;
void* __right_value589 = (void*)0;
char* header_613;
void* __right_value590 = (void*)0;
char* id_614;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value595 = (void*)0;
struct sNode* __result_obj__181;
void* __right_value596 = (void*)0;
char* new_fun_name_615;
void* __right_value597 = (void*)0;
char* __dec_obj162;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sFun* fun_616;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
char* header_617;
void* __right_value603 = (void*)0;
char* id_618;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value606 = (void*)0;
struct sNode* __result_obj__182;
void* __right_value607 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var11 = (void*)0;
char* asm_fun_619=0;
char* fun_attribute2_620=0;
void* __right_value608 = (void*)0;
char* __dec_obj163;
void* __right_value609 = (void*)0;
char* __dec_obj164;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sFun* fun_621;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
char* header_622;
void* __right_value615 = (void*)0;
char* id_623;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value618 = (void*)0;
struct sNode* __result_obj__183;
void* __right_value619 = (void*)0;
struct sNode* __result_obj__184;
fun_name_546 = (void*)0;
    header_head_533=info->p;
    source_head_534=info->p;
    attribute_535=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_536=((void*)0);
    var_name_537=((void*)0);
    constructor__538=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value501=parse_word(info)));
        (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj142=result_type_536,
        result_type_536=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_536->mHeap=(_Bool)1;
        constructor__538=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value503=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_539=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_540=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_541=multiple_assign_var7->v3;
        /*c*/ come_call_finalizer3(__right_value503,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj143=result_type_536,
        result_type_536=(struct sType*)come_increment_ref_count(result_type2_539);
        /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj144=var_name_537,
        var_name_537=(char*)come_increment_ref_count(var_name2_540);
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !err_541) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*c*/ come_call_finalizer3(result_type2_539,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name2_540 = come_decrement_ref_count(var_name2_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_542=(_Bool)0;
    {
        p_543=info->p;
        sline_544=info->sline;
        buf2_545=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2321, "struct buffer*"))));
        while(        xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_545,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_545)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_542=(_Bool)1;
        }
        info->p=p_543;
        info->sline=sline_544;
        /*c*/ come_call_finalizer3(buf2_545,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    base_fun_name_547=((void*)0);
    obj_type2_548=((void*)0);
    if(    constructor__538) {
        __dec_obj145=base_fun_name_547,
        base_fun_name_547=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj146=fun_name_546,
        fun_name_546=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_547,info,(_Bool)1));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj147=obj_type2_548,
        obj_type2_548=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_542) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value509=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_549=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_550=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_551=multiple_assign_var8->v3;
        /*c*/ come_call_finalizer3(__right_value509,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_551) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj148=base_fun_name_547,
        base_fun_name_547=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj149=fun_name_546,
        fun_name_546=(char*)come_increment_ref_count(create_method_name(obj_type_549,(_Bool)0,base_fun_name_547,info,(_Bool)1));
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj150=obj_type2_548,
        obj_type2_548=(struct sType*)come_increment_ref_count(sType_clone(obj_type_549));
        /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(obj_type_549,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_550 = come_decrement_ref_count(name_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj151=base_fun_name_547,
        base_fun_name_547=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj152=fun_name_546,
        fun_name_546=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_547,info,(_Bool)1));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj153=obj_type2_548,
        obj_type2_548=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        /*b*/ come_call_finalizer3(__dec_obj153,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj154=base_fun_name_547,
        base_fun_name_547=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj155=fun_name_546,
        fun_name_546=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_547,info,(_Bool)1));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj156=obj_type2_548,
        obj_type2_548=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj157=fun_name_546,
        fun_name_546=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj158=base_fun_name_547,
        base_fun_name_547=(char*)come_increment_ref_count(__builtin_string(fun_name_546));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_547,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value521=parse_params(info,constructor__538)));
    param_types_552=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_553=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_554=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_555=multiple_assign_var9->v4;
    /*c*/ come_call_finalizer3(__right_value521,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    header_tail_556=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_547,"initialize")) {
        info->in_class=(_Bool)1;
    }
    if(    result_type_536->mImmutable) {
        if(        method_definition_542||info->impl_type||info->class_type) {
            if(            list$1sType$ph_length(param_types_552)>0) {
                ((struct sType*)(__right_value522=list$1sType$ph_operator_load_element(param_types_552,0)))->mImmutable=(_Bool)1;
                /*c*/ come_call_finalizer3(__right_value522,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    const_fun_557=(_Bool)0;
    version_558=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_559=0;
        while(        xisdigit(*info->p)) {
            n_559=n_559*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_558=n_559;
    }
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value523=parse_function_attribute(info)));
    asm_fun_560=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    fun_attribute_561=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    /*c*/ come_call_finalizer3(__right_value523,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(asm_fun_560,"")) {
        __dec_obj159=fun_name_546,
        fun_name_546=(char*)come_increment_ref_count(__builtin_string(asm_fun_560));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    in_top_level_562=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_547,"lambda")) {
        block_563=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_564=0;
        lambda_num_564++;
        fun_name_565=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_564));
        result_type_536->mInline=(_Bool)0;
        result_type_536->mStatic=(_Bool)0;
        result_type_536->mUniq=(_Bool)0;
        fun_566=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2450, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sType$ph*)come_increment_ref_count(param_types_552),(struct list$1char$ph*)come_increment_ref_count(param_names_553),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_554),(_Bool)0,var_args_555,(struct sBlock*)come_increment_ref_count(block_563),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_557,((void*)0),((void*)0),0,(_Bool)0));
        fun2_567=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value533=__builtin_string(fun_name_565)))));
        (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_566));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2460, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value537=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2460, "struct sLambdaNode*")),fun_566,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value540=_inf_value5)));
        /*c*/ come_call_finalizer3(block_563,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_565 = come_decrement_ref_count(fun_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_566,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_567,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value537,sLambdaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value540) ? __right_value540 = come_decrement_ref_count(__right_value540, ((struct sNode*)__right_value540)->finalize, ((struct sNode*)__right_value540)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__166;
        /*c*/ come_call_finalizer3(block_563,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_565 = come_decrement_ref_count(fun_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_566,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_567,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        none_generics_name_569=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_570=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_571=info->sline;
        block_572=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_573=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2470, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value545=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value546=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sType$ph*)come_increment_ref_count(param_types_552),(struct list$1char$ph*)come_increment_ref_count(param_names_553),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_554),var_args_555,(char*)come_increment_ref_count(block_572),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_570)),generics_sline_571,const_fun_557));
        /*c*/ come_call_finalizer3(__right_value545,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value546,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fun_name3_574=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_569,base_fun_name_547));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_574)),(struct sGenericsFun*)come_increment_ref_count(fun_573));
        __result_obj__178 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_569 = come_decrement_ref_count(none_generics_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_570 = come_decrement_ref_count(generics_sname_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_572 = come_decrement_ref_count(block_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_573,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_574 = come_decrement_ref_count(fun_name3_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__178;
        (none_generics_name_569 = come_decrement_ref_count(none_generics_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_570 = come_decrement_ref_count(generics_sname_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_572 = come_decrement_ref_count(block_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_573,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_574 = come_decrement_ref_count(fun_name3_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0) {
        generics_sname_596=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_597=info->sline;
        block_598=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_599=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2484, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value560=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value561=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sType$ph*)come_increment_ref_count(param_types_552),(struct list$1char$ph*)come_increment_ref_count(param_names_553),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_554),var_args_555,(char*)come_increment_ref_count(block_598),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_596)),generics_sline_597,const_fun_557));
        /*c*/ come_call_finalizer3(__right_value560,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value561,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        method_definition_542) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sGenericsFun*)come_increment_ref_count(fun_599));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_547)),(struct sGenericsFun*)come_increment_ref_count(fun_599));
        }
        __result_obj__179 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_596 = come_decrement_ref_count(generics_sname_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_598 = come_decrement_ref_count(block_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_599,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__179;
        (generics_sname_596 = come_decrement_ref_count(generics_sname_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_598 = come_decrement_ref_count(block_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_599,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_600=info->p-1;
        if(        version_558>0) {
            new_fun_name_601=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value567=__builtin_string(fun_name_546))),version_558));
            (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj161=fun_name_546,
            fun_name_546=(char*)come_increment_ref_count(__builtin_string(new_fun_name_601));
            __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_601 = come_decrement_ref_count(new_fun_name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        static_fun_602=(_Bool)0;
        if(        result_type_536->mStatic) {
            result_type_536->mStatic=(_Bool)0;
            result_type_536->mUniq=(_Bool)0;
            static_fun_602=(_Bool)1;
        }
        inline_fun_603=(_Bool)0;
        if(        result_type_536->mInline) {
            result_type_536->mInline=(_Bool)0;
            result_type_536->mUniq=(_Bool)0;
            inline_fun_603=(_Bool)1;
        }
        uniq_fun_604=(_Bool)0;
        if(        result_type_536->mUniq) {
            result_type_536->mUniq=(_Bool)0;
            result_type_536->mInline=(_Bool)0;
            result_type_536->mStatic=(_Bool)0;
            uniq_fun_604=(_Bool)1;
        }
        if(        result_type_536->mUniq) {
            result_type_536->mUniq=(_Bool)0;
            result_type_536->mInline=(_Bool)0;
            result_type_536->mStatic=(_Bool)0;
        }
        if(        info->defining_class&&info->defining_class->mUniq) {
            uniq_fun_604=(_Bool)1;
        }
        if(        uniq_fun_604) {
            generics_sname_605=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_606=info->sline;
            block_607=(char*)come_increment_ref_count(skip_block(info,constructor__538));
            fun_608=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2539, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sType$ph*)come_increment_ref_count(param_types_552),(struct list$1char$ph*)come_increment_ref_count(param_names_553),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_554),(_Bool)0,var_args_555,((void*)0),static_fun_602,info,inline_fun_603,uniq_fun_604,(_Bool)0,(char*)come_increment_ref_count(attribute_535),(char*)come_increment_ref_count(fun_attribute_561),const_fun_557,(char*)come_increment_ref_count(block_607),(char*)come_increment_ref_count(generics_sname_605),generics_sline_606,(_Bool)0));
            if(            info->output_header_file) {
                if(                !result_type_536->mStatic&&!info->no_output_come_code) {
                    header_609=(char*)come_increment_ref_count(make_come_header_function(fun_608,(char*)come_increment_ref_count(base_fun_name_547),(struct sType*)come_increment_ref_count(obj_type2_548),version_558,info));
                    id_610=(char*)come_increment_ref_count(__builtin_string(fun_name_546));
                    add_come_code_at_come_header(info,id_610,"%s",header_609);
                    (header_609 = come_decrement_ref_count(header_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_610 = come_decrement_ref_count(id_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            if(            info->in_class) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_608));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_608));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_608));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_608));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2567, "struct sNode");
            _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value582=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2567, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_608),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sFunNode_finalize;
            _inf_value6->clone=(void*)sFunNode_clone;
            _inf_value6->compile=(void*)sFunNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sFunNode_kind;
            __result_obj__180 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value583=_inf_value6)));
            (generics_sname_605 = come_decrement_ref_count(generics_sname_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (block_607 = come_decrement_ref_count(block_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_608,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value582,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value583) ? __right_value583 = come_decrement_ref_count(__right_value583, ((struct sNode*)__right_value583)->finalize, ((struct sNode*)__right_value583)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__180) ? __result_obj__180 = come_decrement_ref_count(__result_obj__180, ((struct sNode*)__result_obj__180)->finalize, ((struct sNode*)__result_obj__180)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__180;
            (generics_sname_605 = come_decrement_ref_count(generics_sname_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (block_607 = come_decrement_ref_count(block_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_608,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            block_611=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__538,(_Bool)1));
            fun_612=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2572, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sType$ph*)come_increment_ref_count(param_types_552),(struct list$1char$ph*)come_increment_ref_count(param_names_553),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_554),(_Bool)0,var_args_555,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_611)),static_fun_602,info,inline_fun_603,uniq_fun_604,(_Bool)0,(char*)come_increment_ref_count(attribute_535),(char*)come_increment_ref_count(fun_attribute_561),const_fun_557,((void*)0),((void*)0),0,(_Bool)0));
            if(            info->output_header_file) {
                if(                !result_type_536->mStatic&&!info->no_output_come_code) {
                    header_613=(char*)come_increment_ref_count(make_come_header_function(fun_612,(char*)come_increment_ref_count(base_fun_name_547),(struct sType*)come_increment_ref_count(obj_type2_548),version_558,info));
                    id_614=(char*)come_increment_ref_count(__builtin_string(fun_name_546));
                    add_come_code_at_come_header(info,id_614,"%s",header_613);
                    (header_613 = come_decrement_ref_count(header_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_614 = come_decrement_ref_count(id_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            if(            info->in_class) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_612));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_612));
            }
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2598, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value594=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2598, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_612),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__181 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value595=_inf_value7)));
            /*c*/ come_call_finalizer3(block_611,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun_612,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value594,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value595) ? __right_value595 = come_decrement_ref_count(__right_value595, ((struct sNode*)__right_value595)->finalize, ((struct sNode*)__right_value595)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__181;
            /*c*/ come_call_finalizer3(block_611,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun_612,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_558>0) {
            new_fun_name_615=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_546,version_558));
            __dec_obj162=fun_name_546,
            fun_name_546=(char*)come_increment_ref_count(__builtin_string(new_fun_name_615));
            __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_615 = come_decrement_ref_count(new_fun_name_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_536->mStatic=(_Bool)0;
            result_type_536->mUniq=(_Bool)0;
            result_type_536->mInline=(_Bool)0;
            fun_616=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2615, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sType$ph*)come_increment_ref_count(param_types_552),(struct list$1char$ph*)come_increment_ref_count(param_names_553),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_554),(_Bool)1,var_args_555,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_535),(char*)come_increment_ref_count(fun_attribute_561),const_fun_557,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_616));
            if(            info->output_header_file) {
                if(                !result_type_536->mStatic&&!info->no_output_come_code) {
                    header_617=(char*)come_increment_ref_count(make_come_header_function(fun_616,(char*)come_increment_ref_count(base_fun_name_547),(struct sType*)come_increment_ref_count(obj_type2_548),version_558,info));
                    id_618=(char*)come_increment_ref_count(__builtin_string(fun_name_546));
                    add_come_code_at_come_header(info,id_618,"%s",header_617);
                    (header_617 = come_decrement_ref_count(header_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_618 = come_decrement_ref_count(id_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2635, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value605=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2635, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_616),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__182 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value606=_inf_value8)));
            /*c*/ come_call_finalizer3(fun_616,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value605,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value606) ? __right_value606 = come_decrement_ref_count(__right_value606, ((struct sNode*)__right_value606)->finalize, ((struct sNode*)__right_value606)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__182;
            /*c*/ come_call_finalizer3(fun_616,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value607=parse_function_attribute(info)));
            asm_fun_619=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            fun_attribute2_620=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            /*c*/ come_call_finalizer3(__right_value607,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            string_operator_not_equals(asm_fun_619,"")) {
                __dec_obj163=fun_name_546,
                fun_name_546=(char*)come_increment_ref_count(__builtin_string(asm_fun_619));
                __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            __dec_obj164=fun_attribute_561,
            fun_attribute_561=(char*)come_increment_ref_count(string_operator_add(fun_attribute_561,fun_attribute2_620));
            __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            result_type_536->mStatic=(_Bool)0;
            result_type_536->mUniq=(_Bool)0;
            result_type_536->mInline=(_Bool)0;
            fun_621=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2650, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sType$ph*)come_increment_ref_count(param_types_552),(struct list$1char$ph*)come_increment_ref_count(param_names_553),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_554),(_Bool)1,var_args_555,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_535),(char*)come_increment_ref_count(fun_attribute_561),const_fun_557,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_546)),(struct sFun*)come_increment_ref_count(fun_621));
            if(            info->output_header_file) {
                if(                !result_type_536->mStatic&&!info->no_output_come_code) {
                    header_622=(char*)come_increment_ref_count(make_come_header_function(fun_621,(char*)come_increment_ref_count(base_fun_name_547),(struct sType*)come_increment_ref_count(obj_type2_548),version_558,info));
                    id_623=(char*)come_increment_ref_count(__builtin_string(fun_name_546));
                    add_come_code_at_come_header(info,id_623,"%s",header_622);
                    (header_622 = come_decrement_ref_count(header_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_623 = come_decrement_ref_count(id_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2671, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value617=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2671, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_621),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            __result_obj__183 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value618=_inf_value9)));
            (asm_fun_619 = come_decrement_ref_count(asm_fun_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_620 = come_decrement_ref_count(fun_attribute2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_621,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value617,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value618) ? __right_value618 = come_decrement_ref_count(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__183;
            (asm_fun_619 = come_decrement_ref_count(asm_fun_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_620 = come_decrement_ref_count(fun_attribute2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_621,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        ((struct tuple2$2int$bool$*)(__right_value619=err_msg(info,"invalid character(2)(%c)",*info->p)));
        /*c*/ come_call_finalizer3(__right_value619,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_562;
    __result_obj__184 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_535 = come_decrement_ref_count(attribute_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_537 = come_decrement_ref_count(var_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_546 = come_decrement_ref_count(fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_547 = come_decrement_ref_count(base_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(obj_type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_552,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_553,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_554,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (asm_fun_560 = come_decrement_ref_count(asm_fun_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute_561 = come_decrement_ref_count(fun_attribute_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__184;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__164;
void* __right_value538 = (void*)0;
struct sLambdaNode* result_568;
void* __right_value539 = (void*)0;
char* __dec_obj160;
struct sLambdaNode* __result_obj__165;
    if(    self==(void*)0) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result_568=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)) {
        result_568->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj160=result_568->sname,
        result_568->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_568->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_568->mFun=self->mFun;
    }
    __result_obj__165 = result_568;
    /*c*/ come_call_finalizer3(result_568,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__165;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_592;
unsigned int it_593;
_Bool same_key_exist_594;
char* it2_595;
struct map$2char$phsGenericsFun$ph* __result_obj__177;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_592=string_get_hash_key(((char*)key))%self->size;
    it_593=hash_592;
    while(    (_Bool)1) {
        if(        self->item_existance[it_593]) {
            if(            string_equals(self->keys[it_593],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_593]);
                    (self->keys[it_593] = come_decrement_ref_count(self->keys[it_593], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_593]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_593]);
                    self->keys[it_593]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_593],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_593]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_593]=item;
                }
                break;
            }
            it_593++;
            if(            it_593>=self->size) {
                it_593=0;
            }
            else if(            it_593==hash_592) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_593]=(_Bool)1;
            if(            1) {
                self->keys[it_593]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_593]=key;
            }
            if(            1) {
                self->items[it_593]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_593]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_594=(_Bool)0;
    for(    it2_595=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_595=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_595,key)) {
            same_key_exist_594=(_Bool)1;
        }
    }
    if(    !same_key_exist_594) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__177 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_575;
void* __right_value551 = (void*)0;
char** keys_576;
void* __right_value552 = (void*)0;
struct sGenericsFun** items_577;
void* __right_value553 = (void*)0;
_Bool* item_existance_578;
int len_579;
char* it_582;
struct sGenericsFun* default_value_585;
void* __right_value554 = (void*)0;
struct sGenericsFun* it2_586;
unsigned int hash_589;
int n_590;
struct sGenericsFun* default_value_591;
void* __right_value555 = (void*)0;
default_value_585 = (void*)0;
default_value_591 = (void*)0;
    size_575=self->size*10;
    keys_576=(char**)come_increment_ref_count(((char**)(__right_value551=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_575)), "./comelang.h", 2153, "char**"))));
    items_577=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value552=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size_575)), "./comelang.h", 2154, "struct sGenericsFun**"))));
    item_existance_578=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value553=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_575)), "./comelang.h", 2155, "_Bool*"))));
    len_579=0;
    for(    it_582=map$2char$phsGenericsFun$ph_begin(self);    !map$2char$phsGenericsFun$ph_end(self);    it_582=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_585,0,sizeof(struct sGenericsFun*));
        it2_586=((struct sGenericsFun*)(__right_value554=map$2char$phsGenericsFun$ph_at(self,it_582,(struct sGenericsFun*)come_increment_ref_count(default_value_585))));
        /*c*/ come_call_finalizer3(__right_value554,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_589=string_get_hash_key(((char*)it_582))%size_575;
        n_590=hash_589;
        while(        (_Bool)1) {
            if(            item_existance_578[n_590]) {
                n_590++;
                if(                n_590>=size_575) {
                    n_590=0;
                }
                else if(                n_590==hash_589) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_578[n_590]=(_Bool)1;
                keys_576[n_590]=it_582;
                items_577[n_590]=((struct sGenericsFun*)(__right_value555=map$2char$phsGenericsFun$ph_at(self,it_582,(struct sGenericsFun*)come_increment_ref_count(default_value_591))));
                /*c*/ come_call_finalizer3(__right_value555,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_579++;
                /*c*/ come_call_finalizer3(default_value_591,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_591,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_585,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_576;
    self->items=items_577;
    self->item_existance=item_existance_578;
    self->size=size_575;
    self->len=len_579;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_580;
char* __result_obj__167;
char* __result_obj__168;
char* result_581;
char* __result_obj__169;
result_580 = (void*)0;
result_581 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_580,0,sizeof(char*));
        __result_obj__167 = result_580;
        return __result_obj__167;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__168 = self->key_list->it->item;
        return __result_obj__168;
    }
    memset(&result_581,0,sizeof(char*));
    __result_obj__169 = result_581;
    return __result_obj__169;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_583;
char* __result_obj__170;
char* __result_obj__171;
char* result_584;
char* __result_obj__172;
result_583 = (void*)0;
result_584 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_583,0,sizeof(char*));
        __result_obj__170 = result_583;
        return __result_obj__170;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__171 = self->key_list->it->item;
        return __result_obj__171;
    }
    memset(&result_584,0,sizeof(char*));
    __result_obj__172 = result_584;
    return __result_obj__172;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_587;
unsigned int it_588;
struct sGenericsFun* __result_obj__173;
struct sGenericsFun* __result_obj__174;
struct sGenericsFun* __result_obj__175;
struct sGenericsFun* __result_obj__176;
    hash_587=string_get_hash_key(((char*)key))%self->size;
    it_588=hash_587;
    while(    (_Bool)1) {
        if(        self->item_existance[it_588]) {
            if(            string_equals(self->keys[it_588],key)) {
                __result_obj__173 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_588]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__173,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__173;
            }
            it_588++;
            if(            it_588>=self->size) {
                it_588=0;
            }
            else if(            it_588==hash_587) {
                __result_obj__174 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__174,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__174;
            }
        }
        else {
            __result_obj__175 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__175,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__175;
        }
    }
    __result_obj__176 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
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

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_624;
char* __dec_obj165;
char* last_code2_625;
char* __dec_obj166;
_Bool comma_instead_of_semicolon_626;
_Bool without_semicolon_627;
struct sClass* current_stack_frame_struct_628;
char* real_fun_name_629;
struct sFun* finalizer_630;
void* __right_value620 = (void*)0;
struct sType* type_before_631;
void* __right_value621 = (void*)0;
struct sType* type2_632;
void* __right_value622 = (void*)0;
char* fun_name2_633;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
char* none_generics_name_634;
void* __right_value625 = (void*)0;
char* generics_fun_name_635;
void* __right_value626 = (void*)0;
struct sGenericsFun* generics_fun_636;
void* __right_value627 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name_643=0;
_Bool err_644=0;
void* __right_value628 = (void*)0;
char* __dec_obj167;
int i_645;
void* __right_value629 = (void*)0;
char* new_fun_name_646;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* __dec_obj168;
void* __right_value632 = (void*)0;
char* __dec_obj169;
void* __right_value633 = (void*)0;
char* __dec_obj170;
void* __right_value634 = (void*)0;
char* user_real_fun_name_647;
void* __right_value635 = (void*)0;
struct sFun* user_finalizer_648;
void* __right_value636 = (void*)0;
struct sType* type2_649;
struct sClass* klass_650;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct buffer* source_651;
void* __right_value639 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name9_661;
struct tuple2$2char$phsType$ph* it_664;
struct tuple2$2char$phsType$ph* multiple_assign_var13 = (void*)0;
char* name_667=0;
struct sType* field_type_668=0;
char* p_671;
int sline_672;
char* sname_673;
char* head_674;
struct buffer* source3_675;
struct buffer* __dec_obj171;
void* __right_value640 = (void*)0;
char* __dec_obj172;
void* __right_value641 = (void*)0;
struct sBlock* block_676;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sType* result_type_677;
void* __right_value645 = (void*)0;
char* name_678;
void* __right_value646 = (void*)0;
struct sType* self_type_679;
struct sType* __list_values13___681[1];
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sType$ph* param_types_680;
void* __right_value649 = (void*)0;
char* __list_values14___682[1];
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1char$ph* param_names_683;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1char$ph* param_default_parametors_684;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sFun* fun2_685;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* fun_686;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value664 = (void*)0;
struct sNode* node_687;
_Bool Value_688;
struct buffer* __dec_obj173;
char* __dec_obj174;
char* __dec_obj175;
char* __dec_obj176;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__208;
memset(&i_645, 0, sizeof(int));
    last_code_624=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj165=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_625=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj166=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_626=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_627=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_628=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_629=((void*)0);
    finalizer_630=((void*)0);
    type_before_631=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_632=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_632->mHeap=(_Bool)0;
    fun_name2_633=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        finalizer_630=((struct sFun*)(__right_value623=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_633)));
        /*c*/ come_call_finalizer3(__right_value623,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        finalizer_630==((void*)0)) {
            none_generics_name_634=(char*)come_increment_ref_count(get_none_generics_name(type2_632->mClass->mName));
            generics_fun_name_635=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_634,fun_name));
            generics_fun_636=((struct sGenericsFun*)(__right_value626=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_635)));
            /*c*/ come_call_finalizer3(__right_value626,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_636) {
                multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value627=create_generics_fun((char*)come_increment_ref_count(fun_name2_633),generics_fun_636,type,info)));
                name_643=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                err_644=multiple_assign_var12->v2;
                /*c*/ come_call_finalizer3(__right_value627,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_644) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_630=((struct sFun*)(__right_value628=map$2char$phsFun$ph_operator_load_element(info->funcs,name_643)));
                /*c*/ come_call_finalizer3(__right_value628,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_643 = come_decrement_ref_count(name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_634 = come_decrement_ref_count(none_generics_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_635 = come_decrement_ref_count(generics_fun_name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj167=real_fun_name_629,
        real_fun_name_629=(char*)come_increment_ref_count(fun_name2_633);
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        for(        i_645=128-1;        i_645>=1;        i_645--        ){
            new_fun_name_646=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_633,i_645));
            finalizer_630=((struct sFun*)(__right_value630=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_646)));
            /*c*/ come_call_finalizer3(__right_value630,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_630) {
                __dec_obj168=fun_name2_633,
                fun_name2_633=(char*)come_increment_ref_count(__builtin_string(new_fun_name_646));
                __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_646 = come_decrement_ref_count(new_fun_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_646 = come_decrement_ref_count(new_fun_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_630==((void*)0)) {
            finalizer_630=((struct sFun*)(__right_value632=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_633)));
            /*c*/ come_call_finalizer3(__right_value632,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj169=real_fun_name_629,
        real_fun_name_629=(char*)come_increment_ref_count(fun_name2_633);
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    finalizer_630==((void*)0)) {
        type=type_before_631;
        __dec_obj170=real_fun_name_629,
        real_fun_name_629=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        user_real_fun_name_647=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_648=((struct sFun*)(__right_value635=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_647)));
        /*c*/ come_call_finalizer3(__right_value635,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_649=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_649;
        klass_650=type->mClass;
        if(        type->mPointerNum>0&&klass_650->mStruct||type->mAllocaValue) {
            source_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2773, "struct buffer*"))));
            buffer_append_char(source_651,123);
            if(            user_finalizer_648) {
                char source2_652[1024];
                memset(&source2_652, 0, sizeof(char)                *(1024)                );
                snprintf(source2_652,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_647);
                buffer_append_str(source_651,source2_652);
            }
            klass_650=((struct sClass*)(__right_value639=map$2char$phsClass$ph_operator_load_element(info->classes,klass_650->mName)));
            /*c*/ come_call_finalizer3(__right_value639,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            _foreach_var_name9_661=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_650->mFields),            it_664=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name9_661);            !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name9_661);            it_664=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name9_661)            ){
                multiple_assign_var13=it_664;
                name_667=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_668=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                field_type_668->mHeap) {
                    char source2_669[1024];
                    memset(&source2_669, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_669,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_667,name_667,name_667,name_667);
                    buffer_append_str(source_651,source2_669);
                }
                else if(                field_type_668->mChannel) {
                    char source2_670[1024];
                    memset(&source2_670, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_670,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_667,name_667);
                    buffer_append_str(source_651,source2_670);
                    snprintf(source2_670,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_667,name_667);
                    buffer_append_str(source_651,source2_670);
                }
                (name_667 = come_decrement_ref_count(name_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_668,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name9_661,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_char(source_651,125);
            p_671=info->p;
            sline_672=info->sline;
            sname_673=(char*)come_increment_ref_count(info->sname);
            head_674=info->head;
            source3_675=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj171=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_651);
            /*b*/ come_call_finalizer3(__dec_obj171,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_651->buf;
            info->head=source_651->buf;
            __dec_obj172=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_629));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=0;
            block_676=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_677=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2822, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_678=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_629, "05function.c", 2823, "char*"));
            self_type_679=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type_679->mHeap=(_Bool)0;
            if(            self_type_679->mPointerNum==0) {
                self_type_679->mPointerNum=1;
            }
            if(            self_type_679->mPointerNum>1) {
                self_type_679->mPointerNum=1;
            }
            param_types_680=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___681[0]=self_type_679,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2832, "struct list$1sType$ph")),1,__list_values13___681)));
            param_names_683=(struct list$1char$ph*)come_increment_ref_count((__list_values14___682[0]=((char*)(__right_value649=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2833, "struct list$1char$ph")),1,__list_values14___682)));
            (__right_value649 = come_decrement_ref_count(__right_value649, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_684=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2834, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_684,((void*)0));
            result_type_677->mStatic=(_Bool)0;
            result_type_677->mUniq=(_Bool)0;
            result_type_677->mInline=(_Bool)0;
            fun2_685=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value655=__builtin_string(name_678)))));
            (__right_value654 = come_decrement_ref_count(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_685==((void*)0)||fun2_685->mExternal) {
                fun_686=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2843, "struct sFun*")),(char*)come_increment_ref_count(name_678),(struct sType*)come_increment_ref_count(result_type_677),(struct list$1sType$ph*)come_increment_ref_count(param_types_680),(struct list$1char$ph*)come_increment_ref_count(param_names_683),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_684),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_676),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                fun_686->mGenericsFun=(_Bool)1;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_678)),(struct sFun*)come_increment_ref_count(fun_686));
                finalizer_630=fun_686;
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2854, "struct sNode");
                _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value663=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2854, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_686),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sFunNode_finalize;
                _inf_value10->clone=(void*)sFunNode_clone;
                _inf_value10->compile=(void*)sFunNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sFunNode_kind;
                node_687=(struct sNode*)come_increment_ref_count(_inf_value10);
                /*c*/ come_call_finalizer3(__right_value663,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_688=node_compile(node_687,info);
                if(                !Value_688) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                /*c*/ come_call_finalizer3(fun_686,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_687) ? node_687 = come_decrement_ref_count(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_630=fun2_685;
            }
            __dec_obj173=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_675);
            /*b*/ come_call_finalizer3(__dec_obj173,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_671;
            info->head=head_674;
            info->sline=sline_672;
            __dec_obj174=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_673);
            __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(source_651,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_673 = come_decrement_ref_count(sname_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_675,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(block_676,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_677,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_678 = come_decrement_ref_count(name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(self_type_679,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_680,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_683,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_684,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_685,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (user_real_fun_name_647 = come_decrement_ref_count(user_real_fun_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_649,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_628;
    __dec_obj175=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_624);
    __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj176=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_625);
    __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_626;
    info->without_semicolon=without_semicolon_627;
    __result_obj__208 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value666=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2880, "struct tuple2$2sFun$pchar$ph")),finalizer_630,(char*)come_increment_ref_count(real_fun_name_629)))));
    (last_code_624 = come_decrement_ref_count(last_code_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_625 = come_decrement_ref_count(last_code2_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_629 = come_decrement_ref_count(real_fun_name_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_631,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_632,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_633 = come_decrement_ref_count(fun_name2_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value666,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__208,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_637;
unsigned int hash_638;
unsigned int it_639;
struct sGenericsFun* __result_obj__185;
struct sGenericsFun* __result_obj__186;
struct sGenericsFun* __result_obj__187;
struct sGenericsFun* __result_obj__188;
default_value_637 = (void*)0;
    memset(&default_value_637,0,sizeof(struct sGenericsFun*));
    hash_638=string_get_hash_key(((char*)key))%self->size;
    it_639=hash_638;
    while(    (_Bool)1) {
        if(        self->item_existance[it_639]) {
            if(            string_equals(self->keys[it_639],key)) {
                __result_obj__185 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_639]);
                /*c*/ come_call_finalizer3(default_value_637,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__185,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__185;
            }
            it_639++;
            if(            it_639>=self->size) {
                it_639=0;
            }
            else if(            it_639==hash_638) {
                __result_obj__186 = (struct sGenericsFun*)come_increment_ref_count(default_value_637);
                /*c*/ come_call_finalizer3(default_value_637,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__186,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__186;
            }
        }
        else {
            __result_obj__187 = (struct sGenericsFun*)come_increment_ref_count(default_value_637);
            /*c*/ come_call_finalizer3(default_value_637,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__187,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__187;
        }
    }
    __result_obj__188 = (struct sGenericsFun*)come_increment_ref_count(default_value_637);
    /*c*/ come_call_finalizer3(default_value_637,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__188,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_640;
unsigned int hash_641;
unsigned int it_642;
struct sGenericsFun* __result_obj__189;
struct sGenericsFun* __result_obj__190;
struct sGenericsFun* __result_obj__191;
struct sGenericsFun* __result_obj__192;
default_value_640 = (void*)0;
    memset(&default_value_640,0,sizeof(struct sGenericsFun*));
    hash_641=string_get_hash_key(((char*)key))%self->size;
    it_642=hash_641;
    while(    (_Bool)1) {
        if(        self->item_existance[it_642]) {
            if(            string_equals(self->keys[it_642],key)) {
                __result_obj__189 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_642]);
                /*c*/ come_call_finalizer3(default_value_640,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__189,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__189;
            }
            it_642++;
            if(            it_642>=self->size) {
                it_642=0;
            }
            else if(            it_642==hash_641) {
                __result_obj__190 = (struct sGenericsFun*)come_increment_ref_count(default_value_640);
                /*c*/ come_call_finalizer3(default_value_640,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__190,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__190;
            }
        }
        else {
            __result_obj__191 = (struct sGenericsFun*)come_increment_ref_count(default_value_640);
            /*c*/ come_call_finalizer3(default_value_640,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__191,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__191;
        }
    }
    __result_obj__192 = (struct sGenericsFun*)come_increment_ref_count(default_value_640);
    /*c*/ come_call_finalizer3(default_value_640,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_653;
unsigned int hash_654;
unsigned int it_655;
struct sClass* __result_obj__193;
struct sClass* __result_obj__194;
struct sClass* __result_obj__195;
struct sClass* __result_obj__196;
default_value_653 = (void*)0;
    memset(&default_value_653,0,sizeof(struct sClass*));
    hash_654=string_get_hash_key(((char*)key))%self->size;
    it_655=hash_654;
    while(    (_Bool)1) {
        if(        self->item_existance[it_655]) {
            if(            string_equals(self->keys[it_655],key)) {
                __result_obj__193 = (struct sClass*)come_increment_ref_count(self->items[it_655]);
                /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__193,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__193;
            }
            it_655++;
            if(            it_655>=self->size) {
                it_655=0;
            }
            else if(            it_655==hash_654) {
                __result_obj__194 = (struct sClass*)come_increment_ref_count(default_value_653);
                /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__194,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__194;
            }
        }
        else {
            __result_obj__195 = (struct sClass*)come_increment_ref_count(default_value_653);
            /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__195,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__195;
        }
    }
    __result_obj__196 = (struct sClass*)come_increment_ref_count(default_value_653);
    /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_656;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_657;
    it_656=self->head;
    while(    it_656!=((void*)0)) {
        prev_it_657=it_656;
        it_656=it_656->next;
        /*c*/ come_call_finalizer3(prev_it_657,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_658;
unsigned int hash_659;
unsigned int it_660;
struct sClass* __result_obj__197;
struct sClass* __result_obj__198;
struct sClass* __result_obj__199;
struct sClass* __result_obj__200;
default_value_658 = (void*)0;
    memset(&default_value_658,0,sizeof(struct sClass*));
    hash_659=string_get_hash_key(((char*)key))%self->size;
    it_660=hash_659;
    while(    (_Bool)1) {
        if(        self->item_existance[it_660]) {
            if(            string_equals(self->keys[it_660],key)) {
                __result_obj__197 = (struct sClass*)come_increment_ref_count(self->items[it_660]);
                /*c*/ come_call_finalizer3(default_value_658,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__197,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__197;
            }
            it_660++;
            if(            it_660>=self->size) {
                it_660=0;
            }
            else if(            it_660==hash_659) {
                __result_obj__198 = (struct sClass*)come_increment_ref_count(default_value_658);
                /*c*/ come_call_finalizer3(default_value_658,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__198,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__198;
            }
        }
        else {
            __result_obj__199 = (struct sClass*)come_increment_ref_count(default_value_658);
            /*c*/ come_call_finalizer3(default_value_658,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__199,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__199;
        }
    }
    __result_obj__200 = (struct sClass*)come_increment_ref_count(default_value_658);
    /*c*/ come_call_finalizer3(default_value_658,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__200,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_662;
struct tuple2$2char$phsType$ph* __result_obj__201;
struct tuple2$2char$phsType$ph* __result_obj__202;
struct tuple2$2char$phsType$ph* result_663;
struct tuple2$2char$phsType$ph* __result_obj__203;
result_662 = (void*)0;
result_663 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_662,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__201 = result_662;
        return __result_obj__201;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__202 = self->it->item;
        return __result_obj__202;
    }
    memset(&result_663,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__203 = result_663;
    return __result_obj__203;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_665;
struct tuple2$2char$phsType$ph* __result_obj__204;
struct tuple2$2char$phsType$ph* __result_obj__205;
struct tuple2$2char$phsType$ph* result_666;
struct tuple2$2char$phsType$ph* __result_obj__206;
result_665 = (void*)0;
result_666 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_665,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__204 = result_665;
        return __result_obj__204;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__205 = self->it->item;
        return __result_obj__205;
    }
    memset(&result_666,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__206 = result_666;
    return __result_obj__206;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj177;
struct tuple2$2sFun$pchar$ph* __result_obj__207;
    self->v1=v1;
    __dec_obj177=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__207 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__207,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_689;
char* __dec_obj178;
char* last_code2_690;
char* __dec_obj179;
_Bool comma_instead_of_semicolon_691;
_Bool without_semicolon_692;
struct sClass* current_stack_frame_struct_693;
struct sFun* equaler_694;
void* __right_value667 = (void*)0;
char* real_fun_name_695;
void* __right_value668 = (void*)0;
struct sType* type2_696;
struct sClass* klass_697;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct buffer* source_698;
char* name_699;
void* __right_value671 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name10_701;
struct tuple2$2char$phsType$ph* it_702;
struct tuple2$2char$phsType$ph* multiple_assign_var14 = (void*)0;
char* name_703=0;
struct sType* field_type_704=0;
char* p_706;
int sline_707;
char* sname_708;
char* head_709;
struct buffer* source3_710;
struct buffer* __dec_obj180;
void* __right_value672 = (void*)0;
char* __dec_obj181;
void* __right_value673 = (void*)0;
struct sBlock* block_711;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sType* result_type_712;
void* __right_value677 = (void*)0;
char* name_713;
void* __right_value678 = (void*)0;
struct sType* left_type_714;
void* __right_value679 = (void*)0;
struct sType* right_type_715;
struct sType* __list_values15___717[2];
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1sType$ph* param_types_716;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* __list_values16___718[2];
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1char$ph* param_names_719;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct list$1char$ph* param_default_parametors_720;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sFun* fun2_721;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sFun* fun_722;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value698 = (void*)0;
struct sNode* node_723;
_Bool Value_724;
void* __right_value699 = (void*)0;
struct buffer* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
char* __dec_obj185;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__209;
    last_code_689=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj178=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_690=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj179=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_691=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_692=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_693=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_694=((void*)0);
    real_fun_name_695=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_696=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_696;
    klass_697=type->mClass;
    if(    type->mPointerNum>0&&!klass_697->mNumber) {
        source_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2908, "struct buffer*"))));
        buffer_append_char(source_698,123);
        if(        klass_697->mProtocol) {
            name_699="_protocol_obj";
            char source2_700[1024];
            memset(&source2_700, 0, sizeof(char)            *(1024)            );
            snprintf(source2_700,1024,"return left.%s.equals(right.%s);\n",name_699,name_699);
            buffer_append_str(source_698,source2_700);
        }
        else {
            klass_697=((struct sClass*)(__right_value671=map$2char$phsClass$ph_operator_load_element(info->classes,klass_697->mName)));
            /*c*/ come_call_finalizer3(__right_value671,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            _foreach_var_name10_701=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_697->mFields),            it_702=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name10_701);            !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name10_701);            it_702=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name10_701)            ){
                multiple_assign_var14=it_702;
                name_703=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_704=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_705[1024];
                memset(&source2_705, 0, sizeof(char)                *(1024)                );
                snprintf(source2_705,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_703,name_703,name_703);
                buffer_append_str(source_698,source2_705);
                (name_703 = come_decrement_ref_count(name_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_704,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name10_701,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_698,"return true;");
        buffer_append_char(source_698,125);
        p_706=info->p;
        sline_707=info->sline;
        sname_708=(char*)come_increment_ref_count(info->sname);
        head_709=info->head;
        source3_710=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj180=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_698);
        /*b*/ come_call_finalizer3(__dec_obj180,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_698->buf;
        info->head=source_698->buf;
        __dec_obj181=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_695));
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_711=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_712=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2948, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_713=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_695, "05function.c", 2949, "char*"));
        left_type_714=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_714->mHeap=(_Bool)0;
        right_type_715=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_715->mHeap=(_Bool)0;
        param_types_716=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___717[0]=left_type_714,
__list_values15___717[1]=right_type_715,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2954, "struct list$1sType$ph")),2,__list_values15___717)));
        param_names_719=(struct list$1char$ph*)come_increment_ref_count((__list_values16___718[0]=((char*)(__right_value682=__builtin_string("left"))),
__list_values16___718[1]=((char*)(__right_value683=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2955, "struct list$1char$ph")),2,__list_values16___718)));
        (__right_value682 = come_decrement_ref_count(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_720=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2956, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_720,((void*)0));
        list$1char$ph_push_back(param_default_parametors_720,((void*)0));
        result_type_712->mStatic=(_Bool)0;
        result_type_712->mUniq=(_Bool)0;
        result_type_712->mInline=(_Bool)0;
        fun2_721=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value689=__builtin_string(name_713)))));
        (__right_value688 = come_decrement_ref_count(__right_value688, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value689 = come_decrement_ref_count(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_721==((void*)0)||fun2_721->mExternal) {
            fun_722=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2966, "struct sFun*")),(char*)come_increment_ref_count(name_713),(struct sType*)come_increment_ref_count(result_type_712),(struct list$1sType$ph*)come_increment_ref_count(param_types_716),(struct list$1char$ph*)come_increment_ref_count(param_names_719),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_720),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_711),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_722->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_713)),(struct sFun*)come_increment_ref_count(fun_722));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2975, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value697=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2975, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_722),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_723=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value697,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_724=node_compile(node_723,info);
            if(            !Value_724) {
                ((struct tuple2$2int$bool$*)(__right_value699=err_msg(info,"compiling error")));
                /*c*/ come_call_finalizer3(__right_value699,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
            }
            equaler_694=fun_722;
            /*c*/ come_call_finalizer3(fun_722,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_723) ? node_723 = come_decrement_ref_count(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_694=fun2_721;
        }
        __dec_obj182=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_710);
        /*b*/ come_call_finalizer3(__dec_obj182,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_706;
        info->head=head_709;
        info->sline=sline_707;
        __dec_obj183=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_708);
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_708 = come_decrement_ref_count(sname_708, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_710,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_711,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_712,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_713 = come_decrement_ref_count(name_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_714,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_715,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_716,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_719,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_720,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_721,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_693;
    __dec_obj184=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_689);
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj185=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_690);
    __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_691;
    info->without_semicolon=without_semicolon_692;
    __result_obj__209 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value701=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3002, "struct tuple2$2sFun$pchar$ph")),equaler_694,(char*)come_increment_ref_count(real_fun_name_695)))));
    (last_code_689 = come_decrement_ref_count(last_code_689, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_690 = come_decrement_ref_count(last_code2_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_695 = come_decrement_ref_count(real_fun_name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_696,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value701,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_725;
char* __dec_obj186;
char* last_code2_726;
char* __dec_obj187;
_Bool comma_instead_of_semicolon_727;
_Bool without_semicolon_728;
struct sClass* current_stack_frame_struct_729;
struct sFun* equaler_730;
void* __right_value702 = (void*)0;
char* real_fun_name_731;
void* __right_value703 = (void*)0;
struct sType* type2_732;
struct sClass* klass_733;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct buffer* source_734;
char* name_735;
int i_738;
void* __right_value706 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name11_739;
struct tuple2$2char$phsType$ph* it_740;
struct tuple2$2char$phsType$ph* multiple_assign_var15 = (void*)0;
char* name_741=0;
struct sType* field_type_742=0;
char* p_746;
int sline_747;
char* sname_748;
char* head_749;
struct buffer* source3_750;
struct buffer* __dec_obj188;
void* __right_value707 = (void*)0;
char* __dec_obj189;
void* __right_value708 = (void*)0;
struct sBlock* block_751;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sType* result_type_752;
void* __right_value712 = (void*)0;
char* name_753;
void* __right_value713 = (void*)0;
struct sType* left_type_754;
void* __right_value714 = (void*)0;
struct sType* right_type_755;
struct sType* __list_values17___757[2];
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct list$1sType$ph* param_types_756;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
char* __list_values18___758[2];
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1char$ph* param_names_759;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1char$ph* param_default_parametors_760;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sFun* fun2_761;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* fun_762;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value733 = (void*)0;
struct sNode* node_763;
_Bool Value_764;
void* __right_value734 = (void*)0;
struct buffer* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
char* __dec_obj193;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__210;
    last_code_725=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj186=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_726=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj187=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_727=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_728=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_729=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_730=((void*)0);
    real_fun_name_731=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_732=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_732;
    klass_733=type->mClass;
    if(    type->mPointerNum>0&&!klass_733->mNumber) {
        source_734=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3029, "struct buffer*"))));
        buffer_append_char(source_734,123);
        if(        klass_733->mProtocol) {
            name_735="_protocol_obj";
            char source2_736[1024];
            memset(&source2_736, 0, sizeof(char)            *(1024)            );
            snprintf(source2_736,1024,"return left.%s !== right.%s;\n",name_735,name_735);
            buffer_append_str(source_734,source2_736);
        }
        else {
            char source2_737[1024];
            memset(&source2_737, 0, sizeof(char)            *(1024)            );
            snprintf(source2_737,1024,"return !(");
            buffer_append_str(source_734,source2_737);
            snprintf(source2_737,1024,"( ");
            buffer_append_str(source_734,source2_737);
            i_738=0;
            klass_733=((struct sClass*)(__right_value706=map$2char$phsClass$ph_operator_load_element(info->classes,klass_733->mName)));
            /*c*/ come_call_finalizer3(__right_value706,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            _foreach_var_name11_739=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_733->mFields),            it_740=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name11_739);            !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name11_739);            it_740=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name11_739)            ){
                multiple_assign_var15=it_740;
                name_741=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_742=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_743[1024];
                memset(&source2_743, 0, sizeof(char)                *(1024)                );
                snprintf(source2_743,1024,"(left.%s === right.%s)",name_741,name_741,name_741);
                buffer_append_str(source_734,source2_743);
                if(                i_738==list$1tuple2$2char$phsType$ph$ph_length(klass_733->mFields)-1) {
                    char source2_744[1024];
                    memset(&source2_744, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_744,1024,"));");
                    buffer_append_str(source_734,source2_744);
                }
                else {
                    char source2_745[1024];
                    memset(&source2_745, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_745,1024," && ");
                    buffer_append_str(source_734,source2_745);
                }
                i_738++;
                (name_741 = come_decrement_ref_count(name_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_742,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name11_739,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_734,125);
        p_746=info->p;
        sline_747=info->sline;
        sname_748=(char*)come_increment_ref_count(info->sname);
        head_749=info->head;
        source3_750=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj188=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_734);
        /*b*/ come_call_finalizer3(__dec_obj188,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_734->buf;
        info->head=source_734->buf;
        __dec_obj189=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_731));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_751=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_752=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3089, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_753=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_731, "05function.c", 3090, "char*"));
        left_type_754=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_754->mHeap=(_Bool)0;
        right_type_755=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_755->mHeap=(_Bool)0;
        param_types_756=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___757[0]=left_type_754,
__list_values17___757[1]=right_type_755,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3095, "struct list$1sType$ph")),2,__list_values17___757)));
        param_names_759=(struct list$1char$ph*)come_increment_ref_count((__list_values18___758[0]=((char*)(__right_value717=__builtin_string("left"))),
__list_values18___758[1]=((char*)(__right_value718=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3096, "struct list$1char$ph")),2,__list_values18___758)));
        (__right_value717 = come_decrement_ref_count(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_760=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3097, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_760,((void*)0));
        list$1char$ph_push_back(param_default_parametors_760,((void*)0));
        result_type_752->mStatic=(_Bool)0;
        result_type_752->mUniq=(_Bool)0;
        result_type_752->mInline=(_Bool)0;
        fun2_761=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value724=__builtin_string(name_753)))));
        (__right_value723 = come_decrement_ref_count(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value724 = come_decrement_ref_count(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_761==((void*)0)||fun2_761->mExternal) {
            fun_762=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3107, "struct sFun*")),(char*)come_increment_ref_count(name_753),(struct sType*)come_increment_ref_count(result_type_752),(struct list$1sType$ph*)come_increment_ref_count(param_types_756),(struct list$1char$ph*)come_increment_ref_count(param_names_759),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_760),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_751),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_762->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_753)),(struct sFun*)come_increment_ref_count(fun_762));
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3116, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value732=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3116, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_762),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_763=(struct sNode*)come_increment_ref_count(_inf_value12);
            /*c*/ come_call_finalizer3(__right_value732,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_764=node_compile(node_763,info);
            if(            !Value_764) {
                ((struct tuple2$2int$bool$*)(__right_value734=err_msg(info,"compiling error")));
                /*c*/ come_call_finalizer3(__right_value734,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
            }
            equaler_730=fun_762;
            /*c*/ come_call_finalizer3(fun_762,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_763) ? node_763 = come_decrement_ref_count(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_730=fun2_761;
        }
        __dec_obj190=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_750);
        /*b*/ come_call_finalizer3(__dec_obj190,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_746;
        info->head=head_749;
        info->sline=sline_747;
        __dec_obj191=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_748);
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_734,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_748 = come_decrement_ref_count(sname_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_750,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_751,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_752,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_753 = come_decrement_ref_count(name_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_754,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_755,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_756,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_759,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_760,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_761,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_729;
    __dec_obj192=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_725);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj193=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_726);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_727;
    info->without_semicolon=without_semicolon_728;
    __result_obj__210 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value736=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3143, "struct tuple2$2sFun$pchar$ph")),equaler_730,(char*)come_increment_ref_count(real_fun_name_731)))));
    (last_code_725 = come_decrement_ref_count(last_code_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_726 = come_decrement_ref_count(last_code2_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_731 = come_decrement_ref_count(real_fun_name_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_732,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value736,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__210,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_765;
char* __dec_obj194;
char* last_code2_766;
char* __dec_obj195;
_Bool comma_instead_of_semicolon_767;
_Bool without_semicolon_768;
struct sClass* current_stack_frame_struct_769;
struct sFun* equaler_770;
void* __right_value737 = (void*)0;
char* real_fun_name_771;
void* __right_value738 = (void*)0;
struct sType* type2_772;
struct sClass* klass_773;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* source_774;
char* name_775;
int i_778;
void* __right_value741 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name12_779;
struct tuple2$2char$phsType$ph* it_780;
struct tuple2$2char$phsType$ph* multiple_assign_var16 = (void*)0;
char* name_781=0;
struct sType* field_type_782=0;
char* p_786;
int sline_787;
char* sname_788;
char* head_789;
struct buffer* source3_790;
struct buffer* __dec_obj196;
void* __right_value742 = (void*)0;
char* __dec_obj197;
void* __right_value743 = (void*)0;
struct sBlock* block_791;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sType* result_type_792;
void* __right_value747 = (void*)0;
char* name_793;
void* __right_value748 = (void*)0;
struct sType* left_type_794;
void* __right_value749 = (void*)0;
struct sType* right_type_795;
struct sType* __list_values19___797[2];
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1sType$ph* param_types_796;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
char* __list_values20___798[2];
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct list$1char$ph* param_names_799;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct list$1char$ph* param_default_parametors_800;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sFun* fun2_801;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sFun* fun_802;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value768 = (void*)0;
struct sNode* node_803;
_Bool Value_804;
void* __right_value769 = (void*)0;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__211;
    last_code_765=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj194=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_766=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj195=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_767=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_768=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_769=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_770=((void*)0);
    real_fun_name_771=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_772=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_772;
    klass_773=type->mClass;
    if(    type->mPointerNum>0&&!klass_773->mNumber) {
        source_774=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3170, "struct buffer*"))));
        buffer_append_char(source_774,123);
        if(        klass_773->mProtocol) {
            name_775="_protocol_obj";
            char source2_776[1024];
            memset(&source2_776, 0, sizeof(char)            *(1024)            );
            snprintf(source2_776,1024,"return !left.%s.equals(right.%s);\n",name_775,name_775);
            buffer_append_str(source_774,source2_776);
        }
        else {
            char source2_777[1024];
            memset(&source2_777, 0, sizeof(char)            *(1024)            );
            snprintf(source2_777,1024,"return !(");
            buffer_append_str(source_774,source2_777);
            i_778=0;
            klass_773=((struct sClass*)(__right_value741=map$2char$phsClass$ph_operator_load_element(info->classes,klass_773->mName)));
            /*c*/ come_call_finalizer3(__right_value741,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            _foreach_var_name12_779=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_773->mFields),            it_780=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name12_779);            !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name12_779);            it_780=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name12_779)            ){
                multiple_assign_var16=it_780;
                name_781=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_782=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_783[1024];
                memset(&source2_783, 0, sizeof(char)                *(1024)                );
                snprintf(source2_783,1024,"left.%s.equals(right.%s)",name_781,name_781);
                buffer_append_str(source_774,source2_783);
                if(                i_778==list$1tuple2$2char$phsType$ph$ph_length(klass_773->mFields)-1) {
                    char source2_784[1024];
                    memset(&source2_784, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_784,1024,");");
                    buffer_append_str(source_774,source2_784);
                }
                else {
                    char source2_785[1024];
                    memset(&source2_785, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_785,1024," && ");
                    buffer_append_str(source_774,source2_785);
                }
                i_778++;
                (name_781 = come_decrement_ref_count(name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_782,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name12_779,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_774,125);
        p_786=info->p;
        sline_787=info->sline;
        sname_788=(char*)come_increment_ref_count(info->sname);
        head_789=info->head;
        source3_790=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_774);
        /*b*/ come_call_finalizer3(__dec_obj196,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_774->buf;
        info->head=source_774->buf;
        __dec_obj197=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_771));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_791=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_792=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3227, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_793=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_771, "05function.c", 3228, "char*"));
        left_type_794=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_794->mHeap=(_Bool)0;
        right_type_795=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_795->mHeap=(_Bool)0;
        param_types_796=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___797[0]=left_type_794,
__list_values19___797[1]=right_type_795,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3233, "struct list$1sType$ph")),2,__list_values19___797)));
        param_names_799=(struct list$1char$ph*)come_increment_ref_count((__list_values20___798[0]=((char*)(__right_value752=__builtin_string("left"))),
__list_values20___798[1]=((char*)(__right_value753=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3234, "struct list$1char$ph")),2,__list_values20___798)));
        (__right_value752 = come_decrement_ref_count(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value753 = come_decrement_ref_count(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_800=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3235, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_800,((void*)0));
        list$1char$ph_push_back(param_default_parametors_800,((void*)0));
        result_type_792->mStatic=(_Bool)0;
        result_type_792->mUniq=(_Bool)0;
        result_type_792->mInline=(_Bool)0;
        fun2_801=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value759=__builtin_string(name_793)))));
        (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value759 = come_decrement_ref_count(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_801==((void*)0)||fun2_801->mExternal) {
            fun_802=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3245, "struct sFun*")),(char*)come_increment_ref_count(name_793),(struct sType*)come_increment_ref_count(result_type_792),(struct list$1sType$ph*)come_increment_ref_count(param_types_796),(struct list$1char$ph*)come_increment_ref_count(param_names_799),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_800),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_791),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_802->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_793)),(struct sFun*)come_increment_ref_count(fun_802));
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3254, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value767=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3254, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_802),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_803=(struct sNode*)come_increment_ref_count(_inf_value13);
            /*c*/ come_call_finalizer3(__right_value767,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_804=node_compile(node_803,info);
            if(            !Value_804) {
                ((struct tuple2$2int$bool$*)(__right_value769=err_msg(info,"compiling error")));
                /*c*/ come_call_finalizer3(__right_value769,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
            }
            equaler_770=fun_802;
            /*c*/ come_call_finalizer3(fun_802,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_803) ? node_803 = come_decrement_ref_count(node_803, ((struct sNode*)node_803)->finalize, ((struct sNode*)node_803)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_770=fun2_801;
        }
        __dec_obj198=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_790);
        /*b*/ come_call_finalizer3(__dec_obj198,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_786;
        info->head=head_789;
        info->sline=sline_787;
        __dec_obj199=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_788);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_774,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_788 = come_decrement_ref_count(sname_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_790,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_791,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_792,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_793 = come_decrement_ref_count(name_793, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_794,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_795,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_796,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_799,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_800,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_801,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_769;
    __dec_obj200=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_765);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj201=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_766);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_767;
    info->without_semicolon=without_semicolon_768;
    __result_obj__211 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value771=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3281, "struct tuple2$2sFun$pchar$ph")),equaler_770,(char*)come_increment_ref_count(real_fun_name_771)))));
    (last_code_765 = come_decrement_ref_count(last_code_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_766 = come_decrement_ref_count(last_code2_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_771 = come_decrement_ref_count(real_fun_name_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_772,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value771,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_805;
char* __dec_obj202;
char* last_code2_806;
char* __dec_obj203;
_Bool comma_instead_of_semicolon_807;
_Bool without_semicolon_808;
struct sClass* current_stack_frame_struct_809;
struct sFun* equaler_810;
void* __right_value772 = (void*)0;
char* real_fun_name_811;
void* __right_value773 = (void*)0;
struct sType* type2_812;
struct sClass* klass_813;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct buffer* source_814;
char* name_815;
void* __right_value776 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name13_818;
struct tuple2$2char$phsType$ph* it_819;
struct tuple2$2char$phsType$ph* multiple_assign_var17 = (void*)0;
char* name_820=0;
struct sType* field_type_821=0;
char* p_823;
int sline_824;
char* sname_825;
char* head_826;
struct buffer* source3_827;
struct buffer* __dec_obj204;
void* __right_value777 = (void*)0;
char* __dec_obj205;
void* __right_value778 = (void*)0;
struct sBlock* block_828;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sType* result_type_829;
void* __right_value782 = (void*)0;
char* name_830;
void* __right_value783 = (void*)0;
struct sType* left_type_831;
void* __right_value784 = (void*)0;
struct sType* right_type_832;
struct sType* __list_values21___834[2];
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1sType$ph* param_types_833;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
char* __list_values22___835[2];
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct list$1char$ph* param_names_836;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct list$1char$ph* param_default_parametors_837;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sFun* fun2_838;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sFun* fun_839;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value803 = (void*)0;
struct sNode* node_840;
_Bool Value_841;
void* __right_value804 = (void*)0;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__212;
    last_code_805=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj202=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_806=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj203=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_807=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_808=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_809=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_810=((void*)0);
    real_fun_name_811=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_812=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_812;
    klass_813=type->mClass;
    if(    type->mPointerNum>0&&!klass_813->mNumber) {
        source_814=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3308, "struct buffer*"))));
        buffer_append_char(source_814,123);
        if(        klass_813->mProtocol) {
            name_815="_protocol_obj";
            char source2_816[1024];
            memset(&source2_816, 0, sizeof(char)            *(1024)            );
            snprintf(source2_816,1024,"return left.%s === right.%s;\n",name_815,name_815);
            buffer_append_str(source_814,source2_816);
        }
        else {
            char source2_817[1024];
            memset(&source2_817, 0, sizeof(char)            *(1024)            );
            klass_813=((struct sClass*)(__right_value776=map$2char$phsClass$ph_operator_load_element(info->classes,klass_813->mName)));
            /*c*/ come_call_finalizer3(__right_value776,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            _foreach_var_name13_818=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_813->mFields),            it_819=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name13_818);            !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name13_818);            it_819=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name13_818)            ){
                multiple_assign_var17=it_819;
                name_820=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_821=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_822[1024];
                memset(&source2_822, 0, sizeof(char)                *(1024)                );
                snprintf(source2_822,1024,"if(left.%s !== right.%s) { return false; }\n",name_820,name_820,name_820);
                buffer_append_str(source_814,source2_822);
                (name_820 = come_decrement_ref_count(name_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_821,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name13_818,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_814,"return true;\n");
        buffer_append_char(source_814,125);
        p_823=info->p;
        sline_824=info->sline;
        sname_825=(char*)come_increment_ref_count(info->sname);
        head_826=info->head;
        source3_827=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj204=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_814);
        /*b*/ come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_814->buf;
        info->head=source_814->buf;
        __dec_obj205=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_811));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_828=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_829=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3350, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_830=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_811, "05function.c", 3351, "char*"));
        left_type_831=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_831->mHeap=(_Bool)0;
        right_type_832=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_832->mHeap=(_Bool)0;
        param_types_833=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___834[0]=left_type_831,
__list_values21___834[1]=right_type_832,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3356, "struct list$1sType$ph")),2,__list_values21___834)));
        param_names_836=(struct list$1char$ph*)come_increment_ref_count((__list_values22___835[0]=((char*)(__right_value787=__builtin_string("left"))),
__list_values22___835[1]=((char*)(__right_value788=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3357, "struct list$1char$ph")),2,__list_values22___835)));
        (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value788 = come_decrement_ref_count(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_837=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3358, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_837,((void*)0));
        list$1char$ph_push_back(param_default_parametors_837,((void*)0));
        result_type_829->mStatic=(_Bool)0;
        result_type_829->mUniq=(_Bool)0;
        result_type_829->mInline=(_Bool)0;
        fun2_838=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value794=__builtin_string(name_830)))));
        (__right_value793 = come_decrement_ref_count(__right_value793, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value794 = come_decrement_ref_count(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_838==((void*)0)||fun2_838->mExternal) {
            fun_839=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3368, "struct sFun*")),(char*)come_increment_ref_count(name_830),(struct sType*)come_increment_ref_count(result_type_829),(struct list$1sType$ph*)come_increment_ref_count(param_types_833),(struct list$1char$ph*)come_increment_ref_count(param_names_836),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_837),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_828),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_839->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_830)),(struct sFun*)come_increment_ref_count(fun_839));
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3377, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value802=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3377, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_839),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_840=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value802,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_841=node_compile(node_840,info);
            if(            !Value_841) {
                ((struct tuple2$2int$bool$*)(__right_value804=err_msg(info,"compiling error(X)")));
                /*c*/ come_call_finalizer3(__right_value804,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
            }
            equaler_810=fun_839;
            /*c*/ come_call_finalizer3(fun_839,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_840) ? node_840 = come_decrement_ref_count(node_840, ((struct sNode*)node_840)->finalize, ((struct sNode*)node_840)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_810=fun2_838;
        }
        __dec_obj206=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_827);
        /*b*/ come_call_finalizer3(__dec_obj206,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_823;
        info->head=head_826;
        info->sline=sline_824;
        __dec_obj207=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_825);
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_814,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_825 = come_decrement_ref_count(sname_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_827,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_828,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_829,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_830 = come_decrement_ref_count(name_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_831,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_832,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_833,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_836,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_837,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_838,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_809;
    __dec_obj208=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_805);
    __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj209=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_806);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_807;
    info->without_semicolon=without_semicolon_808;
    __result_obj__212 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value806=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3404, "struct tuple2$2sFun$pchar$ph")),equaler_810,(char*)come_increment_ref_count(real_fun_name_811)))));
    (last_code_805 = come_decrement_ref_count(last_code_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_806 = come_decrement_ref_count(last_code2_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_811 = come_decrement_ref_count(real_fun_name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_812,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value806,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__213;
char* last_code_842;
char* __dec_obj210;
char* last_code2_843;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_844;
_Bool without_semicolon_845;
struct sClass* current_stack_frame_struct_846;
struct sFun* cloner_847;
void* __right_value809 = (void*)0;
char* real_fun_name_848;
void* __right_value810 = (void*)0;
struct sType* type2_849;
struct sClass* klass_850;
char* fun_name2_851;
void* __right_value811 = (void*)0;
char* none_generics_name_852;
void* __right_value812 = (void*)0;
struct sType* obj_type_853;
void* __right_value813 = (void*)0;
char* __dec_obj212;
void* __right_value814 = (void*)0;
char* fun_name3_854;
void* __right_value815 = (void*)0;
struct sGenericsFun* generics_fun_855;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var18 = (void*)0;
char* name_856=0;
_Bool err_857=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__214;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
char* __dec_obj213;
void* __right_value822 = (void*)0;
char* __dec_obj214;
int i_858;
void* __right_value823 = (void*)0;
char* new_fun_name_859;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
char* __dec_obj215;
void* __right_value826 = (void*)0;
char* __dec_obj216;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct buffer* source_860;
void* __right_value829 = (void*)0;
char* name_861;
void* __right_value830 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name14_863;
struct tuple2$2char$phsType$ph* it_864;
struct tuple2$2char$phsType$ph* multiple_assign_var19 = (void*)0;
char* name_865=0;
struct sType* field_type_866=0;
void* __right_value831 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name15_869;
struct tuple2$2char$phsType$ph* it_870;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* name_871=0;
struct sType* field_type_872=0;
void* __right_value832 = (void*)0;
char* user_real_fun_name_876;
void* __right_value833 = (void*)0;
struct sFun* user_cloner_877;
char* p_879;
int sline_880;
char* sname_881;
struct buffer* source3_882;
char* head_883;
struct buffer* __dec_obj217;
void* __right_value834 = (void*)0;
char* __dec_obj218;
void* __right_value835 = (void*)0;
struct sBlock* block_884;
void* __right_value836 = (void*)0;
struct sType* result_type_885;
void* __right_value837 = (void*)0;
char* name_886;
void* __right_value838 = (void*)0;
struct sType* self_type_887;
struct sType* __list_values23___889[1];
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1sType$ph* param_types_888;
void* __right_value841 = (void*)0;
char* __list_values24___890[1];
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1char$ph* param_names_891;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct list$1char$ph* param_default_parametors_892;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sFun* fun2_893;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sFun* fun_894;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value856 = (void*)0;
struct sNode* node_895;
_Bool Value_896;
void* __right_value857 = (void*)0;
char* __dec_obj219;
struct buffer* __dec_obj220;
char* __dec_obj221;
char* __dec_obj222;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__215;
fun_name2_851 = (void*)0;
memset(&i_858, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__213 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value808=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3410, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        /*c*/ come_call_finalizer3(__right_value808,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__213,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__213;
    }
    last_code_842=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_843=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_844=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_845=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_846=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_847=((void*)0);
    real_fun_name_848=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_849=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_849;
    klass_850=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_852=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_853=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj212=fun_name2_851,
        fun_name2_851=(char*)come_increment_ref_count(create_method_name(obj_type_853,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_854=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_852,fun_name));
        generics_fun_855=((struct sGenericsFun*)(__right_value815=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_854,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value815,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_855) {
            multiple_assign_var18=((struct tuple2$2char$phbool$*)(__right_value817=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_851)),generics_fun_855,obj_type_853,info)));
            name_856=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            err_857=multiple_assign_var18->v2;
            /*c*/ come_call_finalizer3(__right_value817,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_857) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__214 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value819=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3452, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_856 = come_decrement_ref_count(name_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_852 = come_decrement_ref_count(none_generics_name_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(obj_type_853,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name3_854 = come_decrement_ref_count(fun_name3_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_842 = come_decrement_ref_count(last_code_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_843 = come_decrement_ref_count(last_code2_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_848 = come_decrement_ref_count(real_fun_name_848, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_849,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_851 = come_decrement_ref_count(fun_name2_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value819,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__214,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__214;
                }
            }
            cloner_847=((struct sFun*)(__right_value820=map$2char$phsFun$ph_operator_load_element(info->funcs,name_856)));
            /*c*/ come_call_finalizer3(__right_value820,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_856 = come_decrement_ref_count(name_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_847=((struct sFun*)(__right_value821=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_851)));
            /*c*/ come_call_finalizer3(__right_value821,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj213=real_fun_name_848,
        real_fun_name_848=(char*)come_increment_ref_count(fun_name2_851);
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (none_generics_name_852 = come_decrement_ref_count(none_generics_name_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_853,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_854 = come_decrement_ref_count(fun_name3_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj214=fun_name2_851,
        fun_name2_851=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_858=128-1;        i_858>=1;        i_858--        ){
            new_fun_name_859=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_851,i_858));
            cloner_847=((struct sFun*)(__right_value824=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_859)));
            /*c*/ come_call_finalizer3(__right_value824,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_847) {
                __dec_obj215=fun_name2_851,
                fun_name2_851=(char*)come_increment_ref_count(__builtin_string(new_fun_name_859));
                __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_859 = come_decrement_ref_count(new_fun_name_859, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_859 = come_decrement_ref_count(new_fun_name_859, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_847==((void*)0)) {
            cloner_847=((struct sFun*)(__right_value826=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_851)));
            /*c*/ come_call_finalizer3(__right_value826,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj216=real_fun_name_848,
        real_fun_name_848=(char*)come_increment_ref_count(fun_name2_851);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    cloner_847==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_860=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3487, "struct buffer*"))));
        buffer_append_str(source_860,"{\n");
        buffer_append_str(source_860,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_860,"var result = new %s;\n",((char*)(__right_value829=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value829 = come_decrement_ref_count(__right_value829, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_850->mProtocol) {
            name_861="_protocol_obj";
            char source2_862[1024];
            memset(&source2_862, 0, sizeof(char)            *(1024)            );
            snprintf(source2_862,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_860,source2_862);
            klass_850=((struct sClass*)(__right_value830=map$2char$phsClass$ph_operator_load_element(info->classes,klass_850->mName)));
            /*c*/ come_call_finalizer3(__right_value830,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            _foreach_var_name14_863=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_850->mFields),            it_864=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name14_863);            !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name14_863);            it_864=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name14_863)            ){
                multiple_assign_var19=it_864;
                name_865=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_866=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                string_operator_equals(name_865,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph_length(field_type_866->mArrayNum)>0) {
                    char source2_867[1024];
                    memset(&source2_867, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_867,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_865,name_865,name_865);
                    buffer_append_str(source_860,source2_867);
                }
                else {
                    char source2_868[1024];
                    memset(&source2_868, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_868,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_865,name_865);
                    buffer_append_str(source_860,source2_868);
                }
                (name_865 = come_decrement_ref_count(name_865, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_866,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name14_863,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_850=((struct sClass*)(__right_value831=map$2char$phsClass$ph_operator_load_element(info->classes,klass_850->mName)));
            /*c*/ come_call_finalizer3(__right_value831,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            _foreach_var_name15_869=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_850->mFields),            it_870=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name15_869);            !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name15_869);            it_870=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name15_869)            ){
                multiple_assign_var20=it_870;
                name_871=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type_872=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                field_type_872->mHeap) {
                    char source2_873[1024];
                    memset(&source2_873, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_873,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_871,name_871,name_871);
                    buffer_append_str(source_860,source2_873);
                }
                else if(                list$1sNode$ph_length(field_type_872->mArrayNum)>0) {
                    char source2_874[1024];
                    memset(&source2_874, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_874,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_871,name_871,name_871);
                    buffer_append_str(source_860,source2_874);
                }
                else {
                    char source2_875[1024];
                    memset(&source2_875, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_875,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_871,name_871);
                    buffer_append_str(source_860,source2_875);
                }
                (name_871 = come_decrement_ref_count(name_871, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_872,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name15_869,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        user_real_fun_name_876=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_877=((struct sFun*)(__right_value833=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_876)));
        /*c*/ come_call_finalizer3(__right_value833,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        user_cloner_877) {
            char source2_878[1024];
            memset(&source2_878, 0, sizeof(char)            *(1024)            );
            snprintf(source2_878,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_876);
            buffer_append_str(source_860,source2_878);
        }
        buffer_append_format(source_860,"return result;");
        buffer_append_char(source_860,125);
        p_879=info->p;
        sline_880=info->sline;
        sname_881=(char*)come_increment_ref_count(info->sname);
        source3_882=(struct buffer*)come_increment_ref_count(info->source);
        head_883=info->head;
        __dec_obj217=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_860);
        /*b*/ come_call_finalizer3(__dec_obj217,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj218=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_848));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_884=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_885=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_886=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_848, "05function.c", 3575, "char*"));
        self_type_887=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_887->mHeap=(_Bool)0;
        param_types_888=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___889[0]=self_type_887,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3578, "struct list$1sType$ph")),1,__list_values23___889)));
        param_names_891=(struct list$1char$ph*)come_increment_ref_count((__list_values24___890[0]=((char*)(__right_value841=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3579, "struct list$1char$ph")),1,__list_values24___890)));
        (__right_value841 = come_decrement_ref_count(__right_value841, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_892=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3580, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_892,((void*)0));
        result_type_885->mStatic=(_Bool)0;
        result_type_885->mUniq=(_Bool)0;
        result_type_885->mInline=(_Bool)0;
        fun2_893=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value847=__builtin_string(name_886)))));
        (__right_value846 = come_decrement_ref_count(__right_value846, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value847 = come_decrement_ref_count(__right_value847, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_893==((void*)0)||fun2_893->mExternal) {
            fun_894=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3590, "struct sFun*")),(char*)come_increment_ref_count(name_886),(struct sType*)come_increment_ref_count(result_type_885),(struct list$1sType$ph*)come_increment_ref_count(param_types_888),(struct list$1char$ph*)come_increment_ref_count(param_names_891),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_892),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_884),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_894->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_886)),(struct sFun*)come_increment_ref_count(fun_894));
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3599, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value855=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3599, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_894),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_895=(struct sNode*)come_increment_ref_count(_inf_value15);
            /*c*/ come_call_finalizer3(__right_value855,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_896=node_compile(node_895,info);
            if(            !Value_896) {
                ((struct tuple2$2int$bool$*)(__right_value857=err_msg(info,"compiling error(Y)")));
                /*c*/ come_call_finalizer3(__right_value857,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
            }
            cloner_847=fun_894;
            /*c*/ come_call_finalizer3(fun_894,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_895) ? node_895 = come_decrement_ref_count(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_847=fun2_893;
        }
        __dec_obj219=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_881);
        __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_880;
        __dec_obj220=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_882);
        /*b*/ come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_879;
        info->head=head_883;
        info->sline=sline_880;
        /*c*/ come_call_finalizer3(source_860,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (user_real_fun_name_876 = come_decrement_ref_count(user_real_fun_name_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_881 = come_decrement_ref_count(sname_881, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_882,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_884,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_886 = come_decrement_ref_count(name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_887,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_888,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_891,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_892,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_893,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_846;
    __dec_obj221=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_842);
    __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj222=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_843);
    __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_844;
    info->without_semicolon=without_semicolon_845;
    __result_obj__215 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value859=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3628, "struct tuple2$2sFun$pchar$ph")),cloner_847,(char*)come_increment_ref_count(real_fun_name_848)))));
    (last_code_842 = come_decrement_ref_count(last_code_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_843 = come_decrement_ref_count(last_code2_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_848 = come_decrement_ref_count(real_fun_name_848, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_849,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_851 = come_decrement_ref_count(fun_name2_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value859,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_931;
char* __dec_obj231;
char* last_code2_932;
char* __dec_obj232;
_Bool comma_instead_of_semicolon_933;
_Bool without_semicolon_934;
struct sClass* current_stack_frame_struct_935;
struct sFun* to_string_fun_936;
void* __right_value893 = (void*)0;
char* real_fun_name_937;
void* __right_value894 = (void*)0;
struct sType* type_before_938;
void* __right_value895 = (void*)0;
struct sType* type2_939;
struct sClass* klass_940;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
char* none_generics_name_941;
void* __right_value898 = (void*)0;
char* generics_fun_name_942;
void* __right_value899 = (void*)0;
struct sGenericsFun* generics_fun_943;
void* __right_value900 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var22 = (void*)0;
char* name_944=0;
_Bool err_945=0;
void* __right_value901 = (void*)0;
int i_946;
void* __right_value902 = (void*)0;
char* new_fun_name_947;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
char* __dec_obj233;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct buffer* source_948;
int i_949;
void* __right_value908 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name17_950;
struct tuple2$2char$phsType$ph* it_951;
struct tuple2$2char$phsType$ph* multiple_assign_var23 = (void*)0;
char* name_952=0;
struct sType* field_type_953=0;
char* p_957;
int sline_958;
char* sname_959;
struct buffer* source3_960;
char* head_961;
struct buffer* __dec_obj234;
void* __right_value909 = (void*)0;
char* __dec_obj235;
void* __right_value910 = (void*)0;
struct sBlock* block_962;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sType* result_type_963;
void* __right_value914 = (void*)0;
char* name_964;
void* __right_value915 = (void*)0;
struct sType* self_type_965;
void* __right_value916 = (void*)0;
struct sType* __dec_obj236;
struct sType* __list_values27___967[1];
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sType$ph* param_types_966;
void* __right_value919 = (void*)0;
char* __list_values28___968[1];
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct list$1char$ph* param_names_969;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct list$1char$ph* param_default_parametors_970;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sFun* fun2_971;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sFun* fun_972;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value934 = (void*)0;
struct sNode* node_973;
_Bool Value_974;
void* __right_value935 = (void*)0;
char* __dec_obj237;
struct buffer* __dec_obj238;
char* __dec_obj239;
char* __dec_obj240;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__217;
memset(&i_946, 0, sizeof(int));
    last_code_931=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj231=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_932=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj232=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_933=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_934=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_935=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun_936=((void*)0);
    real_fun_name_937=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before_938=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_939=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_939;
    klass_940=type->mClass;
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        to_string_fun_936=((struct sFun*)(__right_value896=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_937)));
        /*c*/ come_call_finalizer3(__right_value896,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        to_string_fun_936==((void*)0)) {
            none_generics_name_941=(char*)come_increment_ref_count(get_none_generics_name(type2_939->mClass->mName));
            generics_fun_name_942=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_941,fun_name));
            generics_fun_943=((struct sGenericsFun*)(__right_value899=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_942)));
            /*c*/ come_call_finalizer3(__right_value899,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_943) {
                multiple_assign_var22=((struct tuple2$2char$phbool$*)(__right_value900=create_generics_fun((char*)come_increment_ref_count(real_fun_name_937),generics_fun_943,type,info)));
                name_944=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                err_945=multiple_assign_var22->v2;
                /*c*/ come_call_finalizer3(__right_value900,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_945) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun_936=((struct sFun*)(__right_value901=map$2char$phsFun$ph_operator_load_element(info->funcs,name_944)));
                /*c*/ come_call_finalizer3(__right_value901,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_944 = come_decrement_ref_count(name_944, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_941 = come_decrement_ref_count(none_generics_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_942 = come_decrement_ref_count(generics_fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_946=128-1;        i_946>=1;        i_946--        ){
            new_fun_name_947=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_937,i_946));
            to_string_fun_936=((struct sFun*)(__right_value903=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_947)));
            /*c*/ come_call_finalizer3(__right_value903,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            to_string_fun_936) {
                __dec_obj233=real_fun_name_937,
                real_fun_name_937=(char*)come_increment_ref_count(__builtin_string(new_fun_name_947));
                __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_947 = come_decrement_ref_count(new_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_947 = come_decrement_ref_count(new_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        to_string_fun_936==((void*)0)) {
            to_string_fun_936=((struct sFun*)(__right_value905=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_937)));
            /*c*/ come_call_finalizer3(__right_value905,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    to_string_fun_936==((void*)0)&&type->mPointerNum>0&&!klass_940->mNumber) {
        source_948=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3839, "struct buffer*"))));
        buffer_append_str(source_948,"{\n");
        buffer_append_str(source_948,"var result = new buffer();\n");
        buffer_append_format(source_948,"result.append_str(\"%s {\");\n",klass_940->mName);
        i_949=0;
        klass_940=((struct sClass*)(__right_value908=map$2char$phsClass$ph_operator_load_element(info->classes,klass_940->mName)));
        /*c*/ come_call_finalizer3(__right_value908,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        _foreach_var_name17_950=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_940->mFields),        it_951=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name17_950);        !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name17_950);        it_951=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name17_950)        ){
            multiple_assign_var23=it_951;
            name_952=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type_953=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            string_operator_equals(field_type_953->mClass->mName,"lambda")) {
                char source2_954[1024];
                memset(&source2_954, 0, sizeof(char)                *(1024)                );
                snprintf(source2_954,1024,"result.append_str(\"%s:\");\n",name_952);
                buffer_append_str(source_948,source2_954);
                snprintf(source2_954,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source_948,source2_954);
            }
            else if(            i_949==list$1tuple2$2char$phsType$ph$ph_length(klass_940->mFields)-1) {
                char source2_955[1024];
                memset(&source2_955, 0, sizeof(char)                *(1024)                );
                snprintf(source2_955,1024,"result.append_str(\"%s:\");\n",name_952);
                buffer_append_str(source_948,source2_955);
                snprintf(source2_955,1024,"result.append_str(self.%s.to_string());\n",name_952);
                buffer_append_str(source_948,source2_955);
            }
            else {
                char source2_956[1024];
                memset(&source2_956, 0, sizeof(char)                *(1024)                );
                snprintf(source2_956,1024,"result.append_str(\"%s:\");\n",name_952);
                buffer_append_str(source_948,source2_956);
                snprintf(source2_956,1024,"result.append_str(self.%s.to_string());\n",name_952);
                buffer_append_str(source_948,source2_956);
                snprintf(source2_956,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_948,source2_956);
            }
            i_949++;
            (name_952 = come_decrement_ref_count(name_952, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_953,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(_foreach_var_name17_950,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(source_948,"result.append_str(\"}\");\n");
        buffer_append_format(source_948,"return result.to_string();\n");
        buffer_append_char(source_948,125);
        p_957=info->p;
        sline_958=info->sline;
        sname_959=(char*)come_increment_ref_count(info->sname);
        source3_960=(struct buffer*)come_increment_ref_count(info->source);
        head_961=info->head;
        __dec_obj234=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_948);
        /*b*/ come_call_finalizer3(__dec_obj234,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj235=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_937));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_962=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_963=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3908, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_963->mHeap=(_Bool)1;
        name_964=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_937, "05function.c", 3910, "char*"));
        self_type_965=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj236=self_type_965,
        self_type_965=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        /*b*/ come_call_finalizer3(__dec_obj236,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self_type_965->mHeap=(_Bool)0;
        param_types_966=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___967[0]=self_type_965,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3915, "struct list$1sType$ph")),1,__list_values27___967)));
        param_names_969=(struct list$1char$ph*)come_increment_ref_count((__list_values28___968[0]=((char*)(__right_value919=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3916, "struct list$1char$ph")),1,__list_values28___968)));
        (__right_value919 = come_decrement_ref_count(__right_value919, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_970=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3917, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_970,((void*)0));
        result_type_963->mStatic=(_Bool)0;
        result_type_963->mUniq=(_Bool)0;
        result_type_963->mInline=(_Bool)0;
        fun2_971=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value925=__builtin_string(name_964)))));
        (__right_value924 = come_decrement_ref_count(__right_value924, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value925 = come_decrement_ref_count(__right_value925, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_971==((void*)0)||fun2_971->mExternal) {
            fun_972=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3926, "struct sFun*")),(char*)come_increment_ref_count(name_964),(struct sType*)come_increment_ref_count(result_type_963),(struct list$1sType$ph*)come_increment_ref_count(param_types_966),(struct list$1char$ph*)come_increment_ref_count(param_names_969),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_970),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_962),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_972->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_964)),(struct sFun*)come_increment_ref_count(fun_972));
            to_string_fun_936=fun_972;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3937, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value933=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3937, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_972),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_973=(struct sNode*)come_increment_ref_count(_inf_value17);
            /*c*/ come_call_finalizer3(__right_value933,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_974=node_compile(node_973,info);
            if(            !Value_974) {
                ((struct tuple2$2int$bool$*)(__right_value935=err_msg(info,"compiling error(Y)")));
                /*c*/ come_call_finalizer3(__right_value935,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_972,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_973) ? node_973 = come_decrement_ref_count(node_973, ((struct sNode*)node_973)->finalize, ((struct sNode*)node_973)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            to_string_fun_936=fun2_971;
        }
        __dec_obj237=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_959);
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_958;
        __dec_obj238=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_960);
        /*b*/ come_call_finalizer3(__dec_obj238,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_957;
        info->head=head_961;
        info->sline=sline_958;
        /*c*/ come_call_finalizer3(source_948,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_959 = come_decrement_ref_count(sname_959, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_960,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_962,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_963,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_964 = come_decrement_ref_count(name_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_965,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_966,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_969,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_970,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_971,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_935;
    __dec_obj239=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_931);
    __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj240=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_932);
    __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_933;
    info->without_semicolon=without_semicolon_934;
    __result_obj__217 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value937=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3964, "struct tuple2$2sFun$pchar$ph")),to_string_fun_936,(char*)come_increment_ref_count(real_fun_name_937)))));
    (last_code_931 = come_decrement_ref_count(last_code_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_932 = come_decrement_ref_count(last_code2_932, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_937 = come_decrement_ref_count(real_fun_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_938,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_939,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value937,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_975;
char* __dec_obj241;
char* last_code2_976;
char* __dec_obj242;
_Bool comma_instead_of_semicolon_977;
_Bool without_semicolon_978;
struct sClass* current_stack_frame_struct_979;
struct sFun* get_hash_key_fun_980;
void* __right_value938 = (void*)0;
char* real_fun_name_981;
void* __right_value939 = (void*)0;
struct sType* type2_982;
struct sClass* klass_983;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
char* none_generics_name_984;
void* __right_value942 = (void*)0;
char* generics_fun_name_985;
void* __right_value943 = (void*)0;
struct sGenericsFun* generics_fun_986;
void* __right_value944 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var24 = (void*)0;
char* name_987=0;
_Bool err_988=0;
void* __right_value945 = (void*)0;
int i_989;
void* __right_value946 = (void*)0;
char* new_fun_name_990;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
char* __dec_obj243;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct buffer* source_991;
int i_992;
void* __right_value952 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name18_993;
struct tuple2$2char$phsType$ph* it_994;
struct tuple2$2char$phsType$ph* multiple_assign_var25 = (void*)0;
char* name_995=0;
struct sType* field_type_996=0;
char* p_998;
int sline_999;
char* sname_1000;
struct buffer* source3_1001;
char* head_1002;
struct buffer* __dec_obj244;
void* __right_value953 = (void*)0;
char* __dec_obj245;
void* __right_value954 = (void*)0;
struct sBlock* block_1003;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sType* result_type_1004;
void* __right_value958 = (void*)0;
char* name_1005;
void* __right_value959 = (void*)0;
struct sType* self_type_1006;
struct sType* __list_values29___1008[1];
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct list$1sType$ph* param_types_1007;
void* __right_value962 = (void*)0;
char* __list_values30___1009[1];
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct list$1char$ph* param_names_1010;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct list$1char$ph* param_default_parametors_1011;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sFun* fun2_1012;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sFun* fun_1013;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sNode* _inf_value18;
struct sFunNode* _inf_obj_value18;
void* __right_value977 = (void*)0;
struct sNode* node_1014;
_Bool Value_1015;
void* __right_value978 = (void*)0;
char* __dec_obj246;
struct buffer* __dec_obj247;
char* __dec_obj248;
char* __dec_obj249;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__218;
memset(&i_989, 0, sizeof(int));
    last_code_975=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj241=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_976=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj242=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_977=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_978=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    current_stack_frame_struct_979=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_980=((void*)0);
    real_fun_name_981=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_982=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_982;
    klass_983=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_980=((struct sFun*)(__right_value940=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_981)));
        /*c*/ come_call_finalizer3(__right_value940,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        get_hash_key_fun_980==((void*)0)) {
            none_generics_name_984=(char*)come_increment_ref_count(get_none_generics_name(type2_982->mClass->mName));
            generics_fun_name_985=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_984,fun_name));
            generics_fun_986=((struct sGenericsFun*)(__right_value943=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_985)));
            /*c*/ come_call_finalizer3(__right_value943,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_986) {
                multiple_assign_var24=((struct tuple2$2char$phbool$*)(__right_value944=create_generics_fun((char*)come_increment_ref_count(real_fun_name_981),generics_fun_986,type,info)));
                name_987=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                err_988=multiple_assign_var24->v2;
                /*c*/ come_call_finalizer3(__right_value944,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_988) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_980=((struct sFun*)(__right_value945=map$2char$phsFun$ph_operator_load_element(info->funcs,name_987)));
                /*c*/ come_call_finalizer3(__right_value945,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_987 = come_decrement_ref_count(name_987, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_984 = come_decrement_ref_count(none_generics_name_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_985 = come_decrement_ref_count(generics_fun_name_985, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_989=128-1;        i_989>=1;        i_989--        ){
            new_fun_name_990=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_981,i_989));
            get_hash_key_fun_980=((struct sFun*)(__right_value947=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_990)));
            /*c*/ come_call_finalizer3(__right_value947,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            get_hash_key_fun_980) {
                __dec_obj243=real_fun_name_981,
                real_fun_name_981=(char*)come_increment_ref_count(__builtin_string(new_fun_name_990));
                __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_990 = come_decrement_ref_count(new_fun_name_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_990 = come_decrement_ref_count(new_fun_name_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_980==((void*)0)) {
            get_hash_key_fun_980=((struct sFun*)(__right_value949=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_981)));
            /*c*/ come_call_finalizer3(__right_value949,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    get_hash_key_fun_980==((void*)0)&&type->mPointerNum>0&&!klass_983->mNumber&&!klass_983->mProtocol) {
        source_991=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 4036, "struct buffer*"))));
        buffer_append_str(source_991,"{\n");
        buffer_append_str(source_991,"unsigned int result = 0;\n");
        i_992=0;
        klass_983=((struct sClass*)(__right_value952=map$2char$phsClass$ph_operator_load_element(info->classes,klass_983->mName)));
        /*c*/ come_call_finalizer3(__right_value952,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        _foreach_var_name18_993=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_983->mFields),        it_994=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name18_993);        !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name18_993);        it_994=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name18_993)        ){
            multiple_assign_var25=it_994;
            name_995=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            field_type_996=(struct sType*)come_increment_ref_count(multiple_assign_var25->v2);
            char source2_997[1024];
            memset(&source2_997, 0, sizeof(char)            *(1024)            );
            snprintf(source2_997,1024,"result += ((int)self.%s).get_hash_key();\n",name_995);
            buffer_append_str(source_991,source2_997);
            i_992++;
            (name_995 = come_decrement_ref_count(name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_996,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(_foreach_var_name18_993,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_format(source_991,"return result;\n");
        buffer_append_char(source_991,125);
        p_998=info->p;
        sline_999=info->sline;
        sname_1000=(char*)come_increment_ref_count(info->sname);
        source3_1001=(struct buffer*)come_increment_ref_count(info->source);
        head_1002=info->head;
        __dec_obj244=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_991);
        /*b*/ come_call_finalizer3(__dec_obj244,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj245=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_981));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1003=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1004=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 4073, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1004->mUnsigned=(_Bool)1;
        name_1005=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_981, "05function.c", 4075, "char*"));
        self_type_1006=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1006->mHeap=(_Bool)0;
        param_types_1007=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___1008[0]=self_type_1006,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4078, "struct list$1sType$ph")),1,__list_values29___1008)));
        param_names_1010=(struct list$1char$ph*)come_increment_ref_count((__list_values30___1009[0]=((char*)(__right_value962=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4079, "struct list$1char$ph")),1,__list_values30___1009)));
        (__right_value962 = come_decrement_ref_count(__right_value962, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1011=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4080, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1011,((void*)0));
        result_type_1004->mStatic=(_Bool)0;
        result_type_1004->mUniq=(_Bool)0;
        result_type_1004->mInline=(_Bool)0;
        fun2_1012=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value968=__builtin_string(name_1005)))));
        (__right_value967 = come_decrement_ref_count(__right_value967, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value968 = come_decrement_ref_count(__right_value968, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1012==((void*)0)||fun2_1012->mExternal) {
            fun_1013=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4089, "struct sFun*")),(char*)come_increment_ref_count(name_1005),(struct sType*)come_increment_ref_count(result_type_1004),(struct list$1sType$ph*)come_increment_ref_count(param_types_1007),(struct list$1char$ph*)come_increment_ref_count(param_names_1010),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1011),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1003),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_1013->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1005)),(struct sFun*)come_increment_ref_count(fun_1013));
            get_hash_key_fun_980=fun_1013;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4100, "struct sNode");
            _inf_obj_value18=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value976=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4100, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1013),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sFunNode_finalize;
            _inf_value18->clone=(void*)sFunNode_clone;
            _inf_value18->compile=(void*)sFunNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sFunNode_kind;
            node_1014=(struct sNode*)come_increment_ref_count(_inf_value18);
            /*c*/ come_call_finalizer3(__right_value976,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1015=node_compile(node_1014,info);
            if(            !Value_1015) {
                ((struct tuple2$2int$bool$*)(__right_value978=err_msg(info,"compiling error(Y)")));
                /*c*/ come_call_finalizer3(__right_value978,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1013,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1014) ? node_1014 = come_decrement_ref_count(node_1014, ((struct sNode*)node_1014)->finalize, ((struct sNode*)node_1014)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_980=fun2_1012;
        }
        __dec_obj246=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1000);
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_999;
        __dec_obj247=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1001);
        /*b*/ come_call_finalizer3(__dec_obj247,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_998;
        info->head=head_1002;
        info->sline=sline_999;
        /*c*/ come_call_finalizer3(source_991,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1000 = come_decrement_ref_count(sname_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1001,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1003,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1004,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1005 = come_decrement_ref_count(name_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1006,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1007,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1010,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1011,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1012,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_979;
    __dec_obj248=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_975);
    __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj249=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_976);
    __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_977;
    info->without_semicolon=without_semicolon_978;
    __result_obj__218 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value980=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4127, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_980,(char*)come_increment_ref_count(real_fun_name_981)))));
    (last_code_975 = come_decrement_ref_count(last_code_975, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_976 = come_decrement_ref_count(last_code2_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_981 = come_decrement_ref_count(real_fun_name_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_982,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value980,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info){
struct sFun* caller_fun_1016;
int caller_line_1017;
char* caller_sname_1018;
_Bool comma_instead_of_semicolon_1019;
_Bool without_semicolon_1020;
char* last_code_1021;
char* __dec_obj250;
char* last_code2_1022;
char* __dec_obj251;
void* __right_value981 = (void*)0;
char* sname_top_1023;
int sline_top_1024;
struct sType* result_type_1025;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct list$1sType$ph* param_types_1026;
struct list$1sType$ph* _foreach_var_name19_1027;
struct sType* it_1028;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct list$1char$ph* param_names_1029;
void* __right_value986 = (void*)0;
struct list$1char$ph* param_default_parametors_1030;
char* p_1031;
int sline_1032;
char* sname_1033;
char* head_1034;
struct buffer* source_1035;
void* __right_value987 = (void*)0;
struct buffer* __dec_obj252;
char* __dec_obj253;
void* __right_value988 = (void*)0;
struct sBlock* block_1036;
struct buffer* __dec_obj254;
char* __dec_obj255;
_Bool const_fun_1037;
_Bool var_args_1038;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct sFun* fun2_1039;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sNode* _inf_value19;
struct sFunNode* _inf_obj_value19;
void* __right_value995 = (void*)0;
struct sNode* node_1040;
_Bool Value_1041;
struct sFun* __result_obj__219;
void* __right_value996 = (void*)0;
char* __dec_obj256;
char* __dec_obj257;
char* __dec_obj258;
struct sFun* __result_obj__220;
    caller_fun_1016=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_1017=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_1018=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_1019=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_1020=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_1021=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj250=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1022=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj251=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_1023=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_1024=info->sline;
    result_type_1025=(struct sType*)come_increment_ref_count(fun->mResultType);
    param_types_1026=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4153, "struct list$1sType$ph*"))));
    for(    _foreach_var_name19_1027=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),    it_1028=list$1sType$ph_begin(_foreach_var_name19_1027);    !list$1sType$ph_end(_foreach_var_name19_1027);    it_1028=list$1sType$ph_next(_foreach_var_name19_1027)    ){
        list$1sType$ph_add(param_types_1026,(struct sType*)come_increment_ref_count(sType_clone(it_1028)));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name19_1027,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_1029=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames));
    param_default_parametors_1030=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors));
    p_1031=info->p;
    sline_1032=info->sline;
    sname_1033=(char*)come_increment_ref_count(info->sname);
    head_1034=info->head;
    source_1035=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj252=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(fun->mTextBlock));
    /*b*/ come_call_finalizer3(__dec_obj252,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=fun->mTextBlockSline;
    __dec_obj253=info->sname,
    info->sname=(char*)come_increment_ref_count(fun->mTextBlockSName);
    __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_1036=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_1034;
    __dec_obj254=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_1035);
    /*b*/ come_call_finalizer3(__dec_obj254,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_1031;
    info->sline=sline_1032;
    __dec_obj255=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_1033);
    __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_1025->mInline=(_Bool)0;
    result_type_1025->mStatic=(_Bool)0;
    result_type_1025->mUniq=(_Bool)0;
    const_fun_1037=fun->mConstFun;
    var_args_1038=fun->mVarArgs;
    fun2_1039=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4189, "struct sFun*")),(char*)come_increment_ref_count(fun->mName),(struct sType*)come_increment_ref_count(result_type_1025),(struct list$1sType$ph*)come_increment_ref_count(param_types_1026),(struct list$1char$ph*)come_increment_ref_count(param_names_1029),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1030),(_Bool)0,var_args_1038,(struct sBlock*)come_increment_ref_count(block_1036),(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_1037,((void*)0),((void*)0),0,(_Bool)0));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4194, "struct sNode");
    _inf_obj_value19=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value994=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4194, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun2_1039),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sFunNode_finalize;
    _inf_value19->clone=(void*)sFunNode_clone;
    _inf_value19->compile=(void*)sFunNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sFunNode_kind;
    node_1040=(struct sNode*)come_increment_ref_count(_inf_value19);
    /*c*/ come_call_finalizer3(__right_value994,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_1041=node_compile(node_1040,info);
    if(    !Value_1041) {
        __result_obj__219 = (void*)come_increment_ref_count(((void*)0));
        (last_code_1021 = come_decrement_ref_count(last_code_1021, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_1022 = come_decrement_ref_count(last_code2_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_1023 = come_decrement_ref_count(sname_top_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_1025,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1026,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1029,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1030,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1033 = come_decrement_ref_count(sname_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_1035,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1036,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1039,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_1040) ? node_1040 = come_decrement_ref_count(node_1040, ((struct sNode*)node_1040)->finalize, ((struct sNode*)node_1040)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__result_obj__219,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__219;
    }
    else {
    }
    __dec_obj256=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_1023));
    __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_1024;
    __dec_obj257=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1021);
    __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj258=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1022);
    __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_1016;
    info->caller_line=caller_line_1017;
    info->caller_sname=caller_sname_1018;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1019;
    info->without_semicolon=without_semicolon_1020;
    __result_obj__220 = (struct sFun*)come_increment_ref_count(fun2_1039);
    (last_code_1021 = come_decrement_ref_count(last_code_1021, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1022 = come_decrement_ref_count(last_code2_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_1023 = come_decrement_ref_count(sname_top_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_1025,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_1026,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_1029,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_1030,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_1033 = come_decrement_ref_count(sname_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_1035,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_1036,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun2_1039,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node_1040) ? node_1040 = come_decrement_ref_count(node_1040, ((struct sNode*)node_1040)->finalize, ((struct sNode*)node_1040)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__220,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_1042;
struct list$1CVALUE$ph* stack_saved_1043;
struct list$1sRightValueObject$ph* right_value_objects_1044;
struct sClass* klass_1045;
char* class_name_1046;
char* fun_name_1047;
void* __right_value997 = (void*)0;
struct sType* type2_1048;
struct sFun* cloner_1049;
char* fun_name2_1050;
void* __right_value998 = (void*)0;
char* none_generics_name_1051;
void* __right_value999 = (void*)0;
struct sType* obj_type_1052;
void* __right_value1000 = (void*)0;
char* __dec_obj259;
void* __right_value1001 = (void*)0;
char* fun_name3_1053;
void* __right_value1002 = (void*)0;
struct sGenericsFun* generics_fun_1054;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var26 = (void*)0;
char* name_1055=0;
_Bool err_1056=0;
_Bool __result_obj__221;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
char* __dec_obj260;
int i_1059;
void* __right_value1008 = (void*)0;
char* new_fun_name_1060;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
char* __dec_obj261;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var27 = (void*)0;
struct sFun* fun_1061=0;
char* new_fun_name_1062=0;
char* __dec_obj262;
struct list$1sRightValueObject$ph* __dec_obj263;
struct list$1CVALUE$ph* __dec_obj264;
_Bool __result_obj__222;
fun_name2_1050 = (void*)0;
memset(&i_1059, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_1042=((void*)0);
    stack_saved_1043=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1044=info->right_value_objects;
    klass_1045=type->mClass;
    class_name_1046=klass_1045->mName;
    fun_name_1047="equals";
    type2_1048=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1048->mHeap=(_Bool)0;
    cloner_1049=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1051=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1052=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj259=fun_name2_1050,
        fun_name2_1050=(char*)come_increment_ref_count(create_method_name(obj_type_1052,(_Bool)0,fun_name_1047,info,(_Bool)1));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1053=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1051,fun_name_1047));
        generics_fun_1054=((struct sGenericsFun*)(__right_value1002=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1053,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value1002,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1054) {
            multiple_assign_var26=((struct tuple2$2char$phbool$*)(__right_value1004=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1050)),generics_fun_1054,obj_type_1052,info)));
            name_1055=(char*)come_increment_ref_count(multiple_assign_var26->v1);
            err_1056=multiple_assign_var26->v2;
            /*c*/ come_call_finalizer3(__right_value1004,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1056) {
                __result_obj__221 = (_Bool)0;
                (name_1055 = come_decrement_ref_count(name_1055, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_1051 = come_decrement_ref_count(none_generics_name_1051, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_1052,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_1053 = come_decrement_ref_count(fun_name3_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_1042 = come_decrement_ref_count(result_1042, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(stack_saved_1043,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_1048,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_1050 = come_decrement_ref_count(fun_name2_1050, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__221;
            }
            else {
                cloner_1049=((struct sFun*)(__right_value1005=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1055)));
                /*c*/ come_call_finalizer3(__right_value1005,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (name_1055 = come_decrement_ref_count(name_1055, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1049=((struct sFun*)(__right_value1006=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1050)));
            /*c*/ come_call_finalizer3(__right_value1006,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_1051 = come_decrement_ref_count(none_generics_name_1051, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1052,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1053 = come_decrement_ref_count(fun_name3_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj260=fun_name2_1050,
        fun_name2_1050=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1047,info,(_Bool)1));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1059=128-1;        i_1059>=1;        i_1059--        ){
            new_fun_name_1060=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1050,i_1059));
            cloner_1049=((struct sFun*)(__right_value1009=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1060)));
            /*c*/ come_call_finalizer3(__right_value1009,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1049) {
                __dec_obj261=fun_name2_1050,
                fun_name2_1050=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1060));
                __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1060 = come_decrement_ref_count(new_fun_name_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1060 = come_decrement_ref_count(new_fun_name_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1049==((void*)0)) {
            cloner_1049=((struct sFun*)(__right_value1011=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1050)));
            /*c*/ come_call_finalizer3(__right_value1011,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_1049==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var27=((struct tuple2$2sFun$pchar$ph*)(__right_value1012=create_equals_automatically(type,fun_name_1047,info)));
        fun_1061=multiple_assign_var27->v1;
        new_fun_name_1062=(char*)come_increment_ref_count(multiple_assign_var27->v2);
        /*c*/ come_call_finalizer3(__right_value1012,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj262=fun_name2_1050,
        fun_name2_1050=(char*)come_increment_ref_count(new_fun_name_1062);
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_1049=fun_1061;
        (new_fun_name_1062 = come_decrement_ref_count(new_fun_name_1062, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj263=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1044);
    /*b*/ come_call_finalizer3(__dec_obj263,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj264=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1043);
    /*b*/ come_call_finalizer3(__dec_obj264,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__222 = (_Bool)1;
    (result_1042 = come_decrement_ref_count(result_1042, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(stack_saved_1043,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_1048,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1050 = come_decrement_ref_count(fun_name2_1050, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__222;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1057;
struct list_item$1CVALUE$ph* prev_it_1058;
    it_1057=self->head;
    while(    it_1057!=((void*)0)) {
        prev_it_1058=it_1057;
        it_1057=it_1057->next;
        /*c*/ come_call_finalizer3(prev_it_1058,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1063;
struct list_item$1CVALUE$ph* prev_it_1064;
    it_1063=self->head;
    while(    it_1063!=((void*)0)) {
        prev_it_1064=it_1063;
        it_1063=it_1063->next;
        /*c*/ come_call_finalizer3(prev_it_1064,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_1065;
struct list$1CVALUE$ph* stack_saved_1066;
struct list$1sRightValueObject$ph* right_value_objects_1067;
struct sClass* klass_1068;
char* class_name_1069;
char* fun_name_1070;
void* __right_value1013 = (void*)0;
struct sType* type2_1071;
struct sFun* cloner_1072;
char* fun_name2_1073;
void* __right_value1014 = (void*)0;
char* none_generics_name_1074;
void* __right_value1015 = (void*)0;
struct sType* obj_type_1075;
void* __right_value1016 = (void*)0;
char* __dec_obj265;
void* __right_value1017 = (void*)0;
char* fun_name3_1076;
void* __right_value1018 = (void*)0;
struct sGenericsFun* generics_fun_1077;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var28 = (void*)0;
char* name_1078=0;
_Bool err_1079=0;
_Bool __result_obj__223;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
char* __dec_obj266;
int i_1080;
void* __right_value1024 = (void*)0;
char* new_fun_name_1081;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
char* __dec_obj267;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var29 = (void*)0;
struct sFun* fun_1082=0;
char* new_fun_name_1083=0;
char* __dec_obj268;
struct list$1sRightValueObject$ph* __dec_obj269;
struct list$1CVALUE$ph* __dec_obj270;
_Bool __result_obj__224;
fun_name2_1073 = (void*)0;
memset(&i_1080, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_1065=((void*)0);
    stack_saved_1066=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1067=info->right_value_objects;
    klass_1068=type->mClass;
    class_name_1069=klass_1068->mName;
    fun_name_1070="operator_equals";
    type2_1071=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1071->mHeap=(_Bool)0;
    cloner_1072=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1074=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1075=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj265=fun_name2_1073,
        fun_name2_1073=(char*)come_increment_ref_count(create_method_name(obj_type_1075,(_Bool)0,fun_name_1070,info,(_Bool)1));
        __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1076=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1074,fun_name_1070));
        generics_fun_1077=((struct sGenericsFun*)(__right_value1018=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1076,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value1018,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1077) {
            multiple_assign_var28=((struct tuple2$2char$phbool$*)(__right_value1020=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1073)),generics_fun_1077,obj_type_1075,info)));
            name_1078=(char*)come_increment_ref_count(multiple_assign_var28->v1);
            err_1079=multiple_assign_var28->v2;
            /*c*/ come_call_finalizer3(__right_value1020,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1079) {
                __result_obj__223 = (_Bool)0;
                (name_1078 = come_decrement_ref_count(name_1078, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_1074 = come_decrement_ref_count(none_generics_name_1074, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_1075,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_1076 = come_decrement_ref_count(fun_name3_1076, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_1065 = come_decrement_ref_count(result_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(stack_saved_1066,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_1071,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_1073 = come_decrement_ref_count(fun_name2_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__223;
            }
            cloner_1072=((struct sFun*)(__right_value1021=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1078)));
            /*c*/ come_call_finalizer3(__right_value1021,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1078 = come_decrement_ref_count(name_1078, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1072=((struct sFun*)(__right_value1022=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1073)));
            /*c*/ come_call_finalizer3(__right_value1022,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_1074 = come_decrement_ref_count(none_generics_name_1074, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1075,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1076 = come_decrement_ref_count(fun_name3_1076, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj266=fun_name2_1073,
        fun_name2_1073=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1070,info,(_Bool)1));
        __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1080=128-1;        i_1080>=1;        i_1080--        ){
            new_fun_name_1081=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1073,i_1080));
            cloner_1072=((struct sFun*)(__right_value1025=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1081)));
            /*c*/ come_call_finalizer3(__right_value1025,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1072) {
                __dec_obj267=fun_name2_1073,
                fun_name2_1073=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1081));
                __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1081 = come_decrement_ref_count(new_fun_name_1081, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1081 = come_decrement_ref_count(new_fun_name_1081, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1072==((void*)0)) {
            cloner_1072=((struct sFun*)(__right_value1027=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1073)));
            /*c*/ come_call_finalizer3(__right_value1027,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_1072==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var29=((struct tuple2$2sFun$pchar$ph*)(__right_value1028=create_operator_equals_automatically(type,fun_name_1070,info)));
        fun_1082=multiple_assign_var29->v1;
        new_fun_name_1083=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        /*c*/ come_call_finalizer3(__right_value1028,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj268=fun_name2_1073,
        fun_name2_1073=(char*)come_increment_ref_count(new_fun_name_1083);
        __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_1072=fun_1082;
        (new_fun_name_1083 = come_decrement_ref_count(new_fun_name_1083, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj269=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1067);
    /*b*/ come_call_finalizer3(__dec_obj269,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj270=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1066);
    /*b*/ come_call_finalizer3(__dec_obj270,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__224 = (_Bool)1;
    (result_1065 = come_decrement_ref_count(result_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(stack_saved_1066,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_1071,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1073 = come_decrement_ref_count(fun_name2_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__224;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_1084;
struct list$1CVALUE$ph* stack_saved_1085;
struct list$1sRightValueObject$ph* right_value_objects_1086;
struct sClass* klass_1087;
char* class_name_1088;
char* fun_name_1089;
void* __right_value1029 = (void*)0;
struct sType* type2_1090;
struct sFun* cloner_1091;
char* fun_name2_1092;
void* __right_value1030 = (void*)0;
char* none_generics_name_1093;
void* __right_value1031 = (void*)0;
struct sType* obj_type_1094;
void* __right_value1032 = (void*)0;
char* __dec_obj271;
void* __right_value1033 = (void*)0;
char* fun_name3_1095;
void* __right_value1034 = (void*)0;
struct sGenericsFun* generics_fun_1096;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var30 = (void*)0;
char* name_1097=0;
_Bool err_1098=0;
_Bool __result_obj__225;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
char* __dec_obj272;
int i_1099;
void* __right_value1040 = (void*)0;
char* new_fun_name_1100;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
char* __dec_obj273;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var31 = (void*)0;
struct sFun* fun_1101=0;
char* new_fun_name_1102=0;
char* __dec_obj274;
struct list$1sRightValueObject$ph* __dec_obj275;
struct list$1CVALUE$ph* __dec_obj276;
_Bool __result_obj__226;
fun_name2_1092 = (void*)0;
memset(&i_1099, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_1084=((void*)0);
    stack_saved_1085=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1086=info->right_value_objects;
    klass_1087=type->mClass;
    class_name_1088=klass_1087->mName;
    fun_name_1089="operator_not_equals";
    type2_1090=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1090->mHeap=(_Bool)0;
    cloner_1091=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1093=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1094=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj271=fun_name2_1092,
        fun_name2_1092=(char*)come_increment_ref_count(create_method_name(obj_type_1094,(_Bool)0,fun_name_1089,info,(_Bool)1));
        __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1095=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1093,fun_name_1089));
        generics_fun_1096=((struct sGenericsFun*)(__right_value1034=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1095,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value1034,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1096) {
            multiple_assign_var30=((struct tuple2$2char$phbool$*)(__right_value1036=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1092)),generics_fun_1096,obj_type_1094,info)));
            name_1097=(char*)come_increment_ref_count(multiple_assign_var30->v1);
            err_1098=multiple_assign_var30->v2;
            /*c*/ come_call_finalizer3(__right_value1036,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1098) {
                __result_obj__225 = (_Bool)0;
                (name_1097 = come_decrement_ref_count(name_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_1093 = come_decrement_ref_count(none_generics_name_1093, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_1094,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_1095 = come_decrement_ref_count(fun_name3_1095, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_1084 = come_decrement_ref_count(result_1084, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(stack_saved_1085,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_1090,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_1092 = come_decrement_ref_count(fun_name2_1092, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__225;
            }
            cloner_1091=((struct sFun*)(__right_value1037=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1097)));
            /*c*/ come_call_finalizer3(__right_value1037,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1097 = come_decrement_ref_count(name_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1091=((struct sFun*)(__right_value1038=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1092)));
            /*c*/ come_call_finalizer3(__right_value1038,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_1093 = come_decrement_ref_count(none_generics_name_1093, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1094,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1095 = come_decrement_ref_count(fun_name3_1095, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj272=fun_name2_1092,
        fun_name2_1092=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1089,info,(_Bool)1));
        __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1099=128-1;        i_1099>=1;        i_1099--        ){
            new_fun_name_1100=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1092,i_1099));
            cloner_1091=((struct sFun*)(__right_value1041=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1100)));
            /*c*/ come_call_finalizer3(__right_value1041,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1091) {
                __dec_obj273=fun_name2_1092,
                fun_name2_1092=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1100));
                __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1100 = come_decrement_ref_count(new_fun_name_1100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1100 = come_decrement_ref_count(new_fun_name_1100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1091==((void*)0)) {
            cloner_1091=((struct sFun*)(__right_value1043=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1092)));
            /*c*/ come_call_finalizer3(__right_value1043,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_1091==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var31=((struct tuple2$2sFun$pchar$ph*)(__right_value1044=create_operator_not_equals_automatically(type,fun_name_1089,info)));
        fun_1101=multiple_assign_var31->v1;
        new_fun_name_1102=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        /*c*/ come_call_finalizer3(__right_value1044,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj274=fun_name2_1092,
        fun_name2_1092=(char*)come_increment_ref_count(new_fun_name_1102);
        __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_1091=fun_1101;
        (new_fun_name_1102 = come_decrement_ref_count(new_fun_name_1102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj275=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1086);
    /*b*/ come_call_finalizer3(__dec_obj275,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj276=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1085);
    /*b*/ come_call_finalizer3(__dec_obj276,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__226 = (_Bool)1;
    (result_1084 = come_decrement_ref_count(result_1084, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(stack_saved_1085,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_1090,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1092 = come_decrement_ref_count(fun_name2_1092, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__226;
}

