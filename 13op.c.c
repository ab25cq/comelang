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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNilNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
static void sNilNode_finalize(struct sNilNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value37 = (void*)0;
struct sType* generics_type_0;
struct sType* __dec_obj24;
struct sClass* klass_30;
char* class_name_31;
struct sFun* operator_fun_32;
char* fun_name2_33;
struct sGenericsFun* generics_fun_34;
void* __right_value38 = (void*)0;
char* none_generics_name_35;
void* __right_value39 = (void*)0;
struct sType* obj_type_36;
void* __right_value40 = (void*)0;
char* __dec_obj25;
void* __right_value41 = (void*)0;
char* fun_name3_37;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct sType* no_solved_type_40;
struct sType* __dec_obj26;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_41=0;
_Bool err_42=0;
_Bool __result_obj__21;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_49=0;
char* fun_name_50=0;
void* __right_value48 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun2_51=0;
char* fun_name2_52=0;
void* __right_value49 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_53=0;
char* fun_name_54=0;
void* __right_value50 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_55=0;
char* fun_name2_56=0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
char* __dec_obj27;
int i_57;
void* __right_value53 = (void*)0;
char* new_fun_name_58;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
char* __dec_obj28;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct sType* obj_type_59;
void* __right_value58 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var6 = (void*)0;
struct sFun* fun_60=0;
char* fun_name_61=0;
void* __right_value59 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var7 = (void*)0;
struct sFun* fun2_62=0;
char* fun_name2_63=0;
void* __right_value60 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun_64=0;
char* fun_name_65=0;
void* __right_value61 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var9 = (void*)0;
struct sFun* fun2_66=0;
char* fun_name2_67=0;
_Bool result_68;
struct sNode* obj_69;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_70;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct sNode* node_76;
_Bool Value_77;
_Bool __result_obj__33;
fun_name2_33 = (void*)0;
memset(&i_57, 0, sizeof(int));
    generics_type_0=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_0->mNoSolvedGenericsType    ) {
        __dec_obj24=generics_type_0,
        generics_type_0=(struct sType*)come_increment_ref_count(generics_type_0->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType    ) {
        type=type->mNoSolvedGenericsType;
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_32=((void*)0);
    generics_fun_34=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_35=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_36=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj25=fun_name2_33,
        fun_name2_33=(char*)come_increment_ref_count(create_method_name(obj_type_36,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_37=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_35,fun_name));
        generics_fun_34=((struct sGenericsFun*)(__right_value42=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_37,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value42, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_34        ) {
            no_solved_type_40=(struct sType*)come_increment_ref_count(sType_clone(type));
            if(            type->mNoSolvedGenericsType            ) {
                __dec_obj26=no_solved_type_40,
                no_solved_type_40=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value45=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_33)),generics_fun_34,obj_type_36,info)));
            name_41=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_42=multiple_assign_var1->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_42            ) {
                __result_obj__21 = (_Bool)0;
                come_call_finalizer(sType_finalize, no_solved_type_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_41 = come_decrement_ref_count(name_41, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_35 = come_decrement_ref_count(none_generics_name_35, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_37 = come_decrement_ref_count(fun_name3_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, generics_type_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__21;
            }
            operator_fun_32=((struct sFun*)(__right_value46=map$2char$phsFun$ph_operator_load_element(info->funcs,name_41)));
            come_call_finalizer(sFun_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, no_solved_type_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_41 = come_decrement_ref_count(name_41, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")            ) {
                multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value47=create_equals_automatically(obj_type_36,"equals",info)));
                fun_49=multiple_assign_var2->v1;
                fun_name_50=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value48=create_operator_equals_automatically(obj_type_36,"operator_equals",info)));
                fun2_51=multiple_assign_var3->v1;
                fun_name2_52=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                operator_fun_32=fun2_51;
                (fun_name_50 = come_decrement_ref_count(fun_name_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name2_52 = come_decrement_ref_count(fun_name2_52, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")            ) {
                multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value49=create_not_equals_automatically(obj_type_36,"not_equals",info)));
                fun_53=multiple_assign_var4->v1;
                fun_name_54=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value50=create_operator_not_equals_automatically(obj_type_36,"operator_not_equals",info)));
                fun2_55=multiple_assign_var5->v1;
                fun_name2_56=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                operator_fun_32=fun2_55;
                (fun_name_54 = come_decrement_ref_count(fun_name_54, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name2_56 = come_decrement_ref_count(fun_name2_56, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                operator_fun_32=((struct sFun*)(__right_value51=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_33)));
                come_call_finalizer(sFun_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        (none_generics_name_35 = come_decrement_ref_count(none_generics_name_35, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_37 = come_decrement_ref_count(fun_name3_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj27=fun_name2_33,
        fun_name2_33=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_57=128-1        ;        i_57>=1        ;        i_57--        ){
            new_fun_name_58=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_33,i_57));
            operator_fun_32=((struct sFun*)(__right_value54=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_58)));
            come_call_finalizer(sFun_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            operator_fun_32            ) {
                __dec_obj28=fun_name2_33,
                fun_name2_33=(char*)come_increment_ref_count(__builtin_string(new_fun_name_58));
                __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_58 = come_decrement_ref_count(new_fun_name_58, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_58 = come_decrement_ref_count(new_fun_name_58, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        operator_fun_32==((void*)0)        ) {
            operator_fun_32=((struct sFun*)(__right_value56=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_33)));
            come_call_finalizer(sFun_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            obj_type_59=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_32==((void*)0)            ) {
                if(                charp_operator_equals(fun_name,"operator_equals")                ) {
                    multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value58=create_equals_automatically(obj_type_59,"equals",info)));
                    fun_60=multiple_assign_var6->v1;
                    fun_name_61=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value59=create_operator_equals_automatically(obj_type_59,"operator_equals",info)));
                    fun2_62=multiple_assign_var7->v1;
                    fun_name2_63=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    operator_fun_32=fun2_62;
                    (fun_name_61 = come_decrement_ref_count(fun_name_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name2_63 = come_decrement_ref_count(fun_name2_63, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")                ) {
                    multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value60=create_not_equals_automatically(obj_type_59,"not_equals",info)));
                    fun_64=multiple_assign_var8->v1;
                    fun_name_65=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    multiple_assign_var9=((struct tuple2$2sFun$pchar$ph*)(__right_value61=create_operator_not_equals_automatically(obj_type_59,"operator_not_equals",info)));
                    fun2_66=multiple_assign_var9->v1;
                    fun_name2_67=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    operator_fun_32=fun2_66;
                    (fun_name_65 = come_decrement_ref_count(fun_name_65, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name2_67 = come_decrement_ref_count(fun_name2_67, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            come_call_finalizer(sType_finalize, obj_type_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    result_68=(_Bool)0;
    if(    operator_fun_32&&(list$1sType$ph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))    ) {
        obj_69=(struct sNode*)come_increment_ref_count(left_node);
        params_70=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "13op.c", 99, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "13op.c", 101, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "13op.c", 102, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(right_node))));
        node_76=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj_69),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_70),((void*)0),0,((void*)0),break_guard,info,(_Bool)0));
        Value_77=node_compile(node_76,info);
        if(        Value_77        ) {
            result_68=(_Bool)1;
        }
        else {
        }
        ((obj_69) ? obj_69 = come_decrement_ref_count(obj_69, ((struct sNode*)obj_69)->finalize, ((struct sNode*)obj_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__33 = result_68;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__33;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result_1;
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
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value26 = (void*)0;
char* __dec_obj17;
void* __right_value27 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value35 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value36 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)0;
        return __result_obj__1;
    }
    result_1=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_1->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_1->mOriginalLoadVarType,
        result_1->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_1->mChannelType,
        result_1->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_1->mGenericsTypes,
        result_1->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_1->mNoSolvedGenericsType,
        result_1->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_1->mSizeNum,
        result_1->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_1->mAlignas,
        result_1->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_1->mTupleName,
        result_1->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_1->mAttribute,
        result_1->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_1->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_1->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_1->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_1->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_1->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_1->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_1->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_1->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_1->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_1->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_1->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_1->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_1->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_1->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_1->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_1->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_1->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_1->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_1->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_1->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_1->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_1->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_1->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_1->mAsmName,
        result_1->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_1->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_1->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_1->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_1->mArrayNum,
        result_1->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_1->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_1->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_1->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_1->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_1->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_1->mOriginalTypeName,
        result_1->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_1->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_1->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_1->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_1->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_1->mParamTypes,
        result_1->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_1->mParamNames,
        result_1->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_1->mResultType,
        result_1->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_1->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_1->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)    ) {
        result_1->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = result_1;
    come_call_finalizer(sType_finalize, result_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_2;
struct list_item$1sType$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)    ) {
        prev_it_3=it_2;
        it_2=it_2->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_4;
struct list_item$1sNode$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)    ) {
        prev_it_5=it_4;
        it_4=it_4->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_6;
struct list_item$1char$ph* prev_it_7;
    it_6=self->head;
    while(    it_6!=((void*)0)    ) {
        prev_it_7=it_6;
        it_6=it_6->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    result_8=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 957, "struct list$1sType$ph*"))));
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
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value5=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 976, "struct list_item$1sType$ph*"))));
        litem_10->prev=((void*)0);
        litem_10->next=((void*)0);
        __dec_obj3=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_10;
        self->head=litem_10;
    }
    else if(    self->len==1    ) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 986, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj4=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 996, "struct list_item$1sType$ph*"))));
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
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_15);
    ((result_15) ? result_15 = come_decrement_ref_count(result_15, ((struct sNode*)result_15)->finalize, ((struct sNode*)result_15)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct list$1sNode$ph* result_16;
struct list_item$1sNode$ph* it_17;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_16=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 957, "struct list$1sNode$ph*"))));
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
void* __right_value20 = (void*)0;
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj13;
void* __right_value21 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj14;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value20=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 976, "struct list_item$1sNode$ph*"))));
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        __dec_obj13=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_18;
        self->head=litem_18;
    }
    else if(    self->len==1    ) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 986, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj14=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 996, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj15=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
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
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct list$1char$ph* result_23;
struct list_item$1char$ph* it_24;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_23=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 957, "struct list$1char$ph*"))));
    it_24=self->head;
    while(    it_24!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "./comelang.h", 962, "char*")));
        }
        else {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "./comelang.h", 965, "char*")));
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
void* __right_value30 = (void*)0;
struct list_item$1char$ph* litem_25;
char* __dec_obj19;
void* __right_value31 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj20;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj21;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value30=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 976, "struct list_item$1char$ph*"))));
        litem_25->prev=((void*)0);
        litem_25->next=((void*)0);
        __dec_obj19=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_25;
        self->head=litem_25;
    }
    else if(    self->len==1    ) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 986, "struct list_item$1char$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj20=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 996, "struct list_item$1char$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj21=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
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

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_38;
unsigned int it_39;
struct sGenericsFun* __result_obj__17;
struct sGenericsFun* __result_obj__18;
struct sGenericsFun* __result_obj__19;
struct sGenericsFun* __result_obj__20;
    hash_38=string_get_hash_key(((char*)key))%self->size;
    it_39=hash_38;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_39]        ) {
            if(            string_equals(self->keys[it_39],key)            ) {
                __result_obj__17 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_39]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__17;
            }
            it_39++;
            if(            it_39>=self->size            ) {
                it_39=0;
            }
            else if(            it_39==hash_38            ) {
                __result_obj__18 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__18;
            }
        }
        else {
            __result_obj__19 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__19;
        }
    }
    __result_obj__20 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)    ) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
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
struct sFun* default_value_43;
unsigned int hash_44;
unsigned int it_45;
struct sFun* __result_obj__22;
struct sFun* __result_obj__23;
struct sFun* __result_obj__24;
struct sFun* __result_obj__25;
default_value_43 = (void*)0;
    memset(&default_value_43,0,sizeof(struct sFun*));
    hash_44=string_get_hash_key(((char*)key))%self->size;
    it_45=hash_44;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_45]        ) {
            if(            string_equals(self->keys[it_45],key)            ) {
                __result_obj__22 = (struct sFun*)come_increment_ref_count(self->items[it_45]);
                come_call_finalizer(sFun_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__22;
            }
            it_45++;
            if(            it_45>=self->size            ) {
                it_45=0;
            }
            else if(            it_45==hash_44            ) {
                __result_obj__23 = (struct sFun*)come_increment_ref_count(default_value_43);
                come_call_finalizer(sFun_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__23;
            }
        }
        else {
            __result_obj__24 = (struct sFun*)come_increment_ref_count(default_value_43);
            come_call_finalizer(sFun_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__24;
        }
    }
    __result_obj__25 = (struct sFun*)come_increment_ref_count(default_value_43);
    come_call_finalizer(sFun_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
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
struct sFun* default_value_46;
unsigned int hash_47;
unsigned int it_48;
struct sFun* __result_obj__26;
struct sFun* __result_obj__27;
struct sFun* __result_obj__28;
struct sFun* __result_obj__29;
default_value_46 = (void*)0;
    memset(&default_value_46,0,sizeof(struct sFun*));
    hash_47=string_get_hash_key(((char*)key))%self->size;
    it_48=hash_47;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_48]        ) {
            if(            string_equals(self->keys[it_48],key)            ) {
                __result_obj__26 = (struct sFun*)come_increment_ref_count(self->items[it_48]);
                come_call_finalizer(sFun_finalize, default_value_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
            it_48++;
            if(            it_48>=self->size            ) {
                it_48=0;
            }
            else if(            it_48==hash_47            ) {
                __result_obj__27 = (struct sFun*)come_increment_ref_count(default_value_46);
                come_call_finalizer(sFun_finalize, default_value_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__27;
            }
        }
        else {
            __result_obj__28 = (struct sFun*)come_increment_ref_count(default_value_46);
            come_call_finalizer(sFun_finalize, default_value_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__28;
        }
    }
    __result_obj__29 = (struct sFun*)come_increment_ref_count(default_value_46);
    come_call_finalizer(sFun_finalize, default_value_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__29;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__30;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__30;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_71;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_72;
    it_71=self->head;
    while(    it_71!=((void*)0)    ) {
        prev_it_72=it_71;
        it_71=it_71->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value64 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_73;
struct tuple2$2char$phsNode$ph* __dec_obj29;
void* __right_value65 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_74;
struct tuple2$2char$phsNode$ph* __dec_obj30;
void* __right_value66 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_75;
struct tuple2$2char$phsNode$ph* __dec_obj31;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__31;
    if(    self->len==0    ) {
        litem_73=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value64=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 976, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_73->prev=((void*)0);
        litem_73->next=((void*)0);
        __dec_obj29=litem_73->item,
        litem_73->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_73;
        self->head=litem_73;
    }
    else if(    self->len==1    ) {
        litem_74=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value65=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 986, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_74->prev=self->head;
        litem_74->next=((void*)0);
        __dec_obj30=litem_74->item,
        litem_74->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_74;
        self->head->next=litem_74;
    }
    else {
        litem_75=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value66=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 996, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_75->prev=self->tail;
        litem_75->next=((void*)0);
        __dec_obj31=litem_75->item,
        litem_75->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_75;
        self->tail=litem_75;
    }
    self->len++;
    __result_obj__31 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__31;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj32;
struct tuple2$2void$psNode$ph* __result_obj__32;
    self->v1=v1;
    __dec_obj32=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__32 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __right_value72 = (void*)0;
struct sNullNode* __result_obj__34;
    ((struct sNodeBase*)(__right_value72=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__34 = (struct sNullNode*)come_increment_ref_count(self);
    come_call_finalizer(sNullNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNullNode_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

char* sNullNode_kind(struct sNullNode* self){
void* __right_value73 = (void*)0;
char* __result_obj__35;
    __result_obj__35 = (char*)come_increment_ref_count(((char*)(__right_value73=__builtin_string("sNullNode"))));
    (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__35 = come_decrement_ref_count(__result_obj__35, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__35;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct CVALUE* come_value_78;
void* __right_value76 = (void*)0;
char* __dec_obj33;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
struct sType* __dec_obj34;
_Bool __result_obj__37;
    come_value_78=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 128, "struct CVALUE*"))));
    __dec_obj33=come_value_78->c_value,
    come_value_78->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj34=come_value_78->type,
    come_value_78->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 131, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_78->var=((void*)0);
    add_come_last_code(info,"%s",come_value_78->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    __result_obj__37 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__37;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sNullNode_finalize(struct sNullNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value80 = (void*)0;
struct list_item$1CVALUE$ph* litem_79;
struct CVALUE* __dec_obj35;
void* __right_value81 = (void*)0;
struct list_item$1CVALUE$ph* litem_80;
struct CVALUE* __dec_obj36;
void* __right_value82 = (void*)0;
struct list_item$1CVALUE$ph* litem_81;
struct CVALUE* __dec_obj37;
struct list$1CVALUE$ph* __result_obj__36;
    if(    self->len==0    ) {
        litem_79=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value80=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1046, "struct list_item$1CVALUE$ph*"))));
        litem_79->prev=((void*)0);
        litem_79->next=((void*)0);
        __dec_obj35=litem_79->item,
        litem_79->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_79;
        self->head=litem_79;
    }
    else if(    self->len==1    ) {
        litem_80=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value81=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1056, "struct list_item$1CVALUE$ph*"))));
        litem_80->prev=self->head;
        litem_80->next=((void*)0);
        __dec_obj36=litem_80->item,
        litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_80;
        self->head->next=litem_80;
    }
    else {
        litem_81=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value82=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1066, "struct list_item$1CVALUE$ph*"))));
        litem_81->prev=self->tail;
        litem_81->next=((void*)0);
        __dec_obj37=litem_81->item,
        litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_81;
        self->tail=litem_81;
    }
    self->len++;
    __result_obj__36 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

