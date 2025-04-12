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

struct sIntNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sUIntNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int value;
};

struct sLongNode
{
    int sline;
    char* sname;
    int sline_real;
    long value;
};

struct sULongNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned long  int value;
};

struct sFloatNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sDoubleNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
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
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(unsigned int c);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
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
struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);
char* sIntNode_kind(struct sIntNode* self);
_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sIntNode_finalize(struct sIntNode* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);
char* sUIntNode_kind(struct sUIntNode* self);
_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);
static void sUIntNode_finalize(struct sUIntNode* self);
struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long  int value, struct sInfo* info);
char* sLongNode_kind(struct sLongNode* self);
_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);
static void sLongNode_finalize(struct sLongNode* self);
struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long  int value, struct sInfo* info);
char* sULongNode_kind(struct sULongNode* self);
_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);
static void sULongNode_finalize(struct sULongNode* self);
struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, char* value, struct sInfo* info);
char* sFloatNode_kind(struct sFloatNode* self);
_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);
static void sFloatNode_finalize(struct sFloatNode* self);
struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, char* value, struct sInfo* info);
char* sDoubleNode_kind(struct sDoubleNode* self);
_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);
static void sDoubleNode_finalize(struct sDoubleNode* self);
struct sNode* create_int_node(int value, struct sInfo* info);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
struct sNode* get_number(_Bool minus, struct sInfo* info);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(_Bool minus, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
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
struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sIntNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->value=value;
    __result_obj__1 = (struct sIntNode*)come_increment_ref_count(self);
    come_call_finalizer(sIntNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sIntNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sIntNode_kind(struct sIntNode* self){
void* __right_value1 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string("sIntNode"))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct CVALUE* come_value_0;
void* __right_value4 = (void*)0;
char* __dec_obj1;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct sType* __dec_obj2;
_Bool __result_obj__4;
    come_value_0=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 19, "struct CVALUE*"))));
    __dec_obj1=come_value_0->c_value,
    come_value_0->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj2=come_value_0->type,
    come_value_0->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_0->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_0));
    add_come_last_code(info,"%s",come_value_0->c_value);
    __result_obj__4 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sIntNode_finalize(struct sIntNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value8 = (void*)0;
struct list_item$1CVALUE$ph* litem_7;
struct CVALUE* __dec_obj3;
void* __right_value9 = (void*)0;
struct list_item$1CVALUE$ph* litem_8;
struct CVALUE* __dec_obj4;
void* __right_value10 = (void*)0;
struct list_item$1CVALUE$ph* litem_9;
struct CVALUE* __dec_obj5;
struct list$1CVALUE$ph* __result_obj__3;
    if(    self->len==0    ) {
        litem_7=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value8=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1046, "struct list_item$1CVALUE$ph*"))));
        litem_7->prev=((void*)0);
        litem_7->next=((void*)0);
        __dec_obj3=litem_7->item,
        litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_7;
        self->head=litem_7;
    }
    else if(    self->len==1    ) {
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value9=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1056, "struct list_item$1CVALUE$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj4=litem_8->item,
        litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value10=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1066, "struct list_item$1CVALUE$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj5=litem_9->item,
        litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__3 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__3;
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

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __right_value11 = (void*)0;
struct sUIntNode* __result_obj__5;
    ((struct sNodeBase*)(__right_value11=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->value=value;
    __result_obj__5 = (struct sUIntNode*)come_increment_ref_count(self);
    come_call_finalizer(sUIntNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sUIntNode_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

char* sUIntNode_kind(struct sUIntNode* self){
void* __right_value12 = (void*)0;
char* __result_obj__6;
    __result_obj__6 = (char*)come_increment_ref_count(((char*)(__right_value12=__builtin_string("sUIntNode"))));
    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__6 = come_decrement_ref_count(__result_obj__6, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__6;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
struct CVALUE* come_value_10;
void* __right_value15 = (void*)0;
char* __dec_obj6;
void* __right_value16 = (void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct sType* __dec_obj7;
_Bool __result_obj__7;
    come_value_10=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 49, "struct CVALUE*"))));
    __dec_obj6=come_value_10->c_value,
    come_value_10->c_value=(char*)come_increment_ref_count(xsprintf("%u",self->value));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj7=come_value_10->type,
    come_value_10->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 52, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_10->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_10));
    add_come_last_code(info,"%s",come_value_10->c_value);
    __result_obj__7 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__7;
}

static void sUIntNode_finalize(struct sUIntNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long  int value, struct sInfo* info){
void* __right_value19 = (void*)0;
struct sLongNode* __result_obj__8;
    ((struct sNodeBase*)(__right_value19=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->value=value;
    __result_obj__8 = (struct sLongNode*)come_increment_ref_count(self);
    come_call_finalizer(sLongNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLongNode_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__8;
}

char* sLongNode_kind(struct sLongNode* self){
void* __right_value20 = (void*)0;
char* __result_obj__9;
    __result_obj__9 = (char*)come_increment_ref_count(((char*)(__right_value20=__builtin_string("sLongNode"))));
    (__right_value20 = come_decrement_ref_count(__right_value20, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__9 = come_decrement_ref_count(__result_obj__9, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__9;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct CVALUE* come_value_11;
void* __right_value23 = (void*)0;
char* __dec_obj8;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct sType* __dec_obj9;
_Bool __result_obj__10;
    come_value_11=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 79, "struct CVALUE*"))));
    __dec_obj8=come_value_11->c_value,
    come_value_11->c_value=(char*)come_increment_ref_count(xsprintf("%ld",self->value));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj9=come_value_11->type,
    come_value_11->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 82, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_11->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_11));
    add_come_last_code(info,"%s",come_value_11->c_value);
    __result_obj__10 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__10;
}

static void sLongNode_finalize(struct sLongNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long  int value, struct sInfo* info){
void* __right_value27 = (void*)0;
struct sULongNode* __result_obj__11;
    ((struct sNodeBase*)(__right_value27=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value27, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->value=value;
    __result_obj__11 = (struct sULongNode*)come_increment_ref_count(self);
    come_call_finalizer(sULongNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sULongNode_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

char* sULongNode_kind(struct sULongNode* self){
void* __right_value28 = (void*)0;
char* __result_obj__12;
    __result_obj__12 = (char*)come_increment_ref_count(((char*)(__right_value28=__builtin_string("sULongNode"))));
    (__right_value28 = come_decrement_ref_count(__right_value28, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__12 = come_decrement_ref_count(__result_obj__12, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__12;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct CVALUE* come_value_12;
void* __right_value31 = (void*)0;
char* __dec_obj10;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct sType* __dec_obj11;
_Bool __result_obj__13;
    come_value_12=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 109, "struct CVALUE*"))));
    __dec_obj10=come_value_12->c_value,
    come_value_12->c_value=(char*)come_increment_ref_count(xsprintf("%lu",self->value));
    __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj11=come_value_12->type,
    come_value_12->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 112, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_12->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_12));
    add_come_last_code(info,"%s",come_value_12->c_value);
    __result_obj__13 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__13;
}

static void sULongNode_finalize(struct sULongNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, char* value, struct sInfo* info){
void* __right_value35 = (void*)0;
char* __dec_obj12;
struct sFloatNode* __result_obj__14;
    ((struct sNodeBase*)(__right_value35=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value35, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj12=self->value,
    self->value=(char*)come_increment_ref_count(value);
    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__14 = (struct sFloatNode*)come_increment_ref_count(self);
    come_call_finalizer(sFloatNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFloatNode_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

char* sFloatNode_kind(struct sFloatNode* self){
void* __right_value36 = (void*)0;
char* __result_obj__15;
    __result_obj__15 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string("sFloatNode"))));
    (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__15 = come_decrement_ref_count(__result_obj__15, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__15;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct CVALUE* come_value_13;
void* __right_value39 = (void*)0;
char* __dec_obj13;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct sType* __dec_obj14;
_Bool __result_obj__16;
    come_value_13=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 139, "struct CVALUE*"))));
    __dec_obj13=come_value_13->c_value,
    come_value_13->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj14=come_value_13->type,
    come_value_13->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 142, "struct sType*")),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_13->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
    add_come_last_code(info,"%s",come_value_13->c_value);
    __result_obj__16 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__16;
}

