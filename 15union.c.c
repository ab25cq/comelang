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

struct sUnionNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    struct sClass* klass;
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
void output_union(struct sClass* klass, struct sInfo* info);
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
struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sUnionNode_terminated(struct sUnionNode* self);
char* sUnionNode_kind(struct sUnionNode* self);
_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sUnionNode_finalize(struct sUnionNode* self);
struct sNode* parse_union(char* type_name, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
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
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
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
void output_union(struct sClass* klass, struct sInfo* info){
char* name_0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_1;
struct list$1tuple2$2char$phsType$ph$ph* _foreach_var_name1_2;
struct tuple2$2char$phsType$ph* it_5;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_8=0;
struct sType* type_9=0;
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
    buf_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "15union.c", 14, "struct buffer*"))));
    buffer_append_format(buf_1,"union %s\n{\n",klass->mName);
    for(    _foreach_var_name1_2=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),    it_5=list$1tuple2$2char$phsType$ph$ph_begin(_foreach_var_name1_2);    !list$1tuple2$2char$phsType$ph$ph_end(_foreach_var_name1_2);    it_5=list$1tuple2$2char$phsType$ph$ph_next(_foreach_var_name1_2)    ){
        multiple_assign_var1=it_5;
        name_8=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_9=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        buffer_append_str(buf_1,((char*)(__right_value2=make_define_var(type_9,name_8,(_Bool)0,info))));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_1,";\n");
        (name_8 = come_decrement_ref_count(name_8, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_9,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(_foreach_var_name1_2,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass->mAttribute==((void*)0)    ) {
        buffer_append_str(buf_1,"};\n");
    }
    else {
        buffer_append_format(buf_1,"} %s;\n",klass->mAttribute);
    }
    if(    (_condtional_value_X1=(((struct buffer*)(__right_value5=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value4=__builtin_string(name_0))))))==((void*)0))),    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value5,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _condtional_value_X1    ) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_0)),(struct buffer*)come_increment_ref_count(buf_1));
    }
    (name_0 = come_decrement_ref_count(name_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_1,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_3;
struct tuple2$2char$phsType$ph* __result_obj__1;
struct tuple2$2char$phsType$ph* __result_obj__2;
struct tuple2$2char$phsType$ph* result_4;
struct tuple2$2char$phsType$ph* __result_obj__3;
result_3 = (void*)0;
result_4 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_3,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__1 = result_3;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_4,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__3 = result_4;
    return __result_obj__3;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_6;
struct tuple2$2char$phsType$ph* __result_obj__4;
struct tuple2$2char$phsType$ph* __result_obj__5;
struct tuple2$2char$phsType$ph* result_7;
struct tuple2$2char$phsType$ph* __result_obj__6;
result_6 = (void*)0;
result_7 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_6,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__4 = result_6;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_7,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__6 = result_7;
    return __result_obj__6;
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
struct list_item$1sType$ph* it_10;
struct list_item$1sType$ph* prev_it_11;
    it_10=self->head;
    while(    it_10!=((void*)0)    ) {
        prev_it_11=it_10;
        it_10=it_10->next;
        /*c*/ come_call_finalizer3(prev_it_11,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_12;
struct list_item$1sNode$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)    ) {
        prev_it_13=it_12;
        it_12=it_12->next;
        /*c*/ come_call_finalizer3(prev_it_13,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_14;
struct list_item$1char$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)    ) {
        prev_it_15=it_14;
        it_14=it_14->next;
        /*c*/ come_call_finalizer3(prev_it_15,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_16;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_17;
    it_16=self->head;
    while(    it_16!=((void*)0)    ) {
        prev_it_17=it_16;
        it_16=it_16->next;
        /*c*/ come_call_finalizer3(prev_it_17,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_18;
unsigned int hash_19;
unsigned int it_20;
struct buffer* __result_obj__7;
struct buffer* __result_obj__8;
struct buffer* __result_obj__9;
struct buffer* __result_obj__10;
default_value_18 = (void*)0;
    memset(&default_value_18,0,sizeof(struct buffer*));
    hash_19=string_get_hash_key(((char*)key))%self->size;
    it_20=hash_19;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_20]        ) {
            if(            string_equals(self->keys[it_20],key)            ) {
                __result_obj__7 = (struct buffer*)come_increment_ref_count(self->items[it_20]);
                /*c*/ come_call_finalizer3(default_value_18,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__7,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__7;
            }
            it_20++;
            if(            it_20>=self->size            ) {
                it_20=0;
            }
            else if(            it_20==hash_19            ) {
                __result_obj__8 = (struct buffer*)come_increment_ref_count(default_value_18);
                /*c*/ come_call_finalizer3(default_value_18,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__8,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct buffer*)come_increment_ref_count(default_value_18);
            /*c*/ come_call_finalizer3(default_value_18,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__9,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct buffer*)come_increment_ref_count(default_value_18);
    /*c*/ come_call_finalizer3(default_value_18,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__10,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__10;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_21;
unsigned int hash_22;
unsigned int it_23;
struct buffer* __result_obj__11;
struct buffer* __result_obj__12;
struct buffer* __result_obj__13;
struct buffer* __result_obj__14;
default_value_21 = (void*)0;
    memset(&default_value_21,0,sizeof(struct buffer*));
    hash_22=string_get_hash_key(((char*)key))%self->size;
    it_23=hash_22;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_23]        ) {
            if(            string_equals(self->keys[it_23],key)            ) {
                __result_obj__11 = (struct buffer*)come_increment_ref_count(self->items[it_23]);
                /*c*/ come_call_finalizer3(default_value_21,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__11,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__11;
            }
            it_23++;
            if(            it_23>=self->size            ) {
                it_23=0;
            }
            else if(            it_23==hash_22            ) {
                __result_obj__12 = (struct buffer*)come_increment_ref_count(default_value_21);
                /*c*/ come_call_finalizer3(default_value_21,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__12,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct buffer*)come_increment_ref_count(default_value_21);
            /*c*/ come_call_finalizer3(default_value_21,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__13,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct buffer*)come_increment_ref_count(default_value_21);
    /*c*/ come_call_finalizer3(default_value_21,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__14,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__14;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_42;
unsigned int it_43;
_Bool same_key_exist_60;
struct list$1char$ph* _foreach_var_name3_61;
char* it2_64;
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
                    (self->keys[it_43] = come_decrement_ref_count(self->keys[it_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_43]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_43]);
                    self->keys[it_43]=key;
                }
                if(                1                ) {
                    /*c*/ come_call_finalizer3(self->items[it_43],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
    for(    _foreach_var_name3_61=(struct list$1char$ph*)come_increment_ref_count(self->key_list),    it2_64=list$1char$ph_begin(_foreach_var_name3_61);    !list$1char$ph_end(_foreach_var_name3_61);    it2_64=list$1char$ph_next(_foreach_var_name3_61)    ){
        if(        string_equals(it2_64,key)        ) {
            same_key_exist_60=(_Bool)1;
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name3_61,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    !same_key_exist_60    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__36 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_24;
void* __right_value6 = (void*)0;
char** keys_25;
void* __right_value7 = (void*)0;
struct buffer** items_26;
void* __right_value8 = (void*)0;
_Bool* item_existance_27;
int len_28;
struct map$2char$phbuffer$ph* _foreach_var_name2_29;
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
    size_24=self->size*10;
    keys_25=(char**)come_increment_ref_count(((char**)(__right_value6=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_24)), "./comelang.h", 2150, "char**"))));
    items_26=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value7=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size_24)), "./comelang.h", 2151, "struct buffer**"))));
    item_existance_27=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value8=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_24)), "./comelang.h", 2152, "_Bool*"))));
    len_28=0;
    for(    _foreach_var_name2_29=self,    it_32=map$2char$phbuffer$ph_begin(_foreach_var_name2_29);    !map$2char$phbuffer$ph_end(_foreach_var_name2_29);    it_32=map$2char$phbuffer$ph_next(_foreach_var_name2_29)    ){
        memset(&default_value_35,0,sizeof(struct buffer*));
        it2_36=((struct buffer*)(__right_value9=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_35))));
        /*c*/ come_call_finalizer3(__right_value9,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_39=string_get_hash_key(((char*)it_32))%size_24;
        n_40=hash_39;
        while(        (_Bool)1        ) {
            if(            item_existance_27[n_40]            ) {
                n_40++;
                if(                n_40>=size_24                ) {
                    n_40=0;
                }
                else if(                n_40==hash_39                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_27[n_40]=(_Bool)1;
                keys_25[n_40]=it_32;
                items_26[n_40]=((struct buffer*)(__right_value10=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_41))));
                /*c*/ come_call_finalizer3(__right_value10,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_28++;
                /*c*/ come_call_finalizer3(default_value_41,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_41,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_35,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_25;
    self->items=items_26;
    self->item_existance=item_existance_27;
    self->size=size_24;
    self->len=len_28;
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
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__21,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__21;
            }
            it_38++;
            if(            it_38>=self->size            ) {
                it_38=0;
            }
            else if(            it_38==hash_37            ) {
                __result_obj__22 = (struct buffer*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__22,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__22;
            }
        }
        else {
            __result_obj__23 = (struct buffer*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__23,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__23;
        }
    }
    __result_obj__24 = (struct buffer*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__24,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
                /*c*/ come_call_finalizer3(prev_it_51,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
                /*c*/ come_call_finalizer3(prev_it_54,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
                /*c*/ come_call_finalizer3(prev_it_59,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
        /*c*/ come_call_finalizer3(prev_it_48,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_62;
char* __result_obj__29;
char* __result_obj__30;
char* result_63;
char* __result_obj__31;
result_62 = (void*)0;
result_63 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_62,0,sizeof(char*));
        __result_obj__29 = result_62;
        return __result_obj__29;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_63,0,sizeof(char*));
    __result_obj__31 = result_63;
    return __result_obj__31;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_65;
char* __result_obj__32;
char* __result_obj__33;
char* result_66;
char* __result_obj__34;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_65,0,sizeof(char*));
        __result_obj__32 = result_65;
        return __result_obj__32;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__33 = self->it->item;
        return __result_obj__33;
    }
    memset(&result_66,0,sizeof(char*));
    __result_obj__34 = result_66;
    return __result_obj__34;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value11 = (void*)0;
struct list_item$1char$ph* litem_67;
char* __dec_obj1;
void* __right_value12 = (void*)0;
struct list_item$1char$ph* litem_68;
char* __dec_obj2;
void* __right_value13 = (void*)0;
struct list_item$1char$ph* litem_69;
char* __dec_obj3;
struct list$1char$ph* __result_obj__35;
    if(    self->len==0    ) {
        litem_67=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value11=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_67->prev=((void*)0);
        litem_67->next=((void*)0);
        __dec_obj1=litem_67->item,
        litem_67->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_67;
        self->head=litem_67;
    }
    else if(    self->len==1    ) {
        litem_68=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value12=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_68->prev=self->head;
        litem_68->next=((void*)0);
        __dec_obj2=litem_68->item,
        litem_68->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_68;
        self->head->next=litem_68;
    }
    else {
        litem_69=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value13=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_69->prev=self->tail;
        litem_69->next=((void*)0);
        __dec_obj3=litem_69->item,
        litem_69->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_69;
        self->tail=litem_69;
    }
    self->len++;
    __result_obj__35 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__35;
}

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value15 = (void*)0;
char* __dec_obj4;
struct sUnionNode* __result_obj__37;
    ((struct sNodeBase*)(__right_value15=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value15,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj4=self->name,
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->klass=klass;
    __result_obj__37 = (struct sUnionNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sUnionNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__37,sUnionNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__37;
}

_Bool sUnionNode_terminated(struct sUnionNode* self){
    return (_Bool)1;
}

char* sUnionNode_kind(struct sUnionNode* self){
void* __right_value16 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value16=__builtin_string("sUnionNode"))));
    (__right_value16 = come_decrement_ref_count(__right_value16, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__38;
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info){
struct sClass* klass_70;
void* __right_value17 = (void*)0;
char* name_71;
_Bool __result_obj__39;
    klass_70=self->klass;
    name_71=(char*)come_increment_ref_count(__builtin_string(self->name));
    output_union(klass_70,info);
    __result_obj__39 = (_Bool)1;
    (name_71 = come_decrement_ref_count(name_71, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__39;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sUnionNode_finalize(struct sUnionNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* parse_union(char* type_name, struct sInfo* info){
struct sClass* klass_72;
void* __right_value18 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct sType* type_96;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct sType* override__143;
_Bool typedef__144;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct sType* type_145;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type2_146=0;
char* name_147=0;
_Bool err_148=0;
void* __right_value80 = (void*)0;
char* name2_149;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
char* struct_attribute_153;
char* __dec_obj33;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct sNode* _inf_value1;
struct sUnionNode* _inf_obj_value1;
void* __right_value94 = (void*)0;
struct sNode* node_154;
_Bool Value_156;
struct sNode* __result_obj__82;
void* __right_value95 = (void*)0;
struct sNode* __result_obj__83;
klass_72 = (void*)0;
    if(    (_condtional_value_X2=(((struct sClass*)(__right_value18=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value18,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _condtional_value_X2    ) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "15union.c", 72, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        type_96=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 74, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_96)));
        klass_72=((struct sClass*)(__right_value73=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value73,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_96,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        klass_72=((struct sClass*)(__right_value74=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value74,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        override__143=((struct sType*)(__right_value75=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value75,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        typedef__144=(_Bool)0;
        if(        override__143        ) {
            typedef__144=override__143->mTypedef;
        }
        type_145=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 87, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
        if(        typedef__144        ) {
            type_145->mTypedef=(_Bool)1;
        }
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_145)));
        /*c*/ come_call_finalizer3(type_145,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    parse_sharp_v5(info);
    expected_next_character(123,info);
    while(    (_Bool)1    ) {
        multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value79=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type2_146=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_147=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_148=multiple_assign_var2->v3;
        /*c*/ come_call_finalizer3(__right_value79,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_148        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        if(        *info->p==44        ) {
            parse_sharp_v5(info);
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                name2_149=(char*)come_increment_ref_count(parse_word(info));
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_72->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 114, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_149),(struct sType*)come_increment_ref_count(type2_146))));
                (name2_149 = come_decrement_ref_count(name2_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            expected_next_character(59,info);
        }
        else {
            parse_sharp_v5(info);
            expected_next_character(59,info);
            parse_sharp_v5(info);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_72->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 125, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_147),(struct sType*)come_increment_ref_count(type2_146))));
        }
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            /*c*/ come_call_finalizer3(type2_146,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_147 = come_decrement_ref_count(name_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        parse_sharp_v5(info);
        /*c*/ come_call_finalizer3(type2_146,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_147 = come_decrement_ref_count(name_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    struct_attribute_153=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_equals(struct_attribute_153,"")    ) {
    }
    else {
        __dec_obj33=klass_72->mAttribute,
        klass_72->mAttribute=(char*)come_increment_ref_count(struct_attribute_153);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "15union.c", 147, "struct sNode");
    _inf_obj_value1=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(__right_value90=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc_v2(1, sizeof(struct sUnionNode)*(1), "15union.c", 147, "struct sUnionNode*")),(char*)come_increment_ref_count(type_name),klass_72,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnionNode_finalize;
    _inf_value1->clone=(void*)sUnionNode_clone;
    _inf_value1->compile=(void*)sUnionNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sUnionNode_terminated;
    _inf_value1->kind=(void*)sUnionNode_kind;
    node_154=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value90,sUnionNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_156=node_compile(node_154,info);
    if(    !Value_156    ) {
        __result_obj__82 = (void*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute_153 = come_decrement_ref_count(struct_attribute_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_154) ? node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__82) ? __result_obj__82 = come_decrement_ref_count(__result_obj__82, ((struct sNode*)__result_obj__82)->finalize, ((struct sNode*)__result_obj__82)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__82;
    }
    else {
    }
    __result_obj__83 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value95=create_nothing_node(info))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute_153 = come_decrement_ref_count(struct_attribute_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((node_154) ? node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value95) ? __right_value95 = come_decrement_ref_count(__right_value95, ((struct sNode*)__right_value95)->finalize, ((struct sNode*)__right_value95)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__83) ? __result_obj__83 = come_decrement_ref_count(__result_obj__83, ((struct sNode*)__result_obj__83)->finalize, ((struct sNode*)__result_obj__83)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__83;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_73;
unsigned int it_74;
struct sClass* __result_obj__40;
struct sClass* __result_obj__41;
struct sClass* __result_obj__42;
struct sClass* __result_obj__43;
    hash_73=string_get_hash_key(((char*)key))%self->size;
    it_74=hash_73;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_74]        ) {
            if(            string_equals(self->keys[it_74],key)            ) {
                __result_obj__40 = (struct sClass*)come_increment_ref_count(self->items[it_74]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__40,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__40;
            }
            it_74++;
            if(            it_74>=self->size            ) {
                it_74=0;
            }
            else if(            it_74==hash_73            ) {
                __result_obj__41 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__41,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__41;
            }
        }
        else {
            __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__42,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__42;
        }
    }
    __result_obj__43 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__43,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__43;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_91;
unsigned int it_92;
_Bool same_key_exist_93;
struct list$1char$ph* _foreach_var_name5_94;
char* it2_95;
struct map$2char$phsClass$ph* __result_obj__50;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_91=string_get_hash_key(((char*)key))%self->size;
    it_92=hash_91;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_92]        ) {
            if(            string_equals(self->keys[it_92],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_92]);
                    (self->keys[it_92] = come_decrement_ref_count(self->keys[it_92], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_92]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_92]);
                    self->keys[it_92]=key;
                }
                if(                1                ) {
                    /*c*/ come_call_finalizer3(self->items[it_92],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_92]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_92]=item;
                }
                break;
            }
            it_92++;
            if(            it_92>=self->size            ) {
                it_92=0;
            }
            else if(            it_92==hash_91            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_92]=(_Bool)1;
            if(            1            ) {
                self->keys[it_92]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_92]=key;
            }
            if(            1            ) {
                self->items[it_92]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_92]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_93=(_Bool)0;
    for(    _foreach_var_name5_94=(struct list$1char$ph*)come_increment_ref_count(self->key_list),    it2_95=list$1char$ph_begin(_foreach_var_name5_94);    !list$1char$ph_end(_foreach_var_name5_94);    it2_95=list$1char$ph_next(_foreach_var_name5_94)    ){
        if(        string_equals(it2_95,key)        ) {
            same_key_exist_93=(_Bool)1;
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name5_94,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    !same_key_exist_93    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__50 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__50;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_75;
void* __right_value19 = (void*)0;
char** keys_76;
void* __right_value20 = (void*)0;
struct sClass** items_77;
void* __right_value21 = (void*)0;
_Bool* item_existance_78;
int len_79;
struct map$2char$phsClass$ph* _foreach_var_name4_80;
char* it_83;
struct sClass* default_value_86;
void* __right_value22 = (void*)0;
struct sClass* it2_87;
unsigned int hash_88;
int n_89;
struct sClass* default_value_90;
void* __right_value23 = (void*)0;
default_value_86 = (void*)0;
default_value_90 = (void*)0;
    size_75=self->size*10;
    keys_76=(char**)come_increment_ref_count(((char**)(__right_value19=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_75)), "./comelang.h", 2150, "char**"))));
    items_77=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value20=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_75)), "./comelang.h", 2151, "struct sClass**"))));
    item_existance_78=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value21=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_75)), "./comelang.h", 2152, "_Bool*"))));
    len_79=0;
    for(    _foreach_var_name4_80=self,    it_83=map$2char$phsClass$ph_begin(_foreach_var_name4_80);    !map$2char$phsClass$ph_end(_foreach_var_name4_80);    it_83=map$2char$phsClass$ph_next(_foreach_var_name4_80)    ){
        memset(&default_value_86,0,sizeof(struct sClass*));
        it2_87=((struct sClass*)(__right_value22=map$2char$phsClass$ph_at(self,it_83,(struct sClass*)come_increment_ref_count(default_value_86))));
        /*c*/ come_call_finalizer3(__right_value22,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_88=string_get_hash_key(((char*)it_83))%size_75;
        n_89=hash_88;
        while(        (_Bool)1        ) {
            if(            item_existance_78[n_89]            ) {
                n_89++;
                if(                n_89>=size_75                ) {
                    n_89=0;
                }
                else if(                n_89==hash_88                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_78[n_89]=(_Bool)1;
                keys_76[n_89]=it_83;
                items_77[n_89]=((struct sClass*)(__right_value23=map$2char$phsClass$ph_at(self,it_83,(struct sClass*)come_increment_ref_count(default_value_90))));
                /*c*/ come_call_finalizer3(__right_value23,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_79++;
                /*c*/ come_call_finalizer3(default_value_90,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_90,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_86,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_76;
    self->items=items_77;
    self->item_existance=item_existance_78;
    self->size=size_75;
    self->len=len_79;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_81;
char* __result_obj__44;
char* __result_obj__45;
char* result_82;
char* __result_obj__46;
result_81 = (void*)0;
result_82 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_81,0,sizeof(char*));
        __result_obj__44 = result_81;
        return __result_obj__44;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__45 = self->key_list->it->item;
        return __result_obj__45;
    }
    memset(&result_82,0,sizeof(char*));
    __result_obj__46 = result_82;
    return __result_obj__46;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_84;
char* __result_obj__47;
char* __result_obj__48;
char* result_85;
char* __result_obj__49;
result_84 = (void*)0;
result_85 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_84,0,sizeof(char*));
        __result_obj__47 = result_84;
        return __result_obj__47;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__48 = self->key_list->it->item;
        return __result_obj__48;
    }
    memset(&result_85,0,sizeof(char*));
    __result_obj__49 = result_85;
    return __result_obj__49;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_115;
unsigned int it_116;
_Bool same_key_exist_117;
struct list$1char$ph* _foreach_var_name7_118;
char* it2_119;
struct map$2char$phsType$ph* __result_obj__61;
    if(    self->len*10>=self->size    ) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_115=string_get_hash_key(((char*)key))%self->size;
    it_116=hash_115;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_116]        ) {
            if(            string_equals(self->keys[it_116],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_116]);
                    (self->keys[it_116] = come_decrement_ref_count(self->keys[it_116], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_116]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_116]);
                    self->keys[it_116]=key;
                }
                if(                1                ) {
                    /*c*/ come_call_finalizer3(self->items[it_116],sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_116]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_116]=item;
                }
                break;
            }
            it_116++;
            if(            it_116>=self->size            ) {
                it_116=0;
            }
            else if(            it_116==hash_115            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_116]=(_Bool)1;
            if(            1            ) {
                self->keys[it_116]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_116]=key;
            }
            if(            1            ) {
                self->items[it_116]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_116]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_117=(_Bool)0;
    for(    _foreach_var_name7_118=(struct list$1char$ph*)come_increment_ref_count(self->key_list),    it2_119=list$1char$ph_begin(_foreach_var_name7_118);    !list$1char$ph_end(_foreach_var_name7_118);    it2_119=list$1char$ph_next(_foreach_var_name7_118)    ){
        if(        string_equals(it2_119,key)        ) {
            same_key_exist_117=(_Bool)1;
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name7_118,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    !same_key_exist_117    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__61 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__61;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_97;
void* __right_value30 = (void*)0;
char** keys_98;
void* __right_value31 = (void*)0;
struct sType** items_99;
void* __right_value32 = (void*)0;
_Bool* item_existance_100;
int len_101;
struct map$2char$phsType$ph* _foreach_var_name6_102;
char* it_105;
struct sType* default_value_108;
void* __right_value33 = (void*)0;
struct sType* it2_109;
unsigned int hash_112;
int n_113;
struct sType* default_value_114;
void* __right_value34 = (void*)0;
default_value_108 = (void*)0;
default_value_114 = (void*)0;
    size_97=self->size*10;
    keys_98=(char**)come_increment_ref_count(((char**)(__right_value30=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_97)), "./comelang.h", 2150, "char**"))));
    items_99=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value31=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size_97)), "./comelang.h", 2151, "struct sType**"))));
    item_existance_100=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value32=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_97)), "./comelang.h", 2152, "_Bool*"))));
    len_101=0;
    for(    _foreach_var_name6_102=self,    it_105=map$2char$phsType$ph_begin(_foreach_var_name6_102);    !map$2char$phsType$ph_end(_foreach_var_name6_102);    it_105=map$2char$phsType$ph_next(_foreach_var_name6_102)    ){
        memset(&default_value_108,0,sizeof(struct sType*));
        it2_109=((struct sType*)(__right_value33=map$2char$phsType$ph_at(self,it_105,(struct sType*)come_increment_ref_count(default_value_108))));
        /*c*/ come_call_finalizer3(__right_value33,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_112=string_get_hash_key(((char*)it_105))%size_97;
        n_113=hash_112;
        while(        (_Bool)1        ) {
            if(            item_existance_100[n_113]            ) {
                n_113++;
                if(                n_113>=size_97                ) {
                    n_113=0;
                }
                else if(                n_113==hash_112                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_100[n_113]=(_Bool)1;
                keys_98[n_113]=it_105;
                items_99[n_113]=((struct sType*)(__right_value34=map$2char$phsType$ph_at(self,it_105,(struct sType*)come_increment_ref_count(default_value_114))));
                /*c*/ come_call_finalizer3(__right_value34,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_101++;
                /*c*/ come_call_finalizer3(default_value_114,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_114,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_108,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_98;
    self->items=items_99;
    self->item_existance=item_existance_100;
    self->size=size_97;
    self->len=len_101;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_103;
char* __result_obj__51;
char* __result_obj__52;
char* result_104;
char* __result_obj__53;
result_103 = (void*)0;
result_104 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_103,0,sizeof(char*));
        __result_obj__51 = result_103;
        return __result_obj__51;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__52 = self->key_list->it->item;
        return __result_obj__52;
    }
    memset(&result_104,0,sizeof(char*));
    __result_obj__53 = result_104;
    return __result_obj__53;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_106;
char* __result_obj__54;
char* __result_obj__55;
char* result_107;
char* __result_obj__56;
result_106 = (void*)0;
result_107 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_106,0,sizeof(char*));
        __result_obj__54 = result_106;
        return __result_obj__54;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__55 = self->key_list->it->item;
        return __result_obj__55;
    }
    memset(&result_107,0,sizeof(char*));
    __result_obj__56 = result_107;
    return __result_obj__56;
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_110;
unsigned int it_111;
struct sType* __result_obj__57;
struct sType* __result_obj__58;
struct sType* __result_obj__59;
struct sType* __result_obj__60;
    hash_110=string_get_hash_key(((char*)key))%self->size;
    it_111=hash_110;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_111]        ) {
            if(            string_equals(self->keys[it_111],key)            ) {
                __result_obj__57 = (struct sType*)come_increment_ref_count(self->items[it_111]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__57,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__57;
            }
            it_111++;
            if(            it_111>=self->size            ) {
                it_111=0;
            }
            else if(            it_111==hash_110            ) {
                __result_obj__58 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__58,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__58;
            }
        }
        else {
            __result_obj__59 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__59,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__59;
        }
    }
    __result_obj__60 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__60,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__62;
void* __right_value35 = (void*)0;
struct sType* result_120;
void* __right_value36 = (void*)0;
struct sType* __dec_obj5;
void* __right_value37 = (void*)0;
struct sType* __dec_obj6;
void* __right_value45 = (void*)0;
struct list$1sType$ph* __dec_obj10;
void* __right_value46 = (void*)0;
struct sType* __dec_obj11;
void* __right_value48 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value49 = (void*)0;
struct sNode* __dec_obj13;
void* __right_value50 = (void*)0;
char* __dec_obj14;
void* __right_value51 = (void*)0;
char* __dec_obj15;
void* __right_value52 = (void*)0;
char* __dec_obj16;
void* __right_value60 = (void*)0;
struct list$1sNode$ph* __dec_obj20;
void* __right_value61 = (void*)0;
char* __dec_obj21;
void* __right_value62 = (void*)0;
struct list$1sType$ph* __dec_obj22;
void* __right_value70 = (void*)0;
struct list$1char$ph* __dec_obj26;
void* __right_value71 = (void*)0;
struct sType* __dec_obj27;
struct sType* __result_obj__77;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__62,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__62;
    }
    result_120=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_120->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj5=result_120->mOriginalLoadVarType,
        result_120->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj6=result_120->mChannelType,
        result_120->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj10=result_120->mGenericsTypes,
        result_120->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj10,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj11=result_120->mNoSolvedGenericsType,
        result_120->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj11,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj12=result_120->mSizeNum,
        result_120->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj13=result_120->mAlignas,
        result_120->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj14=result_120->mTupleName,
        result_120->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj15=result_120->mAttribute,
        result_120->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_120->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_120->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_120->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_120->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_120->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_120->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_120->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_120->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_120->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_120->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_120->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_120->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_120->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_120->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_120->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_120->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_120->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_120->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_120->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_120->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_120->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_120->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_120->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj16=result_120->mAsmName,
        result_120->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_120->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_120->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_120->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj20=result_120->mArrayNum,
        result_120->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj20,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_120->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_120->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_120->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_120->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_120->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj21=result_120->mOriginalTypeName,
        result_120->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_120->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_120->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_120->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_120->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj22=result_120->mParamTypes,
        result_120->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj26=result_120->mParamNames,
        result_120->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj26,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj27=result_120->mResultType,
        result_120->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_120->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_120->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)    ) {
        result_120->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__77 = (struct sType*)come_increment_ref_count(result_120);
    /*c*/ come_call_finalizer3(result_120,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__63;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct list$1sType$ph* result_121;
struct list_item$1sType$ph* it_122;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1sType$ph* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__63,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__63;
    }
    result_121=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_122=self->head;
    while(    it_122!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_121,(struct sType*)come_increment_ref_count(sType_clone(it_122->item)));
        }
        else {
            list$1sType$ph_add(result_121,(struct sType*)come_increment_ref_count(sType_clone(it_122->item)));
        }
        it_122=it_122->next;
    }
    __result_obj__66 = (struct list$1sType$ph*)come_increment_ref_count(result_121);
    /*c*/ come_call_finalizer3(result_121,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__64;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__64 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__64,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__64;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value40 = (void*)0;
struct list_item$1sType$ph* litem_123;
struct sType* __dec_obj7;
void* __right_value41 = (void*)0;
struct list_item$1sType$ph* litem_124;
struct sType* __dec_obj8;
void* __right_value42 = (void*)0;
struct list_item$1sType$ph* litem_125;
struct sType* __dec_obj9;
struct list$1sType$ph* __result_obj__65;
    if(    self->len==0    ) {
        litem_123=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value40=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_123->prev=((void*)0);
        litem_123->next=((void*)0);
        __dec_obj7=litem_123->item,
        litem_123->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_123;
        self->head=litem_123;
    }
    else if(    self->len==1    ) {
        litem_124=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value41=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_124->prev=self->head;
        litem_124->next=((void*)0);
        __dec_obj8=litem_124->item,
        litem_124->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_124;
        self->head->next=litem_124;
    }
    else {
        litem_125=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value42=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_125->prev=self->tail;
        litem_125->next=((void*)0);
        __dec_obj9=litem_125->item,
        litem_125->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj9,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_125;
        self->tail=litem_125;
    }
    self->len++;
    __result_obj__65 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_126;
struct list_item$1sType$ph* prev_it_127;
    it_126=self->head;
    while(    it_126!=((void*)0)    ) {
        prev_it_127=it_126;
        it_126=it_126->next;
        /*c*/ come_call_finalizer3(prev_it_127,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__67;
void* __right_value47 = (void*)0;
struct sNode* result_128;
struct sNode* __result_obj__68;
    if(    self==(void*)0    ) {
        __result_obj__67 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__67) ? __result_obj__67 = come_decrement_ref_count(__result_obj__67, ((struct sNode*)__result_obj__67)->finalize, ((struct sNode*)__result_obj__67)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__67;
    }
    result_128=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_128->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_128->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_128->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_128->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_128->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_128->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_128->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_128->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_128->kind=self->kind;
    }
    __result_obj__68 = (struct sNode*)come_increment_ref_count(result_128);
    ((result_128) ? result_128 = come_decrement_ref_count(result_128, ((struct sNode*)result_128)->finalize, ((struct sNode*)result_128)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__68) ? __result_obj__68 = come_decrement_ref_count(__result_obj__68, ((struct sNode*)__result_obj__68)->finalize, ((struct sNode*)__result_obj__68)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__68;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__69;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1sNode$ph* result_129;
struct list_item$1sNode$ph* it_130;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1sNode$ph* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__69,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__69;
    }
    result_129=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_130=self->head;
    while(    it_130!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_129,(struct sNode*)come_increment_ref_count(sNode_clone(it_130->item)));
        }
        else {
            list$1sNode$ph_add(result_129,(struct sNode*)come_increment_ref_count(sNode_clone(it_130->item)));
        }
        it_130=it_130->next;
    }
    __result_obj__72 = (struct list$1sNode$ph*)come_increment_ref_count(result_129);
    /*c*/ come_call_finalizer3(result_129,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__70,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__70;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value55 = (void*)0;
struct list_item$1sNode$ph* litem_131;
struct sNode* __dec_obj17;
void* __right_value56 = (void*)0;
struct list_item$1sNode$ph* litem_132;
struct sNode* __dec_obj18;
void* __right_value57 = (void*)0;
struct list_item$1sNode$ph* litem_133;
struct sNode* __dec_obj19;
struct list$1sNode$ph* __result_obj__71;
    if(    self->len==0    ) {
        litem_131=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value55=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_131->prev=((void*)0);
        litem_131->next=((void*)0);
        __dec_obj17=litem_131->item,
        litem_131->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_131;
        self->head=litem_131;
    }
    else if(    self->len==1    ) {
        litem_132=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value56=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_132->prev=self->head;
        litem_132->next=((void*)0);
        __dec_obj18=litem_132->item,
        litem_132->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_132;
        self->head->next=litem_132;
    }
    else {
        litem_133=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value57=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_133->prev=self->tail;
        litem_133->next=((void*)0);
        __dec_obj19=litem_133->item,
        litem_133->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_133;
        self->tail=litem_133;
    }
    self->len++;
    __result_obj__71 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__71;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_134;
struct list_item$1sNode$ph* prev_it_135;
    it_134=self->head;
    while(    it_134!=((void*)0)    ) {
        prev_it_135=it_134;
        it_134=it_134->next;
        /*c*/ come_call_finalizer3(prev_it_135,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__73;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1char$ph* result_136;
struct list_item$1char$ph* it_137;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1char$ph* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__73 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__73,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__73;
    }
    result_136=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_137=self->head;
    while(    it_137!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_136,(char*)come_increment_ref_count((char*)come_memdup(it_137->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_136,(char*)come_increment_ref_count((char*)come_memdup(it_137->item, "./comelang.h", 1032, "char*")));
        }
        it_137=it_137->next;
    }
    __result_obj__76 = (struct list$1char$ph*)come_increment_ref_count(result_136);
    /*c*/ come_call_finalizer3(result_136,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__76,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__74 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value65 = (void*)0;
struct list_item$1char$ph* litem_138;
char* __dec_obj23;
void* __right_value66 = (void*)0;
struct list_item$1char$ph* litem_139;
char* __dec_obj24;
void* __right_value67 = (void*)0;
struct list_item$1char$ph* litem_140;
char* __dec_obj25;
struct list$1char$ph* __result_obj__75;
    if(    self->len==0    ) {
        litem_138=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value65=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_138->prev=((void*)0);
        litem_138->next=((void*)0);
        __dec_obj23=litem_138->item,
        litem_138->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_138;
        self->head=litem_138;
    }
    else if(    self->len==1    ) {
        litem_139=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value66=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_139->prev=self->head;
        litem_139->next=((void*)0);
        __dec_obj24=litem_139->item,
        litem_139->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_139;
        self->head->next=litem_139;
    }
    else {
        litem_140=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value67=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_140->prev=self->tail;
        litem_140->next=((void*)0);
        __dec_obj25=litem_140->item,
        litem_140->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_140;
        self->tail=litem_140;
    }
    self->len++;
    __result_obj__75 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__75;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_141;
struct list_item$1char$ph* prev_it_142;
    it_141=self->head;
    while(    it_141!=((void*)0)    ) {
        prev_it_142=it_141;
        it_141=it_141->next;
        /*c*/ come_call_finalizer3(prev_it_142,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value81 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_150;
struct tuple2$2char$phsType$ph* __dec_obj28;
void* __right_value82 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_151;
struct tuple2$2char$phsType$ph* __dec_obj29;
void* __right_value83 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_152;
struct tuple2$2char$phsType$ph* __dec_obj30;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__78;
    if(    self->len==0    ) {
        litem_150=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value81=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_150->prev=((void*)0);
        litem_150->next=((void*)0);
        __dec_obj28=litem_150->item,
        litem_150->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_150;
        self->head=litem_150;
    }
    else if(    self->len==1    ) {
        litem_151=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value82=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_151->prev=self->head;
        litem_151->next=((void*)0);
        __dec_obj29=litem_151->item,
        litem_151->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_151;
        self->head->next=litem_151;
    }
    else {
        litem_152=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value83=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_152->prev=self->tail;
        litem_152->next=((void*)0);
        __dec_obj30=litem_152->item,
        litem_152->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj30,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_152;
        self->tail=litem_152;
    }
    self->len++;
    __result_obj__78 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj31;
struct sType* __dec_obj32;
struct tuple2$2char$phsType$ph* __result_obj__79;
    __dec_obj31=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj32=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__79 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__79,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__79;
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self){
struct sUnionNode* __result_obj__80;
void* __right_value91 = (void*)0;
struct sUnionNode* result_155;
void* __right_value92 = (void*)0;
char* __dec_obj34;
void* __right_value93 = (void*)0;
char* __dec_obj35;
struct sUnionNode* __result_obj__81;
    if(    self==(void*)0    ) {
        __result_obj__80 = (void*)0;
        return __result_obj__80;
    }
    result_155=(struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc_v2(1, sizeof(struct sUnionNode)*(1), "sUnionNode_clone", 3, "struct sUnionNode*"));
    if(    self!=((void*)0)    ) {
        result_155->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj34=result_155->sname,
        result_155->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sUnionNode_clone", 5, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_155->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj35=result_155->name,
        result_155->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sUnionNode_clone", 7, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_155->klass=self->klass;
    }
    __result_obj__81 = result_155;
    /*c*/ come_call_finalizer3(result_155,sUnionNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__81;
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_157;
void* __right_value96 = (void*)0;
char* struct_attribute_158;
void* __right_value97 = (void*)0;
char* type_name_159;
struct sClass* klass_160;
void* __right_value98 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct sType* type_161;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct sType* override__162;
_Bool typedef__163;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct sType* type_164;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type2_165=0;
char* name_166=0;
_Bool err_167=0;
void* __right_value113 = (void*)0;
char* name2_168;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
char* struct_attribute2_169;
char* source_tail_170;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct buffer* header_171;
void* __right_value121 = (void*)0;
char* id_172;
void* __right_value122 = (void*)0;
char* __dec_obj36;
char* __dec_obj37;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
char* __dec_obj38;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct sNode* _inf_value2;
struct sUnionNode* _inf_obj_value2;
void* __right_value128 = (void*)0;
struct sNode* node_173;
_Bool Value_174;
struct sNode* __result_obj__84;
void* __right_value129 = (void*)0;
struct sNode* __result_obj__85;
void* __right_value130 = (void*)0;
struct sNode* __result_obj__86;
klass_160 = (void*)0;
    if(    charp_operator_equals(buf,"union")    ) {
        source_head_157=info->p;
        struct_attribute_158=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_159=(char*)come_increment_ref_count(parse_word(info));
        if(        (_condtional_value_X3=(((struct sClass*)(__right_value98=map$2char$phsClass$ph_at(info->classes,type_name_159,((void*)0))))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value98,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _condtional_value_X3        ) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_159)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "15union.c", 167, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_159)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
            type_161=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 168, "struct sType*")),(char*)come_increment_ref_count(type_name_159),(_Bool)0,info));
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_159),(struct sType*)come_increment_ref_count(sType_clone(type_161)));
            klass_160=((struct sClass*)(__right_value106=map$2char$phsClass$ph_at(info->classes,type_name_159,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value106,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_161,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_160=((struct sClass*)(__right_value107=map$2char$phsClass$ph_at(info->classes,type_name_159,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value107,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            override__162=((struct sType*)(__right_value108=map$2char$phsType$ph_at(info->types,type_name_159,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value108,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            typedef__163=(_Bool)0;
            if(            override__162            ) {
                typedef__163=override__162->mTypedef;
            }
            type_164=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "15union.c", 180, "struct sType*")),(char*)come_increment_ref_count(type_name_159),(_Bool)0,info));
            if(            typedef__163            ) {
                type_164->mTypedef=typedef__163;
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_159),(struct sType*)come_increment_ref_count(sType_clone(type_164)));
            /*c*/ come_call_finalizer3(type_164,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        expected_next_character(123,info);
        while(        (_Bool)1        ) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value112=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_165=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_166=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_167=multiple_assign_var3->v3;
            /*c*/ come_call_finalizer3(__right_value112,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_167            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                while(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    name2_168=(char*)come_increment_ref_count(parse_word(info));
                    list$1tuple2$2char$phsType$ph$ph_push_back(klass_160->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 205, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_168),(struct sType*)come_increment_ref_count(type2_165))));
                    (name2_168 = come_decrement_ref_count(name2_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                parse_sharp_v5(info);
                expected_next_character(59,info);
                parse_sharp_v5(info);
            }
            else {
                parse_sharp_v5(info);
                expected_next_character(59,info);
                parse_sharp_v5(info);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_160->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "15union.c", 219, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_166),(struct sType*)come_increment_ref_count(type2_165))));
            }
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                /*c*/ come_call_finalizer3(type2_165,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_166 = come_decrement_ref_count(name_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            /*c*/ come_call_finalizer3(type2_165,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_166 = come_decrement_ref_count(name_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        struct_attribute2_169=(char*)come_increment_ref_count(parse_struct_attribute(info));
        source_tail_170=info->p;
        header_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "15union.c", 233, "struct buffer*"))));
        buffer_append_str(header_171,"union ");
        buffer_append(header_171,source_head_157,source_tail_170-source_head_157);
        id_172=(char*)come_increment_ref_count(__builtin_string(type_name_159));
        add_come_code_at_come_struct_header(info,id_172,"%s;\n",((char*)(__right_value122=buffer_to_string(header_171))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_operator_equals(struct_attribute_158,"")&&string_operator_equals(struct_attribute2_169,"")        ) {
        }
        else if(        string_operator_equals(struct_attribute_158,"")        ) {
            __dec_obj36=klass_160->mAttribute,
            klass_160->mAttribute=(char*)come_increment_ref_count(struct_attribute2_169);
            __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(struct_attribute2_169,"")        ) {
            __dec_obj37=klass_160->mAttribute,
            klass_160->mAttribute=(char*)come_increment_ref_count(struct_attribute_158);
            __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj38=klass_160->mAttribute,
            klass_160->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value124=string_operator_add(struct_attribute_158," "))),struct_attribute2_169));
            __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "15union.c", 252, "struct sNode");
        _inf_obj_value2=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(__right_value127=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc_v2(1, sizeof(struct sUnionNode)*(1), "15union.c", 252, "struct sUnionNode*")),(char*)come_increment_ref_count(type_name_159),klass_160,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sUnionNode_finalize;
        _inf_value2->clone=(void*)sUnionNode_clone;
        _inf_value2->compile=(void*)sUnionNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sUnionNode_terminated;
        _inf_value2->kind=(void*)sUnionNode_kind;
        node_173=(struct sNode*)come_increment_ref_count(_inf_value2);
        /*c*/ come_call_finalizer3(__right_value127,sUnionNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_174=node_compile(node_173,info);
        if(        !Value_174        ) {
            __result_obj__84 = (void*)come_increment_ref_count(((void*)0));
            (struct_attribute_158 = come_decrement_ref_count(struct_attribute_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_159 = come_decrement_ref_count(type_name_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute2_169 = come_decrement_ref_count(struct_attribute2_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(header_171,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_172 = come_decrement_ref_count(id_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__84) ? __result_obj__84 = come_decrement_ref_count(__result_obj__84, ((struct sNode*)__result_obj__84)->finalize, ((struct sNode*)__result_obj__84)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__84;
        }
        else {
        }
        __result_obj__85 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value129=create_nothing_node(info))));
        (struct_attribute_158 = come_decrement_ref_count(struct_attribute_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_159 = come_decrement_ref_count(type_name_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute2_169 = come_decrement_ref_count(struct_attribute2_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(header_171,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (id_172 = come_decrement_ref_count(id_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value129) ? __right_value129 = come_decrement_ref_count(__right_value129, ((struct sNode*)__right_value129)->finalize, ((struct sNode*)__right_value129)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__85) ? __result_obj__85 = come_decrement_ref_count(__result_obj__85, ((struct sNode*)__result_obj__85)->finalize, ((struct sNode*)__result_obj__85)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__85;
        (struct_attribute_158 = come_decrement_ref_count(struct_attribute_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_159 = come_decrement_ref_count(type_name_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute2_169 = come_decrement_ref_count(struct_attribute2_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(header_171,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (id_172 = come_decrement_ref_count(id_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__86 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value130=top_level_v96(buf,head,head_sline,info))));
    ((__right_value130) ? __right_value130 = come_decrement_ref_count(__right_value130, ((struct sNode*)__right_value130)->finalize, ((struct sNode*)__right_value130)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__86) ? __result_obj__86 = come_decrement_ref_count(__result_obj__86, ((struct sNode*)__result_obj__86)->finalize, ((struct sNode*)__result_obj__86)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__86;
}

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_union_175;
char* p_176;
int sline_177;
char* type_name_178;
void* __right_value131 = (void*)0;
char* __dec_obj39;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
char* type_name_179;
void* __right_value134 = (void*)0;
struct sNode* __result_obj__87;
void* __right_value135 = (void*)0;
struct sNode* __result_obj__88;
type_name_178 = (void*)0;
    define_union_175=(_Bool)0;
    {
        p_176=info->p;
        sline_177=info->sline;
        if(        charp_operator_equals(buf,"union")        ) {
            if(            *info->p==95||xisalpha(*info->p)            ) {
                __dec_obj39=type_name_178,
                type_name_178=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                *info->p==123                ) {
                    ((char*)(__right_value132=skip_block(info,(_Bool)0)));
                    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59                    ) {
                        define_union_175=(_Bool)1;
                    }
                }
            }
            (type_name_178 = come_decrement_ref_count(type_name_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_176;
        info->sline=sline_177;
    }
    if(    define_union_175    ) {
        type_name_179=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__87 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value134=parse_union((char*)come_increment_ref_count(type_name_179),info))));
        (type_name_179 = come_decrement_ref_count(type_name_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value134) ? __right_value134 = come_decrement_ref_count(__right_value134, ((struct sNode*)__right_value134)->finalize, ((struct sNode*)__right_value134)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__87) ? __result_obj__87 = come_decrement_ref_count(__result_obj__87, ((struct sNode*)__result_obj__87)->finalize, ((struct sNode*)__result_obj__87)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__87;
        (type_name_179 = come_decrement_ref_count(type_name_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__88 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value135=string_node_v14(buf,head,head_sline,info))));
    ((__right_value135) ? __right_value135 = come_decrement_ref_count(__right_value135, ((struct sNode*)__right_value135)->finalize, ((struct sNode*)__right_value135)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__88) ? __result_obj__88 = come_decrement_ref_count(__result_obj__88, ((struct sNode*)__result_obj__88)->finalize, ((struct sNode*)__result_obj__88)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__88;
}