struct sNode* create_null_node(struct sInfo* info){
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value87 = (void*)0;
struct sNode* __result_obj__40;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 144, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value84=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 144, "struct sNullNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result_obj__40 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value87=_inf_value1)));
    come_call_finalizer(sNullNode_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value87) ? __right_value87 = come_decrement_ref_count(__right_value87, ((struct sNode*)__right_value87)->finalize, ((struct sNode*)__right_value87)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__40) ? __result_obj__40 = come_decrement_ref_count(__result_obj__40, ((struct sNode*)__result_obj__40)->finalize, ((struct sNode*)__result_obj__40)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__40;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
struct sNullNode* __result_obj__38;
void* __right_value85 = (void*)0;
struct sNullNode* result_82;
void* __right_value86 = (void*)0;
char* __dec_obj38;
struct sNullNode* __result_obj__39;
    if(    self==(void*)0    ) {
        __result_obj__38 = (void*)0;
        return __result_obj__38;
    }
    result_82=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode*"));
    if(    self!=((void*)0)    ) {
        result_82->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj38=result_82->sname,
        result_82->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullNode_clone", 5, "char*"));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_82->sline_real=self->sline_real;
    }
    __result_obj__39 = result_82;
    come_call_finalizer(sNullNode_finalize, result_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__39;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __right_value88 = (void*)0;
struct sNilNode* __result_obj__41;
    ((struct sNodeBase*)(__right_value88=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value88, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__41 = (struct sNilNode*)come_increment_ref_count(self);
    come_call_finalizer(sNilNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNilNode_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__41;
}

char* sNilNode_kind(struct sNilNode* self){
void* __right_value89 = (void*)0;
char* __result_obj__42;
    __result_obj__42 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string("sNilNode"))));
    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__42;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct CVALUE* come_value_83;
void* __right_value92 = (void*)0;
char* __dec_obj39;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct sType* __dec_obj40;
_Bool __result_obj__43;
    come_value_83=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 161, "struct CVALUE*"))));
    __dec_obj39=come_value_83->c_value,
    come_value_83->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj40=come_value_83->type,
    come_value_83->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 164, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_83->type->mNullValue=(_Bool)1;
    come_value_83->var=((void*)0);
    add_come_last_code(info,"%s",come_value_83->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_83));
    __result_obj__43 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__43;
}

