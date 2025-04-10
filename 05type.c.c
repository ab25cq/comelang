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
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
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
_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sClass* klass_0;
void* __right_value1 = (void*)0;
struct sType* type_15;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sClass* generics_class_22;
void* __right_value5 = (void*)0;
_Bool generics_type_name_23;
void* __right_value6 = (void*)0;
_Bool mgenerics_type_name_30;
    klass_0=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    /*c*/ come_call_finalizer3(__right_value0,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type_15=((struct sType*)(__right_value1=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    /*c*/ come_call_finalizer3(__right_value1,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_class_22=((struct sClass*)(__right_value4=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value3=__builtin_string(buf))))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value4,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_type_name_23=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value5=__builtin_string(buf))));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    mgenerics_type_name_30=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value6=__builtin_string(buf))));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    gComeC    ) {
        return (type_15&&type_15->mTypedef)||(klass_0&&klass_0->mNumber)||(klass_0&&klass_0->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_22||generics_type_name_23||mgenerics_type_name_30||klass_0||type_15||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_1;
unsigned int hash_2;
unsigned int it_3;
struct sClass* __result_obj__1;
struct sClass* __result_obj__2;
struct sClass* __result_obj__3;
struct sClass* __result_obj__4;
default_value_1 = (void*)0;
    memset(&default_value_1,0,sizeof(struct sClass*));
    hash_2=string_get_hash_key(((char*)key))%self->size;
    it_3=hash_2;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_3]        ) {
            if(            string_equals(self->keys[it_3],key)            ) {
                __result_obj__1 = (struct sClass*)come_increment_ref_count(self->items[it_3]);
                /*c*/ come_call_finalizer3(default_value_1,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__1,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__1;
            }
            it_3++;
            if(            it_3>=self->size            ) {
                it_3=0;
            }
            else if(            it_3==hash_2            ) {
                __result_obj__2 = (struct sClass*)come_increment_ref_count(default_value_1);
                /*c*/ come_call_finalizer3(default_value_1,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__2,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__2;
            }
        }
        else {
            __result_obj__3 = (struct sClass*)come_increment_ref_count(default_value_1);
            /*c*/ come_call_finalizer3(default_value_1,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__3,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__3;
        }
    }
    __result_obj__4 = (struct sClass*)come_increment_ref_count(default_value_1);
    /*c*/ come_call_finalizer3(default_value_1,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__4,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__4;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_4;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)    ) {
        prev_it_5=it_4;
        it_4=it_4->next;
        /*c*/ come_call_finalizer3(prev_it_5,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sType$ph* it_6;
struct list_item$1sType$ph* prev_it_7;
    it_6=self->head;
    while(    it_6!=((void*)0)    ) {
        prev_it_7=it_6;
        it_6=it_6->next;
        /*c*/ come_call_finalizer3(prev_it_7,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_8;
struct list_item$1sNode$ph* prev_it_9;
    it_8=self->head;
    while(    it_8!=((void*)0)    ) {
        prev_it_9=it_8;
        it_8=it_8->next;
        /*c*/ come_call_finalizer3(prev_it_9,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_10;
struct list_item$1char$ph* prev_it_11;
    it_10=self->head;
    while(    it_10!=((void*)0)    ) {
        prev_it_11=it_10;
        it_10=it_10->next;
        /*c*/ come_call_finalizer3(prev_it_11,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_12;
unsigned int hash_13;
unsigned int it_14;
struct sClass* __result_obj__5;
struct sClass* __result_obj__6;
struct sClass* __result_obj__7;
struct sClass* __result_obj__8;
default_value_12 = (void*)0;
    memset(&default_value_12,0,sizeof(struct sClass*));
    hash_13=string_get_hash_key(((char*)key))%self->size;
    it_14=hash_13;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_14]        ) {
            if(            string_equals(self->keys[it_14],key)            ) {
                __result_obj__5 = (struct sClass*)come_increment_ref_count(self->items[it_14]);
                /*c*/ come_call_finalizer3(default_value_12,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__5,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__5;
            }
            it_14++;
            if(            it_14>=self->size            ) {
                it_14=0;
            }
            else if(            it_14==hash_13            ) {
                __result_obj__6 = (struct sClass*)come_increment_ref_count(default_value_12);
                /*c*/ come_call_finalizer3(default_value_12,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__6,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__6;
            }
        }
        else {
            __result_obj__7 = (struct sClass*)come_increment_ref_count(default_value_12);
            /*c*/ come_call_finalizer3(default_value_12,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__7,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__7;
        }
    }
    __result_obj__8 = (struct sClass*)come_increment_ref_count(default_value_12);
    /*c*/ come_call_finalizer3(default_value_12,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__8,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__8;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_16;
unsigned int hash_17;
unsigned int it_18;
struct sType* __result_obj__9;
struct sType* __result_obj__10;
struct sType* __result_obj__11;
struct sType* __result_obj__12;
default_value_16 = (void*)0;
    memset(&default_value_16,0,sizeof(struct sType*));
    hash_17=string_get_hash_key(((char*)key))%self->size;
    it_18=hash_17;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_18]        ) {
            if(            string_equals(self->keys[it_18],key)            ) {
                __result_obj__9 = (struct sType*)come_increment_ref_count(self->items[it_18]);
                /*c*/ come_call_finalizer3(default_value_16,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__9,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__9;
            }
            it_18++;
            if(            it_18>=self->size            ) {
                it_18=0;
            }
            else if(            it_18==hash_17            ) {
                __result_obj__10 = (struct sType*)come_increment_ref_count(default_value_16);
                /*c*/ come_call_finalizer3(default_value_16,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__10,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__10;
            }
        }
        else {
            __result_obj__11 = (struct sType*)come_increment_ref_count(default_value_16);
            /*c*/ come_call_finalizer3(default_value_16,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__11,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__11;
        }
    }
    __result_obj__12 = (struct sType*)come_increment_ref_count(default_value_16);
    /*c*/ come_call_finalizer3(default_value_16,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__12,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__12;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_19;
unsigned int hash_20;
unsigned int it_21;
struct sType* __result_obj__13;
struct sType* __result_obj__14;
struct sType* __result_obj__15;
struct sType* __result_obj__16;
default_value_19 = (void*)0;
    memset(&default_value_19,0,sizeof(struct sType*));
    hash_20=string_get_hash_key(((char*)key))%self->size;
    it_21=hash_20;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_21]        ) {
            if(            string_equals(self->keys[it_21],key)            ) {
                __result_obj__13 = (struct sType*)come_increment_ref_count(self->items[it_21]);
                /*c*/ come_call_finalizer3(default_value_19,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__13,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__13;
            }
            it_21++;
            if(            it_21>=self->size            ) {
                it_21=0;
            }
            else if(            it_21==hash_20            ) {
                __result_obj__14 = (struct sType*)come_increment_ref_count(default_value_19);
                /*c*/ come_call_finalizer3(default_value_19,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__14,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__14;
            }
        }
        else {
            __result_obj__15 = (struct sType*)come_increment_ref_count(default_value_19);
            /*c*/ come_call_finalizer3(default_value_19,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__15;
        }
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(default_value_19);
    /*c*/ come_call_finalizer3(default_value_19,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__16,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__16;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item){
struct list$1char$ph* _foreach_var_name1_24;
char* it_27;
    for(    _foreach_var_name1_24=self,    it_27=list$1char$ph_begin(_foreach_var_name1_24);    !list$1char$ph_end(_foreach_var_name1_24);    it_27=list$1char$ph_next(_foreach_var_name1_24)    ){
        if(        string_equals(it_27,item)        ) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_25;
char* __result_obj__17;
char* __result_obj__18;
char* result_26;
char* __result_obj__19;
result_25 = (void*)0;
result_26 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_25,0,sizeof(char*));
        __result_obj__17 = result_25;
        return __result_obj__17;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__18 = self->it->item;
        return __result_obj__18;
    }
    memset(&result_26,0,sizeof(char*));
    __result_obj__19 = result_26;
    return __result_obj__19;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_28;
char* __result_obj__20;
char* __result_obj__21;
char* result_29;
char* __result_obj__22;
result_28 = (void*)0;
result_29 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_28,0,sizeof(char*));
        __result_obj__20 = result_28;
        return __result_obj__20;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_29,0,sizeof(char*));
    __result_obj__22 = result_29;
    return __result_obj__22;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sType$ph* _foreach_var_name2_31;
struct sType* it_34;
_Bool __result_obj__29;
    for(    _foreach_var_name2_31=(struct list$1sType$ph*)come_increment_ref_count(type->mGenericsTypes),    it_34=list$1sType$ph_begin(_foreach_var_name2_31);    !list$1sType$ph_end(_foreach_var_name2_31);    it_34=list$1sType$ph_next(_foreach_var_name2_31)    ){
        if(        is_contained_generics_class(it_34,info)        ) {
            __result_obj__29 = (_Bool)1;
            /*c*/ come_call_finalizer3(_foreach_var_name2_31,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__29;
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name2_31,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type->mClass->mGenerics    ) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics    ) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_32;
struct sType* __result_obj__23;
struct sType* __result_obj__24;
struct sType* result_33;
struct sType* __result_obj__25;
result_32 = (void*)0;
result_33 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_32,0,sizeof(struct sType*));
        __result_obj__23 = result_32;
        return __result_obj__23;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__24 = self->it->item;
        return __result_obj__24;
    }
    memset(&result_33,0,sizeof(struct sType*));
    __result_obj__25 = result_33;
    return __result_obj__25;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_35;
struct sType* __result_obj__26;
struct sType* __result_obj__27;
struct sType* result_36;
struct sType* __result_obj__28;
result_35 = (void*)0;
result_36 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_35,0,sizeof(struct sType*));
        __result_obj__26 = result_35;
        return __result_obj__26;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_36,0,sizeof(struct sType*));
    __result_obj__28 = result_36;
    return __result_obj__28;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
struct list$1sType$ph* param_types_37;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1char$ph* param_names_38;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1char$ph* param_default_parametors_39;
_Bool var_args_40;
void* __right_value16 = (void*)0;
void* __right_value51 = (void*)0;
struct sType* type__44;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
_Bool void_param_65;
char* p_66;
int sline_67;
void* __right_value54 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type_68=0;
char* param_name_69=0;
_Bool err_70=0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__47;
void* __right_value57 = (void*)0;
struct sType* param_type2_71;
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
char* p_78;
_Bool no_comma_79;
void* __right_value66 = (void*)0;
struct sNode* node_80;
char* p2_81;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__50;
    param_types_37=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 74, "struct list$1sType$ph*"))));
    param_names_38=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 75, "struct list$1char$ph*"))));
    param_default_parametors_39=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 76, "struct list$1char$ph*"))));
    var_args_40=(_Bool)0;
    if(    in_constructor_    ) {
        list$1char$ph_add(param_names_38,(char*)come_increment_ref_count(xsprintf("self")));
        type__44=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        type__44->mHeap=(_Bool)1;
        list$1sType$ph_add(param_types_37,(struct sType*)come_increment_ref_count(type__44));
        list$1char$ph_add(param_default_parametors_39,((void*)0));
        /*c*/ come_call_finalizer3(type__44,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->in_class    ) {
        list$1char$ph_add(param_names_38,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(param_types_37,(struct sType*)come_increment_ref_count(sType_clone(info->class_type)));
        list$1char$ph_add(param_default_parametors_39,((void*)0));
    }
    expected_next_character(40,info);
    void_param_65=(_Bool)0;
    {
        p_66=info->p;
        sline_67=info->sline;
        if(        strmemcmp(info->p,"void")        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                void_param_65=(_Bool)1;
            }
        }
        info->p=p_66;
        info->sline=sline_67;
    }
    if(    void_param_65    ) {
        if(        strmemcmp(info->p,"void")        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value54=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_68=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_69=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_70=multiple_assign_var1->v3;
            /*c*/ come_call_finalizer3(__right_value54,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_70            ) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__47 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value56=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 138, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                /*c*/ come_call_finalizer3(param_type_68,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(param_types_37,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_38,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_39,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value56,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__47,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__47;
            }
            param_type2_71=(struct sType*)come_increment_ref_count(solve_generics(param_type_68,info->generics_type,info));
            list$1sType$ph_push_back(param_types_37,(struct sType*)come_increment_ref_count(sType_clone(param_type2_71)));
            list$1char$ph_push_back(param_names_38,(char*)come_increment_ref_count((char*)come_memdup(param_name_69, "05type.c", 144, "char*")));
            if(            *info->p==61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_78=info->p;
                no_comma_79=info->no_comma;
                info->no_comma=(_Bool)1;
                node_80=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_79;
                p2_81=info->p;
                char buf_82[p2_81-p_78+1];
                memset(&buf_82, 0, sizeof(char)                *(p2_81-p_78+1)                );
                memcpy(buf_82,p_78,p2_81-p_78);
                buf_82[p2_81-p_78]=0;
                list$1char$ph_push_back(param_default_parametors_39,(char*)come_increment_ref_count(__builtin_string(buf_82)));
                ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors_39,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")                ) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_40=(_Bool)1;
                    expected_next_character(41,info);
                    /*c*/ come_call_finalizer3(param_type_68,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(param_type2_71,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                /*c*/ come_call_finalizer3(param_type_68,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(param_type2_71,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            /*c*/ come_call_finalizer3(param_type_68,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(param_type2_71,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    __result_obj__50 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value69=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 196, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types_37),(struct list$1char$ph*)come_increment_ref_count(param_names_38),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_39),var_args_40))));
    /*c*/ come_call_finalizer3(param_types_37,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_38,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_39,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value69,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__50,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__50;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__30;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__30,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__30;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__31;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__31 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__31,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value13 = (void*)0;
struct list_item$1char$ph* litem_41;
char* __dec_obj1;
void* __right_value14 = (void*)0;
struct list_item$1char$ph* litem_42;
char* __dec_obj2;
void* __right_value15 = (void*)0;
struct list_item$1char$ph* litem_43;
char* __dec_obj3;
struct list$1char$ph* __result_obj__32;
    if(    self->len==0    ) {
        litem_41=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value13=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_41->prev=((void*)0);
        litem_41->next=((void*)0);
        __dec_obj1=litem_41->item,
        litem_41->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_41;
        self->head=litem_41;
    }
    else if(    self->len==1    ) {
        litem_42=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value14=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_42->prev=self->head;
        litem_42->next=((void*)0);
        __dec_obj2=litem_42->item,
        litem_42->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_42;
        self->head->next=litem_42;
    }
    else {
        litem_43=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value15=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_43->prev=self->tail;
        litem_43->next=((void*)0);
        __dec_obj3=litem_43->item,
        litem_43->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_43;
        self->tail=litem_43;
    }
    self->len++;
    __result_obj__32 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__32;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__33;
void* __right_value17 = (void*)0;
struct sType* result_45;
void* __right_value18 = (void*)0;
struct sType* __dec_obj4;
void* __right_value19 = (void*)0;
struct sType* __dec_obj5;
void* __right_value27 = (void*)0;
struct list$1sType$ph* __dec_obj9;
void* __right_value28 = (void*)0;
struct sType* __dec_obj10;
void* __right_value30 = (void*)0;
struct sNode* __dec_obj11;
void* __right_value31 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value32 = (void*)0;
char* __dec_obj13;
void* __right_value33 = (void*)0;
char* __dec_obj14;
void* __right_value34 = (void*)0;
char* __dec_obj15;
void* __right_value42 = (void*)0;
struct list$1sNode$ph* __dec_obj19;
void* __right_value43 = (void*)0;
char* __dec_obj20;
void* __right_value44 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value49 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value50 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__45;
    if(    self==(void*)0    ) {
        __result_obj__33 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__33,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__33;
    }
    result_45=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_45->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj4=result_45->mOriginalLoadVarType,
        result_45->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj5=result_45->mChannelType,
        result_45->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj9=result_45->mGenericsTypes,
        result_45->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj9,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj10=result_45->mNoSolvedGenericsType,
        result_45->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj10,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj11=result_45->mSizeNum,
        result_45->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj12=result_45->mAlignas,
        result_45->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj13=result_45->mTupleName,
        result_45->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj14=result_45->mAttribute,
        result_45->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_45->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_45->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_45->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_45->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_45->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_45->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_45->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_45->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_45->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_45->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_45->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_45->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_45->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_45->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_45->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_45->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_45->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_45->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_45->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_45->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_45->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_45->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_45->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj15=result_45->mAsmName,
        result_45->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_45->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_45->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_45->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj19=result_45->mArrayNum,
        result_45->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj19,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_45->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_45->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_45->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_45->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_45->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj20=result_45->mOriginalTypeName,
        result_45->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_45->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_45->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_45->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_45->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj21=result_45->mParamTypes,
        result_45->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_45->mParamNames,
        result_45->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_45->mResultType,
        result_45->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_45->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_45->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)    ) {
        result_45->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__45 = (struct sType*)come_increment_ref_count(result_45);
    /*c*/ come_call_finalizer3(result_45,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__45,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__45;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__34;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1sType$ph* result_46;
struct list_item$1sType$ph* it_47;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sType$ph* __result_obj__36;
    if(    self==((void*)0)    ) {
        __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__34,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__34;
    }
    result_46=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_46,(struct sType*)come_increment_ref_count(sType_clone(it_47->item)));
        }
        else {
            list$1sType$ph_add(result_46,(struct sType*)come_increment_ref_count(sType_clone(it_47->item)));
        }
        it_47=it_47->next;
    }
    __result_obj__36 = (struct list$1sType$ph*)come_increment_ref_count(result_46);
    /*c*/ come_call_finalizer3(result_46,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__36,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value22 = (void*)0;
struct list_item$1sType$ph* litem_48;
struct sType* __dec_obj6;
void* __right_value23 = (void*)0;
struct list_item$1sType$ph* litem_49;
struct sType* __dec_obj7;
void* __right_value24 = (void*)0;
struct list_item$1sType$ph* litem_50;
struct sType* __dec_obj8;
struct list$1sType$ph* __result_obj__35;
    if(    self->len==0    ) {
        litem_48=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value22=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_48->prev=((void*)0);
        litem_48->next=((void*)0);
        __dec_obj6=litem_48->item,
        litem_48->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_48;
        self->head=litem_48;
    }
    else if(    self->len==1    ) {
        litem_49=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value23=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        __dec_obj7=litem_49->item,
        litem_49->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value24=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        __dec_obj8=litem_50->item,
        litem_50->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
    __result_obj__35 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__35;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_51;
struct list_item$1sType$ph* prev_it_52;
    it_51=self->head;
    while(    it_51!=((void*)0)    ) {
        prev_it_52=it_51;
        it_51=it_51->next;
        /*c*/ come_call_finalizer3(prev_it_52,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__37;
void* __right_value29 = (void*)0;
struct sNode* result_53;
struct sNode* __result_obj__38;
    if(    self==(void*)0    ) {
        __result_obj__37 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__37) ? __result_obj__37 = come_decrement_ref_count(__result_obj__37, ((struct sNode*)__result_obj__37)->finalize, ((struct sNode*)__result_obj__37)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__37;
    }
    result_53=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_53->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_53->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_53->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_53->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_53->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_53->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_53->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_53->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_53->kind=self->kind;
    }
    __result_obj__38 = (struct sNode*)come_increment_ref_count(result_53);
    ((result_53) ? result_53 = come_decrement_ref_count(result_53, ((struct sNode*)result_53)->finalize, ((struct sNode*)result_53)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__38) ? __result_obj__38 = come_decrement_ref_count(__result_obj__38, ((struct sNode*)__result_obj__38)->finalize, ((struct sNode*)__result_obj__38)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__38;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__39;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1sNode$ph* result_54;
struct list_item$1sNode$ph* it_55;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1sNode$ph* __result_obj__42;
    if(    self==((void*)0)    ) {
        __result_obj__39 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__39,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__39;
    }
    result_54=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_55=self->head;
    while(    it_55!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_54,(struct sNode*)come_increment_ref_count(sNode_clone(it_55->item)));
        }
        else {
            list$1sNode$ph_add(result_54,(struct sNode*)come_increment_ref_count(sNode_clone(it_55->item)));
        }
        it_55=it_55->next;
    }
    __result_obj__42 = (struct list$1sNode$ph*)come_increment_ref_count(result_54);
    /*c*/ come_call_finalizer3(result_54,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__42,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__42;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__40;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__40 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__40,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__40;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value37 = (void*)0;
struct list_item$1sNode$ph* litem_56;
struct sNode* __dec_obj16;
void* __right_value38 = (void*)0;
struct list_item$1sNode$ph* litem_57;
struct sNode* __dec_obj17;
void* __right_value39 = (void*)0;
struct list_item$1sNode$ph* litem_58;
struct sNode* __dec_obj18;
struct list$1sNode$ph* __result_obj__41;
    if(    self->len==0    ) {
        litem_56=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value37=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_56->prev=((void*)0);
        litem_56->next=((void*)0);
        __dec_obj16=litem_56->item,
        litem_56->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_56;
        self->head=litem_56;
    }
    else if(    self->len==1    ) {
        litem_57=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value38=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_57->prev=self->head;
        litem_57->next=((void*)0);
        __dec_obj17=litem_57->item,
        litem_57->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_57;
        self->head->next=litem_57;
    }
    else {
        litem_58=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value39=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_58->prev=self->tail;
        litem_58->next=((void*)0);
        __dec_obj18=litem_58->item,
        litem_58->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_58;
        self->tail=litem_58;
    }
    self->len++;
    __result_obj__41 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__41;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_59;
struct list_item$1sNode$ph* prev_it_60;
    it_59=self->head;
    while(    it_59!=((void*)0)    ) {
        prev_it_60=it_59;
        it_59=it_59->next;
        /*c*/ come_call_finalizer3(prev_it_60,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__43;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1char$ph* result_61;
struct list_item$1char$ph* it_62;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct list$1char$ph* __result_obj__44;
    if(    self==((void*)0)    ) {
        __result_obj__43 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__43,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__43;
    }
    result_61=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_62=self->head;
    while(    it_62!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_61,(char*)come_increment_ref_count((char*)come_memdup(it_62->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_61,(char*)come_increment_ref_count((char*)come_memdup(it_62->item, "./comelang.h", 1032, "char*")));
        }
        it_62=it_62->next;
    }
    __result_obj__44 = (struct list$1char$ph*)come_increment_ref_count(result_61);
    /*c*/ come_call_finalizer3(result_61,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__44,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__44;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_63;
struct list_item$1char$ph* prev_it_64;
    it_63=self->head;
    while(    it_63!=((void*)0)    ) {
        prev_it_64=it_63;
        it_63=it_63->next;
        /*c*/ come_call_finalizer3(prev_it_64,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj24;
struct list$1char$ph* __dec_obj25;
struct list$1char$ph* __dec_obj26;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__46;
    __dec_obj24=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj24,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj25=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj25,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj26=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    /*b*/ come_call_finalizer3(__dec_obj26,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->v4=v4;
    __result_obj__46 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__46,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__46;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value58 = (void*)0;
struct list_item$1sType$ph* litem_72;
struct sType* __dec_obj27;
void* __right_value59 = (void*)0;
struct list_item$1sType$ph* litem_73;
struct sType* __dec_obj28;
void* __right_value60 = (void*)0;
struct list_item$1sType$ph* litem_74;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__48;
    if(    self->len==0    ) {
        litem_72=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value58=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_72->prev=((void*)0);
        litem_72->next=((void*)0);
        __dec_obj27=litem_72->item,
        litem_72->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_72;
        self->head=litem_72;
    }
    else if(    self->len==1    ) {
        litem_73=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value59=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_73->prev=self->head;
        litem_73->next=((void*)0);
        __dec_obj28=litem_73->item,
        litem_73->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_73;
        self->head->next=litem_73;
    }
    else {
        litem_74=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value60=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_74->prev=self->tail;
        litem_74->next=((void*)0);
        __dec_obj29=litem_74->item,
        litem_74->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_74;
        self->tail=litem_74;
    }
    self->len++;
    __result_obj__48 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_75;
char* __dec_obj30;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_76;
char* __dec_obj31;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_77;
char* __dec_obj32;
struct list$1char$ph* __result_obj__49;
    if(    self->len==0    ) {
        litem_75=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_75->prev=((void*)0);
        litem_75->next=((void*)0);
        __dec_obj30=litem_75->item,
        litem_75->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_75;
        self->head=litem_75;
    }
    else if(    self->len==1    ) {
        litem_76=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_76->prev=self->head;
        litem_76->next=((void*)0);
        __dec_obj31=litem_76->item,
        litem_76->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_76;
        self->head->next=litem_76;
    }
    else {
        litem_77=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_77->prev=self->tail;
        litem_77->next=((void*)0);
        __dec_obj32=litem_77->item,
        litem_77->item=(char*)come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_77;
        self->tail=litem_77;
    }
    self->len++;
    __result_obj__49 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__49;
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value70 = (void*)0;
struct sType* left_type2_83;
void* __right_value71 = (void*)0;
struct sType* right_type2_84;
struct sType* left_no_solved_generics_type_85;
struct sType* right_no_solved_generics_type_86;
struct sClass* left_class_87;
struct sClass* right_class_88;
_Bool parent_class_89;
void* __right_value72 = (void*)0;
_Bool __result_obj__51;
_Bool __result_obj__52;
struct sClass* klass_90;
_Bool flag__91;
void* __right_value73 = (void*)0;
_Bool __result_obj__53;
_Bool __result_obj__54;
_Bool __result_obj__55;
void* __right_value74 = (void*)0;
char* left_type3_92;
void* __right_value75 = (void*)0;
char* __dec_obj33;
void* __right_value76 = (void*)0;
struct sType* __dec_obj34;
void* __right_value77 = (void*)0;
struct sType* __dec_obj35;
_Bool __result_obj__56;
void* __right_value78 = (void*)0;
char* left_type3_93;
void* __right_value79 = (void*)0;
char* __dec_obj36;
void* __right_value80 = (void*)0;
struct sType* __dec_obj37;
void* __right_value81 = (void*)0;
struct sType* __dec_obj38;
_Bool __result_obj__57;
_Bool __result_obj__58;
_Bool __result_obj__59;
int i_94;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
_Bool __result_obj__64;
_Bool __result_obj__65;
void* __right_value84 = (void*)0;
char* left_type3_101;
void* __right_value85 = (void*)0;
char* __dec_obj39;
void* __right_value86 = (void*)0;
struct sType* __dec_obj40;
void* __right_value87 = (void*)0;
struct sType* __dec_obj41;
_Bool __result_obj__66;
void* __right_value88 = (void*)0;
char* left_type3_102;
void* __right_value89 = (void*)0;
char* __dec_obj42;
void* __right_value90 = (void*)0;
struct sType* __dec_obj43;
void* __right_value91 = (void*)0;
struct sType* __dec_obj44;
_Bool __result_obj__67;
void* __right_value92 = (void*)0;
char* __dec_obj45;
void* __right_value93 = (void*)0;
struct sType* __dec_obj46;
void* __right_value94 = (void*)0;
struct sType* __dec_obj47;
_Bool __result_obj__68;
void* __right_value95 = (void*)0;
char* left_type3_103;
void* __right_value96 = (void*)0;
char* __dec_obj48;
void* __right_value97 = (void*)0;
struct sType* __dec_obj49;
void* __right_value98 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__69;
void* __right_value99 = (void*)0;
char* left_type3_104;
void* __right_value100 = (void*)0;
char* __dec_obj51;
void* __right_value101 = (void*)0;
struct sType* __dec_obj52;
void* __right_value102 = (void*)0;
struct sType* __dec_obj53;
_Bool __result_obj__70;
_Bool __result_obj__71;
_Bool __result_obj__72;
_Bool __result_obj__73;
_Bool __result_obj__74;
_Bool __result_obj__75;
_Bool __result_obj__76;
_Bool __result_obj__77;
_Bool __result_obj__78;
_Bool __result_obj__79;
_Bool __result_obj__80;
_Bool __result_obj__81;
_Bool __result_obj__82;
_Bool __result_obj__83;
_Bool __result_obj__84;
_Bool __result_obj__85;
_Bool __result_obj__86;
_Bool __result_obj__87;
void* __right_value103 = (void*)0;
char* tmp_105;
void* __right_value104 = (void*)0;
char* __dec_obj54;
void* __right_value105 = (void*)0;
struct sType* __dec_obj55;
void* __right_value106 = (void*)0;
struct sType* __dec_obj56;
_Bool __result_obj__88;
_Bool __result_obj__89;
_Bool __result_obj__90;
_Bool __result_obj__91;
void* __right_value107 = (void*)0;
char* tmp_106;
void* __right_value108 = (void*)0;
char* __dec_obj57;
void* __right_value109 = (void*)0;
struct sType* __dec_obj58;
_Bool __result_obj__92;
_Bool __result_obj__93;
int i_107;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
_Bool __result_obj__94;
    left_type2_83=(struct sType*)come_increment_ref_count(sType_clone(left_type));
    right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_85=((void*)0);
    if(    left_type2_83->mNoSolvedGenericsType    ) {
        left_no_solved_generics_type_85=left_type2_83->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_86=((void*)0);
    if(    right_type2_84->mNoSolvedGenericsType    ) {
        right_no_solved_generics_type_86=right_type2_84->mNoSolvedGenericsType;
    }
    left_class_87=left_type2_83->mClass;
    right_class_88=right_type2_84->mClass;
    parent_class_89=(_Bool)0;
    if(    string_operator_not_equals(left_class_87->mName,right_class_88->mName)    ) {
        while(        left_class_87&&right_class_88        ) {
            if(            string_operator_equals(left_class_87->mName,right_class_88->mName)            ) {
                parent_class_89=(_Bool)1;
            }
            if(            right_class_88->mParentClassName            ) {
                right_class_88=((struct sClass*)(__right_value72=map$2char$phsClass$ph_operator_load_element(info->classes,right_class_88->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value72,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                right_class_88=((void*)0);
            }
        }
    }
    if(    pointer_massive    ) {
        if(        left_type2_83->mPointerNum>0&&right_type->mPointerNum==0        ) {
            if(            string_operator_equals(left_type2_83->mClass->mName,"lambda")            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__51 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__51;
            }
        }
        else if(        left_type2_83->mPointerNum==0&&right_type->mPointerNum>0        ) {
            if(            list$1sNode$ph_length(left_type2_83->mArrayNum)>0            ) {
            }
            else if(            string_operator_equals(left_type2_83->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__52 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__52;
            }
        }
        else if(        left_type2_83->mPointerNum>0&&right_type->mPointerNum>0        ) {
            klass_90=right_type->mClass;
            flag__91=(_Bool)0;
            while(            klass_90            ) {
                if(                string_operator_equals(klass_90->mName,left_type2_83->mClass->mName)                ) {
                    flag__91=(_Bool)1;
                }
                if(                klass_90->mParentClassName                ) {
                    klass_90=((struct sClass*)(__right_value73=map$2char$phsClass$ph_operator_load_element(info->classes,klass_90->mParentClassName)));
                    /*c*/ come_call_finalizer3(__right_value73,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    klass_90=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2_83->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2_83->mClass->mName,"lambda")            ) {
            }
            else if(            left_type2_83->mException            ) {
            }
            else if(            left_no_solved_generics_type_85&&right_no_solved_generics_type_86&&(list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes)>0)            ) {
            }
            else if(            strlen(left_type2_83->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_83->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))            ) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            string_operator_not_equals(left_type2_83->mClass->mName,right_type->mClass->mName)&&!flag__91            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__53 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__53;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_85&&right_no_solved_generics_type_86    ) {
        if(        strlen(left_type2_83->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_83->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__54 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__54;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_83->mPointerNum>0        ) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mNumber&&left_type2_83->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                    info->err_num++;
                    __result_obj__55 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__55;
                }
            }
            else {
                left_type3_92=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj33=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_92,come_value->c_value));
                __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj34=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                /*b*/ come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj35=right_type2_84,
                right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_92 = come_decrement_ref_count(left_type3_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mFloat&&left_type2_83->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                    info->err_num++;
                    __result_obj__56 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__56;
                }
            }
            else {
                left_type3_93=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj36=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_93,come_value->c_value));
                __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj37=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                /*b*/ come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj38=right_type2_84,
                right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                /*b*/ come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_93 = come_decrement_ref_count(left_type3_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&left_type2_83->mPointerNum==right_type2_84->mPointerNum        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"void")&&left_type2_83->mPointerNum>0&&string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&(left_type2_83->mPointerNum!=right_type2_84->mPointerNum||left_type2_83->mHeap!=right_type2_84->mHeap)        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&(left_type2_83->mPointerNum!=right_type2_84->mPointerNum||left_type2_83->mHeap!=right_type2_84->mHeap)        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_83->mClass->mName);
            printf("right type class_name %s\n",right_type2_84->mClass->mName);
            printf("left type pointernum %d\n",left_type2_83->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_83->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
            info->err_num++;
            __result_obj__57 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__57;
        }
        else if(        list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)>0        ) {
            if(            (string_operator_equals(left_no_solved_generics_type_85->mClass->mName,"void")&&left_no_solved_generics_type_85->mPointerNum>0&&right_no_solved_generics_type_86->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_86->mClass->mName,"void")&&right_no_solved_generics_type_86->mPointerNum>0&&left_no_solved_generics_type_85->mPointerNum>0)            ) {
            }
            else {
                if(                list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)!=list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                        info->err_num++;
                        __result_obj__58 = (_Bool)0;
                        /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__58;
                    }
                    __result_obj__59 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__59;
                }
                for(                i_94=0                ;                i_94<list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)                ;                i_94++                ){
                    check_assign_type(msg,((struct sType*)(__right_value82=list$1sType$ph_operator_load_element(left_no_solved_generics_type_85->mGenericsTypes,i_94))),((struct sType*)(__right_value83=list$1sType$ph_operator_load_element(right_no_solved_generics_type_86->mGenericsTypes,i_94))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    /*c*/ come_call_finalizer3(__right_value82,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value83,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_85,right_no_solved_generics_type_86,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
            }
        }
    }
    else if(    strlen(left_type2_83->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_83->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)    ) {
        if(        print_err_msg        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__64 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__64;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mNumber&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                info->err_num++;
                __result_obj__65 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__65;
            }
        }
        else {
            left_type3_101=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj39=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_101,come_value->c_value));
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj40=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj41=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_101 = come_decrement_ref_count(left_type3_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mFloat&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                info->err_num++;
                __result_obj__66 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__66;
            }
        }
        else {
            left_type3_102=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj42=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_102,come_value->c_value));
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj43=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj44=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_102 = come_decrement_ref_count(left_type3_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    left_type2_83->mHeap&&!right_type2_84->mHeap&&left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum>0&&string_operator_not_equals(right_type2_84->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_83->mMultipleTypes&&!right_type->mMultipleTypes    ) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum,left_type2_83->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum,right_type2_84->mHeap);
        info->err_num++;
        __result_obj__67 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__67;
    }
    else if(    parent_class_89&&left_type2_83->mPointerNum==1&&right_type->mPointerNum==1    ) {
        __dec_obj45=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_83->mClass->mName,come_value->c_value));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj46=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj47=right_type2_84,
        right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mNumber&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__68 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__68;
            }
        }
        else {
            left_type3_103=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj48=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_103,come_value->c_value));
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj49=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj50=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_103 = come_decrement_ref_count(left_type3_103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mFloat&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__69 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__69;
            }
        }
        else {
            left_type3_104=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj51=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_104,come_value->c_value));
            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj52=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj53=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_104 = come_decrement_ref_count(left_type3_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum>0&&!right_type2_84->mAllocaValue    ) {
        if(        left_type2_83->mHeap&&!right_type2_84->mHeap        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum,left_type2_83->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum,right_type2_84->mHeap);
            info->err_num++;
            __result_obj__70 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__70;
        }
    }
    else if(    check_no_pointer    ) {
        if(        left_type2_83->mPointerNum>0        ) {
            if(            right_type2_84->mPointerNum>0            ) {
                if(                string_operator_equals(left_type2_83->mClass->mName,"void")||string_operator_equals(right_type2_84->mClass->mName,"void")                ) {
                }
                else if(                string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")                ) {
                }
                else if(                string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                        info->err_num++;
                        __result_obj__71 = (_Bool)0;
                        /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__71;
                    }
                    __result_obj__72 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__72;
                }
            }
            else if(            right_type->mPointerNum==0            ) {
            }
            else {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__73 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__73;
                }
                __result_obj__74 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__74;
            }
        }
        else if(        left_type2_83->mPointerNum==0&&right_type2_84->mPointerNum>0        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__75 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__75;
            }
            __result_obj__76 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__76;
        }
        else if(        left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum==0&&string_operator_equals(right_type2_84->mClass->mName,"lambda")&&string_operator_equals(left_type2_83->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__77 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__77;
            }
            __result_obj__78 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__78;
        }
    }
    else if(    string_operator_equals(left_type2_83->mClass->mName,"char")&&left_type2_83->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2_84->mClass->mName,"char")&&right_type2_84->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_84->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__79 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__79;
            }
            __result_obj__80 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__80;
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")&&right_type2_84->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__81 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__81;
            }
            __result_obj__82 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__82;
        }
        else if(        string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&!(left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum==0)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__83 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__83;
            }
            __result_obj__84 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__84;
        }
    }
    else if(    string_operator_equals(left_type2_83->mClass->mName,"void")&&left_type2_83->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2_84->mClass->mName,"void")&&right_type2_84->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_84->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")&&right_type2_84->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__85 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__85;
            }
            __result_obj__86 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__86;
        }
        else if(        right_type2_84->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__87 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__87;
                }
            }
            else {
                tmp_105=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj54=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_105, "05type.c", 678, "char*"));
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj55=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj56=right_type2_84,
                right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (tmp_105 = come_decrement_ref_count(tmp_105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    left_type2_83->mPointerNum>0||(left_type2_83->mPointerNum==0&&left_type2_83->mClass->mStruct)    ) {
        if(        right_type2_84->mPointerNum>0||(right_type2_84->mPointerNum==0&&right_type2_84->mClass->mStruct)        ) {
            if(            string_operator_equals(left_type2_83->mClass->mName,"void")||string_operator_equals(right_type2_84->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")            ) {
            }
            else if(            string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__88 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__88;
                }
                __result_obj__89 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__89;
            }
            else if(            int_operator_not_equals(left_type2_83->mPointerNum,right_type2_84->mPointerNum)            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
            }
            else if(            list$1sNode$ph_length(right_type2_84->mArrayNum)>0            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum,list$1sNode$ph_length(left_type2_83->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum,list$1sNode$ph_length(right_type2_84->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"void")||string_operator_equals(right_type2_84->mClass->mName,"void")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_84->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"lambda")&&string_operator_equals(right_type2_84->mClass->mName,"lambda")        ) {
        }
        else if(        left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum==0&&string_operator_equals(right_type2_84->mClass->mName,"lambda")&&string_operator_equals(left_type2_83->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__90 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__90;
            }
            __result_obj__91 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__91;
        }
        else if(        left_type2_83->mPointerNum>0&&!(string_operator_equals(right_type2_84->mClass->mName,"lambda")&&string_operator_equals(left_type2_83->mClass->mName,"lambda"))&&right_type2_84->mPointerNum==0        ) {
            tmp_106=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj57=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_106, "05type.c", 734, "char*"));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj58=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __result_obj__92 = (_Bool)1;
            (tmp_106 = come_decrement_ref_count(tmp_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__92;
            (tmp_106 = come_decrement_ref_count(tmp_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph_length(left_type2_83->mGenericsTypes)>0        ) {
            if(            list$1sType$ph_length(left_type2_83->mGenericsTypes)!=list$1sType$ph_length(right_type2_84->mGenericsTypes)            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__93 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__93;
            }
            for(            i_107=0            ;            i_107<list$1sType$ph_length(left_type2_83->mGenericsTypes)            ;            i_107++            ){
                check_assign_type(msg,((struct sType*)(__right_value110=list$1sType$ph_operator_load_element(left_type2_83->mGenericsTypes,i_107))),((struct sType*)(__right_value111=list$1sType$ph_operator_load_element(right_type2_84->mGenericsTypes,i_107))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                /*c*/ come_call_finalizer3(__right_value110,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value111,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    __result_obj__94 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_type2_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_type2_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__94;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_95;
int i_96;
struct sType* __result_obj__60;
struct sType* default_value_97;
struct sType* __result_obj__61;
default_value_97 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_95=self->head;
    i_96=0;
    while(    it_95!=((void*)0)    ) {
        if(        position==i_96        ) {
            __result_obj__60 = (struct sType*)come_increment_ref_count(it_95->item);
            /*c*/ come_call_finalizer3(__result_obj__60,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__60;
        }
        it_95=it_95->next;
        i_96++;
    }
    memset(&default_value_97,0,sizeof(struct sType*));
    __result_obj__61 = (struct sType*)come_increment_ref_count(default_value_97);
    /*c*/ come_call_finalizer3(default_value_97,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__61,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__61;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_98;
int i_99;
struct sType* __result_obj__62;
struct sType* default_value_100;
struct sType* __result_obj__63;
default_value_100 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_98=self->head;
    i_99=0;
    while(    it_98!=((void*)0)    ) {
        if(        position==i_99        ) {
            __result_obj__62 = (struct sType*)come_increment_ref_count(it_98->item);
            /*c*/ come_call_finalizer3(__result_obj__62,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__62;
        }
        it_98=it_98->next;
        i_99++;
    }
    memset(&default_value_100,0,sizeof(struct sType*));
    __result_obj__63 = (struct sType*)come_increment_ref_count(default_value_100);
    /*c*/ come_call_finalizer3(default_value_100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value112 = (void*)0;
struct sType* result_type_108;
char* var_name_109;
char* p_110;
int sline_111;
void* __right_value113 = (void*)0;
char* word_112;
_Bool between_brace_113;
char* p_114;
int sline_115;
void* __right_value114 = (void*)0;
char* word_116;
void* __right_value115 = (void*)0;
char* __dec_obj59;
void* __right_value116 = (void*)0;
char* __dec_obj60;
_Bool no_comma_118;
void* __right_value117 = (void*)0;
struct sNode* node_119;
struct sNode* __dec_obj61;
char* p_120;
int sline_121;
void* __right_value118 = (void*)0;
char* word_122;
void* __right_value119 = (void*)0;
struct sNode* node_123;
void* __right_value123 = (void*)0;
char* attribute_127;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
char* __dec_obj65;
char* __dec_obj66;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__97;
    result_type_108=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first    ) {
        result_type_108->mPointerNum=result_type_108->mTypedefOriginalPointerNum;
    }
    var_name_109=((void*)0);
    {
        p_110=info->p;
        sline_111=info->sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            word_112=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_112,"const")||string_operator_equals(word_112,"__restrict")||string_operator_equals(word_112,"restrict")||string_operator_equals(word_112,"__user")||string_operator_equals(word_112,"volatile")||string_operator_equals(word_112,"_Nonnull")||string_operator_equals(word_112,"_Nullable")||string_operator_equals(word_112,"_Null_unspecified")||string_operator_equals(word_112,"__user")||string_operator_equals(word_112,"_Addr")            ) {
            }
            else {
                info->p=p_110;
                info->sline=sline_111;
            }
            (word_112 = come_decrement_ref_count(word_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p=p_110;
            info->sline=sline_111;
        }
    }
    between_brace_113=(_Bool)0;
    {
        p_114=info->p;
        sline_115=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_116=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_116,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        between_brace_113=(_Bool)1;
                    }
                }
                (word_116 = come_decrement_ref_count(word_116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_114;
        info->sline=sline_115;
    }
    parse_sharp_v5(info);
    while(    *info->p==42    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_108->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_113&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95    ) {
        __dec_obj59=var_name_109,
        var_name_109=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int num_anonymous_var_name_117=0;
        num_anonymous_var_name_117++;
        __dec_obj60=var_name_109,
        var_name_109=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_117));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    between_brace_113&&*info->p==41    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58    ) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_118=info->no_comma;
        info->no_comma=(_Bool)1;
        node_119=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_118;
        __dec_obj61=result_type_108->mSizeNum,
        result_type_108->mSizeNum=(struct sNode*)come_increment_ref_count(node_119);
        (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_120=info->p;
            sline_121=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_122=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_122,"const")||string_operator_equals(word_122,"__restrict")||string_operator_equals(word_122,"restrict")||string_operator_equals(word_122,"__user")||string_operator_equals(word_122,"volatile")||string_operator_equals(word_122,"_Nonnull")||string_operator_equals(word_122,"_Nullable")||string_operator_equals(word_122,"_Null_unspecified")||string_operator_equals(word_122,"__user")||string_operator_equals(word_122,"_Addr")                ) {
                }
                else {
                    info->p=p_120;
                    info->sline=sline_121;
                }
                (word_122 = come_decrement_ref_count(word_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                info->p=p_120;
                info->sline=sline_121;
            }
        }
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_108->mArrayPointerType=(_Bool)1;
            result_type_108->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_123=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(result_type_108->mArrayNum,(struct sNode*)come_increment_ref_count(node_123));
        parse_sharp_v5(info);
        result_type_108->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_123) ? node_123 = come_decrement_ref_count(node_123, ((struct sNode*)node_123)->finalize, ((struct sNode*)node_123)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    attribute_127=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_127,"")    ) {
        if(        result_type_108->mAttribute        ) {
            __dec_obj65=result_type_108->mAttribute,
            result_type_108->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value125=string_operator_add(result_type_108->mAttribute," "))),attribute_127));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj66=result_type_108->mAttribute,
            result_type_108->mAttribute=(char*)come_increment_ref_count(attribute_127);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value127=parse_attribute(info,(_Bool)0)));
    /*c*/ come_call_finalizer3(__right_value127,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__97 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value129=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 916, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_108),(char*)come_increment_ref_count(var_name_109)))));
    /*c*/ come_call_finalizer3(base_type_name,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_108,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_109 = come_decrement_ref_count(var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute_127 = come_decrement_ref_count(attribute_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value129,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__97,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__97;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value120 = (void*)0;
struct list_item$1sNode$ph* litem_124;
struct sNode* __dec_obj62;
void* __right_value121 = (void*)0;
struct list_item$1sNode$ph* litem_125;
struct sNode* __dec_obj63;
void* __right_value122 = (void*)0;
struct list_item$1sNode$ph* litem_126;
struct sNode* __dec_obj64;
struct list$1sNode$ph* __result_obj__95;
    if(    self->len==0    ) {
        litem_124=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value120=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_124->prev=((void*)0);
        litem_124->next=((void*)0);
        __dec_obj62=litem_124->item,
        litem_124->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_124;
        self->head=litem_124;
    }
    else if(    self->len==1    ) {
        litem_125=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value121=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_125->prev=self->head;
        litem_125->next=((void*)0);
        __dec_obj63=litem_125->item,
        litem_125->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_125;
        self->head->next=litem_125;
    }
    else {
        litem_126=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value122=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_126->prev=self->tail;
        litem_126->next=((void*)0);
        __dec_obj64=litem_126->item,
        litem_126->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_126;
        self->tail=litem_126;
    }
    self->len++;
    __result_obj__95 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__95;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj67;
char* __dec_obj68;
struct tuple2$2sType$phchar$ph* __result_obj__96;
    __dec_obj67=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj68=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__96 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__96,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__96;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_128;
int sline_129;
void* __right_value130 = (void*)0;
char* word_130;
int nest_131;
    p_128=info->p;
    sline_129=info->sline;
    if(    xisalpha(*info->p)||*info->p==95    ) {
        word_130=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_130,"__attribute")||string_operator_equals(word_130,"__attribute__"))&&*info->p==40        ) {
            nest_131=0;
            while(            1            ) {
                if(                *info->p==40                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_131++;
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_131--;
                    if(                    nest_131==0                    ) {
                        break;
                    }
                }
                else if(                *info->p==0                ) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_130,"const")||string_operator_equals(word_130,"__restrict")||string_operator_equals(word_130,"restrict")||string_operator_equals(word_130,"__user")||string_operator_equals(word_130,"volatile")||string_operator_equals(word_130,"_Nonnull")||string_operator_equals(word_130,"_Nullable")||string_operator_equals(word_130,"__nonnull")||string_operator_equals(word_130,"_Null_unspecified")||string_operator_equals(word_130,"__user")||string_operator_equals(word_130,"_Addr")||string_operator_equals(word_130,"__noreturn")||string_operator_equals(word_130,"_noreturn")||string_operator_equals(word_130,"_Noreturn")        ) {
        }
        else {
            info->p=p_128;
            info->sline=sline_129;
        }
        (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->p=p_128;
        info->sline=sline_129;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_132;
void* __right_value131 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type_133=0;
char* name_134=0;
_Bool err_135=0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__99;
    no_output_err_132=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value131=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_133=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_134=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_135=multiple_assign_var2->v3;
    /*c*/ come_call_finalizer3(__right_value131,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_132;
    __result_obj__99 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value133=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 973, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_133),(char*)come_increment_ref_count(name_134),err_135))));
    /*c*/ come_call_finalizer3(type_133,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value133,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__99,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__99;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj69;
char* __dec_obj70;
struct tuple3$3sType$phchar$phbool$* __result_obj__98;
    __dec_obj69=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj70=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__98 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__98,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__98;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_136;
int head_sline_137;
void* __right_value134 = (void*)0;
char* type_name_138;
_Bool record__139;
_Bool exception__140;
_Bool constant_141;
_Bool static__142;
_Bool volatile__143;
_Bool register__144;
_Bool unsigned__145;
_Bool long__146;
_Bool long_long_147;
_Bool short__148;
_Bool restrict__149;
_Bool struct__150;
_Bool union__151;
_Bool enum__152;
_Bool no_heap_153;
_Bool extern__154;
_Bool inline__155;
_Bool uniq__156;
_Bool tuple__157;
_Bool immutable__158;
struct sNode* alignas__159;
_Bool anonymous_type_160;
_Bool anonymous_name_161;
_Bool atomic__162;
_Bool object_interface_163;
void* __right_value135 = (void*)0;
char* __dec_obj71;
void* __right_value136 = (void*)0;
char* __dec_obj72;
void* __right_value137 = (void*)0;
char* __dec_obj73;
int brace_num_164;
void* __right_value138 = (void*)0;
char* __dec_obj74;
int brace_num_165;
void* __right_value139 = (void*)0;
char* __dec_obj75;
void* __right_value140 = (void*)0;
char* __dec_obj76;
void* __right_value141 = (void*)0;
char* __dec_obj77;
void* __right_value142 = (void*)0;
char* __dec_obj78;
void* __right_value143 = (void*)0;
char* __dec_obj79;
void* __right_value144 = (void*)0;
struct sNode* exp_166;
struct sNode* __dec_obj80;
void* __right_value145 = (void*)0;
char* __dec_obj81;
void* __right_value146 = (void*)0;
char* __dec_obj82;
void* __right_value147 = (void*)0;
char* __dec_obj83;
void* __right_value148 = (void*)0;
char* __dec_obj84;
void* __right_value149 = (void*)0;
char* __dec_obj85;
void* __right_value150 = (void*)0;
char* __dec_obj86;
void* __right_value151 = (void*)0;
char* __dec_obj87;
void* __right_value152 = (void*)0;
char* __dec_obj88;
void* __right_value153 = (void*)0;
char* __dec_obj89;
void* __right_value154 = (void*)0;
char* __dec_obj90;
char* p_167;
int sline_168;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
char* __dec_obj91;
void* __right_value157 = (void*)0;
char* __dec_obj92;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
char* __dec_obj93;
char* p_169;
int sline_170;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__100;
char* p_171;
int sline_172;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__101;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct sNode* node_173;
_Bool Value_174;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__102;
char* p_175;
int sline_176;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
char* __dec_obj94;
void* __right_value174 = (void*)0;
char* __dec_obj95;
void* __right_value175 = (void*)0;
char* __dec_obj96;
char* p_177;
int sline_178;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__103;
void* __right_value179 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type_179=0;
char* name_180=0;
_Bool err_181=0;
char* p_182;
int sline_183;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__104;
void* __right_value184 = (void*)0;
char* __dec_obj97;
void* __right_value185 = (void*)0;
char* __dec_obj98;
void* __right_value186 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_184=0;
char* name_185=0;
_Bool err_186=0;
char* p_187;
int sline_188;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__105;
char* p_189;
int sline_190;
void* __right_value190 = (void*)0;
char* __dec_obj99;
void* __right_value191 = (void*)0;
char* __dec_obj100;
void* __right_value192 = (void*)0;
char* __dec_obj101;
void* __right_value193 = (void*)0;
char* __dec_obj102;
void* __right_value194 = (void*)0;
char* __dec_obj103;
void* __right_value195 = (void*)0;
char* __dec_obj104;
void* __right_value196 = (void*)0;
char* __dec_obj105;
char* p_191;
int sline_192;
void* __right_value197 = (void*)0;
char* __dec_obj106;
char* p_193;
int sline_194;
void* __right_value198 = (void*)0;
char* __dec_obj107;
void* __right_value199 = (void*)0;
char* __dec_obj108;
void* __right_value200 = (void*)0;
char* __dec_obj109;
char* p_195;
int sline_196;
void* __right_value201 = (void*)0;
char* __dec_obj110;
void* __right_value202 = (void*)0;
char* __dec_obj111;
void* __right_value203 = (void*)0;
char* __dec_obj112;
void* __right_value204 = (void*)0;
char* __dec_obj113;
void* __right_value205 = (void*)0;
char* __dec_obj114;
void* __right_value206 = (void*)0;
char* __dec_obj115;
void* __right_value207 = (void*)0;
char* __dec_obj116;
void* __right_value208 = (void*)0;
char* __dec_obj117;
void* __right_value209 = (void*)0;
char* __dec_obj118;
void* __right_value210 = (void*)0;
char* __dec_obj119;
void* __right_value211 = (void*)0;
char* __dec_obj120;
char* p_197;
int sline_198;
void* __right_value212 = (void*)0;
char* __dec_obj121;
void* __right_value213 = (void*)0;
char* __dec_obj122;
void* __right_value214 = (void*)0;
char* attribute_199;
int pointer_num_200;
_Bool heap_201;
_Bool refference_202;
_Bool no_refference_203;
_Bool channel_204;
_Bool any_class_205;
_Bool vtable_206;
_Bool deffer__207;
char* tuple_name_208;
void* __right_value215 = (void*)0;
char* __dec_obj123;
_Bool lambda_flag_209;
char* pX_210;
int slineX_211;
void* __right_value216 = (void*)0;
struct sType* type_212;
char* var_name_213;
_Bool function_pointer_flag_214;
char* p_215;
int sline_216;
void* __right_value217 = (void*)0;
char* word_217;
_Bool var_name_between_brace_218;
char* p_219;
int sline_220;
void* __right_value218 = (void*)0;
char* word_221;
void* __right_value219 = (void*)0;
char* __dec_obj124;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct sNode* node_223;
_Bool Value_224;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__106;
int pointer_num_225;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct sType* __dec_obj125;
void* __right_value228 = (void*)0;
char* __dec_obj126;
void* __right_value229 = (void*)0;
struct sNode* node_226;
_Bool Value_227;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__107;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sType* __dec_obj127;
void* __right_value235 = (void*)0;
char* __dec_obj128;
void* __right_value236 = (void*)0;
struct sNode* node_228;
_Bool Value_229;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__108;
int pointer_num_230;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sType* __dec_obj129;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__109;
void* __right_value245 = (void*)0;
char* attribute_231;
char* __dec_obj130;
void* __right_value246 = (void*)0;
char* __dec_obj131;
void* __right_value247 = (void*)0;
char* __dec_obj132;
void* __right_value248 = (void*)0;
char* __dec_obj133;
void* __right_value249 = (void*)0;
char* __dec_obj134;
_Bool no_comma_234;
void* __right_value250 = (void*)0;
struct sNode* node_235;
struct sNode* __dec_obj135;
void* __right_value251 = (void*)0;
char* attribute2_236;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
char* __dec_obj136;
char* __dec_obj137;
struct sType* result_type_237;
void* __right_value255 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sType* __dec_obj138;
void* __right_value258 = (void*)0;
int i_238;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct sType* __dec_obj139;
int i_245;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj140;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* __dec_obj141;
struct sNode* __dec_obj142;
void* __right_value272 = (void*)0;
char* __dec_obj143;
void* __right_value273 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var5 = (void*)0;
struct list$1sType$ph* param_types_246=0;
struct list$1char$ph* param_names_247=0;
struct list$1char$ph* param_default_parametors_248=0;
_Bool var_args_249=0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sType* __dec_obj144;
struct sType* __dec_obj145;
struct list$1sType$ph* __dec_obj146;
struct list$1char$ph* __dec_obj147;
int function_pointer_num_250;
struct sType* result_type_251;
void* __right_value277 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sType* __dec_obj148;
void* __right_value280 = (void*)0;
int i_252;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* __dec_obj149;
int i_253;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* __dec_obj150;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* __dec_obj151;
struct sNode* __dec_obj152;
void* __right_value294 = (void*)0;
char* __dec_obj153;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__114;
void* __right_value297 = (void*)0;
char* __dec_obj154;
_Bool function_pointer_array_255;
int function_pointer_array_num_256;
int n_257;
void* __right_value298 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var6 = (void*)0;
struct list$1sType$ph* param_types_258=0;
struct list$1char$ph* param_names_259=0;
struct list$1char$ph* param_default_parametors_260=0;
_Bool var_args_261=0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj155;
void* __right_value302 = (void*)0;
struct sType* __dec_obj156;
struct list$1sType$ph* __dec_obj157;
struct list$1char$ph* __dec_obj158;
void* __right_value303 = (void*)0;
struct sNode* exp_262;
_Bool Value_263;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__115;
void* __right_value307 = (void*)0;
struct CVALUE* come_value_264;
void* __right_value308 = (void*)0;
struct sType* __dec_obj159;
void* __right_value309 = (void*)0;
char* attribute_265;
char* __dec_obj160;
void* __right_value310 = (void*)0;
char* __dec_obj161;
void* __right_value311 = (void*)0;
char* __dec_obj162;
void* __right_value312 = (void*)0;
char* __dec_obj163;
void* __right_value313 = (void*)0;
char* __dec_obj164;
_Bool no_comma_268;
void* __right_value314 = (void*)0;
struct sNode* node_269;
struct sNode* __dec_obj165;
void* __right_value315 = (void*)0;
char* attribute2_270;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj166;
char* __dec_obj167;
void* __right_value319 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* __dec_obj168;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* __dec_obj169;
struct sNode* __dec_obj170;
char* __dec_obj171;
int i_271;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
_Bool _condtional_value_X8;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* __dec_obj172;
struct sNode* __dec_obj173;
char* __dec_obj174;
int i_272;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* __dec_obj175;
struct sNode* __dec_obj176;
char* __dec_obj177;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__116;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sType* __dec_obj178;
void* __right_value342 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* generics_type_273=0;
char* var_name_274=0;
_Bool err_275=0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__117;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__118;
void* __right_value348 = (void*)0;
struct sType* __dec_obj179;
void* __right_value349 = (void*)0;
char* new_name_276;
struct sNode* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
void* __right_value350 = (void*)0;
struct sClass* klass_277;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sClass* klass_317;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sType* __dec_obj183;
struct sNode* __dec_obj184;
char* __dec_obj185;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1sType$ph* types_318;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_319=0;
char* name_320=0;
_Bool err_321=0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__134;
void* __right_value374 = (void*)0;
int num_tuples_322;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* __dec_obj186;
struct list$1sType$ph* _foreach_var_name5_323;
struct sType* it_324;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* __dec_obj187;
void* __right_value380 = (void*)0;
char* new_name_325;
char* __dec_obj188;
void* __right_value381 = (void*)0;
char* attribute_326;
char* __dec_obj189;
void* __right_value382 = (void*)0;
char* __dec_obj190;
void* __right_value383 = (void*)0;
char* __dec_obj191;
void* __right_value384 = (void*)0;
char* __dec_obj192;
void* __right_value385 = (void*)0;
char* __dec_obj193;
_Bool no_comma_329;
void* __right_value386 = (void*)0;
struct sNode* node_330;
struct sNode* __dec_obj194;
void* __right_value387 = (void*)0;
char* attribute2_331;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
char* __dec_obj195;
char* __dec_obj196;
void* __right_value391 = (void*)0;
struct sNode* node_332;
void* __right_value392 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var9 = (void*)0;
char* asm_name_333=0;
char* attribute2_334=0;
char* __dec_obj197;
char* __dec_obj198;
void* __right_value393 = (void*)0;
struct sType* type_before_335;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj199;
void* __right_value397 = (void*)0;
struct sNode* __list_values1___336[1];
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1sNode$ph* __dec_obj200;
struct sType* __dec_obj201;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* type2_338;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sType* type3_344;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sType* type4_345;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__138;
char* __dec_obj203;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__139;
type_212 = (void*)0;
var_name_213 = (void*)0;
result_type_237 = (void*)0;
result_type_251 = (void*)0;
    head_136=info->p;
    head_sline_137=info->sline;
    info->define_struct=(_Bool)0;
    type_name_138=(char*)come_increment_ref_count(parse_word(info));
    record__139=(_Bool)0;
    exception__140=(_Bool)0;
    constant_141=(_Bool)0;
    static__142=(_Bool)0;
    volatile__143=(_Bool)0;
    register__144=(_Bool)0;
    unsigned__145=(_Bool)0;
    long__146=(_Bool)0;
    long_long_147=(_Bool)0;
    short__148=(_Bool)0;
    restrict__149=(_Bool)0;
    struct__150=(_Bool)0;
    union__151=(_Bool)0;
    enum__152=(_Bool)0;
    no_heap_153=(_Bool)0;
    extern__154=(_Bool)0;
    inline__155=(_Bool)0;
    uniq__156=(_Bool)0;
    tuple__157=(_Bool)0;
    immutable__158=(_Bool)0;
    alignas__159=((void*)0);
    anonymous_type_160=(_Bool)0;
    anonymous_name_161=(_Bool)0;
    atomic__162=(_Bool)0;
    object_interface_163=(_Bool)0;
    while(    (_Bool)1    ) {
        if(        string_operator_equals(type_name_138,"object")&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_163=(_Bool)1;
            __dec_obj71=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Atomic")        ) {
            if(            *info->p==40            ) {
                expected_next_character(40,info);
            }
            __dec_obj72=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            atomic__162=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_138,"__extension__")        ) {
            __dec_obj73=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__attribute__")        ) {
            if(            *info->p==40            ) {
                brace_num_164=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_164++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_164--;
                        if(                        brace_num_164==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj74=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__declspec")        ) {
            if(            *info->p==40            ) {
                brace_num_165=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_165++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_165--;
                        if(                        brace_num_165==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj75=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Noreturn")        ) {
            __dec_obj76=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__noreturn")        ) {
            __dec_obj77=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Nullable")        ) {
            __dec_obj78=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_noreturn")        ) {
            __dec_obj79=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Alignas")        ) {
            expected_next_character(40,info);
            exp_166=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj80=alignas__159,
            alignas__159=(struct sNode*)come_increment_ref_count(exp_166);
            (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            expected_next_character(41,info);
            __dec_obj81=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            ((exp_166) ? exp_166 = come_decrement_ref_count(exp_166, ((struct sNode*)exp_166)->finalize, ((struct sNode*)exp_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_138,"const")        ) {
            constant_141=(_Bool)1;
            __dec_obj82=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"immutable")        ) {
            immutable__158=(_Bool)1;
            __dec_obj83=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"static")        ) {
            static__142=(_Bool)1;
            __dec_obj84=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"uniq")        ) {
            uniq__156=(_Bool)1;
            __dec_obj85=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"record")        ) {
            record__139=(_Bool)1;
            __dec_obj86=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"exception")        ) {
            exception__140=(_Bool)1;
            __dec_obj87=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"extern")        ) {
            extern__154=(_Bool)1;
            __dec_obj88=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"inline")||string_operator_equals(type_name_138,"__inline")||string_operator_equals(type_name_138,"__inline__")||string_operator_equals(type_name_138,"__always_inline")||string_operator_equals(type_name_138,"__forceinline")        ) {
            inline__155=(_Bool)1;
            __dec_obj89=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"volatile")        ) {
            volatile__143=(_Bool)1;
            __dec_obj90=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"struct")        ) {
            struct__150=(_Bool)1;
            if(            *info->p==123            ) {
                p_167=info->p;
                sline_168=info->sline;
                ((char*)(__right_value155=skip_block(info,(_Bool)0)));
                (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59                ) {
                    anonymous_name_161=(_Bool)1;
                    anonymous_type_160=(_Bool)1;
                    __dec_obj91=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_167;
                    info->sline=sline_168;
                    break;
                }
                else {
                    anonymous_type_160=(_Bool)1;
                    __dec_obj92=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_167;
                    info->sline=sline_168;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62            ) {
                (void)((char*)(__right_value158=parse_struct_attribute(info)));
                (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj93=type_name_138,
                type_name_138=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60                ) {
                    p_169=info->p;
                    sline_170=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123                            ) {
                            }
                            else {
                                info->p=p_169;
                                info->sline=sline_170;
                            }
                            break;
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value160=err_msg(info,"invalid struct definition")));
                            /*c*/ come_call_finalizer3(__right_value160,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            __result_obj__100 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value162=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1210, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(__right_value162,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__result_obj__100,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__100;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123                ) {
                    p_171=info->p;
                    sline_172=info->sline;
                    ((char*)(__right_value163=skip_block(info,(_Bool)0)));
                    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (void)((char*)(__right_value164=parse_struct_attribute(info)));
                    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59                    ) {
                        info->p=head_136;
                        info->sline=head_sline_137;
                        info->define_struct=(_Bool)1;
                        __result_obj__101 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value166=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1230, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(__right_value166,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__result_obj__101,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__101;
                    }
                    else {
                        info->p=p_171;
                        info->sline=sline_172;
                        node_173=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_138),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_174=node_compile(node_173,info);
                        if(                        !Value_174                        ) {
                            __result_obj__102 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value170=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1242, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(__right_value170,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__result_obj__102,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__102;
                        }
                        else {
                        }
                        ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                        ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"union")        ) {
            union__151=(_Bool)1;
            if(            *info->p==123            ) {
                p_175=info->p;
                sline_176=info->sline;
                ((char*)(__right_value171=skip_block(info,(_Bool)0)));
                (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value172=parse_attribute(info,(_Bool)0)));
                    /*c*/ come_call_finalizer3(__right_value172,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)0;
                    anonymous_type_160=(_Bool)1;
                    __dec_obj94=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_175;
                    info->sline=sline_176;
                    break;
                }
                else {
                    anonymous_type_160=(_Bool)1;
                    __dec_obj95=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_175;
                    info->sline=sline_176;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj96=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_177=info->p;
                sline_178=info->sline;
                ((char*)(__right_value176=skip_block(info,(_Bool)0)));
                (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)1;
                    __result_obj__103 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value178=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1299, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value178,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__103,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__103;
                }
                else {
                    anonymous_type_160=(_Bool)1;
                    info->p=p_177;
                    info->sline=sline_178;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"enum")        ) {
            enum__152=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value179=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_179=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_180=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_181=multiple_assign_var3->v3;
                /*c*/ come_call_finalizer3(__right_value179,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_179,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_180 = come_decrement_ref_count(name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_182=info->p;
                sline_183=info->sline;
                ((char*)(__right_value180=skip_block(info,(_Bool)0)));
                (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value181=parse_attribute(info,(_Bool)0)));
                    /*c*/ come_call_finalizer3(__right_value181,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)1;
                    __result_obj__104 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value183=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1337, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value183,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__104,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__104;
                }
                else {
                    anonymous_type_160=(_Bool)1;
                    __dec_obj97=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_182;
                    info->sline=sline_183;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj98=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value186=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_184=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_185=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_186=multiple_assign_var4->v3;
                /*c*/ come_call_finalizer3(__right_value186,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_184,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_187=info->p;
                sline_188=info->sline;
                ((char*)(__right_value187=skip_block(info,(_Bool)0)));
                (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)1;
                    __result_obj__105 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value189=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1373, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value189,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__105,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__105;
                }
                else {
                    anonymous_type_160=(_Bool)1;
                    info->p=p_187;
                    info->sline=sline_188;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"long")        ) {
            {
                p_189=info->p;
                sline_190=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)                ) {
                    info->p=p_189;
                    info->sline=sline_190;
                    __dec_obj99=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    break;
                }
                else {
                    __dec_obj100=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    if(                    string_operator_equals(type_name_138,"unsigned")                    ) {
                        __dec_obj101=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_138,"int")                        ) {
                            long__146=(_Bool)1;
                            unsigned__145=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_138,"signed")                    ) {
                        __dec_obj102=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_138,"int")                        ) {
                            long__146=(_Bool)1;
                            unsigned__145=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_138,"long")                    ) {
                        p_189=info->p;
                        sline_190=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95                        ) {
                            long_long_147=(_Bool)1;
                            __dec_obj103=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            long__146=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_138,"int")                        ) {
                            long_long_147=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_138,info)                        ) {
                            __dec_obj104=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            long_long_147=(_Bool)1;
                            info->p=p_189;
                            info->sline=sline_190;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_138,info)                    ) {
                        if(                        long__146                        ) {
                            long_long_147=(_Bool)1;
                            long__146=(_Bool)0;
                        }
                        else {
                            long__146=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_189;
                        info->sline=sline_190;
                        __dec_obj105=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"unsigned")        ) {
            unsigned__145=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                p_191=info->p;
                sline_192=info->sline;
                __dec_obj106=type_name_138,
                type_name_138=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_138,"short")                ) {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        p_193=info->p;
                        sline_194=info->sline;
                        __dec_obj107=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_138,info)                        ) {
                            short__148=(_Bool)1;
                        }
                        else {
                            short__148=(_Bool)1;
                            __dec_obj108=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_193;
                            info->sline=sline_194;
                        }
                    }
                    else {
                        short__148=(_Bool)1;
                        __dec_obj109=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_138,"long")                ) {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        p_195=info->p;
                        sline_196=info->sline;
                        __dec_obj110=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_138,info)                        ) {
                            long__146=(_Bool)1;
                        }
                        else {
                            long__146=(_Bool)1;
                            __dec_obj111=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_195;
                            info->sline=sline_196;
                        }
                    }
                    else {
                        long__146=(_Bool)1;
                        __dec_obj112=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_138,info)                ) {
                    __dec_obj113=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_191;
                    info->sline=sline_192;
                    break;
                }
            }
            else {
                __dec_obj114=type_name_138,
                type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_138,"signed")||string_operator_equals(type_name_138,"__signed__")        ) {
            unsigned__145=(_Bool)0;
            __dec_obj115=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"register")        ) {
            register__144=(_Bool)1;
            __dec_obj116=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"restrict")        ) {
            restrict__149=(_Bool)1;
            __dec_obj117=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Addr")        ) {
            __dec_obj118=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__restrict")        ) {
            restrict__149=(_Bool)1;
            __dec_obj119=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"tup")        ) {
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj120=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__157=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_138,"short")        ) {
            short__148=(_Bool)0;
            if(            *info->p==58            ) {
                break;
            }
            else if(            xisalnum(*info->p)            ) {
                p_197=info->p;
                sline_198=info->sline;
                __dec_obj121=type_name_138,
                type_name_138=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_138,"int")                ) {
                    short__148=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_138,"short")                ) {
                    short__148=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_138,info)                ) {
                    info->p=p_197;
                    info->sline=sline_198;
                }
                else {
                    __dec_obj122=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_197;
                    info->sline=sline_198;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_199=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_200=0;
    heap_201=(_Bool)0;
    refference_202=(_Bool)0;
    no_refference_203=(_Bool)0;
    channel_204=(_Bool)0;
    any_class_205=(_Bool)0;
    vtable_206=(_Bool)0;
    deffer__207=(_Bool)0;
    while(    1    ) {
        if(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_200++;
        }
        else if(        *info->p==126        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            deffer__207=(_Bool)1;
        }
        else if(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_201=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64        ) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_204=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_208=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__157    ) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj123=tuple_name_208,
        tuple_name_208=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    atomic__162&&*info->p==41    ) {
        expected_next_character(41,info);
    }
    lambda_flag_209=(_Bool)0;
    {
        pX_210=info->p;
        slineX_211=info->sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            (void)((char*)(__right_value216=parse_word(info)));
            (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            *info->p==40&&info->in_typedef            ) {
                lambda_flag_209=(_Bool)1;
            }
        }
        info->p=pX_210;
        info->sline=slineX_211;
    }
    function_pointer_flag_214=(_Bool)0;
    {
        p_215=info->p;
        sline_216=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94            ) {
                function_pointer_flag_214=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95            ) {
                word_217=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40                    ) {
                        function_pointer_flag_214=(_Bool)1;
                    }
                }
                (word_217 = come_decrement_ref_count(word_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_215;
        info->sline=sline_216;
    }
    var_name_between_brace_218=(_Bool)0;
    {
        p_219=info->p;
        sline_220=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_221=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_221,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        var_name_between_brace_218=(_Bool)1;
                    }
                }
                (word_221 = come_decrement_ref_count(word_221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_219;
        info->sline=sline_220;
    }
    if(    anonymous_type_160&&*info->p==123    ) {
        static int anonymous_num_222=0;
        if(        struct__150        ) {
            if(            string_operator_equals(type_name_138,"")            ) {
                __dec_obj124=type_name_138,
                type_name_138=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_222));
                __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_223=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_138),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_224=node_compile(node_223,info);
            if(            !Value_224            ) {
                ((struct tuple2$2int$bool$*)(__right_value222=err_msg(info,"parse_struct is failed")));
                /*c*/ come_call_finalizer3(__right_value222,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__106 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value224=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1780, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_223) ? node_223 = come_decrement_ref_count(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value224,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__106,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__106;
            }
            else {
            }
            pointer_num_225=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_225++;
            }
            __dec_obj125=type_212,
            type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1793, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_212->mPointerNum=pointer_num_225;
            ((node_223) ? node_223 = come_decrement_ref_count(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        enum__152        ) {
            if(            string_operator_equals(type_name_138,"")            ) {
                __dec_obj126=type_name_138,
                type_name_138=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_222));
                __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_226=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_138),info));
            if(            !info->no_output_err            ) {
                Value_227=node_compile(node_226,info);
                if(                !Value_227                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__107 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value231=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1807, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value231,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__107,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__107;
                }
                else {
                }
            }
            __dec_obj127=type_212,
            type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1811, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        union__151        ) {
            if(            string_operator_equals(type_name_138,"")            ) {
                __dec_obj128=type_name_138,
                type_name_138=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_222));
                __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_228=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_138),info));
            Value_229=node_compile(node_228,info);
            if(            !Value_229            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__108 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value238=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1823, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_228) ? node_228 = come_decrement_ref_count(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value238,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__108,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__108;
            }
            else {
            }
            pointer_num_230=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_230++;
            }
            __dec_obj129=type_212,
            type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1837, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_212->mPointerNum=pointer_num_230;
            ((node_228) ? node_228 = come_decrement_ref_count(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value242=err_msg(info,"unexpected { character")));
            /*c*/ come_call_finalizer3(__right_value242,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__109 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value244=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1843, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value244,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__109,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__109;
        }
        attribute_231=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_231,"")        ) {
            __dec_obj130=type_212->mAttribute,
            type_212->mAttribute=(char*)come_increment_ref_count(attribute_231);
            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_218&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj131=var_name_213,
                var_name_213=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_161            ) {
                static int num_anonymous_var_name_232=0;
                num_anonymous_var_name_232++;
                __dec_obj132=var_name_213,
                var_name_213=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_232));
                __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj133=var_name_213,
                var_name_213=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_233=0;
                num_anonymous_var_name_233++;
                __dec_obj134=var_name_213,
                var_name_213=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_233));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_218&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_234=info->no_comma;
                info->no_comma=(_Bool)1;
                node_235=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_234;
                __dec_obj135=type_212->mSizeNum,
                type_212->mSizeNum=(struct sNode*)come_increment_ref_count(node_235);
                (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_235) ? node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_236=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_231,"")&&string_operator_not_equals(attribute2_236,"")            ) {
                __dec_obj136=type_212->mAttribute,
                type_212->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value253=string_operator_add(attribute_231," "))),attribute2_236));
                __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_236,"")            ) {
                __dec_obj137=type_212->mAttribute,
                type_212->mAttribute=(char*)come_increment_ref_count(attribute2_236);
                __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_236 = come_decrement_ref_count(attribute2_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_231 = come_decrement_ref_count(attribute_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    lambda_flag_209    ) {
        if(        (_condtional_value_X1=(((struct sType*)(__right_value255=map$2char$phsType$ph_operator_load_element(info->types,type_name_138))))),        /*c*/ come_call_finalizer3(__right_value255,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _condtional_value_X1        ) {
            __dec_obj138=result_type_237,
            result_type_237=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value256=map$2char$phsType$ph_operator_load_element(info->types,type_name_138)))));
            /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value256,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_237->mClass=((struct sClass*)(__right_value258=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_237->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value258,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_138)        ) {
            for(            i_238=0            ;            i_238<list$1char$ph_length(info->generics_type_names)            ;            i_238++            ){
                if(                (_condtional_value_X2=(string_operator_equals(((char*)(__right_value260=list$1char$ph_operator_load_element(info->generics_type_names,i_238))),type_name_138))),                (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _condtional_value_X2                ) {
                    __dec_obj139=result_type_237,
                    result_type_237=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1911, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_238)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_138)        ) {
            for(            i_245=0            ;            i_245<list$1char$ph_length(info->method_generics_type_names)            ;            i_245++            ){
                if(                (_condtional_value_X3=(string_operator_equals(((char*)(__right_value265=list$1char$ph_operator_load_element(info->method_generics_type_names,i_245))),type_name_138))),                (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _condtional_value_X3                ) {
                    __dec_obj140=result_type_237,
                    result_type_237=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1918, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_245)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj141=result_type_237,
            result_type_237=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1923, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_237->mAtomic=result_type_237->mAtomic||atomic__162;
        result_type_237->mConstant=result_type_237->mConstant||constant_141;
        result_type_237->mImmutable=result_type_237->mImmutable||immutable__158;
        __dec_obj142=result_type_237->mAlignas,
        result_type_237->mAlignas=(struct sNode*)come_increment_ref_count(alignas__159);
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        result_type_237->mRegister=register__144;
        result_type_237->mUnsigned=result_type_237->mUnsigned||unsigned__145;
        result_type_237->mVolatile=volatile__143;
        result_type_237->mRecord=result_type_237->mRecord||record__139;
        result_type_237->mUniq=result_type_237->mUniq||uniq__156;
        result_type_237->mStatic=(result_type_237->mStatic||static__142)&&!result_type_237->mUniq;
        result_type_237->mException=result_type_237->mException||exception__140;
        result_type_237->mExtern=result_type_237->mExtern||extern__154;
        result_type_237->mInline=result_type_237->mInline||inline__155;
        result_type_237->mRestrict=result_type_237->mRestrict||restrict__149;
        result_type_237->mLongLong=result_type_237->mLongLong||long_long_147;
        result_type_237->mLong=result_type_237->mLong||long__146;
        result_type_237->mShort=result_type_237->mShort||short__148;
        result_type_237->mPointerNum=pointer_num_200;
        result_type_237->mHeap=result_type_237->mHeap||heap_201;
        result_type_237->mChannel=result_type_237->mChannel||channel_204;
        result_type_237->mDefferRightValue=result_type_237->mDefferRightValue||deffer__207;
        __dec_obj143=var_name_213,
        var_name_213=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value273=parse_params(info,(_Bool)0)));
        param_types_246=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_247=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_248=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_249=multiple_assign_var5->v4;
        /*c*/ come_call_finalizer3(__right_value273,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj144=type_212,
        type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1952, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj145=type_212->mResultType,
        type_212->mResultType=(struct sType*)come_increment_ref_count(result_type_237);
        /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj146=type_212->mParamTypes,
        type_212->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_246);
        /*b*/ come_call_finalizer3(__dec_obj146,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj147=type_212->mParamNames,
        type_212->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_247);
        /*b*/ come_call_finalizer3(__dec_obj147,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_212->mVarArgs=var_args_249;
        type_212->mExtern=extern__154;
        /*c*/ come_call_finalizer3(result_type_237,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_246,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_247,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_248,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    function_pointer_flag_214    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_250=0;
        while(        *info->p==42||*info->p==94        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_250++;
        }
        skip_pointer_attribute(info);
        if(        (_condtional_value_X4=(((struct sType*)(__right_value277=map$2char$phsType$ph_operator_load_element(info->types,type_name_138))))),        /*c*/ come_call_finalizer3(__right_value277,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _condtional_value_X4        ) {
            __dec_obj148=result_type_251,
            result_type_251=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value278=map$2char$phsType$ph_operator_load_element(info->types,type_name_138)))));
            /*b*/ come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value278,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_251->mClass=((struct sClass*)(__right_value280=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_251->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value280,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_138)        ) {
            for(            i_252=0            ;            i_252<list$1char$ph_length(info->generics_type_names)            ;            i_252++            ){
                if(                (_condtional_value_X5=(string_operator_equals(((char*)(__right_value282=list$1char$ph_operator_load_element(info->generics_type_names,i_252))),type_name_138))),                (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _condtional_value_X5                ) {
                    __dec_obj149=result_type_251,
                    result_type_251=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1985, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_252)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_138)        ) {
            for(            i_253=0            ;            i_253<list$1char$ph_length(info->method_generics_type_names)            ;            i_253++            ){
                if(                (_condtional_value_X6=(string_operator_equals(((char*)(__right_value287=list$1char$ph_operator_load_element(info->method_generics_type_names,i_253))),type_name_138))),                (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _condtional_value_X6                ) {
                    __dec_obj150=result_type_251,
                    result_type_251=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1992, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_253)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj151=result_type_251,
            result_type_251=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1997, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_251->mConstant=result_type_251->mConstant||constant_141;
        result_type_251->mImmutable=result_type_251->mImmutable||immutable__158;
        result_type_251->mAtomic=result_type_251->mAtomic||atomic__162;
        __dec_obj152=result_type_251->mAlignas,
        result_type_251->mAlignas=(struct sNode*)come_increment_ref_count(alignas__159);
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        result_type_251->mRegister=register__144;
        result_type_251->mUnsigned=result_type_251->mUnsigned||unsigned__145;
        result_type_251->mVolatile=volatile__143;
        result_type_251->mUniq=result_type_251->mUniq||uniq__156;
        result_type_251->mStatic=(result_type_251->mStatic||static__142)&&!result_type_251->mUniq;
        result_type_251->mRecord=result_type_251->mRecord||record__139;
        result_type_251->mException=result_type_251->mException||exception__140;
        result_type_251->mExtern=result_type_251->mExtern||extern__154;
        result_type_251->mInline=result_type_251->mInline||inline__155;
        result_type_251->mRestrict=result_type_251->mRestrict||restrict__149;
        result_type_251->mLongLong=result_type_251->mLongLong||long_long_147;
        result_type_251->mLong=result_type_251->mLong||long__146;
        result_type_251->mShort=result_type_251->mShort||short__148;
        result_type_251->mPointerNum+=pointer_num_200;
        result_type_251->mHeap=result_type_251->mHeap||heap_201;
        result_type_251->mChannel=result_type_251->mChannel||channel_204;
        result_type_251->mDefferRightValue=result_type_251->mDefferRightValue||deffer__207;
        if(        xisalnum(*info->p)||*info->p==95        ) {
            __dec_obj153=var_name_213,
            var_name_213=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            *info->p==40            ) {
                __result_obj__114 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value296=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2025, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(result_type_251),(char*)come_increment_ref_count(var_name_213),(_Bool)0))));
                /*c*/ come_call_finalizer3(result_type_251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value296,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__114,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__114;
            }
        }
        else {
            static int num_anonymous_var_name_254=0;
            num_anonymous_var_name_254++;
            __dec_obj154=var_name_213,
            var_name_213=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_254));
            __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        function_pointer_array_255=(_Bool)0;
        function_pointer_array_num_256=0;
        if(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            n_257=0;
            while(            xisdigit(*info->p)            ) {
                n_257=n_257*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_256=n_257;
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_255=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value298=parse_params(info,(_Bool)0)));
        param_types_258=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_259=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_260=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_261=multiple_assign_var6->v4;
        /*c*/ come_call_finalizer3(__right_value298,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj155=type_212,
        type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2057, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj155,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj156=type_212->mResultType,
        type_212->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type_251));
        /*b*/ come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj157=type_212->mParamTypes,
        type_212->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_258);
        /*b*/ come_call_finalizer3(__dec_obj157,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj158=type_212->mParamNames,
        type_212->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_259);
        /*b*/ come_call_finalizer3(__dec_obj158,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_212->mVarArgs=var_args_261;
        type_212->mExtern=extern__154;
        if(        function_pointer_array_255        ) {
            type_212->mLambdaArray=(_Bool)1;
            type_212->mLambdaArrayNum=function_pointer_array_num_256;
        }
        type_212->mFunctionPointerNum=function_pointer_num_250;
        /*c*/ come_call_finalizer3(result_type_251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_258,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_259,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_260,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(type_name_138,"__typeof__")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_262=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_263=node_compile(exp_262,info);
        if(        !Value_263        ) {
            ((struct tuple2$2int$bool$*)(__right_value304=err_msg(info,"invalid __typeof__ expression")));
            /*c*/ come_call_finalizer3(__right_value304,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__115 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value306=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2081, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            ((exp_262) ? exp_262 = come_decrement_ref_count(exp_262, ((struct sNode*)exp_262)->finalize, ((struct sNode*)exp_262)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value306,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__115,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__115;
        }
        else {
        }
        come_value_264=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj159=type_212,
        type_212=(struct sType*)come_increment_ref_count(sType_clone(come_value_264->type));
        /*b*/ come_call_finalizer3(__dec_obj159,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        attribute_265=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_265,"")        ) {
            __dec_obj160=type_212->mAttribute,
            type_212->mAttribute=(char*)come_increment_ref_count(attribute_265);
            __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_218&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj161=var_name_213,
                var_name_213=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_161            ) {
                static int num_anonymous_var_name_266=0;
                num_anonymous_var_name_266++;
                __dec_obj162=var_name_213,
                var_name_213=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_266));
                __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj163=var_name_213,
                var_name_213=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_267=0;
                num_anonymous_var_name_267++;
                __dec_obj164=var_name_213,
                var_name_213=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_267));
                __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_218&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_268=info->no_comma;
                info->no_comma=(_Bool)1;
                node_269=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_268;
                __dec_obj165=type_212->mSizeNum,
                type_212->mSizeNum=(struct sNode*)come_increment_ref_count(node_269);
                (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_269) ? node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_270=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_265,"")&&string_operator_not_equals(attribute2_270,"")            ) {
                __dec_obj166=type_212->mAttribute,
                type_212->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value317=string_operator_add(attribute_265," "))),attribute2_270));
                __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_270,"")            ) {
                __dec_obj167=type_212->mAttribute,
                type_212->mAttribute=(char*)come_increment_ref_count(attribute2_270);
                __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_270 = come_decrement_ref_count(attribute2_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        ((exp_262) ? exp_262 = come_decrement_ref_count(exp_262, ((struct sNode*)exp_262)->finalize, ((struct sNode*)exp_262)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_264,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_265 = come_decrement_ref_count(attribute_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        (_condtional_value_X7=(((struct sType*)(__right_value319=map$2char$phsType$ph_operator_load_element(info->types,type_name_138))))),        /*c*/ come_call_finalizer3(__right_value319,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _condtional_value_X7        ) {
            __dec_obj168=type_212,
            type_212=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value320=map$2char$phsType$ph_operator_load_element(info->types,type_name_138)))));
            /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value320,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_212->mTypedefOriginalPointerNum=type_212->mPointerNum;
            type_212->mClass=((struct sClass*)(__right_value322=map$2char$phsClass$ph_operator_load_element(info->classes,type_212->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value322,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj169=type_212->mOriginalTypeName,
            type_212->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_138));
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            type_212->mOriginalTypeNamePointerNum=pointer_num_200;
            type_212->mOriginalTypeNameHeap=heap_201;
            type_212->mConstant=type_212->mConstant||constant_141;
            type_212->mImmutable=type_212->mImmutable||immutable__158;
            type_212->mAtomic=type_212->mAtomic||atomic__162;
            __dec_obj170=type_212->mAlignas,
            type_212->mAlignas=(struct sNode*)come_increment_ref_count(alignas__159);
            (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_212->mRegister=register__144;
            type_212->mUnsigned=type_212->mUnsigned||unsigned__145;
            type_212->mVolatile=volatile__143;
            type_212->mUniq=type_212->mUniq||uniq__156;
            type_212->mStatic=(type_212->mStatic||static__142)&&!type_212->mUniq;
            type_212->mRecord=type_212->mRecord||record__139;
            type_212->mException=type_212->mException||exception__140;
            type_212->mExtern=type_212->mExtern||extern__154;
            type_212->mInline=type_212->mInline||inline__155;
            type_212->mRestrict=type_212->mRestrict||restrict__149;
            type_212->mLongLong=type_212->mLongLong||long_long_147;
            type_212->mLong=type_212->mLong||long__146;
            type_212->mShort=type_212->mShort||short__148;
            type_212->mPointerNum+=pointer_num_200;
            type_212->mHeap=type_212->mHeap||heap_201;
            type_212->mChannel=type_212->mChannel||channel_204;
            type_212->mDefferRightValue=type_212->mDefferRightValue||deffer__207;
            __dec_obj171=type_212->mTupleName,
            type_212->mTupleName=(char*)come_increment_ref_count(tuple_name_208);
            __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_138)        ) {
            for(            i_271=0            ;            i_271<list$1char$ph_length(info->generics_type_names)            ;            i_271++            ){
                if(                (_condtional_value_X8=(string_operator_equals(((char*)(__right_value325=list$1char$ph_operator_load_element(info->generics_type_names,i_271))),type_name_138))),                (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _condtional_value_X8                ) {
                    __dec_obj172=type_212,
                    type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2179, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_271)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_212->mConstant=type_212->mConstant||constant_141;
            type_212->mImmutable=type_212->mImmutable||immutable__158;
            type_212->mAtomic=type_212->mAtomic||atomic__162;
            __dec_obj173=type_212->mAlignas,
            type_212->mAlignas=(struct sNode*)come_increment_ref_count(alignas__159);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_212->mRegister=register__144;
            type_212->mUnsigned=type_212->mUnsigned||unsigned__145;
            type_212->mVolatile=volatile__143;
            type_212->mUniq=type_212->mUniq||uniq__156;
            type_212->mStatic=(type_212->mStatic||static__142)&&!type_212->mUniq;
            type_212->mRecord=type_212->mRecord||record__139;
            type_212->mException=type_212->mException||exception__140;
            type_212->mExtern=type_212->mExtern||extern__154;
            type_212->mInline=type_212->mInline||inline__155;
            type_212->mRestrict=type_212->mRestrict||restrict__149;
            type_212->mLongLong=type_212->mLongLong||long_long_147;
            type_212->mLong=type_212->mLong||long__146;
            type_212->mShort=type_212->mShort||short__148;
            type_212->mPointerNum+=pointer_num_200;
            type_212->mHeap=type_212->mHeap||heap_201;
            type_212->mChannel=type_212->mChannel||channel_204;
            type_212->mDefferRightValue=type_212->mDefferRightValue||deffer__207;
            __dec_obj174=type_212->mTupleName,
            type_212->mTupleName=(char*)come_increment_ref_count(tuple_name_208);
            __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_138)        ) {
            for(            i_272=0            ;            i_272<list$1char$ph_length(info->method_generics_type_names)            ;            i_272++            ){
                if(                (_condtional_value_X9=(string_operator_equals(((char*)(__right_value330=list$1char$ph_operator_load_element(info->method_generics_type_names,i_272))),type_name_138))),                (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _condtional_value_X9                ) {
                    __dec_obj175=type_212,
                    type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2209, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_272)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_212->mConstant=type_212->mConstant||constant_141;
            type_212->mImmutable=type_212->mImmutable||immutable__158;
            type_212->mAtomic=type_212->mAtomic||atomic__162;
            __dec_obj176=type_212->mAlignas,
            type_212->mAlignas=(struct sNode*)come_increment_ref_count(alignas__159);
            (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_212->mRegister=register__144;
            type_212->mUnsigned=type_212->mUnsigned||unsigned__145;
            type_212->mVolatile=volatile__143;
            type_212->mUniq=type_212->mUniq||uniq__156;
            type_212->mStatic=(type_212->mStatic||static__142)&&!type_212->mUniq;
            type_212->mRecord=type_212->mRecord||record__139;
            type_212->mException=type_212->mException||exception__140;
            type_212->mExtern=type_212->mExtern||extern__154;
            type_212->mInline=type_212->mInline||inline__155;
            type_212->mRestrict=type_212->mRestrict||restrict__149;
            type_212->mLongLong=type_212->mLongLong||long_long_147;
            type_212->mLong=type_212->mLong||long__146;
            type_212->mShort=type_212->mShort||short__148;
            type_212->mPointerNum+=pointer_num_200;
            type_212->mHeap=type_212->mHeap||heap_201;
            type_212->mChannel=type_212->mChannel||channel_204;
            type_212->mDefferRightValue=type_212->mDefferRightValue||deffer__207;
            __dec_obj177=type_212->mTupleName,
            type_212->mTupleName=(char*)come_increment_ref_count(tuple_name_208);
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_condtional_value_X10=(((struct sClass*)(__right_value336=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value335=__builtin_string(type_name_138))))))==((void*)0))),            (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value336,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _condtional_value_X10            ) {
                __result_obj__116 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value338=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2242, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value338,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__116,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__116;
            }
            __dec_obj178=type_212,
            type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2245, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1            ) {
                multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value342=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_273=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_274=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_275=multiple_assign_var7->v3;
                /*c*/ come_call_finalizer3(__right_value342,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_275                ) {
                    __result_obj__117 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value344=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2251, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(generics_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_274 = come_decrement_ref_count(var_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value344,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__117,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__117;
                }
                list$1sType$ph_push_back(type_212->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_273));
                if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*c*/ come_call_finalizer3(generics_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_274 = come_decrement_ref_count(var_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value345=err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2))));
                    /*c*/ come_call_finalizer3(__right_value345,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__118 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value347=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2268, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(generics_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_274 = come_decrement_ref_count(var_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value347,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__118,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__118;
                }
                /*c*/ come_call_finalizer3(generics_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_274 = come_decrement_ref_count(var_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            exception__140            ) {
            }
            else if(            is_contained_generics_class(type_212,info)            ) {
                __dec_obj179=type_212,
                type_212=(struct sType*)come_increment_ref_count(solve_generics(type_212,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_212,type_212,info)                ) {
                    new_name_276=(char*)come_increment_ref_count(create_generics_name(type_212,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_276);
                    exit(7);
                    (new_name_276 = come_decrement_ref_count(new_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_212->mConstant=type_212->mConstant||constant_141;
            type_212->mImmutable=type_212->mImmutable||immutable__158;
            type_212->mAtomic=type_212->mAtomic||atomic__162;
            __dec_obj180=type_212->mAlignas,
            type_212->mAlignas=(struct sNode*)come_increment_ref_count(alignas__159);
            (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_212->mRegister=register__144;
            type_212->mUnsigned=type_212->mUnsigned||unsigned__145;
            type_212->mVolatile=volatile__143;
            type_212->mUniq=type_212->mUniq||uniq__156;
            type_212->mStatic=(type_212->mStatic||static__142)&&!type_212->mUniq;
            type_212->mRecord=type_212->mRecord||record__139;
            type_212->mException=type_212->mException||exception__140;
            type_212->mExtern=type_212->mExtern||extern__154;
            type_212->mInline=type_212->mInline||inline__155;
            type_212->mRestrict=type_212->mRestrict||restrict__149;
            type_212->mLongLong=type_212->mLongLong||long_long_147;
            type_212->mLong=type_212->mLong||long__146;
            type_212->mShort=type_212->mShort||short__148;
            type_212->mPointerNum+=pointer_num_200;
            type_212->mHeap=type_212->mHeap||heap_201;
            type_212->mChannel=type_212->mChannel||channel_204;
            type_212->mDefferRightValue=type_212->mDefferRightValue||deffer__207;
            __dec_obj181=type_212->mTupleName,
            type_212->mTupleName=(char*)come_increment_ref_count(tuple_name_208);
            __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj182=type_name_138,
            type_name_138=(char*)come_increment_ref_count(type_212->mClass->mName);
            __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            if(            struct__150            ) {
                klass_277=((struct sClass*)(__right_value350=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_138)));
                /*c*/ come_call_finalizer3(__right_value350,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_277==((void*)0)&&*info->p!=60                ) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_138)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2316, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            if(            union__151            ) {
                klass_317=((struct sClass*)(__right_value360=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_138)));
                /*c*/ come_call_finalizer3(__right_value360,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_317==((void*)0)&&*info->p!=60                ) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_138)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2323, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            __dec_obj183=type_212,
            type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2327, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_212->mConstant=type_212->mConstant||constant_141;
            type_212->mImmutable=type_212->mImmutable||immutable__158;
            type_212->mAtomic=type_212->mAtomic||atomic__162;
            __dec_obj184=type_212->mAlignas,
            type_212->mAlignas=(struct sNode*)come_increment_ref_count(alignas__159);
            (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_212->mRegister=register__144;
            type_212->mUnsigned=type_212->mUnsigned||unsigned__145;
            type_212->mVolatile=volatile__143;
            type_212->mUniq=type_212->mUniq||uniq__156;
            type_212->mStatic=(type_212->mStatic||static__142)&&!type_212->mUniq;
            type_212->mRecord=type_212->mRecord||record__139;
            type_212->mException=type_212->mException||exception__140;
            type_212->mExtern=type_212->mExtern||extern__154;
            type_212->mInline=type_212->mInline||inline__155;
            type_212->mRestrict=type_212->mRestrict||restrict__149;
            type_212->mLongLong=type_212->mLongLong||long_long_147;
            type_212->mLong=type_212->mLong||long__146;
            type_212->mShort=type_212->mShort||short__148;
            type_212->mPointerNum+=pointer_num_200;
            type_212->mHeap=type_212->mHeap||heap_201;
            type_212->mChannel=type_212->mChannel||channel_204;
            type_212->mDefferRightValue=type_212->mDefferRightValue||deffer__207;
            __dec_obj185=type_212->mTupleName,
            type_212->mTupleName=(char*)come_increment_ref_count(tuple_name_208);
            __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_212->mPointerNum++;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_212->mHeap=(_Bool)1;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_212->mDefferRightValue=(_Bool)1;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                }
            }
            else if(            *info->p==38            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_212->mNoHeap=(_Bool)1;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63            ) {
                info->p++;
                if(                *info->p==63                ) {
                    info->p++;
                    type_212->mGuardValue=(_Bool)1;
                }
                else {
                    type_212->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_212->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_212->mPointerNum++;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_212->mHeap=(_Bool)1;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_212->mDefferRightValue=(_Bool)1;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_212->mChannel=(_Bool)1;
                if(                type_212->mNoSolvedGenericsType                ) {
                    type_212->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44        ) {
            types_318=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 2471, "struct list$1sType$ph*"))));
            list$1sType$ph_push_back(types_318,(struct sType*)come_increment_ref_count(sType_clone(type_212)));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value371=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_319=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_320=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_321=multiple_assign_var8->v3;
                /*c*/ come_call_finalizer3(__right_value371,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_321                ) {
                    __result_obj__134 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value373=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2482, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(type2_319,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_320 = come_decrement_ref_count(name_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(types_318,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value373,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__134,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__134;
                }
                list$1sType$ph_push_back(types_318,(struct sType*)come_increment_ref_count(sType_clone(type2_319)));
                /*c*/ come_call_finalizer3(type2_319,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_320 = come_decrement_ref_count(name_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_322=list$1sType$ph_length(types_318);
            __dec_obj186=type_212,
            type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2495, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples_322)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_212->mPointerNum++;
            type_212->mHeap=(_Bool)1;
            for(            _foreach_var_name5_323=(struct list$1sType$ph*)come_increment_ref_count(types_318),            it_324=list$1sType$ph_begin(_foreach_var_name5_323);            !list$1sType$ph_end(_foreach_var_name5_323);            it_324=list$1sType$ph_next(_foreach_var_name5_323)            ){
                list$1sType$ph_push_back(type_212->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value378=sType_clone(it_324))))));
                /*c*/ come_call_finalizer3(__right_value378,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(_foreach_var_name5_323,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            while(            1            ) {
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_212->mPointerNum++;
                    if(                    type_212->mNoSolvedGenericsType                    ) {
                        type_212->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_212->mHeap=(_Bool)1;
                    if(                    type_212->mNoSolvedGenericsType                    ) {
                        type_212->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_212->mChannel=(_Bool)1;
                    if(                    type_212->mNoSolvedGenericsType                    ) {
                        type_212->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            exception__140            ) {
            }
            else if(            is_contained_generics_class(type_212,info)            ) {
                __dec_obj187=type_212,
                type_212=(struct sType*)come_increment_ref_count(solve_generics(type_212,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_212,type_212,info)                ) {
                    new_name_325=(char*)come_increment_ref_count(create_generics_name(type_212,info));
                    printf("output generics is failed(%s)\n",new_name_325);
                    exit(9);
                    (new_name_325 = come_decrement_ref_count(new_name_325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_212->mMultipleTypes=(_Bool)1;
            __dec_obj188=type_name_138,
            type_name_138=(char*)come_increment_ref_count(type_212->mClass->mName);
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(types_318,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        attribute_326=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_326,"")        ) {
            __dec_obj189=type_212->mAttribute,
            type_212->mAttribute=(char*)come_increment_ref_count(attribute_326);
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_218&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj190=var_name_213,
                var_name_213=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_161            ) {
                static int num_anonymous_var_name_327=0;
                num_anonymous_var_name_327++;
                __dec_obj191=var_name_213,
                var_name_213=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_327));
                __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj192=var_name_213,
                var_name_213=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_328=0;
                num_anonymous_var_name_328++;
                __dec_obj193=var_name_213,
                var_name_213=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_328));
                __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_218&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_329=info->no_comma;
                info->no_comma=(_Bool)1;
                node_330=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_329;
                __dec_obj194=type_212->mSizeNum,
                type_212->mSizeNum=(struct sNode*)come_increment_ref_count(node_330);
                (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_330) ? node_330 = come_decrement_ref_count(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_331=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_326,"")&&string_operator_not_equals(attribute2_331,"")            ) {
                __dec_obj195=type_212->mAttribute,
                type_212->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value389=string_operator_add(attribute_326," "))),attribute2_331));
                __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_331,"")            ) {
                __dec_obj196=type_212->mAttribute,
                type_212->mAttribute=(char*)come_increment_ref_count(attribute2_331);
                __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_331 = come_decrement_ref_count(attribute2_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_326 = come_decrement_ref_count(attribute_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            type_212->mArrayPointerType=(_Bool)1;
            type_212->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_332=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(type_212->mArrayNum,(struct sNode*)come_increment_ref_count(node_332));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_332) ? node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var9=((struct tuple2$2char$phchar$ph*)(__right_value392=parse_attribute(info,(_Bool)0)));
    asm_name_333=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_334=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    /*c*/ come_call_finalizer3(__right_value392,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(attribute2_334,"")    ) {
        __dec_obj197=type_212->mAttribute,
        type_212->mAttribute=(char*)come_increment_ref_count(attribute2_334);
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj198=type_212->mAsmName,
    type_212->mAsmName=(char*)come_increment_ref_count(asm_name_333);
    __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    parse_sharp_v5(info);
    if(    type_212->mChannel    ) {
        type_before_335=(struct sType*)come_increment_ref_count(sType_clone(type_212));
        __dec_obj199=type_212,
        type_212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2650, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj200=type_212->mArrayNum,
        type_212->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___336[0]=((struct sNode*)(__right_value397=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2651, "struct list$1sNode$ph")),1,__list_values1___336)));
        /*b*/ come_call_finalizer3(__dec_obj200,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        ((__right_value397) ? __right_value397 = come_decrement_ref_count(__right_value397, ((struct sNode*)__right_value397)->finalize, ((struct sNode*)__right_value397)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        __dec_obj201=type_212->mChannelType,
        type_212->mChannelType=(struct sType*)come_increment_ref_count(type_before_335);
        /*b*/ come_call_finalizer3(__dec_obj201,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_212->mChannel=(_Bool)1;
        /*c*/ come_call_finalizer3(type_before_335,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    type_212->mException    ) {
        type2_338=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2656, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph_operator_store_element(type2_338->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2657, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type0")),(_Bool)0,info)));
        /*c*/ come_call_finalizer3(__right_value405,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_operator_store_element(type2_338->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2658, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type1")),(_Bool)0,info)));
        /*c*/ come_call_finalizer3(__right_value411,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_338->mPointerNum=1;
        type2_338->mHeap=(_Bool)1;
        type3_344=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2662, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph_operator_store_element(type3_344->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_212));
        list$1sType$ph_operator_store_element(type3_344->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2664, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info)));
        /*c*/ come_call_finalizer3(__right_value420,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type4_345=(struct sType*)come_increment_ref_count(solve_generics(type2_338,type3_344,info));
        type4_345->mException=(_Bool)1;
        type4_345->mUniq=type_212->mUniq;
        if(        type_212->mClass->mGenerics||type_212->mClass->mMethodGenerics        ) {
            type4_345->mExceptionGenericsType=(_Bool)1;
        }
        __result_obj__138 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value426=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2675, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type4_345),(char*)come_increment_ref_count(var_name_213),(_Bool)1))));
        /*c*/ come_call_finalizer3(type2_338,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_344,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type4_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (asm_name_333 = come_decrement_ref_count(asm_name_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute2_334 = come_decrement_ref_count(attribute2_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value426,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__138,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__138;
        /*c*/ come_call_finalizer3(type2_338,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_344,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type4_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_not_equals(attribute_199,"")    ) {
        __dec_obj203=type_212->mAttribute,
        type_212->mAttribute=(char*)come_increment_ref_count(attribute_199);
        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__139 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value428=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2682, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_212),(char*)come_increment_ref_count(var_name_213),(_Bool)1))));
    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((alignas__159) ? alignas__159 = come_decrement_ref_count(alignas__159, ((struct sNode*)alignas__159)->finalize, ((struct sNode*)alignas__159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute_199 = come_decrement_ref_count(attribute_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (tuple_name_208 = come_decrement_ref_count(tuple_name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_213 = come_decrement_ref_count(var_name_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (asm_name_333 = come_decrement_ref_count(asm_name_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute2_334 = come_decrement_ref_count(attribute2_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value428,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__139,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__139;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_239;
int i_240;
char* __result_obj__110;
char* default_value_241;
char* __result_obj__111;
default_value_241 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_239=self->head;
    i_240=0;
    while(    it_239!=((void*)0)    ) {
        if(        position==i_240        ) {
            __result_obj__110 = (char*)come_increment_ref_count(it_239->item);
            (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__110;
        }
        it_239=it_239->next;
        i_240++;
    }
    memset(&default_value_241,0,sizeof(char*));
    __result_obj__111 = (char*)come_increment_ref_count(default_value_241);
    (default_value_241 = come_decrement_ref_count(default_value_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__111;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_242;
int i_243;
char* __result_obj__112;
char* default_value_244;
char* __result_obj__113;
default_value_244 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_242=self->head;
    i_243=0;
    while(    it_242!=((void*)0)    ) {
        if(        position==i_243        ) {
            __result_obj__112 = (char*)come_increment_ref_count(it_242->item);
            (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__112;
        }
        it_242=it_242->next;
        i_243++;
    }
    memset(&default_value_244,0,sizeof(char*));
    __result_obj__113 = (char*)come_increment_ref_count(default_value_244);
    (default_value_244 = come_decrement_ref_count(default_value_244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_296;
unsigned int it_297;
_Bool same_key_exist_314;
struct list$1char$ph* _foreach_var_name4_315;
char* it2_316;
struct map$2char$phsClass$ph* __result_obj__133;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_296=string_get_hash_key(((char*)key))%self->size;
    it_297=hash_296;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_297]        ) {
            if(            string_equals(self->keys[it_297],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_297]);
                    (self->keys[it_297] = come_decrement_ref_count(self->keys[it_297], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_297]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_297]);
                    self->keys[it_297]=key;
                }
                if(                1                ) {
                    /*c*/ come_call_finalizer3(self->items[it_297],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_297]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_297]=item;
                }
                break;
            }
            it_297++;
            if(            it_297>=self->size            ) {
                it_297=0;
            }
            else if(            it_297==hash_296            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_297]=(_Bool)1;
            if(            1            ) {
                self->keys[it_297]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_297]=key;
            }
            if(            1            ) {
                self->items[it_297]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_297]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_314=(_Bool)0;
    for(    _foreach_var_name4_315=(struct list$1char$ph*)come_increment_ref_count(self->key_list),    it2_316=list$1char$ph_begin(_foreach_var_name4_315);    !list$1char$ph_end(_foreach_var_name4_315);    it2_316=list$1char$ph_next(_foreach_var_name4_315)    ){
        if(        string_equals(it2_316,key)        ) {
            same_key_exist_314=(_Bool)1;
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name4_315,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    !same_key_exist_314    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__133 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__133;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_278;
void* __right_value351 = (void*)0;
char** keys_279;
void* __right_value352 = (void*)0;
struct sClass** items_280;
void* __right_value353 = (void*)0;
_Bool* item_existance_281;
int len_282;
struct map$2char$phsClass$ph* _foreach_var_name3_283;
char* it_286;
struct sClass* default_value_289;
void* __right_value354 = (void*)0;
struct sClass* it2_290;
unsigned int hash_293;
int n_294;
struct sClass* default_value_295;
void* __right_value355 = (void*)0;
default_value_289 = (void*)0;
default_value_295 = (void*)0;
    size_278=self->size*10;
    keys_279=(char**)come_increment_ref_count(((char**)(__right_value351=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_278)), "./comelang.h", 2150, "char**"))));
    items_280=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value352=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_278)), "./comelang.h", 2151, "struct sClass**"))));
    item_existance_281=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_278)), "./comelang.h", 2152, "_Bool*"))));
    len_282=0;
    for(    _foreach_var_name3_283=self,    it_286=map$2char$phsClass$ph_begin(_foreach_var_name3_283);    !map$2char$phsClass$ph_end(_foreach_var_name3_283);    it_286=map$2char$phsClass$ph_next(_foreach_var_name3_283)    ){
        memset(&default_value_289,0,sizeof(struct sClass*));
        it2_290=((struct sClass*)(__right_value354=map$2char$phsClass$ph_at(self,it_286,(struct sClass*)come_increment_ref_count(default_value_289))));
        /*c*/ come_call_finalizer3(__right_value354,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_293=string_get_hash_key(((char*)it_286))%size_278;
        n_294=hash_293;
        while(        (_Bool)1        ) {
            if(            item_existance_281[n_294]            ) {
                n_294++;
                if(                n_294>=size_278                ) {
                    n_294=0;
                }
                else if(                n_294==hash_293                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_281[n_294]=(_Bool)1;
                keys_279[n_294]=it_286;
                items_280[n_294]=((struct sClass*)(__right_value355=map$2char$phsClass$ph_at(self,it_286,(struct sClass*)come_increment_ref_count(default_value_295))));
                /*c*/ come_call_finalizer3(__right_value355,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_282++;
                /*c*/ come_call_finalizer3(default_value_295,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_295,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_289,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_279;
    self->items=items_280;
    self->item_existance=item_existance_281;
    self->size=size_278;
    self->len=len_282;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_284;
char* __result_obj__119;
char* __result_obj__120;
char* result_285;
char* __result_obj__121;
result_284 = (void*)0;
result_285 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_284,0,sizeof(char*));
        __result_obj__119 = result_284;
        return __result_obj__119;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__120 = self->key_list->it->item;
        return __result_obj__120;
    }
    memset(&result_285,0,sizeof(char*));
    __result_obj__121 = result_285;
    return __result_obj__121;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_287;
char* __result_obj__122;
char* __result_obj__123;
char* result_288;
char* __result_obj__124;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_287,0,sizeof(char*));
        __result_obj__122 = result_287;
        return __result_obj__122;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__123 = self->key_list->it->item;
        return __result_obj__123;
    }
    memset(&result_288,0,sizeof(char*));
    __result_obj__124 = result_288;
    return __result_obj__124;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_291;
unsigned int it_292;
struct sClass* __result_obj__125;
struct sClass* __result_obj__126;
struct sClass* __result_obj__127;
struct sClass* __result_obj__128;
    hash_291=string_get_hash_key(((char*)key))%self->size;
    it_292=hash_291;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_292]        ) {
            if(            string_equals(self->keys[it_292],key)            ) {
                __result_obj__125 = (struct sClass*)come_increment_ref_count(self->items[it_292]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__125,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__125;
            }
            it_292++;
            if(            it_292>=self->size            ) {
                it_292=0;
            }
            else if(            it_292==hash_291            ) {
                __result_obj__126 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__126,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__126;
            }
        }
        else {
            __result_obj__127 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__127,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__127;
        }
    }
    __result_obj__128 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__128,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__128;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_298;
struct list_item$1char$ph* it_299;
struct list$1char$ph* __result_obj__132;
    it2_298=0;
    it_299=self->head;
    while(    it_299!=((void*)0)    ) {
        if(        string_equals(it_299->item,item)        ) {
            list$1char$ph_delete(self,it2_298,it2_298+1);
            break;
        }
        it2_298++;
        it_299=it_299->next;
    }
    __result_obj__132 = self;
    return __result_obj__132;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_300;
struct list$1char$ph* __result_obj__129;
struct list_item$1char$ph* it_303;
int i_304;
struct list_item$1char$ph* prev_it_305;
struct list_item$1char$ph* it_306;
int i_307;
struct list_item$1char$ph* prev_it_308;
struct list_item$1char$ph* it_309;
struct list_item$1char$ph* head_prev_it_310;
struct list_item$1char$ph* tail_it_311;
int i_312;
struct list_item$1char$ph* prev_it_313;
struct list$1char$ph* __result_obj__131;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_300=tail;
        tail=head;
        head=tmp_300;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__129 = self;
        return __result_obj__129;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_303=self->head;
        i_304=0;
        while(        it_303!=((void*)0)        ) {
            if(            i_304<tail            ) {
                prev_it_305=it_303;
                it_303=it_303->next;
                i_304++;
                /*c*/ come_call_finalizer3(prev_it_305,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_304==tail            ) {
                self->head=it_303;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_303=it_303->next;
                i_304++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_306=self->head;
        i_307=0;
        while(        it_306!=((void*)0)        ) {
            if(            i_307==head            ) {
                self->tail=it_306->prev;
                self->tail->next=((void*)0);
            }
            if(            i_307>=head            ) {
                prev_it_308=it_306;
                it_306=it_306->next;
                i_307++;
                /*c*/ come_call_finalizer3(prev_it_308,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_306=it_306->next;
                i_307++;
            }
        }
    }
    else {
        it_309=self->head;
        head_prev_it_310=((void*)0);
        tail_it_311=((void*)0);
        i_312=0;
        while(        it_309!=((void*)0)        ) {
            if(            i_312==head            ) {
                head_prev_it_310=it_309->prev;
            }
            if(            i_312==tail            ) {
                tail_it_311=it_309;
            }
            if(            i_312>=head&&i_312<tail            ) {
                prev_it_313=it_309;
                it_309=it_309->next;
                i_312++;
                /*c*/ come_call_finalizer3(prev_it_313,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_309=it_309->next;
                i_312++;
            }
        }
        if(        head_prev_it_310!=((void*)0)        ) {
            head_prev_it_310->next=tail_it_311;
        }
        if(        tail_it_311!=((void*)0)        ) {
            tail_it_311->prev=head_prev_it_310;
        }
    }
    __result_obj__131 = self;
    return __result_obj__131;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_301;
struct list_item$1char$ph* prev_it_302;
struct list$1char$ph* __result_obj__130;
    it_301=self->head;
    while(    it_301!=((void*)0)    ) {
        prev_it_302=it_301;
        it_301=it_301->next;
        /*c*/ come_call_finalizer3(prev_it_302,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__130 = self;
    return __result_obj__130;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_337;
struct list$1sNode$ph* __result_obj__135;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_337=0    ;    i_337<num_value    ;    i_337++    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i_337]));
    }
    __result_obj__135 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__135,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__135;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_339;
int i_340;
struct sType* default_value_341;
struct list$1sType$ph* __result_obj__136;
struct list_item$1sType$ph* it_342;
int i_343;
struct sType* __dec_obj202;
struct list$1sType$ph* __result_obj__137;
default_value_341 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_339=self->len;
        for(        i_340=0        ;        i_340<position-len_339        ;        i_340++        ){
            memset(&default_value_341,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_341));
            /*c*/ come_call_finalizer3(default_value_341,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__136 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__136;
    }
    it_342=self->head;
    i_343=0;
    while(    it_342!=((void*)0)    ) {
        if(        position==i_343        ) {
            __dec_obj202=it_342->item,
            it_342->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj202,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_342=it_342->next;
        i_343++;
    }
    __result_obj__137 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__137;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

