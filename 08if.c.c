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

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNode$ph* mElifExpressionNodes;
    struct list$1sBlock$ph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sIfMethodNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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
void transpile_conditional_with_free_right_object_value(struct sInfo* info);
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value2 = (void*)0;
struct sNode* __dec_obj1;
void* __right_value77 = (void*)0;
struct sBlock* __dec_obj37;
void* __right_value78 = (void*)0;
struct list$1sNode$ph* __dec_obj38;
void* __right_value86 = (void*)0;
struct list$1sBlock$ph* __dec_obj42;
void* __right_value87 = (void*)0;
struct sBlock* __dec_obj43;
struct sBlock* __dec_obj44;
struct sIfNode* __result_obj__55;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value0,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj1=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj37=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    /*b*/ come_call_finalizer3(__dec_obj37,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj38=self->mElifExpressionNodes,
    self->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(elif_expression_nodes));
    /*b*/ come_call_finalizer3(__dec_obj38,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj42=self->mElifBlocks,
    self->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(elif_blocks));
    /*b*/ come_call_finalizer3(__dec_obj42,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj43=self->mElseBlock,
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(else_block));
        /*b*/ come_call_finalizer3(__dec_obj43,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj44=self->mElseBlock,
        self->mElseBlock=((void*)0);
        /*b*/ come_call_finalizer3(__dec_obj44,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__55 = (struct sIfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__55,sIfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__55;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __right_value88 = (void*)0;
char* __result_obj__56;
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string("sIfNode"))));
    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__56;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_98;
int i_99;
void* __right_value89 = (void*)0;
_Bool _if_conditional1;
void* __right_value90 = (void*)0;
struct sBlock* else_block_106;
int elif_num_107;
_Bool guard__108;
char* if_result_var_name_109;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct sType* if_result_type_110;
void* __right_value94 = (void*)0;
char* __dec_obj45;
void* __right_value95 = (void*)0;
struct sVar* var__112;
void* __right_value96 = (void*)0;
struct sNode* expression_node_113;
int sline_114;
char* sname_115;
_Bool comma_instead_of_semicolon_before_116;
_Bool without_semicolon_117;
_Bool Value_118;
_Bool __result_obj__61;
struct sBlock* if_block_119;
_Bool normal_if_120;
void* __right_value97 = (void*)0;
struct CVALUE* conditional_value_121;
int num_if_conditional_stack_123;
void* __right_value98 = (void*)0;
struct CVALUE* conditional_value_124;
int i_125;
void* __right_value99 = (void*)0;
struct sNode* expression_node2_126;
_Bool comma_instead_of_semicolon_before_133;
_Bool without_semicolon_134;
_Bool Value_135;
_Bool __result_obj__66;
void* __right_value100 = (void*)0;
struct sBlock* elif_node_block_136;
_Bool normal_if_137;
void* __right_value101 = (void*)0;
struct CVALUE* conditional_value_138;
void* __right_value102 = (void*)0;
struct CVALUE* conditional_value_139;
int num_elif_conditional_stack_141;
struct sVar* var__142;
int __exception_result_var_b1;
void* __right_value103 = (void*)0;
struct sNode* result_node_143;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sNode* __dec_obj46;
_Bool Value_144;
_Bool __result_obj__67;
void* __right_value106 = (void*)0;
struct CVALUE* come_value2_145;
void* __right_value107 = (void*)0;
struct sType* __dec_obj47;
char* __dec_obj51;
_Bool __result_obj__69;
    existance_of_result_value_98=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_98=(_Bool)0;
        }
        for(        i_99=0;        i_99<self->mElifNum;        i_99++        ){
            if(            (_if_conditional1=(!((struct sBlock*)(__right_value89=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i_99)))->mOmitSemicolon)),            /*c*/ come_call_finalizer3(__right_value89,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                existance_of_result_value_98=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_98=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        ((struct tuple2$2int$bool$*)(__right_value90=err_msg(info,"In conditional operator comelang can't use if statment")));
        /*c*/ come_call_finalizer3(__right_value90,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return (_Bool)1;
    }
    else_block_106=self->mElseBlock;
    elif_num_107=self->mElifNum;
    guard__108=self->mGuard;
    if_result_var_name_109=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_98) {
        if_result_type_110=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "08if.c", 63, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        static int var_num_111=0;
        __dec_obj45=info->if_result_var_name,
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_111++));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(sType_clone(if_result_type_110)),info,(_Bool)0,(_Bool)0);
        var__112=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value96=make_define_var(var__112->mType,var__112->mCValueName,(_Bool)0,info))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(if_result_type_110,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    expression_node_113=self->mExpressionNode;
    sline_114=info->sline;
    sname_115=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_116=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    without_semicolon_117=info->without_semicolon;
    info->without_semicolon=(_Bool)1;
    Value_118=node_compile(expression_node_113,info);
    if(    !Value_118) {
        __result_obj__61 = (_Bool)0;
        (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__61;
    }
    else {
    }
    info->without_semicolon=without_semicolon_117;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_116;
    if_block_119=self->mIfBlock;
    normal_if_120=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_120=(_Bool)0;
    }
    if(    normal_if_120) {
        conditional_value_121=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"%s) {\n",conditional_value_121->c_value);
        /*c*/ come_call_finalizer3(conditional_value_121,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        static int num_if_conditional_122=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_122);
        num_if_conditional_stack_123=num_if_conditional_122;
        conditional_value_124=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_stack_123,conditional_value_124->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_123);
        /*c*/ come_call_finalizer3(conditional_value_124,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_block(if_block_119,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
    add_come_code(info,"}\n");
    if(    elif_num_107>0) {
        for(        i_125=0;        i_125<elif_num_107;        i_125++        ){
            expression_node2_126=((struct sNode*)(__right_value99=list$1sNode$ph_operator_load_element(self->mElifExpressionNodes,i_125)));
            ((__right_value99) ? __right_value99 = come_decrement_ref_count(__right_value99, ((struct sNode*)__right_value99)->finalize, ((struct sNode*)__right_value99)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_133=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            without_semicolon_134=info->without_semicolon;
            info->without_semicolon=(_Bool)1;
            Value_135=node_compile(expression_node2_126,info);
            if(            !Value_135) {
                __result_obj__66 = (_Bool)0;
                (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__66;
            }
            else {
            }
            info->without_semicolon=without_semicolon_134;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_133;
            elif_node_block_136=((struct sBlock*)(__right_value100=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i_125)));
            /*c*/ come_call_finalizer3(__right_value100,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            normal_if_137=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_137=(_Bool)0;
            }
            if(            normal_if_137) {
                conditional_value_138=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s) {\n",conditional_value_138->c_value);
                /*c*/ come_call_finalizer3(conditional_value_138,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                conditional_value_139=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                static int num_elif_conditional_140=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_140);
                num_elif_conditional_stack_141=num_elif_conditional_140;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_stack_141,conditional_value_139->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_141);
                /*c*/ come_call_finalizer3(conditional_value_139,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            transpile_block(elif_node_block_136,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_106) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_106,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_98) {
        var__142=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 181, 0),__exception_result_var_b1=assert_v2(var__142!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_143=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj46=result_node_143,
        result_node_143=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(sType_clone(var__142->mType)),(struct sNode*)come_increment_ref_count(result_node_143),info));
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        Value_144=node_compile(result_node_143,info);
        if(        !Value_144) {
            __result_obj__67 = (_Bool)0;
            ((result_node_143) ? result_node_143 = come_decrement_ref_count(result_node_143, ((struct sNode*)result_node_143)->finalize, ((struct sNode*)result_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__67;
        }
        else {
        }
        come_value2_145=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj47=come_value2_145->type,
        come_value2_145->type=(struct sType*)come_increment_ref_count(sType_clone(var__142->mType));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_145));
        ((result_node_143) ? result_node_143 = come_decrement_ref_count(result_node_143, ((struct sNode*)result_node_143)->finalize, ((struct sNode*)result_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value2_145,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __dec_obj51=info->if_result_var_name,
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_109);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__69 = (_Bool)1;
    (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__69;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__1;
void* __right_value1 = (void*)0;
struct sNode* result_0;
struct sNode* __result_obj__2;
    if(    self==(void*)0) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__1) ? __result_obj__1 = come_decrement_ref_count(__result_obj__1, ((struct sNode*)__result_obj__1)->finalize, ((struct sNode*)__result_obj__1)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__1;
    }
    result_0=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_0->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_0->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_0->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_0->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_0->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_0->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_0->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_0->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_0->kind=self->kind;
    }
    __result_obj__2 = (struct sNode*)come_increment_ref_count(result_0);
    ((result_0) ? result_0 = come_decrement_ref_count(result_0, ((struct sNode*)result_0)->finalize, ((struct sNode*)result_0)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__2) ? __result_obj__2 = come_decrement_ref_count(__result_obj__2, ((struct sNode*)__result_obj__2)->finalize, ((struct sNode*)__result_obj__2)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__2;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__3;
void* __right_value3 = (void*)0;
struct sBlock* result_1;
void* __right_value11 = (void*)0;
struct list$1sNode$ph* __dec_obj5;
void* __right_value76 = (void*)0;
struct sVarTable* __dec_obj36;
struct sBlock* __result_obj__50;
    if(    self==(void*)0) {
        __result_obj__3 = (void*)0;
        return __result_obj__3;
    }
    result_1=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj5=result_1->mNodes,
        result_1->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj5,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj36=result_1->mVarTable,
        result_1->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj36,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__50 = result_1;
    /*c*/ come_call_finalizer3(result_1,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__50;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__4;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct list$1sNode$ph* result_4;
struct list_item$1sNode$ph* it_5;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1sNode$ph* __result_obj__7;
    if(    self==((void*)0)) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__4,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__4;
    }
    result_4=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_5=self->head;
    while(    it_5!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_4,(struct sNode*)come_increment_ref_count(sNode_clone(it_5->item)));
        }
        else {
            list$1sNode$ph_add(result_4,(struct sNode*)come_increment_ref_count(sNode_clone(it_5->item)));
        }
        it_5=it_5->next;
    }
    __result_obj__7 = (struct list$1sNode$ph*)come_increment_ref_count(result_4);
    /*c*/ come_call_finalizer3(result_4,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__7,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__7;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_2;
struct list_item$1sNode$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)) {
        prev_it_3=it_2;
        it_2=it_2->next;
        /*c*/ come_call_finalizer3(prev_it_3,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__5,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__5;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value6 = (void*)0;
struct list_item$1sNode$ph* litem_6;
struct sNode* __dec_obj2;
void* __right_value7 = (void*)0;
struct list_item$1sNode$ph* litem_7;
struct sNode* __dec_obj3;
void* __right_value8 = (void*)0;
struct list_item$1sNode$ph* litem_8;
struct sNode* __dec_obj4;
struct list$1sNode$ph* __result_obj__6;
    if(    self->len==0) {
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value6=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_6->prev=((void*)0);
        litem_6->next=((void*)0);
        __dec_obj2=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_6;
        self->head=litem_6;
    }
    else if(    self->len==1) {
        litem_7=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value7=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        __dec_obj3=litem_7->item,
        litem_7->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value8=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        __dec_obj4=litem_8->item,
        litem_8->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj4 ? __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
    __result_obj__6 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__6;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_9;
struct list_item$1sNode$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)) {
        prev_it_10=it_9;
        it_9=it_9->next;
        /*c*/ come_call_finalizer3(prev_it_10,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__8;
void* __right_value12 = (void*)0;
struct sVarTable* result_11;
void* __right_value75 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj35;
struct sVarTable* __result_obj__49;
    if(    self==(void*)0) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__8,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__8;
    }
    result_11=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj35=result_11->mVars,
        result_11->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj35,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_11->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_11->mParent=self->mParent;
    }
    __result_obj__49 = (struct sVarTable*)come_increment_ref_count(result_11);
    /*c*/ come_call_finalizer3(result_11,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__49,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__49;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__9;
void* __right_value13 = (void*)0;
void* __right_value19 = (void*)0;
struct map$2char$phsVar$ph* result_23;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1char$ph* __dec_obj7;
char* it_26;
struct sVar* default_value_29;
void* __right_value22 = (void*)0;
struct sVar* it2_32;
void* __right_value31 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__48;
default_value_29 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__9 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__9,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__9;
    }
    result_23=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1985, "struct map$2char$phsVar$ph*"))));
    __dec_obj7=result_23->key_list,
    result_23->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1987, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj7,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_26=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_26=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_29,0,sizeof(struct sVar*));
        it2_32=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_26,(struct sVar*)come_increment_ref_count(default_value_29)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_26, "./comelang.h", 1996, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_26, "./comelang.h", 1999, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count(it_26),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count(it_26),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        /*c*/ come_call_finalizer3(default_value_29,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_32,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__48 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_23);
    /*c*/ come_call_finalizer3(result_23,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__48,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_12;
int i_17;
    for(    i_12=0;    i_12<self->size;    i_12++    ){
        if(        self->item_existance[i_12]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_12],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_17=0;    i_17<self->size;    i_17++    ){
        if(        self->item_existance[i_17]) {
            if(            1) {
                (self->keys[i_17] = come_decrement_ref_count(self->keys[i_17], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct list_item$1sType$ph* it_13;
struct list_item$1sType$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)) {
        prev_it_14=it_13;
        it_13=it_13->next;
        /*c*/ come_call_finalizer3(prev_it_14,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_15;
struct list_item$1char$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)) {
        prev_it_16=it_15;
        it_15=it_15->next;
        /*c*/ come_call_finalizer3(prev_it_16,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
int i_18;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct list$1char$ph* __dec_obj6;
struct map$2char$phsVar$ph* __result_obj__11;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value14=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value15=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1915, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value16=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_18=0;    i_18<128;    i_18++    ){
        self->item_existance[i_18]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj6=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj6,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__11 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__11,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__11;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__10;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__10 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__10,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__10;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_19;
struct list_item$1char$p* prev_it_20;
    it_19=self->head;
    while(    it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*c*/ come_call_finalizer3(prev_it_20,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_21;
struct list_item$1char$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)) {
        prev_it_22=it_21;
        it_21=it_21->next;
        /*c*/ come_call_finalizer3(prev_it_22,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_24;
char* __result_obj__12;
char* __result_obj__13;
char* result_25;
char* __result_obj__14;
result_24 = (void*)0;
result_25 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_24,0,sizeof(char*));
        __result_obj__12 = result_24;
        return __result_obj__12;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__13 = self->key_list->it->item;
        return __result_obj__13;
    }
    memset(&result_25,0,sizeof(char*));
    __result_obj__14 = result_25;
    return __result_obj__14;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_27;
char* __result_obj__15;
char* __result_obj__16;
char* result_28;
char* __result_obj__17;
result_27 = (void*)0;
result_28 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_27,0,sizeof(char*));
        __result_obj__15 = result_27;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_28,0,sizeof(char*));
    __result_obj__17 = result_28;
    return __result_obj__17;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_30;
unsigned int it_31;
struct sVar* __result_obj__18;
struct sVar* __result_obj__19;
struct sVar* __result_obj__20;
struct sVar* __result_obj__21;
    hash_30=string_get_hash_key(((char*)key))%self->size;
    it_31=hash_30;
    while(    (_Bool)1) {
        if(        self->item_existance[it_31]) {
            if(            string_equals(self->keys[it_31],key)) {
                __result_obj__18 = (struct sVar*)come_increment_ref_count(self->items[it_31]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__18,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__18;
            }
            it_31++;
            if(            it_31>=self->size) {
                it_31=0;
            }
            else if(            it_31==hash_30) {
                __result_obj__19 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__19,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__19;
            }
        }
        else {
            __result_obj__20 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__20,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__20;
        }
    }
    __result_obj__21 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__21,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__21;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_44;
int it_45;
_Bool same_key_exist_62;
char* it2_65;
struct map$2char$phsVar$ph* __result_obj__33;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_44=string_get_hash_key(((char*)key))%self->size;
    it_45=hash_44;
    while(    (_Bool)1) {
        if(        self->item_existance[it_45]) {
            if(            string_equals(self->keys[it_45],key)) {
                if(                1) {
                    (self->keys[it_45] = come_decrement_ref_count(self->keys[it_45], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_45]);
                    self->keys[it_45]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_45]);
                    self->keys[it_45]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_45],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_45]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_45]=item;
                }
                break;
            }
            it_45++;
            if(            it_45>=self->size) {
                it_45=0;
            }
            else if(            it_45==hash_44) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_45]=(_Bool)1;
            if(            1) {
                self->keys[it_45]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_45]=key;
            }
            if(            1) {
                self->items[it_45]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_45]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_62=(_Bool)0;
    for(    it2_65=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_65=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_65,key)) {
            same_key_exist_62=(_Bool)1;
        }
    }
    if(    !same_key_exist_62) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__33 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__33;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_33;