static void sFloatNode_finalize(struct sFloatNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, char* value, struct sInfo* info){
void* __right_value43 = (void*)0;
char* __dec_obj15;
struct sDoubleNode* __result_obj__17;
    ((struct sNodeBase*)(__right_value43=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value43, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj15=self->value,
    self->value=(char*)come_increment_ref_count(value);
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__17 = (struct sDoubleNode*)come_increment_ref_count(self);
    come_call_finalizer(sDoubleNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sDoubleNode_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

char* sDoubleNode_kind(struct sDoubleNode* self){
void* __right_value44 = (void*)0;
char* __result_obj__18;
    __result_obj__18 = (char*)come_increment_ref_count(((char*)(__right_value44=__builtin_string("sDoubleNode"))));
    (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__18 = come_decrement_ref_count(__result_obj__18, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__18;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct CVALUE* come_value_14;
void* __right_value47 = (void*)0;
char* __dec_obj16;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct sType* __dec_obj17;
_Bool __result_obj__19;
    come_value_14=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 169, "struct CVALUE*"))));
    __dec_obj16=come_value_14->c_value,
    come_value_14->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj17=come_value_14->type,
    come_value_14->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 172, "struct sType*")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_14->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_14));
    add_come_last_code(info,"%s",come_value_14->c_value);
    __result_obj__19 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__19;
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sNode* _inf_value1;
struct sIntNode* _inf_obj_value1;
void* __right_value55 = (void*)0;
struct sNode* __result_obj__22;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 185, "struct sNode");
    _inf_obj_value1=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value52=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 185, "struct sIntNode*")),value,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIntNode_finalize;
    _inf_value1->clone=(void*)sIntNode_clone;
    _inf_value1->compile=(void*)sIntNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sIntNode_kind;
    __result_obj__22 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value55=_inf_value1)));
    come_call_finalizer(sIntNode_finalize, __right_value52, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value55) ? __right_value55 = come_decrement_ref_count(__right_value55, ((struct sNode*)__right_value55)->finalize, ((struct sNode*)__right_value55)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__22) ? __result_obj__22 = come_decrement_ref_count(__result_obj__22, ((struct sNode*)__result_obj__22)->finalize, ((struct sNode*)__result_obj__22)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__22;
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
struct sIntNode* __result_obj__20;
void* __right_value53 = (void*)0;
struct sIntNode* result_15;
void* __right_value54 = (void*)0;
char* __dec_obj18;
struct sIntNode* __result_obj__21;
    if(    self==(void*)0    ) {
        __result_obj__20 = (void*)0;
        return __result_obj__20;
    }
    result_15=(struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "struct sIntNode*"));
    if(    self!=((void*)0)    ) {
        result_15->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj18=result_15->sname,
        result_15->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIntNode_clone", 5, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_15->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_15->value=self->value;
    }
    __result_obj__21 = result_15;
    come_call_finalizer(sIntNode_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
char* p2_18;
char c_19;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct sNode* _inf_value2;
struct sFloatNode* _inf_obj_value2;
void* __right_value68 = (void*)0;
struct sNode* __result_obj__25;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* __right_value75 = (void*)0;
struct sNode* __result_obj__28;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sNode* _inf_value4;
struct sDoubleNode* _inf_obj_value4;
void* __right_value79 = (void*)0;
struct sNode* __result_obj__29;
unsigned long  int lont_22;
int value2_23;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* __right_value84 = (void*)0;
struct sNode* __result_obj__32;
unsigned long  int lont_25;
int value_26;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct sNode* _inf_value6;
struct sULongNode* _inf_obj_value6;
void* __right_value87 = (void*)0;
struct sNode* __result_obj__33;
unsigned int value_27;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct sNode* _inf_value7;
struct sUIntNode* _inf_obj_value7;
void* __right_value92 = (void*)0;
struct sNode* __result_obj__36;
unsigned long long int value_29;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct sNode* _inf_value8;
struct sLongNode* _inf_obj_value8;
void* __right_value97 = (void*)0;
struct sNode* __result_obj__39;
unsigned long long int value_31;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct sNode* _inf_value9;
struct sULongNode* _inf_obj_value9;
void* __right_value100 = (void*)0;
struct sNode* __result_obj__40;
unsigned long long int value_32;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct sNode* _inf_value10;
struct sLongNode* _inf_obj_value10;
void* __right_value103 = (void*)0;
struct sNode* __result_obj__41;
long lont_33;
int value_34;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* __right_value106 = (void*)0;
struct sNode* __result_obj__42;
void* __right_value107 = (void*)0;
struct sNode* __result_obj__43;
memset(&lont_22, 0, sizeof(unsigned long  int));
memset(&lont_25, 0, sizeof(unsigned long  int));
memset(&lont_33, 0, sizeof(long));
    const int buf_size_16=128;
    char buf_17[128+1];
    memset(&buf_17, 0, sizeof(char)    *(128+1)    );
    p2_18=buf_17;
    if(    minus    ) {
        *p2_18=45;
        p2_18++;
    }
    if(    xisdigit(*info->p)    ) {
        while(        xisdigit(*info->p)||*info->p==95        ) {
            if(            *info->p==95            ) {
                info->p++;
            }
            else {
                *p2_18++=*info->p;
                info->p++;
            }
            if(            p2_18-buf_17>=buf_size_16            ) {
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                exit(5);
            }
        }
        *p2_18=0;
        skip_spaces_and_lf(info);
        c_19=*(info->p+1);
        if(        *info->p==46&&xisdigit(c_19)        ) {
            *p2_18++=*info->p;
            if(            p2_18-buf_17>=buf_size_16            ) {
                printf("%s %d: overflow node of number",info->sname,info->sline);
                exit(11);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(            xisdigit(*info->p)||*info->p==95            ) {
                if(                *info->p==95                ) {
                    info->p++;
                }
                else {
                    *p2_18++=*info->p;
                    info->p++;
                }
                if(                p2_18-buf_17>=buf_size_16                ) {
                    ((struct tuple2$2int$bool$*)(__right_value56=err_msg(info,"overflow node of number")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
            }
            if(            *info->p==101            ) {
                *p2_18++=*info->p;
                info->p++;
                if(                p2_18-buf_17>=buf_size_16                ) {
                    ((struct tuple2$2int$bool$*)(__right_value57=err_msg(info,"overflow node of number")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                if(                *info->p==43                ) {
                    *p2_18++=*info->p;
                    info->p++;
                    if(                    p2_18-buf_17>=buf_size_16                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value58=err_msg(info,"overflow node of number")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else if(                *info->p==45                ) {
                    *p2_18++=*info->p;
                    info->p++;
                    if(                    p2_18-buf_17>=buf_size_16                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value59=err_msg(info,"overflow node of number")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value60=err_msg(info,"invalid float value")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                while(                xisdigit(*info->p)||*info->p==95                ) {
                    if(                    *info->p==95                    ) {
                        info->p++;
                    }
                    else {
                        *p2_18++=*info->p;
                        info->p++;
                    }
                    if(                    p2_18-buf_17>=buf_size_16                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"overflow node of number")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
            }
            skip_spaces_and_lf(info);
            if(            *info->p==102||*info->p==70            ) {
                *p2_18++=*info->p;
                *p2_18=0;
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 301, "struct sNode");
                _inf_obj_value2=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(__right_value64=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count((struct sFloatNode*)come_calloc_v2(1, sizeof(struct sFloatNode)*(1), "05number.c", 301, "struct sFloatNode*")),(char*)come_increment_ref_count(__builtin_string(buf_17)),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFloatNode_finalize;
                _inf_value2->clone=(void*)sFloatNode_clone;
                _inf_value2->compile=(void*)sFloatNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFloatNode_kind;
                __result_obj__25 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value68=_inf_value2)));
                come_call_finalizer(sFloatNode_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value68) ? __right_value68 = come_decrement_ref_count(__right_value68, ((struct sNode*)__right_value68)->finalize, ((struct sNode*)__right_value68)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__25) ? __result_obj__25 = come_decrement_ref_count(__result_obj__25, ((struct sNode*)__result_obj__25)->finalize, ((struct sNode*)__result_obj__25)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__25;
            }
            else if(            *info->p==108||*info->p==76            ) {
                *p2_18++=*info->p;
                *p2_18=0;
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 310, "struct sNode");
                _inf_obj_value3=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(__right_value71=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count((struct sDoubleNode*)come_calloc_v2(1, sizeof(struct sDoubleNode)*(1), "05number.c", 310, "struct sDoubleNode*")),(char*)come_increment_ref_count(__builtin_string(buf_17)),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sDoubleNode_finalize;
                _inf_value3->clone=(void*)sDoubleNode_clone;
                _inf_value3->compile=(void*)sDoubleNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sline_real=(void*)sNodeBase_sline_real;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sDoubleNode_kind;
                __result_obj__28 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value75=_inf_value3)));
                come_call_finalizer(sDoubleNode_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value75) ? __right_value75 = come_decrement_ref_count(__right_value75, ((struct sNode*)__right_value75)->finalize, ((struct sNode*)__right_value75)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__28) ? __result_obj__28 = come_decrement_ref_count(__result_obj__28, ((struct sNode*)__result_obj__28)->finalize, ((struct sNode*)__result_obj__28)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__28;
            }
            else {
                *p2_18=0;
                _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 314, "struct sNode");
                _inf_obj_value4=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(__right_value78=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count((struct sDoubleNode*)come_calloc_v2(1, sizeof(struct sDoubleNode)*(1), "05number.c", 314, "struct sDoubleNode*")),(char*)come_increment_ref_count(__builtin_string(buf_17)),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDoubleNode_finalize;
                _inf_value4->clone=(void*)sDoubleNode_clone;
                _inf_value4->compile=(void*)sDoubleNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sline_real=(void*)sNodeBase_sline_real;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sDoubleNode_kind;
                __result_obj__29 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value79=_inf_value4)));
                come_call_finalizer(sDoubleNode_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value79) ? __right_value79 = come_decrement_ref_count(__right_value79, ((struct sNode*)__right_value79)->finalize, ((struct sNode*)__right_value79)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__29) ? __result_obj__29 = come_decrement_ref_count(__result_obj__29, ((struct sNode*)__result_obj__29)->finalize, ((struct sNode*)__result_obj__29)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__29;
            }
        }
        else if(        *info->p==117||*info->p==85        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==76||*info->p==108                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value2_23=strtoull(buf_17,((void*)0),0);
                    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 334, "struct sNode");
                    _inf_obj_value5=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value81=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 334, "struct sULongNode*")),value2_23,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sULongNode_finalize;
                    _inf_value5->clone=(void*)sULongNode_clone;
                    _inf_value5->compile=(void*)sULongNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sULongNode_kind;
                    __result_obj__32 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value84=_inf_value5)));
                    come_call_finalizer(sULongNode_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    ((__right_value84) ? __right_value84 = come_decrement_ref_count(__right_value84, ((struct sNode*)__right_value84)->finalize, ((struct sNode*)__right_value84)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((__result_obj__32) ? __result_obj__32 = come_decrement_ref_count(__result_obj__32, ((struct sNode*)__result_obj__32)->finalize, ((struct sNode*)__result_obj__32)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                    return __result_obj__32;
                }
                else {
                    value_26=strtoull(buf_17,((void*)0),0);
                    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 338, "struct sNode");
                    _inf_obj_value6=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value86=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 338, "struct sULongNode*")),value_26,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sULongNode_finalize;
                    _inf_value6->clone=(void*)sULongNode_clone;
                    _inf_value6->compile=(void*)sULongNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sULongNode_kind;
                    __result_obj__33 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value87=_inf_value6)));
                    come_call_finalizer(sULongNode_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    ((__right_value87) ? __right_value87 = come_decrement_ref_count(__right_value87, ((struct sNode*)__right_value87)->finalize, ((struct sNode*)__right_value87)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                    return __result_obj__33;
                }
            }
            else {
                value_27=strtoul(buf_17,((void*)0),0);
                _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 343, "struct sNode");
                _inf_obj_value7=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value89=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 343, "struct sUIntNode*")),value_27,info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sUIntNode_finalize;
                _inf_value7->clone=(void*)sUIntNode_clone;
                _inf_value7->compile=(void*)sUIntNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sUIntNode_kind;
                __result_obj__36 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value92=_inf_value7)));
                come_call_finalizer(sUIntNode_finalize, __right_value89, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value92) ? __right_value92 = come_decrement_ref_count(__right_value92, ((struct sNode*)__right_value92)->finalize, ((struct sNode*)__right_value92)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__36) ? __result_obj__36 = come_decrement_ref_count(__result_obj__36, ((struct sNode*)__result_obj__36)->finalize, ((struct sNode*)__result_obj__36)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__36;
            }
        }
        else if(        *info->p==76||*info->p==108        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108            ) {
                info->p++;
                skip_spaces_and_lf(info);
                value_29=strtoull(buf_17,((void*)0),0);
                _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 357, "struct sNode");
                _inf_obj_value8=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value94=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 357, "struct sLongNode*")),value_29,info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sLongNode_finalize;
                _inf_value8->clone=(void*)sLongNode_clone;
                _inf_value8->compile=(void*)sLongNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sline_real=(void*)sNodeBase_sline_real;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sNodeBase_terminated;
                _inf_value8->kind=(void*)sLongNode_kind;
                __result_obj__39 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value97=_inf_value8)));
                come_call_finalizer(sLongNode_finalize, __right_value94, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value97) ? __right_value97 = come_decrement_ref_count(__right_value97, ((struct sNode*)__right_value97)->finalize, ((struct sNode*)__right_value97)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__39) ? __result_obj__39 = come_decrement_ref_count(__result_obj__39, ((struct sNode*)__result_obj__39)->finalize, ((struct sNode*)__result_obj__39)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__39;
            }
            else if(            *info->p==85||*info->p==117            ) {
                info->p++;
                skip_spaces_and_lf(info);
                value_31=strtoull(buf_17,((void*)0),0);
                _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 366, "struct sNode");
                _inf_obj_value9=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value99=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 366, "struct sULongNode*")),value_31,info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sULongNode_finalize;
                _inf_value9->clone=(void*)sULongNode_clone;
                _inf_value9->compile=(void*)sULongNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sULongNode_kind;
                __result_obj__40 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value100=_inf_value9)));
                come_call_finalizer(sULongNode_finalize, __right_value99, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value100) ? __right_value100 = come_decrement_ref_count(__right_value100, ((struct sNode*)__right_value100)->finalize, ((struct sNode*)__right_value100)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__40) ? __result_obj__40 = come_decrement_ref_count(__result_obj__40, ((struct sNode*)__result_obj__40)->finalize, ((struct sNode*)__result_obj__40)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__40;
            }
            else {
                value_32=strtoull(buf_17,((void*)0),0);
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 370, "struct sNode");
                _inf_obj_value10=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value102=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 370, "struct sLongNode*")),value_32,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLongNode_finalize;
                _inf_value10->clone=(void*)sLongNode_clone;
                _inf_value10->compile=(void*)sLongNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLongNode_kind;
                __result_obj__41 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value103=_inf_value10)));
                come_call_finalizer(sLongNode_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value103) ? __right_value103 = come_decrement_ref_count(__right_value103, ((struct sNode*)__right_value103)->finalize, ((struct sNode*)__right_value103)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__41) ? __result_obj__41 = come_decrement_ref_count(__result_obj__41, ((struct sNode*)__result_obj__41)->finalize, ((struct sNode*)__result_obj__41)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__41;
            }
        }
        else {
            value_34=strtoll(buf_17,((void*)0),0);
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 375, "struct sNode");
            _inf_obj_value11=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value105=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 375, "struct sIntNode*")),value_34,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sIntNode_finalize;
            _inf_value11->clone=(void*)sIntNode_clone;
            _inf_value11->compile=(void*)sIntNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sIntNode_kind;
            __result_obj__42 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value106=_inf_value11)));
            come_call_finalizer(sIntNode_finalize, __right_value105, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value106) ? __right_value106 = come_decrement_ref_count(__right_value106, ((struct sNode*)__right_value106)->finalize, ((struct sNode*)__right_value106)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__42) ? __result_obj__42 = come_decrement_ref_count(__result_obj__42, ((struct sNode*)__result_obj__42)->finalize, ((struct sNode*)__result_obj__42)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__42;
        }
    }
    else {
        ((struct tuple2$2int$bool$*)(__right_value107=err_msg(info,"require digits after + or -")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value107, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(2);
    }
    __result_obj__43 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__43) ? __result_obj__43 = come_decrement_ref_count(__result_obj__43, ((struct sNode*)__result_obj__43)->finalize, ((struct sNode*)__result_obj__43)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__43;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
struct sFloatNode* __result_obj__23;
void* __right_value65 = (void*)0;
struct sFloatNode* result_20;
void* __right_value66 = (void*)0;
char* __dec_obj19;
void* __right_value67 = (void*)0;
char* __dec_obj20;
struct sFloatNode* __result_obj__24;
    if(    self==(void*)0    ) {
        __result_obj__23 = (void*)0;
        return __result_obj__23;
    }
    result_20=(struct sFloatNode*)come_increment_ref_count((struct sFloatNode*)come_calloc_v2(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3, "struct sFloatNode*"));
    if(    self!=((void*)0)    ) {
        result_20->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj19=result_20->sname,
        result_20->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFloatNode_clone", 5, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_20->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj20=result_20->value,
        result_20->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sFloatNode_clone", 7, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__24 = result_20;
    come_call_finalizer(sFloatNode_finalize, result_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
struct sDoubleNode* __result_obj__26;
void* __right_value72 = (void*)0;
struct sDoubleNode* result_21;
void* __right_value73 = (void*)0;
char* __dec_obj21;
void* __right_value74 = (void*)0;
char* __dec_obj22;
struct sDoubleNode* __result_obj__27;
    if(    self==(void*)0    ) {
        __result_obj__26 = (void*)0;
        return __result_obj__26;
    }
    result_21=(struct sDoubleNode*)come_increment_ref_count((struct sDoubleNode*)come_calloc_v2(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3, "struct sDoubleNode*"));
    if(    self!=((void*)0)    ) {
        result_21->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj21=result_21->sname,
        result_21->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDoubleNode_clone", 5, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_21->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj22=result_21->value,
        result_21->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sDoubleNode_clone", 7, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__27 = result_21;
    come_call_finalizer(sDoubleNode_finalize, result_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
struct sULongNode* __result_obj__30;
void* __right_value82 = (void*)0;
struct sULongNode* result_24;
void* __right_value83 = (void*)0;
char* __dec_obj23;
struct sULongNode* __result_obj__31;
    if(    self==(void*)0    ) {
        __result_obj__30 = (void*)0;
        return __result_obj__30;
    }
    result_24=(struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3, "struct sULongNode*"));
    if(    self!=((void*)0)    ) {
        result_24->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj23=result_24->sname,
        result_24->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sULongNode_clone", 5, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_24->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_24->value=self->value;
    }
    __result_obj__31 = result_24;
    come_call_finalizer(sULongNode_finalize, result_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__31;
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
struct sUIntNode* __result_obj__34;
void* __right_value90 = (void*)0;
struct sUIntNode* result_28;
void* __right_value91 = (void*)0;
char* __dec_obj24;
struct sUIntNode* __result_obj__35;
    if(    self==(void*)0    ) {
        __result_obj__34 = (void*)0;
        return __result_obj__34;
    }
    result_28=(struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3, "struct sUIntNode*"));
    if(    self!=((void*)0)    ) {
        result_28->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj24=result_28->sname,
        result_28->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sUIntNode_clone", 5, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_28->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_28->value=self->value;
    }
    __result_obj__35 = result_28;
    come_call_finalizer(sUIntNode_finalize, result_28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__35;
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
struct sLongNode* __result_obj__37;
void* __right_value95 = (void*)0;
struct sLongNode* result_30;
void* __right_value96 = (void*)0;
char* __dec_obj25;
struct sLongNode* __result_obj__38;
    if(    self==(void*)0    ) {
        __result_obj__37 = (void*)0;
        return __result_obj__37;
    }
    result_30=(struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3, "struct sLongNode*"));
    if(    self!=((void*)0)    ) {
        result_30->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj25=result_30->sname,
        result_30->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLongNode_clone", 5, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_30->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_30->value=self->value;
    }
    __result_obj__38 = result_30;
    come_call_finalizer(sLongNode_finalize, result_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__38;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
int buf_size_35;
char* p_37;
void* __right_value108 = (void*)0;
unsigned long long int value_38;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* __right_value111 = (void*)0;
struct sNode* __result_obj__44;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* __right_value114 = (void*)0;
struct sNode* __result_obj__45;
unsigned long long int value_39;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* __right_value117 = (void*)0;
struct sNode* __result_obj__46;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* __right_value120 = (void*)0;
struct sNode* __result_obj__47;
unsigned long long int value_40;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* __right_value123 = (void*)0;
struct sNode* __result_obj__48;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* __right_value126 = (void*)0;
struct sNode* __result_obj__49;
unsigned long long int value_41;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* __right_value129 = (void*)0;
struct sNode* __result_obj__50;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* __right_value132 = (void*)0;
struct sNode* __result_obj__51;
unsigned long long int value_42;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* __right_value135 = (void*)0;
struct sNode* __result_obj__52;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* __right_value138 = (void*)0;
struct sNode* __result_obj__53;
unsigned long long int value_43;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* __right_value141 = (void*)0;
struct sNode* __result_obj__54;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* __right_value144 = (void*)0;
struct sNode* __result_obj__55;
long long int value_44;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* __right_value147 = (void*)0;
struct sNode* __result_obj__56;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* __right_value150 = (void*)0;
struct sNode* __result_obj__57;
struct sNode* __result_obj__58;
    buf_size_35=128;
    char buf_36[128+1];
    memset(&buf_36, 0, sizeof(char)    *(128+1)    );
    p_37=buf_36;
    *p_37++=48;
    *p_37++=120;
    while(    (*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95    ) {
        if(        *info->p==95        ) {
            info->p++;
        }
        else {
            *p_37++=*info->p;
            info->p++;
        }
        if(        p_37-buf_36>=buf_size_35-1        ) {
            ((struct tuple2$2int$bool$*)(__right_value108=err_msg(info,"overflow node of number")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value108, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
    }
    *p_37=0;
    skip_spaces_and_lf(info);
    if(    *info->p==117||*info->p==85    ) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108            ) {
                info->p++;
                skip_spaces_and_lf(info);
                value_38=strtoull(buf_36,((void*)0),0);
                if(                minus                ) {
                    _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 431, "struct sNode");
                    _inf_obj_value12=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value110=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 431, "struct sULongNode*")),-value_38,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sNodeBase_sline;
                    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value12->sname=(void*)sNodeBase_sname;
                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result_obj__44 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value111=_inf_value12)));
                    come_call_finalizer(sULongNode_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    ((__right_value111) ? __right_value111 = come_decrement_ref_count(__right_value111, ((struct sNode*)__right_value111)->finalize, ((struct sNode*)__right_value111)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((__result_obj__44) ? __result_obj__44 = come_decrement_ref_count(__result_obj__44, ((struct sNode*)__result_obj__44)->finalize, ((struct sNode*)__result_obj__44)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                    return __result_obj__44;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 434, "struct sNode");
                    _inf_obj_value13=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value113=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 434, "struct sULongNode*")),value_38,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sNodeBase_sline;
                    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value13->sname=(void*)sNodeBase_sname;
                    _inf_value13->terminated=(void*)sNodeBase_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result_obj__45 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value114=_inf_value13)));
                    come_call_finalizer(sULongNode_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    ((__right_value114) ? __right_value114 = come_decrement_ref_count(__right_value114, ((struct sNode*)__right_value114)->finalize, ((struct sNode*)__right_value114)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((__result_obj__45) ? __result_obj__45 = come_decrement_ref_count(__result_obj__45, ((struct sNode*)__result_obj__45)->finalize, ((struct sNode*)__result_obj__45)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                    return __result_obj__45;
                }
            }
            else {
                value_39=strtoull(buf_36,((void*)0),0);
                if(                minus                ) {
                    _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 441, "struct sNode");
                    _inf_obj_value14=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value116=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 441, "struct sULongNode*")),-value_39,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sNodeBase_sline;
                    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value14->sname=(void*)sNodeBase_sname;
                    _inf_value14->terminated=(void*)sNodeBase_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result_obj__46 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value117=_inf_value14)));
                    come_call_finalizer(sULongNode_finalize, __right_value116, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    ((__right_value117) ? __right_value117 = come_decrement_ref_count(__right_value117, ((struct sNode*)__right_value117)->finalize, ((struct sNode*)__right_value117)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((__result_obj__46) ? __result_obj__46 = come_decrement_ref_count(__result_obj__46, ((struct sNode*)__result_obj__46)->finalize, ((struct sNode*)__result_obj__46)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                    return __result_obj__46;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 444, "struct sNode");
                    _inf_obj_value15=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value119=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 444, "struct sULongNode*")),value_39,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sNodeBase_sline;
                    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value15->sname=(void*)sNodeBase_sname;
                    _inf_value15->terminated=(void*)sNodeBase_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result_obj__47 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value120=_inf_value15)));
                    come_call_finalizer(sULongNode_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    ((__right_value120) ? __right_value120 = come_decrement_ref_count(__right_value120, ((struct sNode*)__right_value120)->finalize, ((struct sNode*)__right_value120)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((__result_obj__47) ? __result_obj__47 = come_decrement_ref_count(__result_obj__47, ((struct sNode*)__result_obj__47)->finalize, ((struct sNode*)__result_obj__47)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                    return __result_obj__47;
                }
            }
        }
        else {
            value_40=strtoull(buf_36,((void*)0),0);
            if(            minus            ) {
                _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 452, "struct sNode");
                _inf_obj_value16=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value122=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 452, "struct sUIntNode*")),-value_40,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sline_real=(void*)sNodeBase_sline_real;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sNodeBase_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result_obj__48 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value123=_inf_value16)));
                come_call_finalizer(sUIntNode_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value123) ? __right_value123 = come_decrement_ref_count(__right_value123, ((struct sNode*)__right_value123)->finalize, ((struct sNode*)__right_value123)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__48) ? __result_obj__48 = come_decrement_ref_count(__result_obj__48, ((struct sNode*)__result_obj__48)->finalize, ((struct sNode*)__result_obj__48)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__48;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 455, "struct sNode");
                _inf_obj_value17=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value125=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 455, "struct sUIntNode*")),value_40,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sNodeBase_sline;
                _inf_value17->sline_real=(void*)sNodeBase_sline_real;
                _inf_value17->sname=(void*)sNodeBase_sname;
                _inf_value17->terminated=(void*)sNodeBase_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result_obj__49 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value126=_inf_value17)));
                come_call_finalizer(sUIntNode_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value126) ? __right_value126 = come_decrement_ref_count(__right_value126, ((struct sNode*)__right_value126)->finalize, ((struct sNode*)__right_value126)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__49) ? __result_obj__49 = come_decrement_ref_count(__result_obj__49, ((struct sNode*)__result_obj__49)->finalize, ((struct sNode*)__result_obj__49)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__49;
            }
        }
    }
    else if(    *info->p==76||*info->p==108    ) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108        ) {
            info->p++;
            skip_spaces_and_lf(info);
            value_41=strtoull(buf_36,((void*)0),0);
            if(            minus            ) {
                _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 470, "struct sNode");
                _inf_obj_value18=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value128=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 470, "struct sLongNode*")),-value_41,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLongNode_finalize;
                _inf_value18->clone=(void*)sLongNode_clone;
                _inf_value18->compile=(void*)sLongNode_compile;
                _inf_value18->sline=(void*)sNodeBase_sline;
                _inf_value18->sline_real=(void*)sNodeBase_sline_real;
                _inf_value18->sname=(void*)sNodeBase_sname;
                _inf_value18->terminated=(void*)sNodeBase_terminated;
                _inf_value18->kind=(void*)sLongNode_kind;
                __result_obj__50 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value129=_inf_value18)));
                come_call_finalizer(sLongNode_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value129) ? __right_value129 = come_decrement_ref_count(__right_value129, ((struct sNode*)__right_value129)->finalize, ((struct sNode*)__right_value129)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__50) ? __result_obj__50 = come_decrement_ref_count(__result_obj__50, ((struct sNode*)__result_obj__50)->finalize, ((struct sNode*)__result_obj__50)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__50;
            }
            else {
                _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 473, "struct sNode");
                _inf_obj_value19=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value131=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 473, "struct sLongNode*")),value_41,info))));
                _inf_value19->_protocol_obj=_inf_obj_value19;
                _inf_value19->finalize=(void*)sLongNode_finalize;
                _inf_value19->clone=(void*)sLongNode_clone;
                _inf_value19->compile=(void*)sLongNode_compile;
                _inf_value19->sline=(void*)sNodeBase_sline;
                _inf_value19->sline_real=(void*)sNodeBase_sline_real;
                _inf_value19->sname=(void*)sNodeBase_sname;
                _inf_value19->terminated=(void*)sNodeBase_terminated;
                _inf_value19->kind=(void*)sLongNode_kind;
                __result_obj__51 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value132=_inf_value19)));
                come_call_finalizer(sLongNode_finalize, __right_value131, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value132) ? __right_value132 = come_decrement_ref_count(__right_value132, ((struct sNode*)__right_value132)->finalize, ((struct sNode*)__right_value132)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__51) ? __result_obj__51 = come_decrement_ref_count(__result_obj__51, ((struct sNode*)__result_obj__51)->finalize, ((struct sNode*)__result_obj__51)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__51;
            }
        }
        else if(        *info->p==85||*info->p==117        ) {
            info->p++;
            skip_spaces_and_lf(info);
            value_42=strtoull(buf_36,((void*)0),0);
            if(            minus            ) {
                _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 483, "struct sNode");
                _inf_obj_value20=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value134=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 483, "struct sULongNode*")),-value_42,info))));
                _inf_value20->_protocol_obj=_inf_obj_value20;
                _inf_value20->finalize=(void*)sULongNode_finalize;
                _inf_value20->clone=(void*)sULongNode_clone;
                _inf_value20->compile=(void*)sULongNode_compile;
                _inf_value20->sline=(void*)sNodeBase_sline;
                _inf_value20->sline_real=(void*)sNodeBase_sline_real;
                _inf_value20->sname=(void*)sNodeBase_sname;
                _inf_value20->terminated=(void*)sNodeBase_terminated;
                _inf_value20->kind=(void*)sULongNode_kind;
                __result_obj__52 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value135=_inf_value20)));
                come_call_finalizer(sULongNode_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value135) ? __right_value135 = come_decrement_ref_count(__right_value135, ((struct sNode*)__right_value135)->finalize, ((struct sNode*)__right_value135)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__52) ? __result_obj__52 = come_decrement_ref_count(__result_obj__52, ((struct sNode*)__result_obj__52)->finalize, ((struct sNode*)__result_obj__52)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__52;
            }
            else {
                _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 486, "struct sNode");
                _inf_obj_value21=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value137=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 486, "struct sULongNode*")),value_42,info))));
                _inf_value21->_protocol_obj=_inf_obj_value21;
                _inf_value21->finalize=(void*)sULongNode_finalize;
                _inf_value21->clone=(void*)sULongNode_clone;
                _inf_value21->compile=(void*)sULongNode_compile;
                _inf_value21->sline=(void*)sNodeBase_sline;
                _inf_value21->sline_real=(void*)sNodeBase_sline_real;
                _inf_value21->sname=(void*)sNodeBase_sname;
                _inf_value21->terminated=(void*)sNodeBase_terminated;
                _inf_value21->kind=(void*)sULongNode_kind;
                __result_obj__53 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value138=_inf_value21)));
                come_call_finalizer(sULongNode_finalize, __right_value137, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value138) ? __right_value138 = come_decrement_ref_count(__right_value138, ((struct sNode*)__right_value138)->finalize, ((struct sNode*)__right_value138)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__53) ? __result_obj__53 = come_decrement_ref_count(__result_obj__53, ((struct sNode*)__result_obj__53)->finalize, ((struct sNode*)__result_obj__53)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__53;
            }
        }
        else {
            value_43=strtoull(buf_36,((void*)0),0);
            if(            minus            ) {
                _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 492, "struct sNode");
                _inf_obj_value22=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value140=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 492, "struct sLongNode*")),-value_43,info))));
                _inf_value22->_protocol_obj=_inf_obj_value22;
                _inf_value22->finalize=(void*)sLongNode_finalize;
                _inf_value22->clone=(void*)sLongNode_clone;
                _inf_value22->compile=(void*)sLongNode_compile;
                _inf_value22->sline=(void*)sNodeBase_sline;
                _inf_value22->sline_real=(void*)sNodeBase_sline_real;
                _inf_value22->sname=(void*)sNodeBase_sname;
                _inf_value22->terminated=(void*)sNodeBase_terminated;
                _inf_value22->kind=(void*)sLongNode_kind;
                __result_obj__54 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value141=_inf_value22)));
                come_call_finalizer(sLongNode_finalize, __right_value140, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value141) ? __right_value141 = come_decrement_ref_count(__right_value141, ((struct sNode*)__right_value141)->finalize, ((struct sNode*)__right_value141)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__54) ? __result_obj__54 = come_decrement_ref_count(__result_obj__54, ((struct sNode*)__result_obj__54)->finalize, ((struct sNode*)__result_obj__54)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__54;
            }
            else {
                _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 495, "struct sNode");
                _inf_obj_value23=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value143=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 495, "struct sLongNode*")),value_43,info))));
                _inf_value23->_protocol_obj=_inf_obj_value23;
                _inf_value23->finalize=(void*)sLongNode_finalize;
                _inf_value23->clone=(void*)sLongNode_clone;
                _inf_value23->compile=(void*)sLongNode_compile;
                _inf_value23->sline=(void*)sNodeBase_sline;
                _inf_value23->sline_real=(void*)sNodeBase_sline_real;
                _inf_value23->sname=(void*)sNodeBase_sname;
                _inf_value23->terminated=(void*)sNodeBase_terminated;
                _inf_value23->kind=(void*)sLongNode_kind;
                __result_obj__55 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value144=_inf_value23)));
                come_call_finalizer(sLongNode_finalize, __right_value143, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value144) ? __right_value144 = come_decrement_ref_count(__right_value144, ((struct sNode*)__right_value144)->finalize, ((struct sNode*)__right_value144)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__55) ? __result_obj__55 = come_decrement_ref_count(__result_obj__55, ((struct sNode*)__result_obj__55)->finalize, ((struct sNode*)__result_obj__55)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__55;
            }
        }
    }
    else {
        value_44=strtoll(buf_36,((void*)0),0);
        if(        minus        ) {
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 502, "struct sNode");
            _inf_obj_value24=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value146=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 502, "struct sIntNode*")),-value_44,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sIntNode_finalize;
            _inf_value24->clone=(void*)sIntNode_clone;
            _inf_value24->compile=(void*)sIntNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sIntNode_kind;
            __result_obj__56 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value147=_inf_value24)));
            come_call_finalizer(sIntNode_finalize, __right_value146, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value147) ? __right_value147 = come_decrement_ref_count(__right_value147, ((struct sNode*)__right_value147)->finalize, ((struct sNode*)__right_value147)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__56) ? __result_obj__56 = come_decrement_ref_count(__result_obj__56, ((struct sNode*)__result_obj__56)->finalize, ((struct sNode*)__result_obj__56)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__56;
        }
        else {
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 505, "struct sNode");
            _inf_obj_value25=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value149=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 505, "struct sIntNode*")),value_44,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sIntNode_finalize;
            _inf_value25->clone=(void*)sIntNode_clone;
            _inf_value25->compile=(void*)sIntNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sIntNode_kind;
            __result_obj__57 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value150=_inf_value25)));
            come_call_finalizer(sIntNode_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value150) ? __right_value150 = come_decrement_ref_count(__right_value150, ((struct sNode*)__right_value150)->finalize, ((struct sNode*)__right_value150)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__57) ? __result_obj__57 = come_decrement_ref_count(__result_obj__57, ((struct sNode*)__result_obj__57)->finalize, ((struct sNode*)__result_obj__57)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__57;
        }
    }
    __result_obj__58 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__58) ? __result_obj__58 = come_decrement_ref_count(__result_obj__58, ((struct sNode*)__result_obj__58)->finalize, ((struct sNode*)__result_obj__58)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__58;
}