static void sNilNode_finalize(struct sNilNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value98 = (void*)0;
struct sNode* __dec_obj42;
struct sAddNode* __result_obj__44;
    ((struct sNodeBase*)(__right_value96=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value96, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj41=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj42=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__44 = (struct sAddNode*)come_increment_ref_count(self);
    come_call_finalizer(sAddNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAddNode_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

char* sAddNode_kind(struct sAddNode* self){
void* __right_value99 = (void*)0;
char* __result_obj__45;
    __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string("sAddNode"))));
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__45;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_84;
_Bool Value_85;
_Bool __result_obj__46;
void* __right_value100 = (void*)0;
struct CVALUE* left_value_86;
struct sNode* right_node_87;
_Bool Value_88;
_Bool __result_obj__47;
void* __right_value101 = (void*)0;
struct CVALUE* right_value_89;
struct sType* type_90;
char* fun_name_91;
_Bool calling_fun_92;
void* __right_value102 = (void*)0;
struct sType* result_type_93;
void* __right_value103 = (void*)0;
struct sType* __dec_obj43;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct CVALUE* come_value_94;
void* __right_value106 = (void*)0;
char* __dec_obj44;
void* __right_value107 = (void*)0;
struct sType* __dec_obj45;
_Bool __result_obj__48;
memset(&calling_fun_92, 0, sizeof(_Bool));
    left_node_84=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_85=node_compile(left_node_84,info);
    if(    !Value_85    ) {
        __result_obj__46 = (_Bool)0;
        ((left_node_84) ? left_node_84 = come_decrement_ref_count(left_node_84, ((struct sNode*)left_node_84)->finalize, ((struct sNode*)left_node_84)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__46;
    }
    else {
    }
    left_value_86=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_87=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_88=node_compile(right_node_87,info);
    if(    !Value_88    ) {
        __result_obj__47 = (_Bool)0;
        ((left_node_84) ? left_node_84 = come_decrement_ref_count(left_node_84, ((struct sNode*)left_node_84)->finalize, ((struct sNode*)left_node_84)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_87) ? right_node_87 = come_decrement_ref_count(right_node_87, ((struct sNode*)right_node_87)->finalize, ((struct sNode*)right_node_87)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__47;
    }
    else {
    }
    right_value_89=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_90=(struct sType*)come_increment_ref_count(left_value_86->type);
    fun_name_91="operator_add";
    if(    self->mQuote    ) {
        calling_fun_92=(_Bool)0;
    }
    else {
        calling_fun_92=operator_overload_fun(type_90,fun_name_91,(struct sNode*)come_increment_ref_count(left_node_84),(struct sNode*)come_increment_ref_count(right_node_87),(struct CVALUE*)come_increment_ref_count(left_value_86),(struct CVALUE*)come_increment_ref_count(right_value_89),(_Bool)0,info);
    }
    if(    !calling_fun_92    ) {
        result_type_93=(struct sType*)come_increment_ref_count(sType_clone(left_value_86->type));
        if(        right_value_89->type->mPointerNum>0        ) {
            __dec_obj43=result_type_93,
            result_type_93=(struct sType*)come_increment_ref_count(sType_clone(right_value_89->type));
            come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_94=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 228, "struct CVALUE*"))));
        __dec_obj44=come_value_94->c_value,
        come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_86->c_value,right_value_89->c_value));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj45=come_value_94->type,
        come_value_94->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_93));
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_94->type->mHeap=(_Bool)0;
        come_value_94->var=((void*)0);
        add_come_last_code(info,"%s",come_value_94->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        come_call_finalizer(sType_finalize, result_type_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__48 = (_Bool)1;
    ((left_node_84) ? left_node_84 = come_decrement_ref_count(left_node_84, ((struct sNode*)left_node_84)->finalize, ((struct sNode*)left_node_84)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_87) ? right_node_87 = come_decrement_ref_count(right_node_87, ((struct sNode*)right_node_87)->finalize, ((struct sNode*)right_node_87)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__48;
}

static void sAddNode_finalize(struct sAddNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct sNode* __dec_obj46;
void* __right_value110 = (void*)0;
struct sNode* __dec_obj47;
struct sSubNode* __result_obj__49;
    ((struct sNodeBase*)(__right_value108=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value108, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj46=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj47=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__49 = (struct sSubNode*)come_increment_ref_count(self);
    come_call_finalizer(sSubNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sSubNode_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

char* sSubNode_kind(struct sSubNode* self){
void* __right_value111 = (void*)0;
char* __result_obj__50;
    __result_obj__50 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string("sSubNode"))));
    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__50;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_95;
_Bool Value_96;
_Bool __result_obj__51;
void* __right_value112 = (void*)0;
struct CVALUE* left_value_97;
struct sNode* right_node_98;
_Bool Value_99;
_Bool __result_obj__52;
void* __right_value113 = (void*)0;
struct CVALUE* right_value_100;
struct sType* type_101;
char* fun_name_102;
_Bool calling_fun_103;
void* __right_value114 = (void*)0;
struct sType* result_type_104;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct sType* __dec_obj48;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct CVALUE* come_value_105;
void* __right_value120 = (void*)0;
char* __dec_obj49;
void* __right_value121 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__53;
memset(&calling_fun_103, 0, sizeof(_Bool));
    left_node_95=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_96=node_compile(left_node_95,info);
    if(    !Value_96    ) {
        __result_obj__51 = (_Bool)0;
        ((left_node_95) ? left_node_95 = come_decrement_ref_count(left_node_95, ((struct sNode*)left_node_95)->finalize, ((struct sNode*)left_node_95)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__51;
    }
    else {
    }
    left_value_97=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_98=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_99=node_compile(right_node_98,info);
    if(    !Value_99    ) {
        __result_obj__52 = (_Bool)0;
        ((left_node_95) ? left_node_95 = come_decrement_ref_count(left_node_95, ((struct sNode*)left_node_95)->finalize, ((struct sNode*)left_node_95)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_98) ? right_node_98 = come_decrement_ref_count(right_node_98, ((struct sNode*)right_node_98)->finalize, ((struct sNode*)right_node_98)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__52;
    }
    else {
    }
    right_value_100=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_101=(struct sType*)come_increment_ref_count(left_value_97->type);
    fun_name_102="operator_sub";
    if(    self->mQuote    ) {
        calling_fun_103=(_Bool)0;
    }
    else {
        calling_fun_103=operator_overload_fun(type_101,fun_name_102,(struct sNode*)come_increment_ref_count(left_node_95),(struct sNode*)come_increment_ref_count(right_node_98),(struct CVALUE*)come_increment_ref_count(left_value_97),(struct CVALUE*)come_increment_ref_count(right_value_100),(_Bool)0,info);
    }
    if(    !calling_fun_103    ) {
        result_type_104=(struct sType*)come_increment_ref_count(sType_clone(left_value_97->type));
        if(        left_value_97->type->mPointerNum>0&&right_value_100->type->mPointerNum>0        ) {
            __dec_obj48=result_type_104,
            result_type_104=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 293, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_105=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 296, "struct CVALUE*"))));
        __dec_obj49=come_value_105->c_value,
        come_value_105->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_97->c_value,right_value_100->c_value));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj50=come_value_105->type,
        come_value_105->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_104));
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_105->type->mHeap=(_Bool)0;
        come_value_105->var=((void*)0);
        add_come_last_code(info,"%s",come_value_105->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_105));
        come_call_finalizer(sType_finalize, result_type_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__53 = (_Bool)1;
    ((left_node_95) ? left_node_95 = come_decrement_ref_count(left_node_95, ((struct sNode*)left_node_95)->finalize, ((struct sNode*)left_node_95)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_98) ? right_node_98 = come_decrement_ref_count(right_node_98, ((struct sNode*)right_node_98)->finalize, ((struct sNode*)right_node_98)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void sSubNode_finalize(struct sSubNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sNode* __dec_obj51;
void* __right_value124 = (void*)0;
struct sNode* __dec_obj52;
struct sMultNode* __result_obj__54;
    ((struct sNodeBase*)(__right_value122=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj51=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj52=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__54 = (struct sMultNode*)come_increment_ref_count(self);
    come_call_finalizer(sMultNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sMultNode_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sMultNode_kind(struct sMultNode* self){
void* __right_value125 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string("sMultNode"))));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_106;
_Bool Value_107;
_Bool __result_obj__56;
void* __right_value126 = (void*)0;
struct CVALUE* left_value_108;
struct sNode* right_node_109;
_Bool Value_110;
_Bool __result_obj__57;
void* __right_value127 = (void*)0;
struct CVALUE* right_value_111;
struct sType* type_112;
char* fun_name_113;
_Bool calling_fun_114;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct CVALUE* come_value_115;
void* __right_value130 = (void*)0;
char* __dec_obj53;
void* __right_value131 = (void*)0;
struct sType* __dec_obj54;
_Bool __result_obj__58;
memset(&calling_fun_114, 0, sizeof(_Bool));
    left_node_106=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_107=node_compile(left_node_106,info);
    if(    !Value_107    ) {
        __result_obj__56 = (_Bool)0;
        ((left_node_106) ? left_node_106 = come_decrement_ref_count(left_node_106, ((struct sNode*)left_node_106)->finalize, ((struct sNode*)left_node_106)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__56;
    }
    else {
    }
    left_value_108=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_109=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_110=node_compile(right_node_109,info);
    if(    !Value_110    ) {
        __result_obj__57 = (_Bool)0;
        ((left_node_106) ? left_node_106 = come_decrement_ref_count(left_node_106, ((struct sNode*)left_node_106)->finalize, ((struct sNode*)left_node_106)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_109) ? right_node_109 = come_decrement_ref_count(right_node_109, ((struct sNode*)right_node_109)->finalize, ((struct sNode*)right_node_109)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__57;
    }
    else {
    }
    right_value_111=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_112=(struct sType*)come_increment_ref_count(left_value_108->type);
    fun_name_113="operator_mult";
    if(    self->mQuote    ) {
        calling_fun_114=(_Bool)0;
    }
    else {
        calling_fun_114=operator_overload_fun(type_112,fun_name_113,(struct sNode*)come_increment_ref_count(left_node_106),(struct sNode*)come_increment_ref_count(right_node_109),(struct CVALUE*)come_increment_ref_count(left_value_108),(struct CVALUE*)come_increment_ref_count(right_value_111),(_Bool)0,info);
    }
    if(    !calling_fun_114    ) {
        come_value_115=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 359, "struct CVALUE*"))));
        __dec_obj53=come_value_115->c_value,
        come_value_115->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_108->c_value,right_value_111->c_value));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj54=come_value_115->type,
        come_value_115->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_108->type));
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_115->type->mHeap=(_Bool)0;
        come_value_115->var=((void*)0);
        add_come_last_code(info,"%s",come_value_115->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        come_call_finalizer(CVALUE_finalize, come_value_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__58 = (_Bool)1;
    ((left_node_106) ? left_node_106 = come_decrement_ref_count(left_node_106, ((struct sNode*)left_node_106)->finalize, ((struct sNode*)left_node_106)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_109) ? right_node_109 = come_decrement_ref_count(right_node_109, ((struct sNode*)right_node_109)->finalize, ((struct sNode*)right_node_109)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__58;
}

static void sMultNode_finalize(struct sMultNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sNode* __dec_obj55;
void* __right_value134 = (void*)0;
struct sNode* __dec_obj56;
struct sDivNode* __result_obj__59;
    ((struct sNodeBase*)(__right_value132=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj55=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj56=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__59 = (struct sDivNode*)come_increment_ref_count(self);
    come_call_finalizer(sDivNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sDivNode_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

char* sDivNode_kind(struct sDivNode* self){
void* __right_value135 = (void*)0;
char* __result_obj__60;
    __result_obj__60 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string("sDivNode"))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__60;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_116;
_Bool Value_117;
_Bool __result_obj__61;
void* __right_value136 = (void*)0;
struct CVALUE* left_value_118;
struct sNode* right_node_119;
_Bool Value_120;
_Bool __result_obj__62;
void* __right_value137 = (void*)0;
struct CVALUE* right_value_121;
struct sType* type_122;
char* fun_name_123;
_Bool calling_fun_124;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct CVALUE* come_value_125;
void* __right_value140 = (void*)0;
char* __dec_obj57;
void* __right_value141 = (void*)0;
struct sType* __dec_obj58;
_Bool __result_obj__63;
memset(&calling_fun_124, 0, sizeof(_Bool));
    left_node_116=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_117=node_compile(left_node_116,info);
    if(    !Value_117    ) {
        __result_obj__61 = (_Bool)0;
        ((left_node_116) ? left_node_116 = come_decrement_ref_count(left_node_116, ((struct sNode*)left_node_116)->finalize, ((struct sNode*)left_node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__61;
    }
    else {
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_119=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_120=node_compile(right_node_119,info);
    if(    !Value_120    ) {
        __result_obj__62 = (_Bool)0;
        ((left_node_116) ? left_node_116 = come_decrement_ref_count(left_node_116, ((struct sNode*)left_node_116)->finalize, ((struct sNode*)left_node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_119) ? right_node_119 = come_decrement_ref_count(right_node_119, ((struct sNode*)right_node_119)->finalize, ((struct sNode*)right_node_119)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__62;
    }
    else {
    }
    right_value_121=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_122=(struct sType*)come_increment_ref_count(left_value_118->type);
    fun_name_123="operator_div";
    if(    self->mQuote    ) {
        calling_fun_124=(_Bool)0;
    }
    else {
        calling_fun_124=operator_overload_fun(type_122,fun_name_123,(struct sNode*)come_increment_ref_count(left_node_116),(struct sNode*)come_increment_ref_count(right_node_119),(struct CVALUE*)come_increment_ref_count(left_value_118),(struct CVALUE*)come_increment_ref_count(right_value_121),(_Bool)0,info);
    }
    if(    !calling_fun_124    ) {
        come_value_125=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 422, "struct CVALUE*"))));
        __dec_obj57=come_value_125->c_value,
        come_value_125->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_118->c_value,right_value_121->c_value));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj58=come_value_125->type,
        come_value_125->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_118->type));
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_125->type->mHeap=(_Bool)0;
        come_value_125->var=((void*)0);
        add_come_last_code(info,"%s",come_value_125->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
        come_call_finalizer(CVALUE_finalize, come_value_125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__63 = (_Bool)1;
    ((left_node_116) ? left_node_116 = come_decrement_ref_count(left_node_116, ((struct sNode*)left_node_116)->finalize, ((struct sNode*)left_node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_119) ? right_node_119 = come_decrement_ref_count(right_node_119, ((struct sNode*)right_node_119)->finalize, ((struct sNode*)right_node_119)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__63;
}

static void sDivNode_finalize(struct sDivNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value144 = (void*)0;
struct sNode* __dec_obj60;
struct sModNode* __result_obj__64;
    ((struct sNodeBase*)(__right_value142=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value142, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj59=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj60=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__64 = (struct sModNode*)come_increment_ref_count(self);
    come_call_finalizer(sModNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sModNode_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

char* sModNode_kind(struct sModNode* self){
void* __right_value145 = (void*)0;
char* __result_obj__65;
    __result_obj__65 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string("sModNode"))));
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__65;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_126;
_Bool Value_127;
_Bool __result_obj__66;
void* __right_value146 = (void*)0;
struct CVALUE* left_value_128;
struct sNode* right_node_129;
_Bool Value_130;
_Bool __result_obj__67;
void* __right_value147 = (void*)0;
struct CVALUE* right_value_131;
struct sType* type_132;
char* fun_name_133;
_Bool calling_fun_134;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct CVALUE* come_value_135;
void* __right_value150 = (void*)0;
char* __dec_obj61;
void* __right_value151 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__68;
memset(&calling_fun_134, 0, sizeof(_Bool));
    left_node_126=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_127=node_compile(left_node_126,info);
    if(    !Value_127    ) {
        __result_obj__66 = (_Bool)0;
        ((left_node_126) ? left_node_126 = come_decrement_ref_count(left_node_126, ((struct sNode*)left_node_126)->finalize, ((struct sNode*)left_node_126)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__66;
    }
    else {
    }
    left_value_128=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_129=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_130=node_compile(right_node_129,info);
    if(    !Value_130    ) {
        __result_obj__67 = (_Bool)0;
        ((left_node_126) ? left_node_126 = come_decrement_ref_count(left_node_126, ((struct sNode*)left_node_126)->finalize, ((struct sNode*)left_node_126)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_129) ? right_node_129 = come_decrement_ref_count(right_node_129, ((struct sNode*)right_node_129)->finalize, ((struct sNode*)right_node_129)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__67;
    }
    else {
    }
    right_value_131=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_132=(struct sType*)come_increment_ref_count(left_value_128->type);
    fun_name_133="operator_mod";
    if(    self->mQuote    ) {
        calling_fun_134=(_Bool)0;
    }
    else {
        calling_fun_134=operator_overload_fun(type_132,fun_name_133,(struct sNode*)come_increment_ref_count(left_node_126),(struct sNode*)come_increment_ref_count(right_node_129),(struct CVALUE*)come_increment_ref_count(left_value_128),(struct CVALUE*)come_increment_ref_count(right_value_131),(_Bool)0,info);
    }
    if(    !calling_fun_134    ) {
        come_value_135=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 485, "struct CVALUE*"))));
        __dec_obj61=come_value_135->c_value,
        come_value_135->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_128->c_value,right_value_131->c_value));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj62=come_value_135->type,
        come_value_135->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_128->type));
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_135->type->mHeap=(_Bool)0;
        come_value_135->var=((void*)0);
        add_come_last_code(info,"%s",come_value_135->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
        come_call_finalizer(CVALUE_finalize, come_value_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__68 = (_Bool)1;
    ((left_node_126) ? left_node_126 = come_decrement_ref_count(left_node_126, ((struct sNode*)left_node_126)->finalize, ((struct sNode*)left_node_126)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_129) ? right_node_129 = come_decrement_ref_count(right_node_129, ((struct sNode*)right_node_129)->finalize, ((struct sNode*)right_node_129)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__68;
}

static void sModNode_finalize(struct sModNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value154 = (void*)0;
struct sNode* __dec_obj64;
struct sLShiftNode* __result_obj__69;
    ((struct sNodeBase*)(__right_value152=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value152, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj63=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj64=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__69 = (struct sLShiftNode*)come_increment_ref_count(self);
    come_call_finalizer(sLShiftNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLShiftNode_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __right_value155 = (void*)0;
char* __result_obj__70;
    __result_obj__70 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("sLShiftNode"))));
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__70;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_136;
_Bool Value_137;
_Bool __result_obj__71;
void* __right_value156 = (void*)0;
struct CVALUE* left_value_138;
struct sNode* right_node_139;
_Bool Value_140;
_Bool __result_obj__72;
void* __right_value157 = (void*)0;
struct CVALUE* right_value_141;
struct sType* type_142;
char* fun_name_143;
_Bool calling_fun_144;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct CVALUE* come_value_145;
void* __right_value160 = (void*)0;
char* __dec_obj65;
void* __right_value161 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__73;
memset(&calling_fun_144, 0, sizeof(_Bool));
    left_node_136=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_137=node_compile(left_node_136,info);
    if(    !Value_137    ) {
        __result_obj__71 = (_Bool)0;
        ((left_node_136) ? left_node_136 = come_decrement_ref_count(left_node_136, ((struct sNode*)left_node_136)->finalize, ((struct sNode*)left_node_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__71;
    }
    else {
    }
    left_value_138=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_139=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_140=node_compile(right_node_139,info);
    if(    !Value_140    ) {
        __result_obj__72 = (_Bool)0;
        ((left_node_136) ? left_node_136 = come_decrement_ref_count(left_node_136, ((struct sNode*)left_node_136)->finalize, ((struct sNode*)left_node_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_139) ? right_node_139 = come_decrement_ref_count(right_node_139, ((struct sNode*)right_node_139)->finalize, ((struct sNode*)right_node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__72;
    }
    else {
    }
    right_value_141=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_142=(struct sType*)come_increment_ref_count(left_value_138->type);
    fun_name_143="operator_lshift";
    if(    self->mQuote    ) {
        calling_fun_144=(_Bool)0;
    }
    else {
        calling_fun_144=operator_overload_fun(type_142,fun_name_143,(struct sNode*)come_increment_ref_count(left_node_136),(struct sNode*)come_increment_ref_count(right_node_139),(struct CVALUE*)come_increment_ref_count(left_value_138),(struct CVALUE*)come_increment_ref_count(right_value_141),(_Bool)0,info);
    }
    if(    !calling_fun_144    ) {
        come_value_145=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 549, "struct CVALUE*"))));
        __dec_obj65=come_value_145->c_value,
        come_value_145->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_138->c_value,right_value_141->c_value));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj66=come_value_145->type,
        come_value_145->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_138->type));
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_145->type->mHeap=(_Bool)0;
        come_value_145->var=((void*)0);
        add_come_last_code(info,"%s",come_value_145->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_145));
        come_call_finalizer(CVALUE_finalize, come_value_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__73 = (_Bool)1;
    ((left_node_136) ? left_node_136 = come_decrement_ref_count(left_node_136, ((struct sNode*)left_node_136)->finalize, ((struct sNode*)left_node_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_139) ? right_node_139 = come_decrement_ref_count(right_node_139, ((struct sNode*)right_node_139)->finalize, ((struct sNode*)right_node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__73;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct sNode* __dec_obj67;
void* __right_value164 = (void*)0;
struct sNode* __dec_obj68;
struct sRShiftNode* __result_obj__74;
    ((struct sNodeBase*)(__right_value162=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj67=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj68=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__74 = (struct sRShiftNode*)come_increment_ref_count(self);
    come_call_finalizer(sRShiftNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sRShiftNode_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __right_value165 = (void*)0;
char* __result_obj__75;
    __result_obj__75 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string("sRShiftNode"))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__75 = come_decrement_ref_count(__result_obj__75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__75;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_146;
_Bool Value_147;
_Bool __result_obj__76;
void* __right_value166 = (void*)0;
struct CVALUE* left_value_148;
struct sNode* right_node_149;
_Bool Value_150;
_Bool __result_obj__77;
void* __right_value167 = (void*)0;
struct CVALUE* right_value_151;
struct sType* type_152;
char* fun_name_153;
_Bool calling_fun_154;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct CVALUE* come_value_155;
void* __right_value170 = (void*)0;
char* __dec_obj69;
void* __right_value171 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__78;
memset(&calling_fun_154, 0, sizeof(_Bool));
    left_node_146=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_147=node_compile(left_node_146,info);
    if(    !Value_147    ) {
        __result_obj__76 = (_Bool)0;
        ((left_node_146) ? left_node_146 = come_decrement_ref_count(left_node_146, ((struct sNode*)left_node_146)->finalize, ((struct sNode*)left_node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__76;
    }
    else {
    }
    left_value_148=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_149=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_150=node_compile(right_node_149,info);
    if(    !Value_150    ) {
        __result_obj__77 = (_Bool)0;
        ((left_node_146) ? left_node_146 = come_decrement_ref_count(left_node_146, ((struct sNode*)left_node_146)->finalize, ((struct sNode*)left_node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_149) ? right_node_149 = come_decrement_ref_count(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__77;
    }
    else {
    }
    right_value_151=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_152=(struct sType*)come_increment_ref_count(left_value_148->type);
    fun_name_153="operator_rshift";
    if(    self->mQuote    ) {
        calling_fun_154=(_Bool)0;
    }
    else {
        calling_fun_154=operator_overload_fun(type_152,fun_name_153,(struct sNode*)come_increment_ref_count(left_node_146),(struct sNode*)come_increment_ref_count(right_node_149),(struct CVALUE*)come_increment_ref_count(left_value_148),(struct CVALUE*)come_increment_ref_count(right_value_151),(_Bool)0,info);
    }
    if(    !calling_fun_154    ) {
        come_value_155=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 612, "struct CVALUE*"))));
        __dec_obj69=come_value_155->c_value,
        come_value_155->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_148->c_value,right_value_151->c_value));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj70=come_value_155->type,
        come_value_155->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_148->type));
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_155->type->mHeap=(_Bool)0;
        come_value_155->var=((void*)0);
        add_come_last_code(info,"%s",come_value_155->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
        come_call_finalizer(CVALUE_finalize, come_value_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__78 = (_Bool)1;
    ((left_node_146) ? left_node_146 = come_decrement_ref_count(left_node_146, ((struct sNode*)left_node_146)->finalize, ((struct sNode*)left_node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_149) ? right_node_149 = come_decrement_ref_count(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__78;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value174 = (void*)0;
struct sNode* __dec_obj72;
struct sGtEqNode* __result_obj__79;
    ((struct sNodeBase*)(__right_value172=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value172, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj71=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj72=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__79 = (struct sGtEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sGtEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sGtEqNode_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __right_value175 = (void*)0;
char* __result_obj__80;
    __result_obj__80 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string("sGtEqNode"))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__80;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_156;
_Bool Value_157;
_Bool __result_obj__81;
void* __right_value176 = (void*)0;
struct CVALUE* left_value_158;
struct sNode* right_node_159;
_Bool Value_160;
_Bool __result_obj__82;
void* __right_value177 = (void*)0;
struct CVALUE* right_value_161;
struct sType* type_162;
char* fun_name_163;
_Bool calling_fun_164;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct CVALUE* come_value_165;
void* __right_value180 = (void*)0;
char* __dec_obj73;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct sType* __dec_obj74;
_Bool __result_obj__83;
memset(&calling_fun_164, 0, sizeof(_Bool));
    left_node_156=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_157=node_compile(left_node_156,info);
    if(    !Value_157    ) {
        __result_obj__81 = (_Bool)0;
        ((left_node_156) ? left_node_156 = come_decrement_ref_count(left_node_156, ((struct sNode*)left_node_156)->finalize, ((struct sNode*)left_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__81;
    }
    else {
    }
    left_value_158=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_159=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_160=node_compile(right_node_159,info);
    if(    !Value_160    ) {
        __result_obj__82 = (_Bool)0;
        ((left_node_156) ? left_node_156 = come_decrement_ref_count(left_node_156, ((struct sNode*)left_node_156)->finalize, ((struct sNode*)left_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_159) ? right_node_159 = come_decrement_ref_count(right_node_159, ((struct sNode*)right_node_159)->finalize, ((struct sNode*)right_node_159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__82;
    }
    else {
    }
    right_value_161=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_162=(struct sType*)come_increment_ref_count(left_value_158->type);
    fun_name_163="operator_gteq";
    if(    self->mQuote    ) {
        calling_fun_164=(_Bool)0;
    }
    else {
        calling_fun_164=operator_overload_fun(type_162,fun_name_163,(struct sNode*)come_increment_ref_count(left_node_156),(struct sNode*)come_increment_ref_count(right_node_159),(struct CVALUE*)come_increment_ref_count(left_value_158),(struct CVALUE*)come_increment_ref_count(right_value_161),(_Bool)0,info);
    }
    if(    !calling_fun_164    ) {
        come_value_165=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 675, "struct CVALUE*"))));
        __dec_obj73=come_value_165->c_value,
        come_value_165->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_158->c_value,right_value_161->c_value));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj74=come_value_165->type,
        come_value_165->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 678, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_165->var=((void*)0);
        add_come_last_code(info,"%s",come_value_165->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
        come_call_finalizer(CVALUE_finalize, come_value_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__83 = (_Bool)1;
    ((left_node_156) ? left_node_156 = come_decrement_ref_count(left_node_156, ((struct sNode*)left_node_156)->finalize, ((struct sNode*)left_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_159) ? right_node_159 = come_decrement_ref_count(right_node_159, ((struct sNode*)right_node_159)->finalize, ((struct sNode*)right_node_159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__83;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value186 = (void*)0;
struct sNode* __dec_obj76;
struct sLtEqNode* __result_obj__84;
    ((struct sNodeBase*)(__right_value184=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value184, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj75=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj76=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__84 = (struct sLtEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sLtEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLtEqNode_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __right_value187 = (void*)0;
char* __result_obj__85;
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string("sLtEqNode"))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_166;
_Bool Value_167;
_Bool __result_obj__86;
void* __right_value188 = (void*)0;
struct CVALUE* left_value_168;
struct sNode* right_node_169;
_Bool Value_170;
_Bool __result_obj__87;
void* __right_value189 = (void*)0;
struct CVALUE* right_value_171;
struct sType* type_172;
char* fun_name_173;
_Bool calling_fun_174;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct CVALUE* come_value_175;
void* __right_value192 = (void*)0;
char* __dec_obj77;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__88;
memset(&calling_fun_174, 0, sizeof(_Bool));
    left_node_166=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_167=node_compile(left_node_166,info);
    if(    !Value_167    ) {
        __result_obj__86 = (_Bool)0;
        ((left_node_166) ? left_node_166 = come_decrement_ref_count(left_node_166, ((struct sNode*)left_node_166)->finalize, ((struct sNode*)left_node_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__86;
    }
    else {
    }
    left_value_168=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_169=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_170=node_compile(right_node_169,info);
    if(    !Value_170    ) {
        __result_obj__87 = (_Bool)0;
        ((left_node_166) ? left_node_166 = come_decrement_ref_count(left_node_166, ((struct sNode*)left_node_166)->finalize, ((struct sNode*)left_node_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_169) ? right_node_169 = come_decrement_ref_count(right_node_169, ((struct sNode*)right_node_169)->finalize, ((struct sNode*)right_node_169)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__87;
    }
    else {
    }
    right_value_171=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_172=(struct sType*)come_increment_ref_count(left_value_168->type);
    fun_name_173="operator_lteq";
    if(    self->mQuote    ) {
        calling_fun_174=(_Bool)0;
    }
    else {
        calling_fun_174=operator_overload_fun(type_172,fun_name_173,(struct sNode*)come_increment_ref_count(left_node_166),(struct sNode*)come_increment_ref_count(right_node_169),(struct CVALUE*)come_increment_ref_count(left_value_168),(struct CVALUE*)come_increment_ref_count(right_value_171),(_Bool)0,info);
    }
    if(    !calling_fun_174    ) {
        come_value_175=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 737, "struct CVALUE*"))));
        __dec_obj77=come_value_175->c_value,
        come_value_175->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_168->c_value,right_value_171->c_value));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj78=come_value_175->type,
        come_value_175->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 740, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_175->var=((void*)0);
        add_come_last_code(info,"%s",come_value_175->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
        come_call_finalizer(CVALUE_finalize, come_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__88 = (_Bool)1;
    ((left_node_166) ? left_node_166 = come_decrement_ref_count(left_node_166, ((struct sNode*)left_node_166)->finalize, ((struct sNode*)left_node_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_169) ? right_node_169 = come_decrement_ref_count(right_node_169, ((struct sNode*)right_node_169)->finalize, ((struct sNode*)right_node_169)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__88;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value198 = (void*)0;
struct sNode* __dec_obj80;
struct sLtNode* __result_obj__89;
    ((struct sNodeBase*)(__right_value196=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value196, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj79=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj80=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__89 = (struct sLtNode*)come_increment_ref_count(self);
    come_call_finalizer(sLtNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLtNode_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

char* sLtNode_kind(struct sLtNode* self){
void* __right_value199 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value199=__builtin_string("sLtNode"))));
    (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__90;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_176;
_Bool Value_177;
_Bool __result_obj__91;
void* __right_value200 = (void*)0;
struct CVALUE* left_value_178;
struct sNode* right_node_179;
_Bool Value_180;
_Bool __result_obj__92;
void* __right_value201 = (void*)0;
struct CVALUE* right_value_181;
struct sType* type_182;
char* fun_name_183;
_Bool calling_fun_184;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct CVALUE* come_value_185;
void* __right_value204 = (void*)0;
char* __dec_obj81;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__93;
memset(&calling_fun_184, 0, sizeof(_Bool));
    left_node_176=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_177=node_compile(left_node_176,info);
    if(    !Value_177    ) {
        __result_obj__91 = (_Bool)0;
        ((left_node_176) ? left_node_176 = come_decrement_ref_count(left_node_176, ((struct sNode*)left_node_176)->finalize, ((struct sNode*)left_node_176)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__91;
    }
    else {
    }
    left_value_178=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_179=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_180=node_compile(right_node_179,info);
    if(    !Value_180    ) {
        __result_obj__92 = (_Bool)0;
        ((left_node_176) ? left_node_176 = come_decrement_ref_count(left_node_176, ((struct sNode*)left_node_176)->finalize, ((struct sNode*)left_node_176)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_179) ? right_node_179 = come_decrement_ref_count(right_node_179, ((struct sNode*)right_node_179)->finalize, ((struct sNode*)right_node_179)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__92;
    }
    else {
    }
    right_value_181=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_182=(struct sType*)come_increment_ref_count(left_value_178->type);
    fun_name_183="operator_lt";
    if(    self->mQuote    ) {
        calling_fun_184=(_Bool)0;
    }
    else {
        calling_fun_184=operator_overload_fun(type_182,fun_name_183,(struct sNode*)come_increment_ref_count(left_node_176),(struct sNode*)come_increment_ref_count(right_node_179),(struct CVALUE*)come_increment_ref_count(left_value_178),(struct CVALUE*)come_increment_ref_count(right_value_181),(_Bool)0,info);
    }
    if(    !calling_fun_184    ) {
        come_value_185=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 799, "struct CVALUE*"))));
        __dec_obj81=come_value_185->c_value,
        come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_178->c_value,right_value_181->c_value));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj82=come_value_185->type,
        come_value_185->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 802, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_185->var=((void*)0);
        add_come_last_code(info,"%s",come_value_185->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
        come_call_finalizer(CVALUE_finalize, come_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__93 = (_Bool)1;
    ((left_node_176) ? left_node_176 = come_decrement_ref_count(left_node_176, ((struct sNode*)left_node_176)->finalize, ((struct sNode*)left_node_176)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_179) ? right_node_179 = come_decrement_ref_count(right_node_179, ((struct sNode*)right_node_179)->finalize, ((struct sNode*)right_node_179)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__93;
}

static void sLtNode_finalize(struct sLtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value210 = (void*)0;
struct sNode* __dec_obj84;
struct sGtNode* __result_obj__94;
    ((struct sNodeBase*)(__right_value208=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value208, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj83=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj84=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__94 = (struct sGtNode*)come_increment_ref_count(self);
    come_call_finalizer(sGtNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sGtNode_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

char* sGtNode_kind(struct sGtNode* self){
void* __right_value211 = (void*)0;
char* __result_obj__95;
    __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string("sGtNode"))));
    (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__95;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_186;
_Bool Value_187;
_Bool __result_obj__96;
void* __right_value212 = (void*)0;
struct CVALUE* left_value_188;
struct sNode* right_node_189;
_Bool Value_190;
_Bool __result_obj__97;
void* __right_value213 = (void*)0;
struct CVALUE* right_value_191;
struct sType* type_192;
char* fun_name_193;
_Bool calling_fun_194;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct CVALUE* come_value_195;
void* __right_value216 = (void*)0;
char* __dec_obj85;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__98;
memset(&calling_fun_194, 0, sizeof(_Bool));
    left_node_186=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_187=node_compile(left_node_186,info);
    if(    !Value_187    ) {
        __result_obj__96 = (_Bool)0;
        ((left_node_186) ? left_node_186 = come_decrement_ref_count(left_node_186, ((struct sNode*)left_node_186)->finalize, ((struct sNode*)left_node_186)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__96;
    }
    else {
    }
    left_value_188=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_189=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_190=node_compile(right_node_189,info);
    if(    !Value_190    ) {
        __result_obj__97 = (_Bool)0;
        ((left_node_186) ? left_node_186 = come_decrement_ref_count(left_node_186, ((struct sNode*)left_node_186)->finalize, ((struct sNode*)left_node_186)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_189) ? right_node_189 = come_decrement_ref_count(right_node_189, ((struct sNode*)right_node_189)->finalize, ((struct sNode*)right_node_189)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__97;
    }
    else {
    }
    right_value_191=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_192=(struct sType*)come_increment_ref_count(left_value_188->type);
    fun_name_193="operator_gt";
    if(    self->mQuote    ) {
        calling_fun_194=(_Bool)0;
    }
    else {
        calling_fun_194=operator_overload_fun(type_192,fun_name_193,(struct sNode*)come_increment_ref_count(left_node_186),(struct sNode*)come_increment_ref_count(right_node_189),(struct CVALUE*)come_increment_ref_count(left_value_188),(struct CVALUE*)come_increment_ref_count(right_value_191),(_Bool)0,info);
    }
    if(    !calling_fun_194    ) {
        come_value_195=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 861, "struct CVALUE*"))));
        __dec_obj85=come_value_195->c_value,
        come_value_195->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_188->c_value,right_value_191->c_value));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj86=come_value_195->type,
        come_value_195->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 864, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_195->var=((void*)0);
        add_come_last_code(info,"%s",come_value_195->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
        come_call_finalizer(CVALUE_finalize, come_value_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__98 = (_Bool)1;
    ((left_node_186) ? left_node_186 = come_decrement_ref_count(left_node_186, ((struct sNode*)left_node_186)->finalize, ((struct sNode*)left_node_186)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_189) ? right_node_189 = come_decrement_ref_count(right_node_189, ((struct sNode*)right_node_189)->finalize, ((struct sNode*)right_node_189)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__98;
}

static void sGtNode_finalize(struct sGtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value222 = (void*)0;
struct sNode* __dec_obj88;
struct sEqNode* __result_obj__99;
    ((struct sNodeBase*)(__right_value220=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value220, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj87=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj88=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__99 = (struct sEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sEqNode_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

char* sEqNode_kind(struct sEqNode* self){
void* __right_value223 = (void*)0;
char* __result_obj__100;
    __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value223=__builtin_string("sEqNode"))));
    (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__100;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_196;
_Bool Value_197;
void* __right_value224 = (void*)0;
struct CVALUE* left_value_198;
struct sNode* right_node_199;
_Bool Value_200;
_Bool __result_obj__101;
void* __right_value225 = (void*)0;
struct CVALUE* right_value_201;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct CVALUE* come_value_202;
void* __right_value228 = (void*)0;
char* __dec_obj89;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sType* __dec_obj90;
_Bool __result_obj__102;
    left_node_196=self->mLeft;
    Value_197=node_compile(left_node_196,info);
    if(    !Value_197    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_198=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_199=self->mRight;
    Value_200=node_compile(right_node_199,info);
    if(    !Value_200    ) {
        __result_obj__101 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__101;
    }
    else {
    }
    right_value_201=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_202=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 911, "struct CVALUE*"))));
    __dec_obj89=come_value_202->c_value,
    come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_198->c_value,right_value_201->c_value));
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj90=come_value_202->type,
    come_value_202->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 914, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_202->var=((void*)0);
    add_come_last_code(info,"%s",come_value_202->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_202));
    __result_obj__102 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__102;
}

static void sEqNode_finalize(struct sEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct sNode* __dec_obj91;
void* __right_value234 = (void*)0;
struct sNode* __dec_obj92;
struct sNotEqNode* __result_obj__103;
    ((struct sNodeBase*)(__right_value232=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value232, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj91=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj92=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__103 = (struct sNotEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sNotEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sNotEqNode_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __right_value235 = (void*)0;
char* __result_obj__104;
    __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value235=__builtin_string("sNotEqNode"))));
    (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_203;
_Bool Value_204;
void* __right_value236 = (void*)0;
struct CVALUE* left_value_205;
struct sNode* right_node_206;
_Bool Value_207;
_Bool __result_obj__105;
void* __right_value237 = (void*)0;
struct CVALUE* right_value_208;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct CVALUE* come_value_209;
void* __right_value240 = (void*)0;
char* __dec_obj93;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj94;
_Bool __result_obj__106;
    left_node_203=self->mLeft;
    Value_204=node_compile(left_node_203,info);
    if(    !Value_204    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_205=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_206=self->mRight;
    Value_207=node_compile(right_node_206,info);
    if(    !Value_207    ) {
        __result_obj__105 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__105;
    }
    else {
    }
    right_value_208=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_209=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 960, "struct CVALUE*"))));
    __dec_obj93=come_value_209->c_value,
    come_value_209->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_205->c_value,right_value_208->c_value));
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj94=come_value_209->type,
    come_value_209->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 963, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_209->var=((void*)0);
    add_come_last_code(info,"%s",come_value_209->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_209));
    __result_obj__106 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__106;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sNode* __dec_obj95;
void* __right_value246 = (void*)0;
struct sNode* __dec_obj96;
struct sEq2Node* __result_obj__107;
    ((struct sNodeBase*)(__right_value244=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value244, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj95=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj96=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__107 = (struct sEq2Node*)come_increment_ref_count(self);
    come_call_finalizer(sEq2Node_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sEq2Node_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __right_value247 = (void*)0;
char* __result_obj__108;
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value247=__builtin_string("sEq2Node"))));
    (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_210;
_Bool Value_211;
_Bool __result_obj__109;
void* __right_value248 = (void*)0;
struct CVALUE* left_value_212;
struct sNode* right_node_213;
_Bool Value_214;
_Bool __result_obj__110;
void* __right_value249 = (void*)0;
struct CVALUE* right_value_215;
struct sType* type_216;
char* fun_name_217;
_Bool calling_fun_218;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct CVALUE* come_value_219;
void* __right_value252 = (void*)0;
char* __dec_obj97;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sType* __dec_obj98;
_Bool __result_obj__111;
memset(&calling_fun_218, 0, sizeof(_Bool));
    left_node_210=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_211=node_compile(left_node_210,info);
    if(    !Value_211    ) {
        __result_obj__109 = (_Bool)0;
        ((left_node_210) ? left_node_210 = come_decrement_ref_count(left_node_210, ((struct sNode*)left_node_210)->finalize, ((struct sNode*)left_node_210)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__109;
    }
    else {
    }
    left_value_212=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_213=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_214=node_compile(right_node_213,info);
    if(    !Value_214    ) {
        __result_obj__110 = (_Bool)0;
        ((left_node_210) ? left_node_210 = come_decrement_ref_count(left_node_210, ((struct sNode*)left_node_210)->finalize, ((struct sNode*)left_node_210)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_213) ? right_node_213 = come_decrement_ref_count(right_node_213, ((struct sNode*)right_node_213)->finalize, ((struct sNode*)right_node_213)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__110;
    }
    else {
    }
    right_value_215=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_216=(struct sType*)come_increment_ref_count(left_value_212->type);
    fun_name_217="operator_equals";
    if(    self->mQuote    ) {
        calling_fun_218=(_Bool)0;
    }
    else {
        calling_fun_218=operator_overload_fun(type_216,fun_name_217,(struct sNode*)come_increment_ref_count(left_node_210),(struct sNode*)come_increment_ref_count(right_node_213),(struct CVALUE*)come_increment_ref_count(left_value_212),(struct CVALUE*)come_increment_ref_count(right_value_215),(_Bool)0,info);
    }
    if(    !calling_fun_218    ) {
        come_value_219=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1022, "struct CVALUE*"))));
        __dec_obj97=come_value_219->c_value,
        come_value_219->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_212->c_value,right_value_215->c_value));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj98=come_value_219->type,
        come_value_219->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1025, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_219->var=((void*)0);
        add_come_last_code(info,"%s",come_value_219->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_219));
        come_call_finalizer(CVALUE_finalize, come_value_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__111 = (_Bool)1;
    ((left_node_210) ? left_node_210 = come_decrement_ref_count(left_node_210, ((struct sNode*)left_node_210)->finalize, ((struct sNode*)left_node_210)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_213) ? right_node_213 = come_decrement_ref_count(right_node_213, ((struct sNode*)right_node_213)->finalize, ((struct sNode*)right_node_213)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__111;
}

static void sEq2Node_finalize(struct sEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sNode* __dec_obj99;
void* __right_value258 = (void*)0;
struct sNode* __dec_obj100;
struct sNotEq2Node* __result_obj__112;
    ((struct sNodeBase*)(__right_value256=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value256, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj99=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj100=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__112 = (struct sNotEq2Node*)come_increment_ref_count(self);
    come_call_finalizer(sNotEq2Node_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sNotEq2Node_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __right_value259 = (void*)0;
char* __result_obj__113;
    __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value259=__builtin_string("sNotEq2Node"))));
    (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__113;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_220;
_Bool Value_221;
_Bool __result_obj__114;
void* __right_value260 = (void*)0;
struct CVALUE* left_value_222;
struct sNode* right_node_223;
_Bool Value_224;
_Bool __result_obj__115;
void* __right_value261 = (void*)0;
struct CVALUE* right_value_225;
struct sType* type_226;
char* fun_name_227;
_Bool calling_fun_228;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_229;
void* __right_value264 = (void*)0;
char* __dec_obj101;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* __dec_obj102;
_Bool __result_obj__116;
memset(&calling_fun_228, 0, sizeof(_Bool));
    left_node_220=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_221=node_compile(left_node_220,info);
    if(    !Value_221    ) {
        __result_obj__114 = (_Bool)0;
        ((left_node_220) ? left_node_220 = come_decrement_ref_count(left_node_220, ((struct sNode*)left_node_220)->finalize, ((struct sNode*)left_node_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__114;
    }
    else {
    }
    left_value_222=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_223=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_224=node_compile(right_node_223,info);
    if(    !Value_224    ) {
        __result_obj__115 = (_Bool)0;
        ((left_node_220) ? left_node_220 = come_decrement_ref_count(left_node_220, ((struct sNode*)left_node_220)->finalize, ((struct sNode*)left_node_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_223) ? right_node_223 = come_decrement_ref_count(right_node_223, ((struct sNode*)right_node_223)->finalize, ((struct sNode*)right_node_223)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__115;
    }
    else {
    }
    right_value_225=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_226=(struct sType*)come_increment_ref_count(left_value_222->type);
    fun_name_227="operator_not_equals";
    if(    self->mQuote    ) {
        calling_fun_228=(_Bool)0;
    }
    else {
        calling_fun_228=operator_overload_fun(type_226,fun_name_227,(struct sNode*)come_increment_ref_count(left_node_220),(struct sNode*)come_increment_ref_count(right_node_223),(struct CVALUE*)come_increment_ref_count(left_value_222),(struct CVALUE*)come_increment_ref_count(right_value_225),(_Bool)0,info);
    }
    if(    !calling_fun_228    ) {
        come_value_229=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1084, "struct CVALUE*"))));
        __dec_obj101=come_value_229->c_value,
        come_value_229->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_222->c_value,right_value_225->c_value));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj102=come_value_229->type,
        come_value_229->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1087, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_229->var=((void*)0);
        add_come_last_code(info,"%s",come_value_229->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_229));
        come_call_finalizer(CVALUE_finalize, come_value_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__116 = (_Bool)1;
    ((left_node_220) ? left_node_220 = come_decrement_ref_count(left_node_220, ((struct sNode*)left_node_220)->finalize, ((struct sNode*)left_node_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_223) ? right_node_223 = come_decrement_ref_count(right_node_223, ((struct sNode*)right_node_223)->finalize, ((struct sNode*)right_node_223)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__116;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sNode* __dec_obj103;
void* __right_value270 = (void*)0;
struct sNode* __dec_obj104;
struct sAndNode* __result_obj__117;
    ((struct sNodeBase*)(__right_value268=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value268, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj103=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj104=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__117 = (struct sAndNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAndNode_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

char* sAndNode_kind(struct sAndNode* self){
void* __right_value271 = (void*)0;
char* __result_obj__118;
    __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value271=__builtin_string("sAndNode"))));
    (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_230;
_Bool Value_231;
_Bool __result_obj__119;
void* __right_value272 = (void*)0;
struct CVALUE* left_value_232;
struct sNode* right_node_233;
_Bool Value_234;
_Bool __result_obj__120;
void* __right_value273 = (void*)0;
struct CVALUE* right_value_235;
struct sType* type_236;
char* fun_name_237;
_Bool calling_fun_238;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value276 = (void*)0;
char* __dec_obj105;
void* __right_value277 = (void*)0;
struct sType* __dec_obj106;
_Bool __result_obj__121;
memset(&calling_fun_238, 0, sizeof(_Bool));
    left_node_230=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_231=node_compile(left_node_230,info);
    if(    !Value_231    ) {
        __result_obj__119 = (_Bool)0;
        ((left_node_230) ? left_node_230 = come_decrement_ref_count(left_node_230, ((struct sNode*)left_node_230)->finalize, ((struct sNode*)left_node_230)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__119;
    }
    else {
    }
    left_value_232=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_233=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_234=node_compile(right_node_233,info);
    if(    !Value_234    ) {
        __result_obj__120 = (_Bool)0;
        ((left_node_230) ? left_node_230 = come_decrement_ref_count(left_node_230, ((struct sNode*)left_node_230)->finalize, ((struct sNode*)left_node_230)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_233) ? right_node_233 = come_decrement_ref_count(right_node_233, ((struct sNode*)right_node_233)->finalize, ((struct sNode*)right_node_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__120;
    }
    else {
    }
    right_value_235=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_236=(struct sType*)come_increment_ref_count(left_value_232->type);
    fun_name_237="operator_and";
    if(    self->mQuote    ) {
        calling_fun_238=(_Bool)0;
    }
    else {
        calling_fun_238=operator_overload_fun(type_236,fun_name_237,(struct sNode*)come_increment_ref_count(left_node_230),(struct sNode*)come_increment_ref_count(right_node_233),(struct CVALUE*)come_increment_ref_count(left_value_232),(struct CVALUE*)come_increment_ref_count(right_value_235),(_Bool)0,info);
    }
    if(    !calling_fun_238    ) {
        come_value_239=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1147, "struct CVALUE*"))));
        __dec_obj105=come_value_239->c_value,
        come_value_239->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_232->c_value,right_value_235->c_value));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj106=come_value_239->type,
        come_value_239->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_232->type));
        come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_239->type->mHeap=(_Bool)0;
        come_value_239->var=((void*)0);
        add_come_last_code(info,"%s",come_value_239->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_239));
        come_call_finalizer(CVALUE_finalize, come_value_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__121 = (_Bool)1;
    ((left_node_230) ? left_node_230 = come_decrement_ref_count(left_node_230, ((struct sNode*)left_node_230)->finalize, ((struct sNode*)left_node_230)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_233) ? right_node_233 = come_decrement_ref_count(right_node_233, ((struct sNode*)right_node_233)->finalize, ((struct sNode*)right_node_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__121;
}

static void sAndNode_finalize(struct sAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj107;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj108;
struct sXOrNode* __result_obj__122;
    ((struct sNodeBase*)(__right_value278=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value278, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj107=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj108=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__122 = (struct sXOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sXOrNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sXOrNode_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __right_value281 = (void*)0;
char* __result_obj__123;
    __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value281=__builtin_string("sXOrNode"))));
    (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_240;
_Bool Value_241;
_Bool __result_obj__124;
void* __right_value282 = (void*)0;
struct CVALUE* left_value_242;
struct sNode* right_node_243;
_Bool Value_244;
_Bool __result_obj__125;
void* __right_value283 = (void*)0;
struct CVALUE* right_value_245;
struct sType* type_246;
char* fun_name_247;
_Bool calling_fun_248;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct CVALUE* come_value_249;
void* __right_value286 = (void*)0;
char* __dec_obj109;
void* __right_value287 = (void*)0;
struct sType* __dec_obj110;
_Bool __result_obj__126;
memset(&calling_fun_248, 0, sizeof(_Bool));
    left_node_240=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_241=node_compile(left_node_240,info);
    if(    !Value_241    ) {
        __result_obj__124 = (_Bool)0;
        ((left_node_240) ? left_node_240 = come_decrement_ref_count(left_node_240, ((struct sNode*)left_node_240)->finalize, ((struct sNode*)left_node_240)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__124;
    }
    else {
    }
    left_value_242=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_243=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_244=node_compile(right_node_243,info);
    if(    !Value_244    ) {
        __result_obj__125 = (_Bool)0;
        ((left_node_240) ? left_node_240 = come_decrement_ref_count(left_node_240, ((struct sNode*)left_node_240)->finalize, ((struct sNode*)left_node_240)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_243) ? right_node_243 = come_decrement_ref_count(right_node_243, ((struct sNode*)right_node_243)->finalize, ((struct sNode*)right_node_243)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__125;
    }
    else {
    }
    right_value_245=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_246=(struct sType*)come_increment_ref_count(left_value_242->type);
    fun_name_247="operator_xor";
    if(    self->mQuote    ) {
        calling_fun_248=(_Bool)0;
    }
    else {
        calling_fun_248=operator_overload_fun(type_246,fun_name_247,(struct sNode*)come_increment_ref_count(left_node_240),(struct sNode*)come_increment_ref_count(right_node_243),(struct CVALUE*)come_increment_ref_count(left_value_242),(struct CVALUE*)come_increment_ref_count(right_value_245),(_Bool)0,info);
    }
    if(    !calling_fun_248    ) {
        come_value_249=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1210, "struct CVALUE*"))));
        __dec_obj109=come_value_249->c_value,
        come_value_249->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_242->c_value,right_value_245->c_value));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj110=come_value_249->type,
        come_value_249->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_242->type));
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_249->type->mHeap=(_Bool)0;
        come_value_249->var=((void*)0);
        add_come_last_code(info,"%s",come_value_249->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_249));
        come_call_finalizer(CVALUE_finalize, come_value_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__126 = (_Bool)1;
    ((left_node_240) ? left_node_240 = come_decrement_ref_count(left_node_240, ((struct sNode*)left_node_240)->finalize, ((struct sNode*)left_node_240)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_243) ? right_node_243 = come_decrement_ref_count(right_node_243, ((struct sNode*)right_node_243)->finalize, ((struct sNode*)right_node_243)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__126;
}

static void sXOrNode_finalize(struct sXOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj112;
struct sOrNode* __result_obj__127;
    ((struct sNodeBase*)(__right_value288=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value288, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj112=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__127 = (struct sOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sOrNode_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

char* sOrNode_kind(struct sOrNode* self){
void* __right_value291 = (void*)0;
char* __result_obj__128;
    __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value291=__builtin_string("sOrNode"))));
    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_250;
_Bool Value_251;
_Bool __result_obj__129;
void* __right_value292 = (void*)0;
struct CVALUE* left_value_252;
struct sNode* right_node_253;
_Bool Value_254;
_Bool __result_obj__130;
void* __right_value293 = (void*)0;
struct CVALUE* right_value_255;
struct sType* type_256;
char* fun_name_257;
_Bool calling_fun_258;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct CVALUE* come_value_259;
void* __right_value296 = (void*)0;
char* __dec_obj113;
void* __right_value297 = (void*)0;
struct sType* __dec_obj114;
_Bool __result_obj__131;
memset(&calling_fun_258, 0, sizeof(_Bool));
    left_node_250=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_251=node_compile(left_node_250,info);
    if(    !Value_251    ) {
        __result_obj__129 = (_Bool)0;
        ((left_node_250) ? left_node_250 = come_decrement_ref_count(left_node_250, ((struct sNode*)left_node_250)->finalize, ((struct sNode*)left_node_250)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__129;
    }
    else {
    }
    left_value_252=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_253=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_254=node_compile(right_node_253,info);
    if(    !Value_254    ) {
        __result_obj__130 = (_Bool)0;
        ((left_node_250) ? left_node_250 = come_decrement_ref_count(left_node_250, ((struct sNode*)left_node_250)->finalize, ((struct sNode*)left_node_250)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_253) ? right_node_253 = come_decrement_ref_count(right_node_253, ((struct sNode*)right_node_253)->finalize, ((struct sNode*)right_node_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__130;
    }
    else {
    }
    right_value_255=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_256=(struct sType*)come_increment_ref_count(left_value_252->type);
    fun_name_257="operator_or";
    if(    self->mQuote    ) {
        calling_fun_258=(_Bool)0;
    }
    else {
        calling_fun_258=operator_overload_fun(type_256,fun_name_257,(struct sNode*)come_increment_ref_count(left_node_250),(struct sNode*)come_increment_ref_count(right_node_253),(struct CVALUE*)come_increment_ref_count(left_value_252),(struct CVALUE*)come_increment_ref_count(right_value_255),(_Bool)0,info);
    }
    if(    !calling_fun_258    ) {
        come_value_259=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1274, "struct CVALUE*"))));
        __dec_obj113=come_value_259->c_value,
        come_value_259->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_252->c_value,right_value_255->c_value));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj114=come_value_259->type,
        come_value_259->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_252->type));
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_259->type->mHeap=(_Bool)0;
        come_value_259->var=((void*)0);
        add_come_last_code(info,"%s",come_value_259->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_259));
        come_call_finalizer(CVALUE_finalize, come_value_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__131 = (_Bool)1;
    ((left_node_250) ? left_node_250 = come_decrement_ref_count(left_node_250, ((struct sNode*)left_node_250)->finalize, ((struct sNode*)left_node_250)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_253) ? right_node_253 = come_decrement_ref_count(right_node_253, ((struct sNode*)right_node_253)->finalize, ((struct sNode*)right_node_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__131;
}

static void sOrNode_finalize(struct sOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj115;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj116;
struct sAndAndNode* __result_obj__132;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value298, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj115=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj116=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__132 = (struct sAndAndNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndAndNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAndAndNode_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __right_value301 = (void*)0;
char* __result_obj__133;
    __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value301=__builtin_string("sAndAndNode"))));
    (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_260;
_Bool Value_261;
_Bool __result_obj__134;
void* __right_value302 = (void*)0;
struct CVALUE* left_value_262;
struct sNode* right_node_263;
_Bool Value_264;
_Bool __result_obj__135;
void* __right_value303 = (void*)0;
struct CVALUE* right_value_265;
struct sType* type_266;
char* fun_name_267;
_Bool calling_fun_268;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_269;
void* __right_value306 = (void*)0;
char* __dec_obj117;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj118;
_Bool __result_obj__136;
memset(&calling_fun_268, 0, sizeof(_Bool));
    left_node_260=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_261=node_compile(left_node_260,info);
    if(    !Value_261    ) {
        __result_obj__134 = (_Bool)0;
        ((left_node_260) ? left_node_260 = come_decrement_ref_count(left_node_260, ((struct sNode*)left_node_260)->finalize, ((struct sNode*)left_node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__134;
    }
    else {
    }
    left_value_262=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_263=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_264=node_compile(right_node_263,info);
    if(    !Value_264    ) {
        __result_obj__135 = (_Bool)0;
        ((left_node_260) ? left_node_260 = come_decrement_ref_count(left_node_260, ((struct sNode*)left_node_260)->finalize, ((struct sNode*)left_node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_263) ? right_node_263 = come_decrement_ref_count(right_node_263, ((struct sNode*)right_node_263)->finalize, ((struct sNode*)right_node_263)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__135;
    }
    else {
    }
    right_value_265=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_266=(struct sType*)come_increment_ref_count(left_value_262->type);
    fun_name_267="operator_andand";
    if(    self->mQuote    ) {
        calling_fun_268=(_Bool)0;
    }
    else {
        calling_fun_268=operator_overload_fun(type_266,fun_name_267,(struct sNode*)come_increment_ref_count(left_node_260),(struct sNode*)come_increment_ref_count(right_node_263),(struct CVALUE*)come_increment_ref_count(left_value_262),(struct CVALUE*)come_increment_ref_count(right_value_265),(_Bool)0,info);
    }
    if(    !calling_fun_268    ) {
        come_value_269=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1338, "struct CVALUE*"))));
        __dec_obj117=come_value_269->c_value,
        come_value_269->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_262->c_value,right_value_265->c_value));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj118=come_value_269->type,
        come_value_269->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1341, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_269->var=left_value_262->var;
        add_come_last_code(info,"%s",come_value_269->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_269));
        come_call_finalizer(CVALUE_finalize, come_value_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__136 = (_Bool)1;
    ((left_node_260) ? left_node_260 = come_decrement_ref_count(left_node_260, ((struct sNode*)left_node_260)->finalize, ((struct sNode*)left_node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_263) ? right_node_263 = come_decrement_ref_count(right_node_263, ((struct sNode*)right_node_263)->finalize, ((struct sNode*)right_node_263)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value312 = (void*)0;
struct sNode* __dec_obj120;
struct sOrOrNode* __result_obj__137;
    ((struct sNodeBase*)(__right_value310=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value310, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj119=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj120=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__137 = (struct sOrOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrOrNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sOrOrNode_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __right_value313 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value313=__builtin_string("sOrOrNode"))));
    (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_270;
_Bool Value_271;
_Bool __result_obj__139;
void* __right_value314 = (void*)0;
struct CVALUE* left_value_272;
struct sNode* right_node_273;
_Bool Value_274;
_Bool __result_obj__140;
void* __right_value315 = (void*)0;
struct CVALUE* right_value_275;
struct sType* type_276;
char* fun_name_277;
_Bool calling_fun_278;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct CVALUE* come_value_279;
void* __right_value318 = (void*)0;
char* __dec_obj121;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* __dec_obj122;
_Bool __result_obj__141;
memset(&calling_fun_278, 0, sizeof(_Bool));
    left_node_270=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_271=node_compile(left_node_270,info);
    if(    !Value_271    ) {
        __result_obj__139 = (_Bool)0;
        ((left_node_270) ? left_node_270 = come_decrement_ref_count(left_node_270, ((struct sNode*)left_node_270)->finalize, ((struct sNode*)left_node_270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__139;
    }
    else {
    }
    left_value_272=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_273=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_274=node_compile(right_node_273,info);
    if(    !Value_274    ) {
        __result_obj__140 = (_Bool)0;
        ((left_node_270) ? left_node_270 = come_decrement_ref_count(left_node_270, ((struct sNode*)left_node_270)->finalize, ((struct sNode*)left_node_270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_273) ? right_node_273 = come_decrement_ref_count(right_node_273, ((struct sNode*)right_node_273)->finalize, ((struct sNode*)right_node_273)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__140;
    }
    else {
    }
    right_value_275=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_276=(struct sType*)come_increment_ref_count(left_value_272->type);
    fun_name_277="operator_oror";
    if(    self->mQuote    ) {
        calling_fun_278=(_Bool)0;
    }
    else {
        calling_fun_278=operator_overload_fun(type_276,fun_name_277,(struct sNode*)come_increment_ref_count(left_node_270),(struct sNode*)come_increment_ref_count(right_node_273),(struct CVALUE*)come_increment_ref_count(left_value_272),(struct CVALUE*)come_increment_ref_count(right_value_275),(_Bool)0,info);
    }
    if(    !calling_fun_278    ) {
        come_value_279=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1400, "struct CVALUE*"))));
        __dec_obj121=come_value_279->c_value,
        come_value_279->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_272->c_value,right_value_275->c_value));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj122=come_value_279->type,
        come_value_279->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1403, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_279->var=left_value_272->var;
        add_come_last_code(info,"%s",come_value_279->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_279));
        come_call_finalizer(CVALUE_finalize, come_value_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__141 = (_Bool)1;
    ((left_node_270) ? left_node_270 = come_decrement_ref_count(left_node_270, ((struct sNode*)left_node_270)->finalize, ((struct sNode*)left_node_270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_273) ? right_node_273 = come_decrement_ref_count(right_node_273, ((struct sNode*)right_node_273)->finalize, ((struct sNode*)right_node_273)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__141;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sNode* __dec_obj123;
void* __right_value324 = (void*)0;
struct sNode* __dec_obj124;
struct sCommaNode* __result_obj__142;
    ((struct sNodeBase*)(__right_value322=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value322, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj123=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj124=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__142 = (struct sCommaNode*)come_increment_ref_count(self);
    come_call_finalizer(sCommaNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sCommaNode_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __right_value325 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value325=__builtin_string("sCommaNode"))));
    (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_280;
_Bool Value_281;
void* __right_value326 = (void*)0;
struct CVALUE* left_value_282;
struct sNode* right_node_283;
_Bool Value_284;
_Bool __result_obj__144;
void* __right_value327 = (void*)0;
struct CVALUE* right_value_285;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_286;
void* __right_value330 = (void*)0;
char* __dec_obj125;
void* __right_value331 = (void*)0;
struct sType* __dec_obj126;
_Bool __result_obj__145;
    left_node_280=self->mLeft;
    Value_281=node_compile(left_node_280,info);
    if(    !Value_281    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_282=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_283=self->mRight;
    Value_284=node_compile(right_node_283,info);
    if(    !Value_284    ) {
        __result_obj__144 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__144;
    }
    else {
    }
    right_value_285=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_286=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1449, "struct CVALUE*"))));
    __dec_obj125=come_value_286->c_value,
    come_value_286->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_282->c_value,right_value_285->c_value));
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj126=come_value_286->type,
    come_value_286->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_282->type));
    come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_286->var=((void*)0);
    add_come_last_code(info,"%s",come_value_286->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_286));
    __result_obj__145 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__145;
}

static void sCommaNode_finalize(struct sCommaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj127;
void* __right_value334 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj129;
struct sConditionalNode* __result_obj__146;
    ((struct sNodeBase*)(__right_value332=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value332, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj127=self->mValue1,
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj128=self->mValue2,
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj129=self->mValue3,
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__146 = (struct sConditionalNode*)come_increment_ref_count(self);
    come_call_finalizer(sConditionalNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __right_value336 = (void*)0;
char* __result_obj__147;
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value336=__builtin_string("sConditionalNode"))));
    (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_287;
struct sNode* value1_288;
_Bool Value_289;
void* __right_value337 = (void*)0;
struct CVALUE* value1_value_290;
struct sNode* value2_291;
_Bool Value_292;
_Bool __result_obj__148;
void* __right_value338 = (void*)0;
struct CVALUE* value2_value_293;
struct sNode* value3_294;
_Bool Value_295;
_Bool __result_obj__149;
void* __right_value339 = (void*)0;
struct CVALUE* value3_value_296;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct CVALUE* come_value_297;
void* __right_value342 = (void*)0;
char* __dec_obj130;
void* __right_value343 = (void*)0;
struct sType* __dec_obj131;
_Bool __result_obj__150;
    in_conditional_operator_287=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_288=self->mValue1;
    Value_289=node_compile(value1_288,info);
    if(    !Value_289    ) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_290=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value2_291=self->mValue2;
    Value_292=node_compile(value2_291,info);
    if(    !Value_292    ) {
        __result_obj__148 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__148;
    }
    else {
    }
    value2_value_293=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value3_294=self->mValue3;
    Value_295=node_compile(value3_294,info);
    if(    !Value_295    ) {
        __result_obj__149 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, value2_value_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__149;
    }
    else {
    }
    value3_value_296=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_297=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1509, "struct CVALUE*"))));
    __dec_obj130=come_value_297->c_value,
    come_value_297->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_290->c_value,value2_value_293->c_value,value3_value_296->c_value));
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj131=come_value_297->type,
    come_value_297->type=(struct sType*)come_increment_ref_count(sType_clone(value2_value_293->type));
    come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_297->var=((void*)0);
    add_come_last_code(info,"%s",come_value_297->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_297));
    info->in_conditional_operator=in_conditional_operator_287;
    __result_obj__150 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, value1_value_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, value2_value_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, value3_value_296, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_297, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__150;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)    ) {
        ((self->mValue1) ? self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)    ) {
        ((self->mValue2) ? self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)    ) {
        ((self->mValue3) ? self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value351 = (void*)0;
struct sNode* __result_obj__153;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1527, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value345=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1527, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result_obj__153 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value351=_inf_value2)));
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __right_value345, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value351) ? __right_value351 = come_decrement_ref_count(__right_value351, ((struct sNode*)__right_value351)->finalize, ((struct sNode*)__right_value351)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__153) ? __result_obj__153 = come_decrement_ref_count(__result_obj__153, ((struct sNode*)__result_obj__153)->finalize, ((struct sNode*)__result_obj__153)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__153;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
struct sConditionalNode* __result_obj__151;
void* __right_value346 = (void*)0;
struct sConditionalNode* result_298;
void* __right_value347 = (void*)0;
char* __dec_obj132;
void* __right_value348 = (void*)0;
struct sNode* __dec_obj133;
void* __right_value349 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj135;
struct sConditionalNode* __result_obj__152;
    if(    self==(void*)0    ) {
        __result_obj__151 = (void*)0;
        return __result_obj__151;
    }
    result_298=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode*"));
    if(    self!=((void*)0)    ) {
        result_298->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj132=result_298->sname,
        result_298->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sConditionalNode_clone", 5, "char*"));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_298->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)    ) {
        __dec_obj133=result_298->mValue1,
        result_298->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1));
        (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)    ) {
        __dec_obj134=result_298->mValue2,
        result_298->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2));
        (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)    ) {
        __dec_obj135=result_298->mValue3,
        result_298->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3));
        (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__152 = result_298;
    come_call_finalizer(sConditionalNode_finalize, result_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

struct sNode* mult_exp(struct sInfo* info){
void* __right_value352 = (void*)0;
struct sNode* node_299;
int sline_real_300;
void* __right_value353 = (void*)0;
struct sNode* right_301;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj139;
int sline_real_303;
void* __right_value361 = (void*)0;
struct sNode* right_304;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value368 = (void*)0;
struct sNode* __dec_obj143;
int sline_real_306;
void* __right_value369 = (void*)0;
struct sNode* right_307;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value376 = (void*)0;
struct sNode* __dec_obj147;
int sline_real_309;
void* __right_value377 = (void*)0;
struct sNode* right_310;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value380 = (void*)0;
struct sNode* __dec_obj148;
int sline_real_311;
void* __right_value381 = (void*)0;
struct sNode* right_312;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value384 = (void*)0;
struct sNode* __dec_obj149;
int sline_real_313;
void* __right_value385 = (void*)0;
struct sNode* right_314;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj150;
struct sNode* __result_obj__160;
    node_299=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        !node_299->terminated(node_299->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_300=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_301=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_300;
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1547, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value355=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "13op.c", 1547, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_301),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __dec_obj139=node_299,
            node_299=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sMultNode_finalize, __right_value355, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_301) ? right_301 = come_decrement_ref_count(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42        ) {
            info->p++;
            sline_real_303=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_304=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_303;
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1558, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value363=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "13op.c", 1558, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_304),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __dec_obj143=node_299,
            node_299=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sDivNode_finalize, __right_value363, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_304) ? right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==37&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_306=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_307=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_306;
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1569, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value371=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "13op.c", 1569, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_307),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __dec_obj147=node_299,
            node_299=(struct sNode*)come_increment_ref_count(_inf_value5);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sModNode_finalize, __right_value371, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_307) ? right_307 = come_decrement_ref_count(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !node_299->terminated(node_299->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_309=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_310=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_309;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1580, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value379=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "13op.c", 1580, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_310),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __dec_obj148=node_299,
            node_299=(struct sNode*)come_increment_ref_count(_inf_value6);
            (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sMultNode_finalize, __right_value379, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_310) ? right_310 = come_decrement_ref_count(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_311=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_312=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_311;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1591, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value383=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "13op.c", 1591, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_312),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __dec_obj149=node_299,
            node_299=(struct sNode*)come_increment_ref_count(_inf_value7);
            (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sDivNode_finalize, __right_value383, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_312) ? right_312 = come_decrement_ref_count(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_313=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_314=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_313;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1602, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value387=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "13op.c", 1602, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_314),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __dec_obj150=node_299,
            node_299=(struct sNode*)come_increment_ref_count(_inf_value8);
            (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sModNode_finalize, __right_value387, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_314) ? right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__160 = (struct sNode*)come_increment_ref_count(node_299);
    ((node_299) ? node_299 = come_decrement_ref_count(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__160) ? __result_obj__160 = come_decrement_ref_count(__result_obj__160, ((struct sNode*)__result_obj__160)->finalize, ((struct sNode*)__result_obj__160)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__160;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
struct sMultNode* __result_obj__154;
void* __right_value356 = (void*)0;
struct sMultNode* result_302;
void* __right_value357 = (void*)0;
char* __dec_obj136;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj138;
struct sMultNode* __result_obj__155;
    if(    self==(void*)0    ) {
        __result_obj__154 = (void*)0;
        return __result_obj__154;
    }
    result_302=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode*"));
    if(    self!=((void*)0)    ) {
        result_302->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj136=result_302->sname,
        result_302->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMultNode_clone", 5, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_302->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_302->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj137=result_302->mLeft,
        result_302->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj138=result_302->mRight,
        result_302->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__155 = result_302;
    come_call_finalizer(sMultNode_finalize, result_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__155;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
struct sDivNode* __result_obj__156;
void* __right_value364 = (void*)0;
struct sDivNode* result_305;
void* __right_value365 = (void*)0;
char* __dec_obj140;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value367 = (void*)0;
struct sNode* __dec_obj142;
struct sDivNode* __result_obj__157;
    if(    self==(void*)0    ) {
        __result_obj__156 = (void*)0;
        return __result_obj__156;
    }
    result_305=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode*"));
    if(    self!=((void*)0)    ) {
        result_305->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj140=result_305->sname,
        result_305->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDivNode_clone", 5, "char*"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_305->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_305->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj141=result_305->mLeft,
        result_305->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj142=result_305->mRight,
        result_305->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__157 = result_305;
    come_call_finalizer(sDivNode_finalize, result_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__157;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
struct sModNode* __result_obj__158;
void* __right_value372 = (void*)0;
struct sModNode* result_308;
void* __right_value373 = (void*)0;
char* __dec_obj144;
void* __right_value374 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj146;
struct sModNode* __result_obj__159;
    if(    self==(void*)0    ) {
        __result_obj__158 = (void*)0;
        return __result_obj__158;
    }
    result_308=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode*"));
    if(    self!=((void*)0)    ) {
        result_308->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj144=result_308->sname,
        result_308->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sModNode_clone", 5, "char*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_308->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_308->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj145=result_308->mLeft,
        result_308->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj146=result_308->mRight,
        result_308->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__159 = result_308;
    come_call_finalizer(sModNode_finalize, result_308, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

struct sNode* add_exp(struct sInfo* info){
void* __right_value389 = (void*)0;
struct sNode* node_315;
int sline_real_316;
void* __right_value390 = (void*)0;
struct sNode* right_317;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value397 = (void*)0;
struct sNode* __dec_obj154;
int sline_real_319;
void* __right_value398 = (void*)0;
struct sNode* right_320;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value405 = (void*)0;
struct sNode* __dec_obj158;
int sline_real_322;
void* __right_value406 = (void*)0;
struct sNode* right_323;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value409 = (void*)0;
struct sNode* __dec_obj159;
int sline_real_324;
void* __right_value410 = (void*)0;
struct sNode* right_325;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj160;
struct sNode* __result_obj__165;
    node_315=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43        ) {
            info->p++;
            sline_real_316=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_317=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_316;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1631, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value392=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "13op.c", 1631, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __dec_obj154=node_315,
            node_315=(struct sNode*)come_increment_ref_count(_inf_value9);
            (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAddNode_finalize, __right_value392, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_317) ? right_317 = come_decrement_ref_count(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62        ) {
            info->p++;
            sline_real_319=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_320=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_319;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1643, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value400=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "13op.c", 1643, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_320),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __dec_obj158=node_315,
            node_315=(struct sNode*)come_increment_ref_count(_inf_value10);
            (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSubNode_finalize, __right_value400, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_320) ? right_320 = come_decrement_ref_count(right_320, ((struct sNode*)right_320)->finalize, ((struct sNode*)right_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43        ) {
            info->p+=2;
            sline_real_322=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_323=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_322;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1655, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value408=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "13op.c", 1655, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_323),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __dec_obj159=node_315,
            node_315=(struct sNode*)come_increment_ref_count(_inf_value11);
            (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAddNode_finalize, __right_value408, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_323) ? right_323 = come_decrement_ref_count(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62        ) {
            info->p+=2;
            sline_real_324=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_325=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_324;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1667, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value412=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "13op.c", 1667, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_325),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __dec_obj160=node_315,
            node_315=(struct sNode*)come_increment_ref_count(_inf_value12);
            (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSubNode_finalize, __right_value412, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_325) ? right_325 = come_decrement_ref_count(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__165 = (struct sNode*)come_increment_ref_count(node_315);
    ((node_315) ? node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__165) ? __result_obj__165 = come_decrement_ref_count(__result_obj__165, ((struct sNode*)__result_obj__165)->finalize, ((struct sNode*)__result_obj__165)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__165;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
struct sAddNode* __result_obj__161;
void* __right_value393 = (void*)0;
struct sAddNode* result_318;
void* __right_value394 = (void*)0;
char* __dec_obj151;
void* __right_value395 = (void*)0;
struct sNode* __dec_obj152;
void* __right_value396 = (void*)0;
struct sNode* __dec_obj153;
struct sAddNode* __result_obj__162;
    if(    self==(void*)0    ) {
        __result_obj__161 = (void*)0;
        return __result_obj__161;
    }
    result_318=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode*"));
    if(    self!=((void*)0)    ) {
        result_318->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj151=result_318->sname,
        result_318->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAddNode_clone", 5, "char*"));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_318->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj152=result_318->mLeft,
        result_318->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj153=result_318->mRight,
        result_318->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_318->mQuote=self->mQuote;
    }
    __result_obj__162 = result_318;
    come_call_finalizer(sAddNode_finalize, result_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
struct sSubNode* __result_obj__163;
void* __right_value401 = (void*)0;
struct sSubNode* result_321;
void* __right_value402 = (void*)0;
char* __dec_obj155;
void* __right_value403 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value404 = (void*)0;
struct sNode* __dec_obj157;
struct sSubNode* __result_obj__164;
    if(    self==(void*)0    ) {
        __result_obj__163 = (void*)0;
        return __result_obj__163;
    }
    result_321=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode*"));
    if(    self!=((void*)0)    ) {
        result_321->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj155=result_321->sname,
        result_321->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSubNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_321->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj156=result_321->mLeft,
        result_321->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj157=result_321->mRight,
        result_321->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_321->mQuote=self->mQuote;
    }
    __result_obj__164 = result_321;
    come_call_finalizer(sSubNode_finalize, result_321, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__164;
}

struct sNode* shift_exp(struct sInfo* info){
void* __right_value414 = (void*)0;
struct sNode* node_326;
int sline_real_327;
void* __right_value415 = (void*)0;
struct sNode* right_328;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj164;
int sline_real_330;
void* __right_value423 = (void*)0;
struct sNode* right_331;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value430 = (void*)0;
struct sNode* __dec_obj168;
int sline_real_333;
void* __right_value431 = (void*)0;
struct sNode* right_334;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj169;
int sline_real_335;
void* __right_value435 = (void*)0;
struct sNode* right_336;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj170;
struct sNode* __result_obj__170;
    parse_sharp_v5(info);
    node_326=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_327=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_328=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_327;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1697, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value417=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1697, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_328),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __dec_obj164=node_326,
            node_326=(struct sNode*)come_increment_ref_count(_inf_value13);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value417, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_328) ? right_328 = come_decrement_ref_count(right_328, ((struct sNode*)right_328)->finalize, ((struct sNode*)right_328)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62        ) {
            info->p+=2;
            sline_real_330=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_331=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_330;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1708, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value425=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1708, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_331),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __dec_obj168=node_326,
            node_326=(struct sNode*)come_increment_ref_count(_inf_value14);
            (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value425, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_331) ? right_331 = come_decrement_ref_count(right_331, ((struct sNode*)right_331)->finalize, ((struct sNode*)right_331)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61        ) {
            info->p+=3;
            sline_real_333=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_334=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_333;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1719, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value433=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1719, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_334),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __dec_obj169=node_326,
            node_326=(struct sNode*)come_increment_ref_count(_inf_value15);
            (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value433, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_334) ? right_334 = come_decrement_ref_count(right_334, ((struct sNode*)right_334)->finalize, ((struct sNode*)right_334)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62        ) {
            info->p+=3;
            sline_real_335=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_336=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_335;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1730, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value437=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1730, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_336),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __dec_obj170=node_326,
            node_326=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value437, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_336) ? right_336 = come_decrement_ref_count(right_336, ((struct sNode*)right_336)->finalize, ((struct sNode*)right_336)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__170 = (struct sNode*)come_increment_ref_count(node_326);
    ((node_326) ? node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__170) ? __result_obj__170 = come_decrement_ref_count(__result_obj__170, ((struct sNode*)__result_obj__170)->finalize, ((struct sNode*)__result_obj__170)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__170;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
struct sLShiftNode* __result_obj__166;
void* __right_value418 = (void*)0;
struct sLShiftNode* result_329;
void* __right_value419 = (void*)0;
char* __dec_obj161;
void* __right_value420 = (void*)0;
struct sNode* __dec_obj162;
void* __right_value421 = (void*)0;
struct sNode* __dec_obj163;
struct sLShiftNode* __result_obj__167;
    if(    self==(void*)0    ) {
        __result_obj__166 = (void*)0;
        return __result_obj__166;
    }
    result_329=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode*"));
    if(    self!=((void*)0)    ) {
        result_329->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj161=result_329->sname,
        result_329->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLShiftNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_329->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_329->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj162=result_329->mLeft,
        result_329->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj163=result_329->mRight,
        result_329->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__167 = result_329;
    come_call_finalizer(sLShiftNode_finalize, result_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
struct sRShiftNode* __result_obj__168;
void* __right_value426 = (void*)0;
struct sRShiftNode* result_332;
void* __right_value427 = (void*)0;
char* __dec_obj165;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj166;
void* __right_value429 = (void*)0;
struct sNode* __dec_obj167;
struct sRShiftNode* __result_obj__169;
    if(    self==(void*)0    ) {
        __result_obj__168 = (void*)0;
        return __result_obj__168;
    }
    result_332=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode*"));
    if(    self!=((void*)0)    ) {
        result_332->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj165=result_332->sname,
        result_332->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRShiftNode_clone", 5, "char*"));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_332->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_332->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj166=result_332->mLeft,
        result_332->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj167=result_332->mRight,
        result_332->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__169 = result_332;
    come_call_finalizer(sRShiftNode_finalize, result_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __right_value439 = (void*)0;
struct sNode* node_337;
int sline_real_338;
void* __right_value440 = (void*)0;
struct sNode* right_339;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value447 = (void*)0;
struct sNode* __dec_obj174;
int sline_real_341;
void* __right_value448 = (void*)0;
struct sNode* right_342;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value455 = (void*)0;
struct sNode* __dec_obj178;
int sline_real_344;
void* __right_value456 = (void*)0;
struct sNode* right_345;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj182;
int sline_real_347;
void* __right_value464 = (void*)0;
struct sNode* right_348;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj186;
int sline_real_350;
void* __right_value472 = (void*)0;
struct sNode* right_351;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value475 = (void*)0;
struct sNode* __dec_obj187;
int sline_real_352;
void* __right_value476 = (void*)0;
struct sNode* right_353;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value479 = (void*)0;
struct sNode* __dec_obj188;
int sline_real_354;
void* __right_value480 = (void*)0;
struct sNode* right_355;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj189;
int sline_real_356;
void* __right_value484 = (void*)0;
struct sNode* right_357;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value487 = (void*)0;
struct sNode* __dec_obj190;
struct sNode* __result_obj__179;
    parse_sharp_v5(info);
    node_337=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==62&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_338=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_339=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_338;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1760, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value442=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1760, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_339),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __dec_obj174=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value17);
            (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value442, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_339) ? right_339 = come_decrement_ref_count(right_339, ((struct sNode*)right_339)->finalize, ((struct sNode*)right_339)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_341=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_342=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_341;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1771, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value450=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1771, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_342),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __dec_obj178=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value18);
            (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value450, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_342) ? right_342 = come_decrement_ref_count(right_342, ((struct sNode*)right_342)->finalize, ((struct sNode*)right_342)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)!=62        ) {
            info->p++;
            sline_real_344=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_345=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_344;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1782, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value458=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "13op.c", 1782, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_345),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __dec_obj182=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value19);
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtNode_finalize, __right_value458, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_345) ? right_345 = come_decrement_ref_count(right_345, ((struct sNode*)right_345)->finalize, ((struct sNode*)right_345)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45        ) {
            info->p++;
            sline_real_347=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_348=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_347;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1793, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value466=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 1793, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_348),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __dec_obj186=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value20);
            (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtNode_finalize, __right_value466, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_348) ? right_348 = come_decrement_ref_count(right_348, ((struct sNode*)right_348)->finalize, ((struct sNode*)right_348)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_350=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_351=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_350;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1804, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value474=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1804, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_351),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __dec_obj187=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value21);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value474, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_351) ? right_351 = come_decrement_ref_count(right_351, ((struct sNode*)right_351)->finalize, ((struct sNode*)right_351)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_352=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_353=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_352;
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1815, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value478=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1815, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_353),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __dec_obj188=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value22);
            (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value478, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_353) ? right_353 = come_decrement_ref_count(right_353, ((struct sNode*)right_353)->finalize, ((struct sNode*)right_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62        ) {
            info->p+=2;
            sline_real_354=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_355=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_354;
            _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1826, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value482=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "13op.c", 1826, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_355),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __dec_obj189=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value23);
            (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtNode_finalize, __right_value482, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_355) ? right_355 = come_decrement_ref_count(right_355, ((struct sNode*)right_355)->finalize, ((struct sNode*)right_355)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45        ) {
            info->p+=2;
            sline_real_356=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_357=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_356;
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1837, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value486=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 1837, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_337),(struct sNode*)come_increment_ref_count(right_357),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __dec_obj190=node_337,
            node_337=(struct sNode*)come_increment_ref_count(_inf_value24);
            (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtNode_finalize, __right_value486, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_357) ? right_357 = come_decrement_ref_count(right_357, ((struct sNode*)right_357)->finalize, ((struct sNode*)right_357)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__179 = (struct sNode*)come_increment_ref_count(node_337);
    ((node_337) ? node_337 = come_decrement_ref_count(node_337, ((struct sNode*)node_337)->finalize, ((struct sNode*)node_337)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__179;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
struct sGtEqNode* __result_obj__171;
void* __right_value443 = (void*)0;
struct sGtEqNode* result_340;
void* __right_value444 = (void*)0;
char* __dec_obj171;
void* __right_value445 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value446 = (void*)0;
struct sNode* __dec_obj173;
struct sGtEqNode* __result_obj__172;
    if(    self==(void*)0    ) {
        __result_obj__171 = (void*)0;
        return __result_obj__171;
    }
    result_340=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode*"));
    if(    self!=((void*)0)    ) {
        result_340->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj171=result_340->sname,
        result_340->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtEqNode_clone", 5, "char*"));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_340->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_340->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj172=result_340->mLeft,
        result_340->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj173=result_340->mRight,
        result_340->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__172 = result_340;
    come_call_finalizer(sGtEqNode_finalize, result_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__172;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
struct sLtEqNode* __result_obj__173;
void* __right_value451 = (void*)0;
struct sLtEqNode* result_343;
void* __right_value452 = (void*)0;
char* __dec_obj175;
void* __right_value453 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value454 = (void*)0;
struct sNode* __dec_obj177;
struct sLtEqNode* __result_obj__174;
    if(    self==(void*)0    ) {
        __result_obj__173 = (void*)0;
        return __result_obj__173;
    }
    result_343=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode*"));
    if(    self!=((void*)0)    ) {
        result_343->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj175=result_343->sname,
        result_343->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtEqNode_clone", 5, "char*"));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_343->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_343->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj176=result_343->mLeft,
        result_343->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj177=result_343->mRight,
        result_343->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__174 = result_343;
    come_call_finalizer(sLtEqNode_finalize, result_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
struct sGtNode* __result_obj__175;
void* __right_value459 = (void*)0;
struct sGtNode* result_346;
void* __right_value460 = (void*)0;
char* __dec_obj179;
void* __right_value461 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value462 = (void*)0;
struct sNode* __dec_obj181;
struct sGtNode* __result_obj__176;
    if(    self==(void*)0    ) {
        __result_obj__175 = (void*)0;
        return __result_obj__175;
    }
    result_346=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode*"));
    if(    self!=((void*)0)    ) {
        result_346->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj179=result_346->sname,
        result_346->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtNode_clone", 5, "char*"));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_346->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_346->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj180=result_346->mLeft,
        result_346->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj181=result_346->mRight,
        result_346->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__176 = result_346;
    come_call_finalizer(sGtNode_finalize, result_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__176;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
struct sLtNode* __result_obj__177;
void* __right_value467 = (void*)0;
struct sLtNode* result_349;
void* __right_value468 = (void*)0;
char* __dec_obj183;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj185;
struct sLtNode* __result_obj__178;
    if(    self==(void*)0    ) {
        __result_obj__177 = (void*)0;
        return __result_obj__177;
    }
    result_349=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode*"));
    if(    self!=((void*)0)    ) {
        result_349->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj183=result_349->sname,
        result_349->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtNode_clone", 5, "char*"));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_349->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_349->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj184=result_349->mLeft,
        result_349->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj185=result_349->mRight,
        result_349->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__178 = result_349;
    come_call_finalizer(sLtNode_finalize, result_349, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__178;
}

struct sNode* eq_exp(struct sInfo* info){
void* __right_value488 = (void*)0;
struct sNode* node_358;
int sline_real_359;
void* __right_value489 = (void*)0;
struct sNode* right_360;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value496 = (void*)0;
struct sNode* __dec_obj194;
int sline_real_362;
void* __right_value497 = (void*)0;
struct sNode* right_363;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj198;
int sline_real_365;
void* __right_value505 = (void*)0;
struct sNode* right_366;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj202;
int sline_real_368;
void* __right_value513 = (void*)0;
struct sNode* right_369;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value520 = (void*)0;
struct sNode* __dec_obj206;
int sline_real_371;
void* __right_value521 = (void*)0;
struct sNode* right_372;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value524 = (void*)0;
struct sNode* __dec_obj207;
int sline_real_373;
void* __right_value525 = (void*)0;
struct sNode* right_374;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value528 = (void*)0;
struct sNode* __dec_obj208;
int sline_real_375;
void* __right_value529 = (void*)0;
struct sNode* right_376;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj209;
int sline_real_377;
void* __right_value533 = (void*)0;
struct sNode* right_378;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj210;
struct sNode* __result_obj__188;
    parse_sharp_v5(info);
    node_358=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_359=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_360=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_359;
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1867, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value491=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "13op.c", 1867, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_360),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __dec_obj194=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value25);
            (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value491, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_360) ? right_360 = come_decrement_ref_count(right_360, ((struct sNode*)right_360)->finalize, ((struct sNode*)right_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==61&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_362=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_363=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_362;
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1878, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value499=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "13op.c", 1878, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_363),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __dec_obj198=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value26);
            (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEqNode_finalize, __right_value499, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_363) ? right_363 = come_decrement_ref_count(right_363, ((struct sNode*)right_363)->finalize, ((struct sNode*)right_363)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_365=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_366=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_365;
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1889, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value507=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1889, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_366),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __dec_obj202=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value27);
            (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value507, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_366) ? right_366 = come_decrement_ref_count(right_366, ((struct sNode*)right_366)->finalize, ((struct sNode*)right_366)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_368=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_369=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_368;
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1900, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value515=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1900, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_369),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __dec_obj206=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value28);
            (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value515, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_369) ? right_369 = come_decrement_ref_count(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61        ) {
            info->p+=4;
            sline_real_371=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_372=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_371;
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1911, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value523=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "13op.c", 1911, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_372),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __dec_obj207=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value29);
            (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value523, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_372) ? right_372 = come_decrement_ref_count(right_372, ((struct sNode*)right_372)->finalize, ((struct sNode*)right_372)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_373=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_374=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_373;
            _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1922, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value527=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "13op.c", 1922, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_374),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __dec_obj208=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value30);
            (__dec_obj208 ? __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEqNode_finalize, __right_value527, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_374) ? right_374 = come_decrement_ref_count(right_374, ((struct sNode*)right_374)->finalize, ((struct sNode*)right_374)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61        ) {
            info->p+=4;
            sline_real_375=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_376=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_375;
            _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1933, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value531=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1933, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_376),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __dec_obj209=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value31);
            (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value531, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_376) ? right_376 = come_decrement_ref_count(right_376, ((struct sNode*)right_376)->finalize, ((struct sNode*)right_376)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_377=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_378=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_377;
            _inf_value32=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1944, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value535=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1944, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_378),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __dec_obj210=node_358,
            node_358=(struct sNode*)come_increment_ref_count(_inf_value32);
            (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value535, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_378) ? right_378 = come_decrement_ref_count(right_378, ((struct sNode*)right_378)->finalize, ((struct sNode*)right_378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__188 = (struct sNode*)come_increment_ref_count(node_358);
    ((node_358) ? node_358 = come_decrement_ref_count(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__188) ? __result_obj__188 = come_decrement_ref_count(__result_obj__188, ((struct sNode*)__result_obj__188)->finalize, ((struct sNode*)__result_obj__188)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__188;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
struct sEq2Node* __result_obj__180;
void* __right_value492 = (void*)0;
struct sEq2Node* result_361;
void* __right_value493 = (void*)0;
char* __dec_obj191;
void* __right_value494 = (void*)0;
struct sNode* __dec_obj192;
void* __right_value495 = (void*)0;
struct sNode* __dec_obj193;
struct sEq2Node* __result_obj__181;
    if(    self==(void*)0    ) {
        __result_obj__180 = (void*)0;
        return __result_obj__180;
    }
    result_361=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node*"));
    if(    self!=((void*)0)    ) {
        result_361->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj191=result_361->sname,
        result_361->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEq2Node_clone", 5, "char*"));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_361->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_361->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj192=result_361->mLeft,
        result_361->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj193=result_361->mRight,
        result_361->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__181 = result_361;
    come_call_finalizer(sEq2Node_finalize, result_361, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__181;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
struct sEqNode* __result_obj__182;
void* __right_value500 = (void*)0;
struct sEqNode* result_364;
void* __right_value501 = (void*)0;
char* __dec_obj195;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value503 = (void*)0;
struct sNode* __dec_obj197;
struct sEqNode* __result_obj__183;
    if(    self==(void*)0    ) {
        __result_obj__182 = (void*)0;
        return __result_obj__182;
    }
    result_364=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode*"));
    if(    self!=((void*)0)    ) {
        result_364->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj195=result_364->sname,
        result_364->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEqNode_clone", 5, "char*"));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_364->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_364->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj196=result_364->mLeft,
        result_364->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj197=result_364->mRight,
        result_364->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__183 = result_364;
    come_call_finalizer(sEqNode_finalize, result_364, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__183;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
struct sNotEq2Node* __result_obj__184;
void* __right_value508 = (void*)0;
struct sNotEq2Node* result_367;
void* __right_value509 = (void*)0;
char* __dec_obj199;
void* __right_value510 = (void*)0;
struct sNode* __dec_obj200;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj201;
struct sNotEq2Node* __result_obj__185;
    if(    self==(void*)0    ) {
        __result_obj__184 = (void*)0;
        return __result_obj__184;
    }
    result_367=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node*"));
    if(    self!=((void*)0)    ) {
        result_367->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj199=result_367->sname,
        result_367->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEq2Node_clone", 5, "char*"));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_367->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_367->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj200=result_367->mLeft,
        result_367->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj201=result_367->mRight,
        result_367->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__185 = result_367;
    come_call_finalizer(sNotEq2Node_finalize, result_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__185;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
struct sNotEqNode* __result_obj__186;
void* __right_value516 = (void*)0;
struct sNotEqNode* result_370;
void* __right_value517 = (void*)0;
char* __dec_obj203;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value519 = (void*)0;
struct sNode* __dec_obj205;
struct sNotEqNode* __result_obj__187;
    if(    self==(void*)0    ) {
        __result_obj__186 = (void*)0;
        return __result_obj__186;
    }
    result_370=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode*"));
    if(    self!=((void*)0)    ) {
        result_370->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj203=result_370->sname,
        result_370->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEqNode_clone", 5, "char*"));
        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_370->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_370->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj204=result_370->mLeft,
        result_370->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj205=result_370->mRight,
        result_370->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__187 = result_370;
    come_call_finalizer(sNotEqNode_finalize, result_370, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__187;
}

struct sNode* and_exp(struct sInfo* info){
void* __right_value537 = (void*)0;
struct sNode* node_379;
int sline_real_380;
void* __right_value538 = (void*)0;
struct sNode* right_381;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value545 = (void*)0;
struct sNode* __dec_obj214;
int sline_real_383;
void* __right_value546 = (void*)0;
struct sNode* right_384;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value549 = (void*)0;
struct sNode* __dec_obj215;
struct sNode* __result_obj__191;
    parse_sharp_v5(info);
    node_379=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        !node_379->terminated(node_379->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_380=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_381=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_380;
            _inf_value33=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1974, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value540=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "13op.c", 1974, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_379),(struct sNode*)come_increment_ref_count(right_381),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __dec_obj214=node_379,
            node_379=(struct sNode*)come_increment_ref_count(_inf_value33);
            (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndNode_finalize, __right_value540, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_381) ? right_381 = come_decrement_ref_count(right_381, ((struct sNode*)right_381)->finalize, ((struct sNode*)right_381)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !node_379->terminated(node_379->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_383=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_384=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_383;
            _inf_value34=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1985, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value548=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "13op.c", 1985, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_379),(struct sNode*)come_increment_ref_count(right_384),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __dec_obj215=node_379,
            node_379=(struct sNode*)come_increment_ref_count(_inf_value34);
            (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndNode_finalize, __right_value548, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_384) ? right_384 = come_decrement_ref_count(right_384, ((struct sNode*)right_384)->finalize, ((struct sNode*)right_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__191 = (struct sNode*)come_increment_ref_count(node_379);
    ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__191) ? __result_obj__191 = come_decrement_ref_count(__result_obj__191, ((struct sNode*)__result_obj__191)->finalize, ((struct sNode*)__result_obj__191)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__191;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
struct sAndNode* __result_obj__189;
void* __right_value541 = (void*)0;
struct sAndNode* result_382;
void* __right_value542 = (void*)0;
char* __dec_obj211;
void* __right_value543 = (void*)0;
struct sNode* __dec_obj212;
void* __right_value544 = (void*)0;
struct sNode* __dec_obj213;
struct sAndNode* __result_obj__190;
    if(    self==(void*)0    ) {
        __result_obj__189 = (void*)0;
        return __result_obj__189;
    }
    result_382=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode*"));
    if(    self!=((void*)0)    ) {
        result_382->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj211=result_382->sname,
        result_382->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndNode_clone", 5, "char*"));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_382->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_382->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj212=result_382->mLeft,
        result_382->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj213=result_382->mRight,
        result_382->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__190 = result_382;
    come_call_finalizer(sAndNode_finalize, result_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__190;
}

struct sNode* xor_exp(struct sInfo* info){
void* __right_value550 = (void*)0;
struct sNode* node_385;
int sline_real_386;
void* __right_value551 = (void*)0;
struct sNode* right_387;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value558 = (void*)0;
struct sNode* __dec_obj219;
int sline_real_389;
void* __right_value559 = (void*)0;
struct sNode* right_390;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj220;
struct sNode* __result_obj__194;
    parse_sharp_v5(info);
    node_385=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==94&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_386=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_387=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_386;
            _inf_value35=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2015, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value553=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "13op.c", 2015, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_385),(struct sNode*)come_increment_ref_count(right_387),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __dec_obj219=node_385,
            node_385=(struct sNode*)come_increment_ref_count(_inf_value35);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value553, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_387) ? right_387 = come_decrement_ref_count(right_387, ((struct sNode*)right_387)->finalize, ((struct sNode*)right_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_389=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_390=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_389;
            _inf_value36=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2026, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value561=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "13op.c", 2026, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_385),(struct sNode*)come_increment_ref_count(right_390),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __dec_obj220=node_385,
            node_385=(struct sNode*)come_increment_ref_count(_inf_value36);
            (__dec_obj220 ? __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value561, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_390) ? right_390 = come_decrement_ref_count(right_390, ((struct sNode*)right_390)->finalize, ((struct sNode*)right_390)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__194 = (struct sNode*)come_increment_ref_count(node_385);
    ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__194) ? __result_obj__194 = come_decrement_ref_count(__result_obj__194, ((struct sNode*)__result_obj__194)->finalize, ((struct sNode*)__result_obj__194)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__194;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
struct sXOrNode* __result_obj__192;
void* __right_value554 = (void*)0;
struct sXOrNode* result_388;
void* __right_value555 = (void*)0;
char* __dec_obj216;
void* __right_value556 = (void*)0;
struct sNode* __dec_obj217;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj218;
struct sXOrNode* __result_obj__193;
    if(    self==(void*)0    ) {
        __result_obj__192 = (void*)0;
        return __result_obj__192;
    }
    result_388=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode*"));
    if(    self!=((void*)0)    ) {
        result_388->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj216=result_388->sname,
        result_388->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sXOrNode_clone", 5, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_388->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_388->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj217=result_388->mLeft,
        result_388->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj218=result_388->mRight,
        result_388->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__193 = result_388;
    come_call_finalizer(sXOrNode_finalize, result_388, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__193;
}

struct sNode* or_exp(struct sInfo* info){
void* __right_value563 = (void*)0;
struct sNode* node_391;
int sline_real_392;
void* __right_value564 = (void*)0;
struct sNode* right_393;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value571 = (void*)0;
struct sNode* __dec_obj224;
int sline_real_395;
void* __right_value572 = (void*)0;
struct sNode* right_396;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value575 = (void*)0;
struct sNode* __dec_obj225;
struct sNode* __result_obj__197;
    parse_sharp_v5(info);
    node_391=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124        ) {
            info->p++;
            sline_real_392=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_393=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_392;
            _inf_value37=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2056, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value566=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "13op.c", 2056, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_391),(struct sNode*)come_increment_ref_count(right_393),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __dec_obj224=node_391,
            node_391=(struct sNode*)come_increment_ref_count(_inf_value37);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrNode_finalize, __right_value566, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_393) ? right_393 = come_decrement_ref_count(right_393, ((struct sNode*)right_393)->finalize, ((struct sNode*)right_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124        ) {
            info->p+=2;
            sline_real_395=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_396=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_395;
            _inf_value38=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2067, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value574=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "13op.c", 2067, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_391),(struct sNode*)come_increment_ref_count(right_396),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __dec_obj225=node_391,
            node_391=(struct sNode*)come_increment_ref_count(_inf_value38);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrNode_finalize, __right_value574, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_396) ? right_396 = come_decrement_ref_count(right_396, ((struct sNode*)right_396)->finalize, ((struct sNode*)right_396)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__197 = (struct sNode*)come_increment_ref_count(node_391);
    ((node_391) ? node_391 = come_decrement_ref_count(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__197) ? __result_obj__197 = come_decrement_ref_count(__result_obj__197, ((struct sNode*)__result_obj__197)->finalize, ((struct sNode*)__result_obj__197)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__197;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
struct sOrNode* __result_obj__195;
void* __right_value567 = (void*)0;
struct sOrNode* result_394;
void* __right_value568 = (void*)0;
char* __dec_obj221;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj222;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj223;
struct sOrNode* __result_obj__196;
    if(    self==(void*)0    ) {
        __result_obj__195 = (void*)0;
        return __result_obj__195;
    }
    result_394=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode*"));
    if(    self!=((void*)0)    ) {
        result_394->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj221=result_394->sname,
        result_394->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrNode_clone", 5, "char*"));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_394->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_394->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj222=result_394->mLeft,
        result_394->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj223=result_394->mRight,
        result_394->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__196 = result_394;
    come_call_finalizer(sOrNode_finalize, result_394, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__196;
}

struct sNode* andand_exp(struct sInfo* info){
void* __right_value576 = (void*)0;
struct sNode* node_397;
int sline_real_398;
void* __right_value577 = (void*)0;
struct sNode* right_399;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value584 = (void*)0;
struct sNode* __dec_obj229;
int sline_real_401;
void* __right_value585 = (void*)0;
struct sNode* right_402;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj230;
struct sNode* __result_obj__200;
    parse_sharp_v5(info);
    node_397=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==38&&*(info->p+1)==38        ) {
            info->p+=2;
            sline_real_398=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_399=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_398;
            _inf_value39=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2097, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value579=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2097, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_397),(struct sNode*)come_increment_ref_count(right_399),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __dec_obj229=node_397,
            node_397=(struct sNode*)come_increment_ref_count(_inf_value39);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value579, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_399) ? right_399 = come_decrement_ref_count(right_399, ((struct sNode*)right_399)->finalize, ((struct sNode*)right_399)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38        ) {
            info->p+=3;
            sline_real_401=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_402=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_401;
            _inf_value40=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2108, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value587=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2108, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_397),(struct sNode*)come_increment_ref_count(right_402),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __dec_obj230=node_397,
            node_397=(struct sNode*)come_increment_ref_count(_inf_value40);
            (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value587, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_402) ? right_402 = come_decrement_ref_count(right_402, ((struct sNode*)right_402)->finalize, ((struct sNode*)right_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__200 = (struct sNode*)come_increment_ref_count(node_397);
    ((node_397) ? node_397 = come_decrement_ref_count(node_397, ((struct sNode*)node_397)->finalize, ((struct sNode*)node_397)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__200) ? __result_obj__200 = come_decrement_ref_count(__result_obj__200, ((struct sNode*)__result_obj__200)->finalize, ((struct sNode*)__result_obj__200)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__200;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
struct sAndAndNode* __result_obj__198;
void* __right_value580 = (void*)0;
struct sAndAndNode* result_400;
void* __right_value581 = (void*)0;
char* __dec_obj226;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj228;
struct sAndAndNode* __result_obj__199;
    if(    self==(void*)0    ) {
        __result_obj__198 = (void*)0;
        return __result_obj__198;
    }
    result_400=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode*"));
    if(    self!=((void*)0)    ) {
        result_400->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj226=result_400->sname,
        result_400->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndAndNode_clone", 5, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_400->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_400->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj227=result_400->mLeft,
        result_400->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj228=result_400->mRight,
        result_400->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__199 = result_400;
    come_call_finalizer(sAndAndNode_finalize, result_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__199;
}

struct sNode* oror_exp(struct sInfo* info){
void* __right_value589 = (void*)0;
struct sNode* node_403;
int sline_real_404;
void* __right_value590 = (void*)0;
struct sNode* right_405;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value597 = (void*)0;
struct sNode* __dec_obj234;
int sline_real_407;
void* __right_value598 = (void*)0;
struct sNode* right_408;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj235;
struct sNode* __result_obj__203;
    parse_sharp_v5(info);
    node_403=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==124&&*(info->p+1)==124        ) {
            info->p+=2;
            sline_real_404=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_405=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_404;
            _inf_value41=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2138, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value592=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2138, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_403),(struct sNode*)come_increment_ref_count(right_405),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __dec_obj234=node_403,
            node_403=(struct sNode*)come_increment_ref_count(_inf_value41);
            (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value592, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_405) ? right_405 = come_decrement_ref_count(right_405, ((struct sNode*)right_405)->finalize, ((struct sNode*)right_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124        ) {
            info->p+=3;
            sline_real_407=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_408=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_407;
            _inf_value42=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2149, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value600=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2149, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_403),(struct sNode*)come_increment_ref_count(right_408),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __dec_obj235=node_403,
            node_403=(struct sNode*)come_increment_ref_count(_inf_value42);
            (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value600, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_408) ? right_408 = come_decrement_ref_count(right_408, ((struct sNode*)right_408)->finalize, ((struct sNode*)right_408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__203 = (struct sNode*)come_increment_ref_count(node_403);
    ((node_403) ? node_403 = come_decrement_ref_count(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__203) ? __result_obj__203 = come_decrement_ref_count(__result_obj__203, ((struct sNode*)__result_obj__203)->finalize, ((struct sNode*)__result_obj__203)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__203;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
struct sOrOrNode* __result_obj__201;
void* __right_value593 = (void*)0;
struct sOrOrNode* result_406;
void* __right_value594 = (void*)0;
char* __dec_obj231;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj232;
void* __right_value596 = (void*)0;
struct sNode* __dec_obj233;
struct sOrOrNode* __result_obj__202;
    if(    self==(void*)0    ) {
        __result_obj__201 = (void*)0;
        return __result_obj__201;
    }
    result_406=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode*"));
    if(    self!=((void*)0)    ) {
        result_406->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj231=result_406->sname,
        result_406->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrOrNode_clone", 5, "char*"));
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_406->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_406->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj232=result_406->mLeft,
        result_406->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj233=result_406->mRight,
        result_406->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__202 = result_406;
    come_call_finalizer(sOrOrNode_finalize, result_406, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__202;
}

struct sNode* comma_exp(struct sInfo* info){
void* __right_value602 = (void*)0;
struct sNode* node_409;
int sline_real_410;
void* __right_value603 = (void*)0;
struct sNode* node2_411;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value610 = (void*)0;
struct sNode* __dec_obj239;
struct sNode* __result_obj__206;
    parse_sharp_v5(info);
    node_409=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        !info->no_comma&&*info->p==44        ) {
            info->p++;
            sline_real_410=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_411=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_410;
            _inf_value43=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2179, "struct sNode");
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value605=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc_v2(1, sizeof(struct sCommaNode)*(1), "13op.c", 2179, "struct sCommaNode*")),(struct sNode*)come_increment_ref_count(node_409),(struct sNode*)come_increment_ref_count(node2_411),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __dec_obj239=node_409,
            node_409=(struct sNode*)come_increment_ref_count(_inf_value43);
            (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sCommaNode_finalize, __right_value605, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((node2_411) ? node2_411 = come_decrement_ref_count(node2_411, ((struct sNode*)node2_411)->finalize, ((struct sNode*)node2_411)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__206 = (struct sNode*)come_increment_ref_count(node_409);
    ((node_409) ? node_409 = come_decrement_ref_count(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__206) ? __result_obj__206 = come_decrement_ref_count(__result_obj__206, ((struct sNode*)__result_obj__206)->finalize, ((struct sNode*)__result_obj__206)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__206;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
struct sCommaNode* __result_obj__204;
void* __right_value606 = (void*)0;
struct sCommaNode* result_412;
void* __right_value607 = (void*)0;
char* __dec_obj236;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj237;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj238;
struct sCommaNode* __result_obj__205;
    if(    self==(void*)0    ) {
        __result_obj__204 = (void*)0;
        return __result_obj__204;
    }
    result_412=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc_v2(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode*"));
    if(    self!=((void*)0)    ) {
        result_412->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj236=result_412->sname,
        result_412->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCommaNode_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_412->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj237=result_412->mLeft,
        result_412->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj238=result_412->mRight,
        result_412->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__205 = result_412;
    come_call_finalizer(sCommaNode_finalize, result_412, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__205;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __right_value611 = (void*)0;
struct sNode* node_413;
int sline_real_414;
struct sNode* value1_415;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj240;
_Bool no_label_416;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj241;
void* __right_value616 = (void*)0;
struct sNode* value2_417;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value619 = (void*)0;
struct sNode* __dec_obj242;
struct sNode* __result_obj__207;
value1_415 = (void*)0;
    parse_sharp_v5(info);
    node_413=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==63        ) {
            info->p++;
            sline_real_414=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                _inf_value44=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2210, "struct sNode");
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value613=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 2210, "struct sNullNode*")),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj240=value1_415,
                value1_415=(struct sNode*)come_increment_ref_count(_inf_value44);
                (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sNullNode_finalize, __right_value613, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                no_label_416=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj241=value1_415,
                value1_415=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                (__dec_obj241 ? __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                info->no_label=no_label_416;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_417=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_414;
            _inf_value45=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2228, "struct sNode");
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value618=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2228, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(node_413),(struct sNode*)come_increment_ref_count(value1_415),(struct sNode*)come_increment_ref_count(value2_417),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __dec_obj242=node_413,
            node_413=(struct sNode*)come_increment_ref_count(_inf_value45);
            (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sConditionalNode_finalize, __right_value618, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((value1_415) ? value1_415 = come_decrement_ref_count(value1_415, ((struct sNode*)value1_415)->finalize, ((struct sNode*)value1_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((value2_417) ? value2_417 = come_decrement_ref_count(value2_417, ((struct sNode*)value2_417)->finalize, ((struct sNode*)value2_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__207 = (struct sNode*)come_increment_ref_count(node_413);
    ((node_413) ? node_413 = come_decrement_ref_count(node_413, ((struct sNode*)node_413)->finalize, ((struct sNode*)node_413)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__207) ? __result_obj__207 = come_decrement_ref_count(__result_obj__207, ((struct sNode*)__result_obj__207)->finalize, ((struct sNode*)__result_obj__207)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__207;
}

struct sNode* expression_v13(struct sInfo* info){
void* __right_value620 = (void*)0;
struct sNode* node_418;
struct sNode* __result_obj__208;
    parse_sharp_v5(info);
    node_418=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result_obj__208 = (struct sNode*)come_increment_ref_count(node_418);
    ((node_418) ? node_418 = come_decrement_ref_count(node_418, ((struct sNode*)node_418)->finalize, ((struct sNode*)node_418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__208) ? __result_obj__208 = come_decrement_ref_count(__result_obj__208, ((struct sNode*)__result_obj__208)->finalize, ((struct sNode*)__result_obj__208)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__208;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value623 = (void*)0;
struct sNode* __result_obj__209;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value628 = (void*)0;
struct sNode* __result_obj__212;
void* __right_value629 = (void*)0;
struct sNode* __result_obj__213;
    if(    !gComeC&&charp_operator_equals(buf,"null")    ) {
        _inf_value46=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2252, "struct sNode");
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value622=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 2252, "struct sNullNode*")),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result_obj__209 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value623=_inf_value46)));
        come_call_finalizer(sNullNode_finalize, __right_value622, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value623) ? __right_value623 = come_decrement_ref_count(__right_value623, ((struct sNode*)__right_value623)->finalize, ((struct sNode*)__right_value623)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__209) ? __result_obj__209 = come_decrement_ref_count(__result_obj__209, ((struct sNode*)__result_obj__209)->finalize, ((struct sNode*)__result_obj__209)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__209;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")    ) {
        _inf_value47=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2255, "struct sNode");
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value625=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc_v2(1, sizeof(struct sNilNode)*(1), "13op.c", 2255, "struct sNilNode*")),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result_obj__212 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value628=_inf_value47)));
        come_call_finalizer(sNilNode_finalize, __right_value625, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value628) ? __right_value628 = come_decrement_ref_count(__right_value628, ((struct sNode*)__right_value628)->finalize, ((struct sNode*)__right_value628)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__212) ? __result_obj__212 = come_decrement_ref_count(__result_obj__212, ((struct sNode*)__result_obj__212)->finalize, ((struct sNode*)__result_obj__212)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__212;
    }
    __result_obj__213 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value629=string_node_v12(buf,head,head_sline,info))));
    ((__right_value629) ? __right_value629 = come_decrement_ref_count(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__213) ? __result_obj__213 = come_decrement_ref_count(__result_obj__213, ((struct sNode*)__result_obj__213)->finalize, ((struct sNode*)__result_obj__213)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__213;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
struct sNilNode* __result_obj__210;
void* __right_value626 = (void*)0;
struct sNilNode* result_419;
void* __right_value627 = (void*)0;
char* __dec_obj243;
struct sNilNode* __result_obj__211;
    if(    self==(void*)0    ) {
        __result_obj__210 = (void*)0;
        return __result_obj__210;
    }
    result_419=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc_v2(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode*"));
    if(    self!=((void*)0)    ) {
        result_419->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj243=result_419->sname,
        result_419->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNilNode_clone", 5, "char*"));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_419->sline_real=self->sline_real;
    }
    __result_obj__211 = result_419;
    come_call_finalizer(sNilNode_finalize, result_419, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__211;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value632 = (void*)0;
struct sNode* __result_obj__214;
    _inf_value48=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2263, "struct sNode");
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value631=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 2263, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result_obj__214 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value632=_inf_value48)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLtNode_finalize, __right_value631, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value632) ? __right_value632 = come_decrement_ref_count(__right_value632, ((struct sNode*)__right_value632)->finalize, ((struct sNode*)__right_value632)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__214) ? __result_obj__214 = come_decrement_ref_count(__result_obj__214, ((struct sNode*)__result_obj__214)->finalize, ((struct sNode*)__result_obj__214)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__214;
}