void* __right_value23 = (void*)0;
char** keys_34;
void* __right_value24 = (void*)0;
struct sVar** items_35;
void* __right_value25 = (void*)0;
_Bool* item_existance_36;
int len_37;
char* it_38;
struct sVar* default_value_39;
void* __right_value26 = (void*)0;
struct sVar* it2_40;
unsigned int hash_41;
int n_42;
struct sVar* default_value_43;
void* __right_value27 = (void*)0;
default_value_39 = (void*)0;
default_value_43 = (void*)0;
    size_33=self->size*10;
    keys_34=(char**)come_increment_ref_count(((char**)(__right_value23=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_33)), "./comelang.h", 2153, "char**"))));
    items_35=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value24=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_33)), "./comelang.h", 2154, "struct sVar**"))));
    item_existance_36=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value25=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_33)), "./comelang.h", 2155, "_Bool*"))));
    len_37=0;
    for(    it_38=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_38=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_39,0,sizeof(struct sVar*));
        it2_40=((struct sVar*)(__right_value26=map$2char$phsVar$ph_at(self,it_38,(struct sVar*)come_increment_ref_count(default_value_39))));
        /*c*/ come_call_finalizer3(__right_value26,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_41=string_get_hash_key(((char*)it_38))%size_33;
        n_42=hash_41;
        while(        (_Bool)1) {
            if(            item_existance_36[n_42]) {
                n_42++;
                if(                n_42>=size_33) {
                    n_42=0;
                }
                else if(                n_42==hash_41) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_36[n_42]=(_Bool)1;
                keys_34[n_42]=it_38;
                items_35[n_42]=((struct sVar*)(__right_value27=map$2char$phsVar$ph_at(self,it_38,(struct sVar*)come_increment_ref_count(default_value_43))));
                /*c*/ come_call_finalizer3(__right_value27,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_37++;
                /*c*/ come_call_finalizer3(default_value_43,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_43,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_39,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_34;
    self->items=items_35;
    self->item_existance=item_existance_36;
    self->size=size_33;
    self->len=len_37;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_46;
struct list_item$1char$ph* it_47;
struct list$1char$ph* __result_obj__25;
    it2_46=0;
    it_47=self->head;
    while(    it_47!=((void*)0)) {
        if(        string_equals(it_47->item,item)) {
            list$1char$ph_delete(self,it2_46,it2_46+1);
            break;
        }
        it2_46++;
        it_47=it_47->next;
    }
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_48;
struct list$1char$ph* __result_obj__22;
struct list_item$1char$ph* it_51;
int i_52;
struct list_item$1char$ph* prev_it_53;
struct list_item$1char$ph* it_54;
int i_55;
struct list_item$1char$ph* prev_it_56;
struct list_item$1char$ph* it_57;
struct list_item$1char$ph* head_prev_it_58;
struct list_item$1char$ph* tail_it_59;
int i_60;
struct list_item$1char$ph* prev_it_61;
struct list$1char$ph* __result_obj__24;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_48=tail;
        tail=head;
        head=tmp_48;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__22 = self;
        return __result_obj__22;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_51=self->head;
        i_52=0;
        while(        it_51!=((void*)0)) {
            if(            i_52<tail) {
                prev_it_53=it_51;
                it_51=it_51->next;
                i_52++;
                /*c*/ come_call_finalizer3(prev_it_53,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_52==tail) {
                self->head=it_51;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_51=it_51->next;
                i_52++;
            }
        }
    }
    else if(    tail==self->len) {
        it_54=self->head;
        i_55=0;
        while(        it_54!=((void*)0)) {
            if(            i_55==head) {
                self->tail=it_54->prev;
                self->tail->next=((void*)0);
            }
            if(            i_55>=head) {
                prev_it_56=it_54;
                it_54=it_54->next;
                i_55++;
                /*c*/ come_call_finalizer3(prev_it_56,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_54=it_54->next;
                i_55++;
            }
        }
    }
    else {
        it_57=self->head;
        head_prev_it_58=((void*)0);
        tail_it_59=((void*)0);
        i_60=0;
        while(        it_57!=((void*)0)) {
            if(            i_60==head) {
                head_prev_it_58=it_57->prev;
            }
            if(            i_60==tail) {
                tail_it_59=it_57;
            }
            if(            i_60>=head&&i_60<tail) {
                prev_it_61=it_57;
                it_57=it_57->next;
                i_60++;
                /*c*/ come_call_finalizer3(prev_it_61,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_57=it_57->next;
                i_60++;
            }
        }
        if(        head_prev_it_58!=((void*)0)) {
            head_prev_it_58->next=tail_it_59;
        }
        if(        tail_it_59!=((void*)0)) {
            tail_it_59->prev=head_prev_it_58;
        }
    }
    __result_obj__24 = self;
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_49;
struct list_item$1char$ph* prev_it_50;
struct list$1char$ph* __result_obj__23;
    it_49=self->head;
    while(    it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*c*/ come_call_finalizer3(prev_it_50,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = self;
    return __result_obj__23;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_63;
char* __result_obj__26;
char* __result_obj__27;
char* result_64;
char* __result_obj__28;
result_63 = (void*)0;
result_64 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_63,0,sizeof(char*));
        __result_obj__26 = result_63;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_64,0,sizeof(char*));
    __result_obj__28 = result_64;
    return __result_obj__28;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_66;
char* __result_obj__29;
char* __result_obj__30;
char* result_67;
char* __result_obj__31;
result_66 = (void*)0;
result_67 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_66,0,sizeof(char*));
        __result_obj__29 = result_66;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_67,0,sizeof(char*));
    __result_obj__31 = result_67;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value28 = (void*)0;
struct list_item$1char$ph* litem_68;
char* __dec_obj8;
void* __right_value29 = (void*)0;
struct list_item$1char$ph* litem_69;
char* __dec_obj9;
void* __right_value30 = (void*)0;
struct list_item$1char$ph* litem_70;
char* __dec_obj10;
struct list$1char$ph* __result_obj__32;
    if(    self->len==0) {
        litem_68=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value28=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj8=litem_68->item,
        litem_68->item=(char*)come_increment_ref_count(item);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_68;
        self->head=litem_68;
    }
    else if(    self->len==1) {
        litem_69=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value29=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj9=litem_69->item,
        litem_69->item=(char*)come_increment_ref_count(item);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value30=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj10=litem_70->item,
        litem_70->item=(char*)come_increment_ref_count(item);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__32 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__32;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__34;
void* __right_value32 = (void*)0;
struct sVar* result_71;
void* __right_value33 = (void*)0;
char* __dec_obj11;
void* __right_value34 = (void*)0;
char* __dec_obj12;
void* __right_value68 = (void*)0;
struct sType* __dec_obj33;
void* __right_value69 = (void*)0;
char* __dec_obj34;
struct sVar* __result_obj__47;
    if(    self==(void*)0) {
        __result_obj__34 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__34,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__34;
    }
    result_71=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj11=result_71->mName,
        result_71->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj12=result_71->mCValueName,
        result_71->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj33=result_71->mType,
        result_71->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_71->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_71->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_71->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_71->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj34=result_71->mFunName,
        result_71->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__47 = (struct sVar*)come_increment_ref_count(result_71);
    /*c*/ come_call_finalizer3(result_71,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__47,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__47;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__35;
void* __right_value35 = (void*)0;
struct sType* result_72;
void* __right_value36 = (void*)0;
struct sType* __dec_obj13;
void* __right_value37 = (void*)0;
struct sType* __dec_obj14;
void* __right_value45 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value46 = (void*)0;
struct sType* __dec_obj19;
void* __right_value47 = (void*)0;
struct sNode* __dec_obj20;
void* __right_value48 = (void*)0;
struct sNode* __dec_obj21;
void* __right_value49 = (void*)0;
char* __dec_obj22;
void* __right_value50 = (void*)0;
char* __dec_obj23;
void* __right_value51 = (void*)0;
char* __dec_obj24;
void* __right_value56 = (void*)0;
struct list$1sNode$ph* __dec_obj25;
void* __right_value57 = (void*)0;
char* __dec_obj26;
void* __right_value58 = (void*)0;
struct list$1sType$ph* __dec_obj27;
void* __right_value66 = (void*)0;
struct list$1char$ph* __dec_obj31;
void* __right_value67 = (void*)0;
struct sType* __dec_obj32;
struct sType* __result_obj__46;
    if(    self==(void*)0) {
        __result_obj__35 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__35,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__35;
    }
    result_72=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_72->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj13=result_72->mOriginalLoadVarType,
        result_72->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj13,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj14=result_72->mChannelType,
        result_72->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj14,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj18=result_72->mGenericsTypes,
        result_72->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj18,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj19=result_72->mNoSolvedGenericsType,
        result_72->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj20=result_72->mSizeNum,
        result_72->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj21=result_72->mAlignas,
        result_72->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj22=result_72->mTupleName,
        result_72->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj23=result_72->mAttribute,
        result_72->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_72->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_72->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_72->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_72->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_72->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_72->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_72->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_72->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_72->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_72->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_72->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_72->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_72->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_72->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_72->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_72->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_72->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_72->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_72->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_72->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_72->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_72->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_72->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj24=result_72->mAsmName,
        result_72->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_72->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_72->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_72->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj25=result_72->mArrayNum,
        result_72->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj25,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_72->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_72->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_72->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_72->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_72->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj26=result_72->mOriginalTypeName,
        result_72->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_72->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_72->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_72->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_72->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj27=result_72->mParamTypes,
        result_72->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj27,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj31=result_72->mParamNames,
        result_72->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj31,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj32=result_72->mResultType,
        result_72->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_72->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_72->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)) {
        result_72->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__46 = (struct sType*)come_increment_ref_count(result_72);
    /*c*/ come_call_finalizer3(result_72,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__46,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__46;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__36;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct list$1sType$ph* result_73;
struct list_item$1sType$ph* it_74;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1sType$ph* __result_obj__39;
    if(    self==((void*)0)) {
        __result_obj__36 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__36,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__36;
    }
    result_73=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_74=self->head;
    while(    it_74!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_73,(struct sType*)come_increment_ref_count(sType_clone(it_74->item)));
        }
        else {
            list$1sType$ph_add(result_73,(struct sType*)come_increment_ref_count(sType_clone(it_74->item)));
        }
        it_74=it_74->next;
    }
    __result_obj__39 = (struct list$1sType$ph*)come_increment_ref_count(result_73);
    /*c*/ come_call_finalizer3(result_73,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__39,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__39;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__37;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__37 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__37,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__37;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value40 = (void*)0;
struct list_item$1sType$ph* litem_75;
struct sType* __dec_obj15;
void* __right_value41 = (void*)0;
struct list_item$1sType$ph* litem_76;
struct sType* __dec_obj16;
void* __right_value42 = (void*)0;
struct list_item$1sType$ph* litem_77;
struct sType* __dec_obj17;
struct list$1sType$ph* __result_obj__38;
    if(    self->len==0) {
        litem_75=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value40=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_75->prev=((void*)0);
        litem_75->next=((void*)0);
        __dec_obj15=litem_75->item,
        litem_75->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj15,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_75;
        self->head=litem_75;
    }
    else if(    self->len==1) {
        litem_76=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value41=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_76->prev=self->head;
        litem_76->next=((void*)0);
        __dec_obj16=litem_76->item,
        litem_76->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj16,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_76;
        self->head->next=litem_76;
    }
    else {
        litem_77=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value42=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_77->prev=self->tail;
        litem_77->next=((void*)0);
        __dec_obj17=litem_77->item,
        litem_77->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_77;
        self->tail=litem_77;
    }
    self->len++;
    __result_obj__38 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__38;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_78;
struct list_item$1sType$ph* prev_it_79;
    it_78=self->head;
    while(    it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*c*/ come_call_finalizer3(prev_it_79,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__40;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1sNode$ph* result_80;
struct list_item$1sNode$ph* it_81;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1sNode$ph* __result_obj__41;
    if(    self==((void*)0)) {
        __result_obj__40 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__40,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__40;
    }
    result_80=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_81=self->head;
    while(    it_81!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_80,(struct sNode*)come_increment_ref_count(sNode_clone(it_81->item)));
        }
        else {
            list$1sNode$ph_add(result_80,(struct sNode*)come_increment_ref_count(sNode_clone(it_81->item)));
        }
        it_81=it_81->next;
    }
    __result_obj__41 = (struct list$1sNode$ph*)come_increment_ref_count(result_80);
    /*c*/ come_call_finalizer3(result_80,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__41,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__41;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__42;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1char$ph* result_82;
struct list_item$1char$ph* it_83;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1char$ph* __result_obj__45;
    if(    self==((void*)0)) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__42,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__42;
    }
    result_82=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_83=self->head;
    while(    it_83!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_82,(char*)come_increment_ref_count((char*)come_memdup(it_83->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_82,(char*)come_increment_ref_count((char*)come_memdup(it_83->item, "./comelang.h", 1032, "char*")));
        }
        it_83=it_83->next;
    }
    __result_obj__45 = (struct list$1char$ph*)come_increment_ref_count(result_82);
    /*c*/ come_call_finalizer3(result_82,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__45,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__45;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__43;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__43 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__43,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__43;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value61 = (void*)0;
struct list_item$1char$ph* litem_84;
char* __dec_obj28;
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_85;
char* __dec_obj29;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_86;
char* __dec_obj30;
struct list$1char$ph* __result_obj__44;
    if(    self->len==0) {
        litem_84=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value61=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj28=litem_84->item,
        litem_84->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1) {
        litem_85=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj29=litem_85->item,
        litem_85->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj30=litem_86->item,
        litem_86->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_86;
        self->tail=litem_86;
    }
    self->len++;
    __result_obj__44 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__44;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_87;
int i_88;
    for(    i_87=0;    i_87<self->size;    i_87++    ){
        if(        self->item_existance[i_87]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_87],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_88=0;    i_88<self->size;    i_88++    ){
        if(        self->item_existance[i_88]) {
            if(            1) {
                (self->keys[i_88] = come_decrement_ref_count(self->keys[i_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__51;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1sBlock$ph* result_91;
struct list_item$1sBlock$ph* it_92;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct list$1sBlock$ph* __result_obj__54;
    if(    self==((void*)0)) {
        __result_obj__51 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__51,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__51;
    }
    result_91=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1024, "struct list$1sBlock$ph*"))));
    it_92=self->head;
    while(    it_92!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_91,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_92->item)));
        }
        else {
            list$1sBlock$ph_add(result_91,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_92->item)));
        }
        it_92=it_92->next;
    }
    __result_obj__54 = (struct list$1sBlock$ph*)come_increment_ref_count(result_91);
    /*c*/ come_call_finalizer3(result_91,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__54,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__54;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_89;
struct list_item$1sBlock$ph* prev_it_90;
    it_89=self->head;
    while(    it_89!=((void*)0)) {
        prev_it_90=it_89;
        it_89=it_89->next;
        /*c*/ come_call_finalizer3(prev_it_90,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__52;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__52 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__52,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__52;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value81 = (void*)0;
struct list_item$1sBlock$ph* litem_93;
struct sBlock* __dec_obj39;
void* __right_value82 = (void*)0;
struct list_item$1sBlock$ph* litem_94;
struct sBlock* __dec_obj40;
void* __right_value83 = (void*)0;
struct list_item$1sBlock$ph* litem_95;
struct sBlock* __dec_obj41;
struct list$1sBlock$ph* __result_obj__53;
    if(    self->len==0) {
        litem_93=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value81=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1043, "struct list_item$1sBlock$ph*"))));
        litem_93->prev=((void*)0);
        litem_93->next=((void*)0);
        __dec_obj39=litem_93->item,
        litem_93->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj39,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_93;
        self->head=litem_93;
    }
    else if(    self->len==1) {
        litem_94=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value82=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1053, "struct list_item$1sBlock$ph*"))));
        litem_94->prev=self->head;
        litem_94->next=((void*)0);
        __dec_obj40=litem_94->item,
        litem_94->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj40,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_94;
        self->head->next=litem_94;
    }
    else {
        litem_95=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value83=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1063, "struct list_item$1sBlock$ph*"))));
        litem_95->prev=self->tail;
        litem_95->next=((void*)0);
        __dec_obj41=litem_95->item,
        litem_95->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj41,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_95;
        self->tail=litem_95;
    }
    self->len++;
    __result_obj__53 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__53;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_96;