struct sNode* get_oct_number(_Bool minus, struct sInfo* info){
int buf_size_45;
char* p_47;
void* __right_value151 = (void*)0;
unsigned long long int value_48;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* __right_value154 = (void*)0;
struct sNode* __result_obj__59;
unsigned long long int value_49;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* __right_value157 = (void*)0;
struct sNode* __result_obj__60;
unsigned int value_50;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* __right_value160 = (void*)0;
struct sNode* __result_obj__61;
unsigned long long int value_51;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* __right_value163 = (void*)0;
struct sNode* __result_obj__62;
unsigned long long int value_52;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* __right_value166 = (void*)0;
struct sNode* __result_obj__63;
unsigned long long int value_53;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* __right_value169 = (void*)0;
struct sNode* __result_obj__64;
unsigned long long int value_54;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* __right_value172 = (void*)0;
struct sNode* __result_obj__65;
struct sNode* __result_obj__66;
    buf_size_45=128;
    char buf_46[128+1];
    memset(&buf_46, 0, sizeof(char)    *(128+1)    );
    p_47=buf_46;
    if(    minus    ) {
        *p_47++=45;
    }
    *p_47++=48;
    while(    (*info->p>=48&&*info->p<=55)||*info->p==95    ) {
        if(        *info->p==95        ) {
            info->p++;
        }
        else {
            *p_47=*info->p;
            p_47++;
            info->p++;
        }
        if(        p_47-buf_46>=buf_size_45-1        ) {
            ((struct tuple2$2int$bool$*)(__right_value151=err_msg(info,"overflow node of number")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value151, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
    }
    *p_47=0;
    skip_spaces_and_lf(info);
    if(    *info->p==117||*info->p==85    ) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108            ) {
                info->p++;
                skip_spaces_and_lf(info);
                value_48=strtoull(buf_46,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 559, "struct sNode");
                _inf_obj_value26=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value153=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 559, "struct sULongNode*")),value_48,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sNodeBase_sline;
                _inf_value26->sline_real=(void*)sNodeBase_sline_real;
                _inf_value26->sname=(void*)sNodeBase_sname;
                _inf_value26->terminated=(void*)sNodeBase_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result_obj__59 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value154=_inf_value26)));
                come_call_finalizer(sULongNode_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value154) ? __right_value154 = come_decrement_ref_count(__right_value154, ((struct sNode*)__right_value154)->finalize, ((struct sNode*)__right_value154)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__59) ? __result_obj__59 = come_decrement_ref_count(__result_obj__59, ((struct sNode*)__result_obj__59)->finalize, ((struct sNode*)__result_obj__59)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__59;
            }
            else {
                value_49=strtoull(buf_46,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 563, "struct sNode");
                _inf_obj_value27=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value156=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 563, "struct sULongNode*")),value_49,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sNodeBase_sline;
                _inf_value27->sline_real=(void*)sNodeBase_sline_real;
                _inf_value27->sname=(void*)sNodeBase_sname;
                _inf_value27->terminated=(void*)sNodeBase_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result_obj__60 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value157=_inf_value27)));
                come_call_finalizer(sULongNode_finalize, __right_value156, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value157) ? __right_value157 = come_decrement_ref_count(__right_value157, ((struct sNode*)__right_value157)->finalize, ((struct sNode*)__right_value157)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__60) ? __result_obj__60 = come_decrement_ref_count(__result_obj__60, ((struct sNode*)__result_obj__60)->finalize, ((struct sNode*)__result_obj__60)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__60;
            }
        }
        else {
            value_50=strtoul(buf_46,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 568, "struct sNode");
            _inf_obj_value28=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value159=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 568, "struct sUIntNode*")),value_50,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result_obj__61 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value160=_inf_value28)));
            come_call_finalizer(sUIntNode_finalize, __right_value159, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value160) ? __right_value160 = come_decrement_ref_count(__right_value160, ((struct sNode*)__right_value160)->finalize, ((struct sNode*)__right_value160)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__61) ? __result_obj__61 = come_decrement_ref_count(__result_obj__61, ((struct sNode*)__result_obj__61)->finalize, ((struct sNode*)__result_obj__61)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__61;
        }
    }
    else if(    *info->p==76||*info->p==108    ) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108        ) {
            info->p++;
            skip_spaces_and_lf(info);
            value_51=strtoull(buf_46,((void*)0),0);
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 581, "struct sNode");
            _inf_obj_value29=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value162=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 581, "struct sLongNode*")),value_51,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sLongNode_finalize;
            _inf_value29->clone=(void*)sLongNode_clone;
            _inf_value29->compile=(void*)sLongNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sLongNode_kind;
            __result_obj__62 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value163=_inf_value29)));
            come_call_finalizer(sLongNode_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value163) ? __right_value163 = come_decrement_ref_count(__right_value163, ((struct sNode*)__right_value163)->finalize, ((struct sNode*)__right_value163)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__62) ? __result_obj__62 = come_decrement_ref_count(__result_obj__62, ((struct sNode*)__result_obj__62)->finalize, ((struct sNode*)__result_obj__62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__62;
        }
        else if(        *info->p==85||*info->p==117        ) {
            info->p++;
            skip_spaces_and_lf(info);
            value_52=strtoull(buf_46,((void*)0),0);
            _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 589, "struct sNode");
            _inf_obj_value30=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value165=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 589, "struct sULongNode*")),value_52,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sULongNode_finalize;
            _inf_value30->clone=(void*)sULongNode_clone;
            _inf_value30->compile=(void*)sULongNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sULongNode_kind;
            __result_obj__63 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value166=_inf_value30)));
            come_call_finalizer(sULongNode_finalize, __right_value165, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value166) ? __right_value166 = come_decrement_ref_count(__right_value166, ((struct sNode*)__right_value166)->finalize, ((struct sNode*)__right_value166)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__63) ? __result_obj__63 = come_decrement_ref_count(__result_obj__63, ((struct sNode*)__result_obj__63)->finalize, ((struct sNode*)__result_obj__63)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__63;
        }
        else {
            value_53=strtoull(buf_46,((void*)0),0);
            _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 593, "struct sNode");
            _inf_obj_value31=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value168=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 593, "struct sLongNode*")),value_53,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sLongNode_finalize;
            _inf_value31->clone=(void*)sLongNode_clone;
            _inf_value31->compile=(void*)sLongNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sLongNode_kind;
            __result_obj__64 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value169=_inf_value31)));
            come_call_finalizer(sLongNode_finalize, __right_value168, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value169) ? __right_value169 = come_decrement_ref_count(__right_value169, ((struct sNode*)__right_value169)->finalize, ((struct sNode*)__right_value169)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__64;
        }
    }
    else {
        value_54=strtoull(buf_46,((void*)0),0);
        _inf_value32=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 598, "struct sNode");
        _inf_obj_value32=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value171=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 598, "struct sIntNode*")),value_54,info))));
        _inf_value32->_protocol_obj=_inf_obj_value32;
        _inf_value32->finalize=(void*)sIntNode_finalize;
        _inf_value32->clone=(void*)sIntNode_clone;
        _inf_value32->compile=(void*)sIntNode_compile;
        _inf_value32->sline=(void*)sNodeBase_sline;
        _inf_value32->sline_real=(void*)sNodeBase_sline_real;
        _inf_value32->sname=(void*)sNodeBase_sname;
        _inf_value32->terminated=(void*)sNodeBase_terminated;
        _inf_value32->kind=(void*)sIntNode_kind;
        __result_obj__65 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value172=_inf_value32)));
        come_call_finalizer(sIntNode_finalize, __right_value171, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value172) ? __right_value172 = come_decrement_ref_count(__right_value172, ((struct sNode*)__right_value172)->finalize, ((struct sNode*)__right_value172)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__65) ? __result_obj__65 = come_decrement_ref_count(__result_obj__65, ((struct sNode*)__result_obj__65)->finalize, ((struct sNode*)__result_obj__65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__65;
    }
    __result_obj__66 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__66) ? __result_obj__66 = come_decrement_ref_count(__result_obj__66, ((struct sNode*)__result_obj__66)->finalize, ((struct sNode*)__result_obj__66)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__66;
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __right_value173 = (void*)0;
struct sNode* node_55;
void* __right_value174 = (void*)0;
struct sNode* __dec_obj26;
struct sNode* __result_obj__67;
void* __right_value175 = (void*)0;
struct sNode* node_56;
void* __right_value176 = (void*)0;
struct sNode* __dec_obj27;
struct sNode* __result_obj__68;
void* __right_value177 = (void*)0;
struct sNode* node_57;
void* __right_value178 = (void*)0;
struct sNode* __dec_obj28;
struct sNode* __result_obj__69;
struct sNode* node_58;
void* __right_value179 = (void*)0;
struct sNode* __dec_obj29;
void* __right_value180 = (void*)0;
struct sNode* __dec_obj30;
struct sNode* __result_obj__70;
void* __right_value181 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value182 = (void*)0;
struct sNode* __dec_obj32;
struct sNode* __result_obj__71;
void* __right_value183 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value184 = (void*)0;
struct sNode* __dec_obj34;
struct sNode* __result_obj__72;
void* __right_value185 = (void*)0;
struct sNode* node_59;
void* __right_value186 = (void*)0;
struct sNode* __dec_obj35;
struct sNode* __result_obj__73;
node_58 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    *info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)    ) {
        info->p+=2;
        node_55=(struct sNode*)come_increment_ref_count(get_hex_number((_Bool)0,info));
        __dec_obj26=node_55,
        node_55=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_55),info));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__67 = (struct sNode*)come_increment_ref_count(node_55);
        ((node_55) ? node_55 = come_decrement_ref_count(node_55, ((struct sNode*)node_55)->finalize, ((struct sNode*)node_55)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__67) ? __result_obj__67 = come_decrement_ref_count(__result_obj__67, ((struct sNode*)__result_obj__67)->finalize, ((struct sNode*)__result_obj__67)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__67;
        ((node_55) ? node_55 = come_decrement_ref_count(node_55, ((struct sNode*)node_55)->finalize, ((struct sNode*)node_55)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==48&&xisdigit(*(info->p+1))    ) {
        info->p++;
        node_56=(struct sNode*)come_increment_ref_count(get_oct_number((_Bool)0,info));
        __dec_obj27=node_56,
        node_56=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_56),info));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__68 = (struct sNode*)come_increment_ref_count(node_56);
        ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__68) ? __result_obj__68 = come_decrement_ref_count(__result_obj__68, ((struct sNode*)__result_obj__68)->finalize, ((struct sNode*)__result_obj__68)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__68;
        ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    xisdigit(*info->p)    ) {
        node_57=(struct sNode*)come_increment_ref_count(get_number((_Bool)0,info));
        __dec_obj28=node_57,
        node_57=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_57),info));
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__69 = (struct sNode*)come_increment_ref_count(node_57);
        ((node_57) ? node_57 = come_decrement_ref_count(node_57, ((struct sNode*)node_57)->finalize, ((struct sNode*)node_57)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__69) ? __result_obj__69 = come_decrement_ref_count(__result_obj__69, ((struct sNode*)__result_obj__69)->finalize, ((struct sNode*)__result_obj__69)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__69;
        ((node_57) ? node_57 = come_decrement_ref_count(node_57, ((struct sNode*)node_57)->finalize, ((struct sNode*)node_57)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==45&&(xisdigit(*(info->p+1))||(*info->p==48&&*(info->p+1)==120||*(info->p+1)==88)||(*info->p==48&&xisdigit(*(info->p+1))))    ) {
        info->p++;
        if(        *info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)        ) {
            info->p+=2;
            __dec_obj29=node_58,
            node_58=(struct sNode*)come_increment_ref_count(get_hex_number((_Bool)1,info));
            (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            __dec_obj30=node_58,
            node_58=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_58),info));
            (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            __result_obj__70 = (struct sNode*)come_increment_ref_count(node_58);
            ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__70) ? __result_obj__70 = come_decrement_ref_count(__result_obj__70, ((struct sNode*)__result_obj__70)->finalize, ((struct sNode*)__result_obj__70)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__70;
        }
        else if(        *info->p==48&&xisdigit(*(info->p+1))        ) {
            info->p++;
            __dec_obj31=node_58,
            node_58=(struct sNode*)come_increment_ref_count(get_oct_number((_Bool)1,info));
            (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            __dec_obj32=node_58,
            node_58=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_58),info));
            (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            __result_obj__71 = (struct sNode*)come_increment_ref_count(node_58);
            ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__71) ? __result_obj__71 = come_decrement_ref_count(__result_obj__71, ((struct sNode*)__result_obj__71)->finalize, ((struct sNode*)__result_obj__71)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__71;
        }
        else {
            __dec_obj33=node_58,
            node_58=(struct sNode*)come_increment_ref_count(get_number((_Bool)1,info));
            (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            __dec_obj34=node_58,
            node_58=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_58),info));
            (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        }
        __result_obj__72 = (struct sNode*)come_increment_ref_count(node_58);
        ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__72) ? __result_obj__72 = come_decrement_ref_count(__result_obj__72, ((struct sNode*)__result_obj__72)->finalize, ((struct sNode*)__result_obj__72)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__72;
        ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        node_59=(struct sNode*)come_increment_ref_count(expression_node_v98(info));
        __dec_obj35=node_59,
        node_59=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_59),info));
        (__dec_obj35 ? __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__73 = (struct sNode*)come_increment_ref_count(node_59);
        ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__73) ? __result_obj__73 = come_decrement_ref_count(__result_obj__73, ((struct sNode*)__result_obj__73)->finalize, ((struct sNode*)__result_obj__73)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__73;
        ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