struct list_item$1sBlock$ph* prev_it_97;
    it_96=self->head;
    while(    it_96!=((void*)0)) {
        prev_it_97=it_96;
        it_96=it_96->next;
        /*c*/ come_call_finalizer3(prev_it_97,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mElifExpressionNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mElifBlocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_100;
int i_101;
struct sBlock* __result_obj__57;
struct sBlock* default_value_102;
struct sBlock* __result_obj__58;
default_value_102 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_100=self->head;
    i_101=0;
    while(    it_100!=((void*)0)) {
        if(        position==i_101) {
            __result_obj__57 = (struct sBlock*)come_increment_ref_count(it_100->item);
            /*c*/ come_call_finalizer3(__result_obj__57,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__57;
        }
        it_100=it_100->next;
        i_101++;
    }
    memset(&default_value_102,0,sizeof(struct sBlock*));
    __result_obj__58 = (struct sBlock*)come_increment_ref_count(default_value_102);
    /*c*/ come_call_finalizer3(default_value_102,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__58,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__58;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_103;
int i_104;
struct sBlock* __result_obj__59;
struct sBlock* default_value_105;
struct sBlock* __result_obj__60;
default_value_105 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_103=self->head;
    i_104=0;
    while(    it_103!=((void*)0)) {
        if(        position==i_104) {
            __result_obj__59 = (struct sBlock*)come_increment_ref_count(it_103->item);
            /*c*/ come_call_finalizer3(__result_obj__59,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__59;
        }
        it_103=it_103->next;
        i_104++;
    }
    memset(&default_value_105,0,sizeof(struct sBlock*));
    __result_obj__60 = (struct sBlock*)come_increment_ref_count(default_value_105);
    /*c*/ come_call_finalizer3(default_value_105,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__60,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
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

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_127;
int i_128;
struct sNode* __result_obj__62;
struct sNode* default_value_129;
struct sNode* __result_obj__63;
default_value_129 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_127=self->head;
    i_128=0;
    while(    it_127!=((void*)0)) {
        if(        position==i_128) {
            __result_obj__62 = (struct sNode*)come_increment_ref_count(it_127->item);
            ((__result_obj__62) ? __result_obj__62 = come_decrement_ref_count(__result_obj__62, ((struct sNode*)__result_obj__62)->finalize, ((struct sNode*)__result_obj__62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__62;
        }
        it_127=it_127->next;
        i_128++;
    }
    memset(&default_value_129,0,sizeof(struct sNode*));
    __result_obj__63 = (struct sNode*)come_increment_ref_count(default_value_129);
    ((default_value_129) ? default_value_129 = come_decrement_ref_count(default_value_129, ((struct sNode*)default_value_129)->finalize, ((struct sNode*)default_value_129)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__63) ? __result_obj__63 = come_decrement_ref_count(__result_obj__63, ((struct sNode*)__result_obj__63)->finalize, ((struct sNode*)__result_obj__63)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__63;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_130;
int i_131;
struct sNode* __result_obj__64;
struct sNode* default_value_132;
struct sNode* __result_obj__65;
default_value_132 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_130=self->head;
    i_131=0;
    while(    it_130!=((void*)0)) {
        if(        position==i_131) {
            __result_obj__64 = (struct sNode*)come_increment_ref_count(it_130->item);
            ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__64;
        }
        it_130=it_130->next;
        i_131++;
    }
    memset(&default_value_132,0,sizeof(struct sNode*));
    __result_obj__65 = (struct sNode*)come_increment_ref_count(default_value_132);
    ((default_value_132) ? default_value_132 = come_decrement_ref_count(default_value_132, ((struct sNode*)default_value_132)->finalize, ((struct sNode*)default_value_132)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__65) ? __result_obj__65 = come_decrement_ref_count(__result_obj__65, ((struct sNode*)__result_obj__65)->finalize, ((struct sNode*)__result_obj__65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__65;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value108 = (void*)0;
struct list_item$1CVALUE$ph* litem_146;
struct CVALUE* __dec_obj48;
void* __right_value109 = (void*)0;
struct list_item$1CVALUE$ph* litem_147;
struct CVALUE* __dec_obj49;
void* __right_value110 = (void*)0;
struct list_item$1CVALUE$ph* litem_148;
struct CVALUE* __dec_obj50;
struct list$1CVALUE$ph* __result_obj__68;
    if(    self->len==0) {
        litem_146=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value108=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        __dec_obj48=litem_146->item,
        litem_146->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj48,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value109=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        __dec_obj49=litem_147->item,
        litem_147->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value110=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        __dec_obj50=litem_148->item,
        litem_148->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__68 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sNode* __dec_obj52;
void* __right_value113 = (void*)0;
struct sNode* __dec_obj53;
struct sMatchNode* __result_obj__70;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value111,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj52=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj53=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__70 = (struct sMatchNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMatchNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__70,sMatchNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__70;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __right_value114 = (void*)0;
char* __result_obj__71;
    __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string("sMatch"))));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__71;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_149;
struct sNode* match_node_150;
_Bool Value_151;
_Bool __result_obj__72;
void* __right_value115 = (void*)0;
struct CVALUE* come_value_152;
_Bool Value_153;
_Bool __result_obj__73;
struct sVar* var__154;
int __exception_result_var_b2;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct list$1sVar$ph* __dec_obj54;
void* __right_value121 = (void*)0;
_Bool __result_obj__76;
    it_node_149=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_150=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_151=node_compile(it_node_149,info);
    if(    !Value_151) {
        __result_obj__72 = (_Bool)0;
        ((it_node_149) ? it_node_149 = come_decrement_ref_count(it_node_149, ((struct sNode*)it_node_149)->finalize, ((struct sNode*)it_node_149)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_150) ? match_node_150 = come_decrement_ref_count(match_node_150, ((struct sNode*)match_node_150)->finalize, ((struct sNode*)match_node_150)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__72;
    }
    else {
    }
    come_value_152=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_152->c_value);
    Value_153=node_compile(match_node_150,info);
    if(    !Value_153) {
        __result_obj__73 = (_Bool)0;
        ((it_node_149) ? it_node_149 = come_decrement_ref_count(it_node_149, ((struct sNode*)it_node_149)->finalize, ((struct sNode*)it_node_149)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_150) ? match_node_150 = come_decrement_ref_count(match_node_150, ((struct sNode*)match_node_150)->finalize, ((struct sNode*)match_node_150)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_152,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__73;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__154=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 240, 1),__exception_result_var_b2=assert_v2(var__154!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj54=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 243, "struct list$1sVar$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj54,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__154)));
    }
    __result_obj__76 = (_Bool)1;
    ((it_node_149) ? it_node_149 = come_decrement_ref_count(it_node_149, ((struct sNode*)it_node_149)->finalize, ((struct sNode*)it_node_149)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node_150) ? match_node_150 = come_decrement_ref_count(match_node_150, ((struct sNode*)match_node_150)->finalize, ((struct sNode*)match_node_150)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_152,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

static void sMatchNode_finalize(struct sMatchNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__74 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_155;
struct list_item$1sVar$ph* prev_it_156;
    it_155=self->head;
    while(    it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_157;
struct list_item$1sVar$ph* prev_it_158;
    it_157=self->head;
    while(    it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*c*/ come_call_finalizer3(prev_it_158,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
void* __right_value118 = (void*)0;
struct list_item$1sVar$ph* litem_159;
struct sVar* __dec_obj55;
void* __right_value119 = (void*)0;
struct list_item$1sVar$ph* litem_160;
struct sVar* __dec_obj56;
void* __right_value120 = (void*)0;
struct list_item$1sVar$ph* litem_161;
struct sVar* __dec_obj57;
struct list$1sVar$ph* __result_obj__75;
    if(    self->len==0) {
        litem_159=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value118=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1043, "struct list_item$1sVar$ph*"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        __dec_obj55=litem_159->item,
        litem_159->item=(struct sVar*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj55,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value119=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1053, "struct list_item$1sVar$ph*"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        __dec_obj56=litem_160->item,
        litem_160->item=(struct sVar*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj56,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value120=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1063, "struct list_item$1sVar$ph*"))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        __dec_obj57=litem_161->item,
        litem_161->item=(struct sVar*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj57,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result_obj__75 = self;
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__75;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value124 = (void*)0;
struct sNode* __dec_obj59;
struct sIfMethodNode* __result_obj__77;
    ((struct sNodeBase*)(__right_value122=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value122,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj58=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj59=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__77 = (struct sIfMethodNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIfMethodNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,sIfMethodNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __right_value125 = (void*)0;
char* __result_obj__78;
    __result_obj__78 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string("sMatch"))));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__78;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_162;
struct sNode* match_node_163;
_Bool Value_164;
_Bool __result_obj__79;
void* __right_value126 = (void*)0;
struct CVALUE* come_value_165;
_Bool Value_166;
_Bool __result_obj__80;
struct sVar* var__167;
int __exception_result_var_b3;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1sVar$ph* __dec_obj60;
void* __right_value129 = (void*)0;
_Bool __result_obj__81;
    it_node_162=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_163=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_164=node_compile(it_node_162,info);
    if(    !Value_164) {
        __result_obj__79 = (_Bool)0;
        ((it_node_162) ? it_node_162 = come_decrement_ref_count(it_node_162, ((struct sNode*)it_node_162)->finalize, ((struct sNode*)it_node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_163) ? match_node_163 = come_decrement_ref_count(match_node_163, ((struct sNode*)match_node_163)->finalize, ((struct sNode*)match_node_163)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__79;
    }
    else {
    }
    come_value_165=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_165->c_value);
    Value_166=node_compile(match_node_163,info);
    if(    !Value_166) {
        __result_obj__80 = (_Bool)0;
        ((it_node_162) ? it_node_162 = come_decrement_ref_count(it_node_162, ((struct sNode*)it_node_162)->finalize, ((struct sNode*)it_node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_163) ? match_node_163 = come_decrement_ref_count(match_node_163, ((struct sNode*)match_node_163)->finalize, ((struct sNode*)match_node_163)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_165,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__80;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__167=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 291, 2),__exception_result_var_b3=assert_v2(var__167!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj60=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 294, "struct list$1sVar$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj60,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__167)));
    }
    __result_obj__81 = (_Bool)1;
    ((it_node_162) ? it_node_162 = come_decrement_ref_count(it_node_162, ((struct sNode*)it_node_162)->finalize, ((struct sNode*)it_node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node_163) ? match_node_163 = come_decrement_ref_count(match_node_163, ((struct sNode*)match_node_163)->finalize, ((struct sNode*)match_node_163)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_165,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value132 = (void*)0;
struct sBlock* __dec_obj62;
struct sOrStatmentNode* __result_obj__82;
    ((struct sNodeBase*)(__right_value130=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value130,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj61=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj62=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    /*b*/ come_call_finalizer3(__dec_obj62,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__82 = (struct sOrStatmentNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOrStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,sOrStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __right_value133 = (void*)0;
char* __result_obj__83;
    __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value133=__builtin_string("sOrStatmentNode"))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__83;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_168;
_Bool without_semicolon_169;
_Bool Value_170;
void* __right_value134 = (void*)0;
struct CVALUE* conditional_value_171;
struct sBlock* if_block_172;
int num_or_conditional_stack_174;
_Bool __result_obj__84;
    expression_node_168=self->mExpressionNode;
    without_semicolon_169=info->without_semicolon;
    info->without_semicolon=(_Bool)1;
    Value_170=node_compile(expression_node_168,info);
    if(    !Value_170) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=without_semicolon_169;
    conditional_value_171=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if_block_172=self->mIfBlock;
    static int num_or_conditional_173=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_173);
    num_or_conditional_stack_174=num_or_conditional_173;
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_stack_174,conditional_value_171->c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_174);
    transpile_block(if_block_172,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__84 = (_Bool)1;
    /*c*/ come_call_finalizer3(conditional_value_171,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__84;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value137 = (void*)0;
struct sBlock* __dec_obj64;
struct sAndStatmentNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value135=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value135,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj63=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj64=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    /*b*/ come_call_finalizer3(__dec_obj64,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__85 = (struct sAndStatmentNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAndStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,sAndStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __right_value138 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string("sAndStatmentNode"))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__86;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_175;
_Bool without_semicolon_176;
_Bool Value_177;
void* __right_value139 = (void*)0;
struct CVALUE* conditional_value_178;
struct sBlock* if_block_179;
int num_and_conditional_stack_181;
_Bool __result_obj__87;
    expression_node_175=self->mExpressionNode;
    without_semicolon_176=info->without_semicolon;
    info->without_semicolon=(_Bool)1;
    Value_177=node_compile(expression_node_175,info);
    if(    !Value_177) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=without_semicolon_176;
    conditional_value_178=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if_block_179=self->mIfBlock;
    static int num_and_conditional_180=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_180);
    num_and_conditional_stack_181=num_and_conditional_180;
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_stack_181,conditional_value_178->c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_181);
    transpile_block(if_block_179,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__87 = (_Bool)1;
    /*c*/ come_call_finalizer3(conditional_value_178,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__87;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value140 = (void*)0;
char* sname_182;
int sline_183;
int sline_real_184;
void* __right_value141 = (void*)0;
struct sNode* expression_node_185;
void* __right_value142 = (void*)0;
struct sBlock* if_block_186;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_187;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1sBlock$ph* elif_blocks_188;
int elif_num_189;
struct sBlock* else_block_190;
char* saved_p_191;
int saved_sline_192;
void* __right_value147 = (void*)0;
char* buf_193;
int sline_real_194;
void* __right_value148 = (void*)0;
struct sNode* expression_node_195;
void* __right_value152 = (void*)0;
struct sBlock* elif_block_199;
void* __right_value156 = (void*)0;
struct sBlock* __dec_obj71;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value166 = (void*)0;
struct sNode* result_203;
struct sNode* __result_obj__92;
void* __right_value167 = (void*)0;
struct sNode* __result_obj__93;
    if(    charp_operator_equals(buf,"if")) {
        sname_182=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 418, "char*"));
        sline_183=info->sline;
        sline_real_184=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_185=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_186=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_187=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 435, "struct list$1sNode$ph*"))));
        elif_blocks_188=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 437, "struct list$1sBlock$ph*"))));
        elif_num_189=0;
        else_block_190=((void*)0);
        while(        1) {
            saved_p_191=info->p;
            saved_sline_192=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                break;
            }
            parse_sharp_v5(info);
            buf_193=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_193,"else")) {
                sline_real_194=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_195=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(elif_expression_nodes_187,(struct sNode*)come_increment_ref_count(expression_node_195));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_199=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlock$ph_push_back(elif_blocks_188,(struct sBlock*)come_increment_ref_count(elif_block_199));
                    elif_num_189++;
                    ((expression_node_195) ? expression_node_195 = come_decrement_ref_count(expression_node_195, ((struct sNode*)expression_node_195)->finalize, ((struct sNode*)expression_node_195)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(elif_block_199,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    __dec_obj71=else_block_190,
                    else_block_190=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj71,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (buf_193 = come_decrement_ref_count(buf_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                info->sline_real=sline_real_194;
            }
            else {
                info->p=saved_p_191;
                info->sline=saved_sline_192;
                (buf_193 = come_decrement_ref_count(buf_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (buf_193 = come_decrement_ref_count(buf_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 500, "struct sNode");
        _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value158=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 500, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(expression_node_185),if_block_186,elif_expression_nodes_187,elif_blocks_188,elif_num_189,else_block_190,(_Bool)0,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sIfNode_finalize;
        _inf_value1->clone=(void*)sIfNode_clone;
        _inf_value1->compile=(void*)sIfNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sIfNode_terminated;
        _inf_value1->kind=(void*)sIfNode_kind;
        result_203=(struct sNode*)come_increment_ref_count(_inf_value1);
        /*c*/ come_call_finalizer3(__right_value158,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_184;
        __result_obj__92 = (struct sNode*)come_increment_ref_count(result_203);
        (sname_182 = come_decrement_ref_count(sname_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((expression_node_185) ? expression_node_185 = come_decrement_ref_count(expression_node_185, ((struct sNode*)expression_node_185)->finalize, ((struct sNode*)expression_node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(if_block_186,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_expression_nodes_187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_blocks_188,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(else_block_190,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((result_203) ? result_203 = come_decrement_ref_count(result_203, ((struct sNode*)result_203)->finalize, ((struct sNode*)result_203)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__92) ? __result_obj__92 = come_decrement_ref_count(__result_obj__92, ((struct sNode*)__result_obj__92)->finalize, ((struct sNode*)__result_obj__92)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__92;
        (sname_182 = come_decrement_ref_count(sname_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((expression_node_185) ? expression_node_185 = come_decrement_ref_count(expression_node_185, ((struct sNode*)expression_node_185)->finalize, ((struct sNode*)expression_node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(if_block_186,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_expression_nodes_187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_blocks_188,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(else_block_190,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((result_203) ? result_203 = come_decrement_ref_count(result_203, ((struct sNode*)result_203)->finalize, ((struct sNode*)result_203)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__93 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value167=string_node_v7(buf,head,head_sline,info))));
    ((__right_value167) ? __right_value167 = come_decrement_ref_count(__right_value167, ((struct sNode*)__right_value167)->finalize, ((struct sNode*)__right_value167)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__93) ? __result_obj__93 = come_decrement_ref_count(__result_obj__93, ((struct sNode*)__result_obj__93)->finalize, ((struct sNode*)__result_obj__93)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__93;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value149 = (void*)0;
struct list_item$1sNode$ph* litem_196;
struct sNode* __dec_obj65;
void* __right_value150 = (void*)0;
struct list_item$1sNode$ph* litem_197;
struct sNode* __dec_obj66;
void* __right_value151 = (void*)0;
struct list_item$1sNode$ph* litem_198;
struct sNode* __dec_obj67;
struct list$1sNode$ph* __result_obj__88;
    if(    self->len==0) {
        litem_196=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value149=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        __dec_obj65=litem_196->item,
        litem_196->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1) {
        litem_197=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value150=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        __dec_obj66=litem_197->item,
        litem_197->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value151=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        __dec_obj67=litem_198->item,
        litem_198->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__88 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__88;
}

static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value153 = (void*)0;
struct list_item$1sBlock$ph* litem_200;
struct sBlock* __dec_obj68;
void* __right_value154 = (void*)0;
struct list_item$1sBlock$ph* litem_201;
struct sBlock* __dec_obj69;
void* __right_value155 = (void*)0;
struct list_item$1sBlock$ph* litem_202;
struct sBlock* __dec_obj70;
struct list$1sBlock$ph* __result_obj__89;
    if(    self->len==0) {
        litem_200=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value153=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1113, "struct list_item$1sBlock$ph*"))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        __dec_obj68=litem_200->item,
        litem_200->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj68,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value154=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1123, "struct list_item$1sBlock$ph*"))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        __dec_obj69=litem_201->item,
        litem_201->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj69,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value155=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1133, "struct list_item$1sBlock$ph*"))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        __dec_obj70=litem_202->item,
        litem_202->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj70,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__89 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__89;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
struct sIfNode* __result_obj__90;
void* __right_value159 = (void*)0;
struct sIfNode* result_204;
void* __right_value160 = (void*)0;
char* __dec_obj72;
void* __right_value161 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value162 = (void*)0;
struct sBlock* __dec_obj74;
void* __right_value163 = (void*)0;
struct list$1sNode$ph* __dec_obj75;
void* __right_value164 = (void*)0;
struct list$1sBlock$ph* __dec_obj76;
void* __right_value165 = (void*)0;
struct sBlock* __dec_obj77;
struct sIfNode* __result_obj__91;
    if(    self==(void*)0) {
        __result_obj__90 = (void*)0;
        return __result_obj__90;
    }
    result_204=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode*"));
    if(    self!=((void*)0)) {
        result_204->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj72=result_204->sname,
        result_204->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfNode_clone", 5, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_204->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj73=result_204->mExpressionNode,
        result_204->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj74=result_204->mIfBlock,
        result_204->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        /*b*/ come_call_finalizer3(__dec_obj74,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj75=result_204->mElifExpressionNodes,
        result_204->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mElifExpressionNodes));
        /*b*/ come_call_finalizer3(__dec_obj75,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj76=result_204->mElifBlocks,
        result_204->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->mElifBlocks));
        /*b*/ come_call_finalizer3(__dec_obj76,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_204->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_204->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj77=result_204->mElseBlock,
        result_204->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mElseBlock));
        /*b*/ come_call_finalizer3(__dec_obj77,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__91 = result_204;
    /*c*/ come_call_finalizer3(result_204,sIfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__91;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value168 = (void*)0;
char* sname_205;
int sline_206;
void* __right_value169 = (void*)0;
struct sBlock* if_block_207;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sNode* _inf_value2;
struct sOrStatmentNode* _inf_obj_value2;
void* __right_value176 = (void*)0;
struct sNode* __result_obj__96;
    sname_205=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 511, "char*"));
    sline_206=info->sline;
    parse_sharp_v5(info);
    if_block_207=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 518, "struct sNode");
    _inf_obj_value2=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value171=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 518, "struct sOrStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_207,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value2->clone=(void*)sOrStatmentNode_clone;
    _inf_value2->compile=(void*)sOrStatmentNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value2->kind=(void*)sOrStatmentNode_kind;
    __result_obj__96 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value176=_inf_value2)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_205 = come_decrement_ref_count(sname_205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(if_block_207,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value171,sOrStatmentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value176) ? __right_value176 = come_decrement_ref_count(__right_value176, ((struct sNode*)__right_value176)->finalize, ((struct sNode*)__right_value176)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__96) ? __result_obj__96 = come_decrement_ref_count(__result_obj__96, ((struct sNode*)__result_obj__96)->finalize, ((struct sNode*)__result_obj__96)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__96;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
struct sOrStatmentNode* __result_obj__94;
void* __right_value172 = (void*)0;
struct sOrStatmentNode* result_208;
void* __right_value173 = (void*)0;
char* __dec_obj78;
void* __right_value174 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value175 = (void*)0;
struct sBlock* __dec_obj80;
struct sOrStatmentNode* __result_obj__95;
    if(    self==(void*)0) {
        __result_obj__94 = (void*)0;
        return __result_obj__94;
    }
    result_208=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode*"));
    if(    self!=((void*)0)) {
        result_208->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj78=result_208->sname,
        result_208->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrStatmentNode_clone", 5, "char*"));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_208->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj79=result_208->mExpressionNode,
        result_208->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj80=result_208->mIfBlock,
        result_208->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        /*b*/ come_call_finalizer3(__dec_obj80,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__95 = result_208;
    /*c*/ come_call_finalizer3(result_208,sOrStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__95;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value177 = (void*)0;
char* sname_209;
int sline_210;
void* __right_value178 = (void*)0;
struct sBlock* if_block_211;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sNode* _inf_value3;
struct sAndStatmentNode* _inf_obj_value3;
void* __right_value185 = (void*)0;
struct sNode* __result_obj__99;
    sname_209=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 523, "char*"));
    sline_210=info->sline;
    parse_sharp_v5(info);
    if_block_211=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 530, "struct sNode");
    _inf_obj_value3=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value180=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 530, "struct sAndStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_211,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value3->clone=(void*)sAndStatmentNode_clone;
    _inf_value3->compile=(void*)sAndStatmentNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value3->kind=(void*)sAndStatmentNode_kind;
    __result_obj__99 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value185=_inf_value3)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_209 = come_decrement_ref_count(sname_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(if_block_211,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value180,sAndStatmentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value185) ? __right_value185 = come_decrement_ref_count(__right_value185, ((struct sNode*)__right_value185)->finalize, ((struct sNode*)__right_value185)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__99) ? __result_obj__99 = come_decrement_ref_count(__result_obj__99, ((struct sNode*)__result_obj__99)->finalize, ((struct sNode*)__result_obj__99)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__99;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
struct sAndStatmentNode* __result_obj__97;
void* __right_value181 = (void*)0;
struct sAndStatmentNode* result_212;
void* __right_value182 = (void*)0;
char* __dec_obj81;
void* __right_value183 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value184 = (void*)0;
struct sBlock* __dec_obj83;
struct sAndStatmentNode* __result_obj__98;
    if(    self==(void*)0) {
        __result_obj__97 = (void*)0;
        return __result_obj__97;
    }
    result_212=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode*"));
    if(    self!=((void*)0)) {
        result_212->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj81=result_212->sname,
        result_212->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndStatmentNode_clone", 5, "char*"));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_212->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj82=result_212->mExpressionNode,
        result_212->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj83=result_212->mIfBlock,
        result_212->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        /*b*/ come_call_finalizer3(__dec_obj83,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__98 = result_212;
    /*c*/ come_call_finalizer3(result_212,sAndStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__98;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __right_value186 = (void*)0;
char* sname_213;
int sline_214;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sNode* it_node_215;
void* __right_value189 = (void*)0;
struct sNode* conditional_value_216;
void* __right_value190 = (void*)0;
struct sBlock* if_block_217;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_218;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct list$1sBlock$ph* elif_blocks_219;
int elif_num_220;
struct sBlock* else_block_221;
void* __right_value195 = (void*)0;
struct sBlock* __dec_obj84;
void* __right_value196 = (void*)0;
struct sNode* conditional_value_222;
void* __right_value197 = (void*)0;
struct sBlock* elif_block_223;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sBlock* __dec_obj85;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct sNode* _inf_value4;
struct sIfNode* _inf_obj_value4;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sNode* _inf_value5;
struct sMatchNode* _inf_obj_value5;
void* __right_value210 = (void*)0;
struct sNode* __result_obj__102;
    sname_213=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 535, "char*"));
    sline_214=info->sline;
    expected_next_character(123,info);
    it_node_215=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    expected_next_character(40,info);
    conditional_value_216=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_217=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_218=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 551, "struct list$1sNode$ph*"))));
    elif_blocks_219=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 552, "struct list$1sBlock$ph*"))));
    elif_num_220=0;
    else_block_221=((void*)0);
    while(    (_Bool)1) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj84=else_block_221,
            else_block_221=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            /*b*/ come_call_finalizer3(__dec_obj84,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_222=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(elif_expression_nodes_218,(struct sNode*)come_increment_ref_count(conditional_value_222));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_223=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlock$ph_add(elif_blocks_219,(struct sBlock*)come_increment_ref_count(elif_block_223));
            elif_num_220++;
            ((conditional_value_222) ? conditional_value_222 = come_decrement_ref_count(conditional_value_222, ((struct sNode*)conditional_value_222)->finalize, ((struct sNode*)conditional_value_222)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(elif_block_223,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_221==((void*)0)) {
        __dec_obj85=else_block_221,
        else_block_221=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 590, "struct sBlock*"))));
        /*b*/ come_call_finalizer3(__dec_obj85,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_221->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_221->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 596, "struct sNode");
    _inf_obj_value4=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value203=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 596, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_value_216),if_block_217,elif_expression_nodes_218,elif_blocks_219,elif_num_220,else_block_221,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sIfNode_finalize;
    _inf_value4->clone=(void*)sIfNode_clone;
    _inf_value4->compile=(void*)sIfNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sIfNode_terminated;
    _inf_value4->kind=(void*)sIfNode_kind;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 596, "struct sNode");
    _inf_obj_value5=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value205=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "08if.c", 596, "struct sMatchNode*")),(struct sNode*)come_increment_ref_count(it_node_215),(struct sNode*)come_increment_ref_count(_inf_value4),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMatchNode_finalize;
    _inf_value5->clone=(void*)sMatchNode_clone;
    _inf_value5->compile=(void*)sMatchNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMatchNode_terminated;
    _inf_value5->kind=(void*)sMatchNode_kind;
    __result_obj__102 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value210=_inf_value5)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_213 = come_decrement_ref_count(sname_213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_215) ? it_node_215 = come_decrement_ref_count(it_node_215, ((struct sNode*)it_node_215)->finalize, ((struct sNode*)it_node_215)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_value_216) ? conditional_value_216 = come_decrement_ref_count(conditional_value_216, ((struct sNode*)conditional_value_216)->finalize, ((struct sNode*)conditional_value_216)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_217,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_218,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_219,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_221,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value203,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value205,sMatchNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value210) ? __right_value210 = come_decrement_ref_count(__right_value210, ((struct sNode*)__right_value210)->finalize, ((struct sNode*)__right_value210)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__102) ? __result_obj__102 = come_decrement_ref_count(__result_obj__102, ((struct sNode*)__result_obj__102)->finalize, ((struct sNode*)__result_obj__102)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__102;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
struct sMatchNode* __result_obj__100;
void* __right_value206 = (void*)0;
struct sMatchNode* result_224;
void* __right_value207 = (void*)0;
char* __dec_obj86;
void* __right_value208 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value209 = (void*)0;
struct sNode* __dec_obj88;
struct sMatchNode* __result_obj__101;
    if(    self==(void*)0) {
        __result_obj__100 = (void*)0;
        return __result_obj__100;
    }
    result_224=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode*"));
    if(    self!=((void*)0)) {
        result_224->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj86=result_224->sname,
        result_224->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMatchNode_clone", 5, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_224->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj87=result_224->it_node,
        result_224->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj88=result_224->match_node,
        result_224->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__101 = result_224;
    /*c*/ come_call_finalizer3(result_224,sMatchNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__101;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value211 = (void*)0;
char* sname_225;
int sline_226;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct sNode* it_node_227;
void* __right_value214 = (void*)0;
struct sNode* conditional_node_228;
void* __right_value215 = (void*)0;
struct sBlock* if_block_229;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_230;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1sBlock$ph* elif_blocks_231;
int elif_num_232;
struct sBlock* else_block_233;
char* saved_p_234;
int saved_sline_235;
void* __right_value220 = (void*)0;
char* buf_236;
void* __right_value221 = (void*)0;
struct sNode* expression_node_237;
void* __right_value222 = (void*)0;
struct sBlock* elif_block_238;
void* __right_value223 = (void*)0;
struct sBlock* __dec_obj89;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sBlock* __dec_obj90;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sNode* _inf_value6;
struct sIfNode* _inf_obj_value6;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sNode* _inf_value7;
struct sIfMethodNode* _inf_obj_value7;
void* __right_value236 = (void*)0;
struct sNode* result_239;
struct sNode* __result_obj__105;
    sname_225=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 601, "char*"));
    sline_226=info->sline;
    it_node_227=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_228=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_229=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_230=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 612, "struct list$1sNode$ph*"))));
    elif_blocks_231=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 614, "struct list$1sBlock$ph*"))));
    elif_num_232=0;
    else_block_233=((void*)0);
    while(    1) {
        saved_p_234=info->p;
        saved_sline_235=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_236=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_236,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_237=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_230,(struct sNode*)come_increment_ref_count(expression_node_237));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_238=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_231,(struct sBlock*)come_increment_ref_count(elif_block_238));
                elif_num_232++;
                ((expression_node_237) ? expression_node_237 = come_decrement_ref_count(expression_node_237, ((struct sNode*)expression_node_237)->finalize, ((struct sNode*)expression_node_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_238,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj89=else_block_233,
                else_block_233=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj89,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_236 = come_decrement_ref_count(buf_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_234;
            info->sline=saved_sline_235;
            (buf_236 = come_decrement_ref_count(buf_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_236 = come_decrement_ref_count(buf_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_233==((void*)0)) {
        __dec_obj90=else_block_233,
        else_block_233=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 675, "struct sBlock*"))));
        /*b*/ come_call_finalizer3(__dec_obj90,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_233->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_233->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 681, "struct sNode");
    _inf_obj_value6=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value229=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 681, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node_228),if_block_229,elif_expression_nodes_230,elif_blocks_231,elif_num_232,else_block_233,(_Bool)0,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sIfNode_finalize;
    _inf_value6->clone=(void*)sIfNode_clone;
    _inf_value6->compile=(void*)sIfNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sIfNode_terminated;
    _inf_value6->kind=(void*)sIfNode_kind;
    _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 681, "struct sNode");
    _inf_obj_value7=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value231=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 681, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_227),(struct sNode*)come_increment_ref_count(_inf_value6),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sIfMethodNode_finalize;
    _inf_value7->clone=(void*)sIfMethodNode_clone;
    _inf_value7->compile=(void*)sIfMethodNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sIfMethodNode_terminated;
    _inf_value7->kind=(void*)sIfMethodNode_kind;
    result_239=(struct sNode*)come_increment_ref_count(_inf_value7);
    /*c*/ come_call_finalizer3(__right_value229,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value231,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__105 = (struct sNode*)come_increment_ref_count(result_239);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_225 = come_decrement_ref_count(sname_225, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_227) ? it_node_227 = come_decrement_ref_count(it_node_227, ((struct sNode*)it_node_227)->finalize, ((struct sNode*)it_node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_228) ? conditional_node_228 = come_decrement_ref_count(conditional_node_228, ((struct sNode*)conditional_node_228)->finalize, ((struct sNode*)conditional_node_228)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_229,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_230,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_231,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_233,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_239) ? result_239 = come_decrement_ref_count(result_239, ((struct sNode*)result_239)->finalize, ((struct sNode*)result_239)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__105) ? __result_obj__105 = come_decrement_ref_count(__result_obj__105, ((struct sNode*)__result_obj__105)->finalize, ((struct sNode*)__result_obj__105)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__105;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
struct sIfMethodNode* __result_obj__103;
void* __right_value232 = (void*)0;
struct sIfMethodNode* result_240;
void* __right_value233 = (void*)0;
char* __dec_obj91;
void* __right_value234 = (void*)0;
struct sNode* __dec_obj92;
void* __right_value235 = (void*)0;
struct sNode* __dec_obj93;
struct sIfMethodNode* __result_obj__104;
    if(    self==(void*)0) {
        __result_obj__103 = (void*)0;
        return __result_obj__103;
    }
    result_240=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode*"));
    if(    self!=((void*)0)) {
        result_240->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj91=result_240->sname,
        result_240->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfMethodNode_clone", 5, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj92=result_240->it_node,
        result_240->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj93=result_240->match_node,
        result_240->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__104 = result_240;
    /*c*/ come_call_finalizer3(result_240,sIfMethodNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__104;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value237 = (void*)0;
char* sname_241;
int sline_242;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sNode* it_node_243;
void* __right_value240 = (void*)0;
struct sNode* conditional_node_244;
void* __right_value241 = (void*)0;
struct sNode* conditional_node2_245;
void* __right_value242 = (void*)0;
struct sBlock* if_block_246;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_247;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sBlock$ph* elif_blocks_248;
int elif_num_249;
struct sBlock* else_block_250;
char* saved_p_251;
int saved_sline_252;
void* __right_value247 = (void*)0;
char* buf_253;
void* __right_value248 = (void*)0;
struct sNode* expression_node_254;
void* __right_value249 = (void*)0;
struct sBlock* elif_block_255;
void* __right_value250 = (void*)0;
struct sBlock* __dec_obj94;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sBlock* __dec_obj95;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sNode* _inf_value8;
struct sIfNode* _inf_obj_value8;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sNode* _inf_value9;
struct sIfMethodNode* _inf_obj_value9;
void* __right_value259 = (void*)0;
struct sNode* result_256;
struct sNode* __result_obj__106;
    sname_241=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 688, "char*"));
    sline_242=info->sline;
    it_node_243=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_244=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_245=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_244),info));
    parse_sharp_v5(info);
    if_block_246=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_247=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 700, "struct list$1sNode$ph*"))));
    elif_blocks_248=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 702, "struct list$1sBlock$ph*"))));
    elif_num_249=0;
    else_block_250=((void*)0);
    while(    1) {
        saved_p_251=info->p;
        saved_sline_252=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_253=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_253,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_254=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_247,(struct sNode*)come_increment_ref_count(expression_node_254));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_255=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_248,(struct sBlock*)come_increment_ref_count(elif_block_255));
                elif_num_249++;
                ((expression_node_254) ? expression_node_254 = come_decrement_ref_count(expression_node_254, ((struct sNode*)expression_node_254)->finalize, ((struct sNode*)expression_node_254)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_255,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj94=else_block_250,
                else_block_250=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj94,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_253 = come_decrement_ref_count(buf_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_251;
            info->sline=saved_sline_252;
            (buf_253 = come_decrement_ref_count(buf_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_253 = come_decrement_ref_count(buf_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_250==((void*)0)) {
        __dec_obj95=else_block_250,
        else_block_250=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 763, "struct sBlock*"))));
        /*b*/ come_call_finalizer3(__dec_obj95,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_250->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_250->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 769, "struct sNode");
    _inf_obj_value8=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value256=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 769, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_245),if_block_246,elif_expression_nodes_247,elif_blocks_248,elif_num_249,else_block_250,(_Bool)0,info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sIfNode_finalize;
    _inf_value8->clone=(void*)sIfNode_clone;
    _inf_value8->compile=(void*)sIfNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sIfNode_terminated;
    _inf_value8->kind=(void*)sIfNode_kind;
    _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 769, "struct sNode");
    _inf_obj_value9=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value258=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 769, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_243),(struct sNode*)come_increment_ref_count(_inf_value8),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sIfMethodNode_finalize;
    _inf_value9->clone=(void*)sIfMethodNode_clone;
    _inf_value9->compile=(void*)sIfMethodNode_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sIfMethodNode_terminated;
    _inf_value9->kind=(void*)sIfMethodNode_kind;
    result_256=(struct sNode*)come_increment_ref_count(_inf_value9);
    /*c*/ come_call_finalizer3(__right_value256,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value258,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__106 = (struct sNode*)come_increment_ref_count(result_256);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_241 = come_decrement_ref_count(sname_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_243) ? it_node_243 = come_decrement_ref_count(it_node_243, ((struct sNode*)it_node_243)->finalize, ((struct sNode*)it_node_243)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_244) ? conditional_node_244 = come_decrement_ref_count(conditional_node_244, ((struct sNode*)conditional_node_244)->finalize, ((struct sNode*)conditional_node_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_245) ? conditional_node2_245 = come_decrement_ref_count(conditional_node2_245, ((struct sNode*)conditional_node2_245)->finalize, ((struct sNode*)conditional_node2_245)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_246,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_247,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_248,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_250,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_256) ? result_256 = come_decrement_ref_count(result_256, ((struct sNode*)result_256)->finalize, ((struct sNode*)result_256)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__106) ? __result_obj__106 = come_decrement_ref_count(__result_obj__106, ((struct sNode*)__result_obj__106)->finalize, ((struct sNode*)__result_obj__106)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__106;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value260 = (void*)0;
char* sname_257;
int sline_258;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sNode* it_node_259;
void* __right_value263 = (void*)0;
struct sNode* conditional_node_260;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sNode* conditional_node2_261;
void* __right_value266 = (void*)0;
struct sBlock* if_block_262;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_263;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sBlock$ph* elif_blocks_264;
int elif_num_265;
struct sBlock* else_block_266;
char* saved_p_267;
int saved_sline_268;
void* __right_value271 = (void*)0;
char* buf_269;
void* __right_value272 = (void*)0;
struct sNode* expression_node_270;
void* __right_value273 = (void*)0;
struct sBlock* elif_block_271;
void* __right_value274 = (void*)0;
struct sBlock* __dec_obj96;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sBlock* __dec_obj97;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sNode* _inf_value10;
struct sIfNode* _inf_obj_value10;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* _inf_value11;
struct sIfMethodNode* _inf_obj_value11;
void* __right_value283 = (void*)0;
struct sNode* result_272;
struct sNode* __result_obj__107;
    sname_257=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 776, "char*"));
    sline_258=info->sline;
    it_node_259=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_260=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_261=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_260),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_262=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_263=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 788, "struct list$1sNode$ph*"))));
    elif_blocks_264=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 790, "struct list$1sBlock$ph*"))));
    elif_num_265=0;
    else_block_266=((void*)0);
    while(    1) {
        saved_p_267=info->p;
        saved_sline_268=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_269=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_269,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_270=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_263,(struct sNode*)come_increment_ref_count(expression_node_270));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_271=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_264,(struct sBlock*)come_increment_ref_count(elif_block_271));
                elif_num_265++;
                ((expression_node_270) ? expression_node_270 = come_decrement_ref_count(expression_node_270, ((struct sNode*)expression_node_270)->finalize, ((struct sNode*)expression_node_270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_271,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj96=else_block_266,
                else_block_266=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj96,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_269 = come_decrement_ref_count(buf_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_267;
            info->sline=saved_sline_268;
            (buf_269 = come_decrement_ref_count(buf_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_269 = come_decrement_ref_count(buf_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_266==((void*)0)) {
        __dec_obj97=else_block_266,
        else_block_266=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 851, "struct sBlock*"))));
        /*b*/ come_call_finalizer3(__dec_obj97,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_266->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_266->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 857, "struct sNode");
    _inf_obj_value10=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value280=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 857, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_261),if_block_262,elif_expression_nodes_263,elif_blocks_264,elif_num_265,else_block_266,(_Bool)0,info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sIfNode_finalize;
    _inf_value10->clone=(void*)sIfNode_clone;
    _inf_value10->compile=(void*)sIfNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sIfNode_terminated;
    _inf_value10->kind=(void*)sIfNode_kind;
    _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 857, "struct sNode");
    _inf_obj_value11=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value282=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 857, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_259),(struct sNode*)come_increment_ref_count(_inf_value10),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIfMethodNode_finalize;
    _inf_value11->clone=(void*)sIfMethodNode_clone;
    _inf_value11->compile=(void*)sIfMethodNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sIfMethodNode_terminated;
    _inf_value11->kind=(void*)sIfMethodNode_kind;
    result_272=(struct sNode*)come_increment_ref_count(_inf_value11);
    /*c*/ come_call_finalizer3(__right_value280,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value282,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__107 = (struct sNode*)come_increment_ref_count(result_272);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_257 = come_decrement_ref_count(sname_257, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_259) ? it_node_259 = come_decrement_ref_count(it_node_259, ((struct sNode*)it_node_259)->finalize, ((struct sNode*)it_node_259)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_260) ? conditional_node_260 = come_decrement_ref_count(conditional_node_260, ((struct sNode*)conditional_node_260)->finalize, ((struct sNode*)conditional_node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_261) ? conditional_node2_261 = come_decrement_ref_count(conditional_node2_261, ((struct sNode*)conditional_node2_261)->finalize, ((struct sNode*)conditional_node2_261)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_262,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_263,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_264,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_266,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_272) ? result_272 = come_decrement_ref_count(result_272, ((struct sNode*)result_272)->finalize, ((struct sNode*)result_272)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__107) ? __result_obj__107 = come_decrement_ref_count(__result_obj__107, ((struct sNode*)__result_obj__107)->finalize, ((struct sNode*)__result_obj__107)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__107;
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value284 = (void*)0;
char* sname_273;
int sline_274;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sNode* it_node_275;
void* __right_value287 = (void*)0;
struct sNode* value_node_276;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* conditional_node_277;
void* __right_value290 = (void*)0;
struct sNode* conditional_node2_278;
void* __right_value291 = (void*)0;
struct sBlock* if_block_279;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_280;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sBlock$ph* elif_blocks_281;
int elif_num_282;
struct sBlock* else_block_283;
char* saved_p_284;
int saved_sline_285;
void* __right_value296 = (void*)0;
char* buf_286;
void* __right_value297 = (void*)0;
struct sNode* expression_node_287;
void* __right_value298 = (void*)0;
struct sBlock* elif_block_288;
void* __right_value299 = (void*)0;
struct sBlock* __dec_obj98;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sBlock* __dec_obj99;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sNode* node_289;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sNode* _inf_value13;
struct sIfMethodNode* _inf_obj_value13;
void* __right_value309 = (void*)0;
struct sNode* result_290;
struct sNode* __result_obj__108;
    sname_273=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 864, "char*"));
    sline_274=info->sline;
    it_node_275=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    value_node_276=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node_277=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_276),(char*)come_increment_ref_count(xsprintf("v2")),info));
    conditional_node2_278=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_277),info));
    parse_sharp_v5(info);
    if_block_279=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_280=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 877, "struct list$1sNode$ph*"))));
    elif_blocks_281=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 879, "struct list$1sBlock$ph*"))));
    elif_num_282=0;
    else_block_283=((void*)0);
    while(    1) {
        saved_p_284=info->p;
        saved_sline_285=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_286=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_286,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_287=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_280,(struct sNode*)come_increment_ref_count(expression_node_287));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_288=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_281,(struct sBlock*)come_increment_ref_count(elif_block_288));
                elif_num_282++;
                ((expression_node_287) ? expression_node_287 = come_decrement_ref_count(expression_node_287, ((struct sNode*)expression_node_287)->finalize, ((struct sNode*)expression_node_287)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_288,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj98=else_block_283,
                else_block_283=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj98,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_286 = come_decrement_ref_count(buf_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_284;
            info->sline=saved_sline_285;
            (buf_286 = come_decrement_ref_count(buf_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_286 = come_decrement_ref_count(buf_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_283==((void*)0)) {
        __dec_obj99=else_block_283,
        else_block_283=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 940, "struct sBlock*"))));
        /*b*/ come_call_finalizer3(__dec_obj99,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_283->mOmitSemicolon=(_Bool)1;
        node_289=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_276),(char*)come_increment_ref_count(xsprintf("v1")),info));
        list$1sNode$ph_push_back(else_block_283->mNodes,(struct sNode*)come_increment_ref_count(node_289));
        ((node_289) ? node_289 = come_decrement_ref_count(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 948, "struct sNode");
    _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value306=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 948, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_278),if_block_279,elif_expression_nodes_280,elif_blocks_281,elif_num_282,else_block_283,(_Bool)0,info))));
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sIfNode_finalize;
    _inf_value12->clone=(void*)sIfNode_clone;
    _inf_value12->compile=(void*)sIfNode_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sIfNode_terminated;
    _inf_value12->kind=(void*)sIfNode_kind;
    _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 948, "struct sNode");
    _inf_obj_value13=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value308=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 948, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_275),(struct sNode*)come_increment_ref_count(_inf_value12),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sIfMethodNode_finalize;
    _inf_value13->clone=(void*)sIfMethodNode_clone;
    _inf_value13->compile=(void*)sIfMethodNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sIfMethodNode_terminated;
    _inf_value13->kind=(void*)sIfMethodNode_kind;
    result_290=(struct sNode*)come_increment_ref_count(_inf_value13);
    /*c*/ come_call_finalizer3(__right_value306,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value308,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__108 = (struct sNode*)come_increment_ref_count(result_290);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_273 = come_decrement_ref_count(sname_273, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_275) ? it_node_275 = come_decrement_ref_count(it_node_275, ((struct sNode*)it_node_275)->finalize, ((struct sNode*)it_node_275)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value_node_276) ? value_node_276 = come_decrement_ref_count(value_node_276, ((struct sNode*)value_node_276)->finalize, ((struct sNode*)value_node_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_277) ? conditional_node_277 = come_decrement_ref_count(conditional_node_277, ((struct sNode*)conditional_node_277)->finalize, ((struct sNode*)conditional_node_277)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_278) ? conditional_node2_278 = come_decrement_ref_count(conditional_node2_278, ((struct sNode*)conditional_node2_278)->finalize, ((struct sNode*)conditional_node2_278)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_279,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_280,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_281,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_283,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_290) ? result_290 = come_decrement_ref_count(result_290, ((struct sNode*)result_290)->finalize, ((struct sNode*)result_290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__108) ? __result_obj__108 = come_decrement_ref_count(__result_obj__108, ((struct sNode*)__result_obj__108)->finalize, ((struct sNode*)__result_obj__108)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__108;
}

struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value310 = (void*)0;
char* sname_291;
int sline_292;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* it_node_293;
void* __right_value313 = (void*)0;
struct sNode* value_node_294;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sNode* conditional_node_295;
void* __right_value316 = (void*)0;
struct sNode* conditional_node2_296;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct buffer* buf_297;
char* p_298;
struct buffer* source_299;
char* head_300;
char* p_301;
int sline_302;
struct buffer* __dec_obj100;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sBlock* if_block_303;
struct buffer* __dec_obj101;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_304;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1sBlock$ph* elif_blocks_305;
int elif_num_306;
struct sBlock* else_block_307;
char* saved_p_308;
int saved_sline_309;
void* __right_value325 = (void*)0;
char* buf_310;
void* __right_value326 = (void*)0;
struct sNode* expression_node_311;
void* __right_value327 = (void*)0;
struct sBlock* elif_block_312;
void* __right_value328 = (void*)0;
struct sBlock* __dec_obj102;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sBlock* __dec_obj103;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* node_313;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* _inf_value14;
struct sIfNode* _inf_obj_value14;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sNode* _inf_value15;
struct sIfMethodNode* _inf_obj_value15;
void* __right_value338 = (void*)0;
struct sNode* result_314;
struct sNode* __result_obj__109;
    sname_291=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 955, "char*"));
    sline_292=info->sline;
    it_node_293=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    value_node_294=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node_295=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_294),(char*)come_increment_ref_count(xsprintf("v2")),info));
    conditional_node2_296=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_295),info));
    parse_sharp_v5(info);
    buf_297=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value317=xsprintf("{ puts(\"%s %d: exception\"); exit(39); 39 }\n",info->sname,info->sline)))));
    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    p_298=info->p;
    source_299=(struct buffer*)come_increment_ref_count(info->source);
    head_300=info->head;
    p_301=info->p;
    sline_302=info->sline;
    __dec_obj100=info->source,
    info->source=(struct buffer*)come_increment_ref_count(buf_297);
    /*b*/ come_call_finalizer3(__dec_obj100,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->head=((char*)(__right_value319=buffer_to_string(info->source)));
    (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    info->p=info->head;
    info->sline=0;
    if_block_303=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj101=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_299);
    /*b*/ come_call_finalizer3(__dec_obj101,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->head=head_300;
    info->p=p_301;
    info->sline=sline_302;
    elif_expression_nodes_304=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 987, "struct list$1sNode$ph*"))));
    elif_blocks_305=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 989, "struct list$1sBlock$ph*"))));
    elif_num_306=0;
    else_block_307=((void*)0);
    while(    1) {
        saved_p_308=info->p;
        saved_sline_309=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_310=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_310,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_311=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_304,(struct sNode*)come_increment_ref_count(expression_node_311));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_312=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_305,(struct sBlock*)come_increment_ref_count(elif_block_312));
                elif_num_306++;
                ((expression_node_311) ? expression_node_311 = come_decrement_ref_count(expression_node_311, ((struct sNode*)expression_node_311)->finalize, ((struct sNode*)expression_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_312,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj102=else_block_307,
                else_block_307=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj102,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_310 = come_decrement_ref_count(buf_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_308;
            info->sline=saved_sline_309;
            (buf_310 = come_decrement_ref_count(buf_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_310 = come_decrement_ref_count(buf_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_307==((void*)0)) {
        __dec_obj103=else_block_307,
        else_block_307=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 1050, "struct sBlock*"))));
        /*b*/ come_call_finalizer3(__dec_obj103,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_307->mOmitSemicolon=(_Bool)1;
        node_313=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_294),(char*)come_increment_ref_count(xsprintf("v1")),info));
        list$1sNode$ph_push_back(else_block_307->mNodes,(struct sNode*)come_increment_ref_count(node_313));
        ((node_313) ? node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 1058, "struct sNode");
    _inf_obj_value14=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value335=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 1058, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_296),if_block_303,elif_expression_nodes_304,elif_blocks_305,elif_num_306,else_block_307,(_Bool)0,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sIfNode_finalize;
    _inf_value14->clone=(void*)sIfNode_clone;
    _inf_value14->compile=(void*)sIfNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sIfNode_terminated;
    _inf_value14->kind=(void*)sIfNode_kind;
    _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 1058, "struct sNode");
    _inf_obj_value15=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value337=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1058, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_293),(struct sNode*)come_increment_ref_count(_inf_value14),info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfMethodNode_finalize;
    _inf_value15->clone=(void*)sIfMethodNode_clone;
    _inf_value15->compile=(void*)sIfMethodNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfMethodNode_terminated;
    _inf_value15->kind=(void*)sIfMethodNode_kind;
    result_314=(struct sNode*)come_increment_ref_count(_inf_value15);
    /*c*/ come_call_finalizer3(__right_value335,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value337,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__109 = (struct sNode*)come_increment_ref_count(result_314);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_291 = come_decrement_ref_count(sname_291, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_293) ? it_node_293 = come_decrement_ref_count(it_node_293, ((struct sNode*)it_node_293)->finalize, ((struct sNode*)it_node_293)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value_node_294) ? value_node_294 = come_decrement_ref_count(value_node_294, ((struct sNode*)value_node_294)->finalize, ((struct sNode*)value_node_294)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_295) ? conditional_node_295 = come_decrement_ref_count(conditional_node_295, ((struct sNode*)conditional_node_295)->finalize, ((struct sNode*)conditional_node_295)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_296) ? conditional_node2_296 = come_decrement_ref_count(conditional_node2_296, ((struct sNode*)conditional_node2_296)->finalize, ((struct sNode*)conditional_node2_296)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_297,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(source_299,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(if_block_303,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_304,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_305,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_307,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_314) ? result_314 = come_decrement_ref_count(result_314, ((struct sNode*)result_314)->finalize, ((struct sNode*)result_314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__109) ? __result_obj__109 = come_decrement_ref_count(__result_obj__109, ((struct sNode*)__result_obj__109)->finalize, ((struct sNode*)__result_obj__109)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__109;
}

