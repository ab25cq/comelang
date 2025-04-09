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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2char$phvoid$p
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
    _Bool guard_break;
    _Bool no_err;
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
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
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
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self);
static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self);
static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self);
static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self);
static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple3$3char$phsFun$psGenericsFun$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_clone(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static unsigned int tuple3$3char$phsFun$psGenericsFun$p_get_hash_key(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static _Bool tuple3$3char$phsFun$psGenericsFun$p_equals(struct tuple3$3char$phsFun$psGenericsFun$p* left, struct tuple3$3char$phsFun$psGenericsFun$p* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, _Bool guard_break, struct sInfo* info, _Bool no_err);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info, _Bool no_err);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sCurrentNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value0,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__1 = (struct sCurrentNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__1,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__1;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value1 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string(self->sname))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__2;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__3;
    __result_obj__3 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sCurrentNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__3 = come_decrement_ref_count(__result_obj__3, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__3;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value3 = (void*)0;
char* class_name_0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct sClass* current_stack_1;
struct sVarTable* vtable_2;
struct map$2char$phsVar$ph* o2_saved_3;
char* it_6;
char* key_9;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
struct sVar* value_10;
void* __right_value46 = (void*)0;
struct sType* type2_23;
void* __right_value47 = (void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct tuple2$2char$phsType$ph* item_47;
void* __right_value53 = (void*)0;
struct sType* type3_58;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct tuple2$2char$phsType$ph* item2_61;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_113;
char* it_114;
char* key_115;
void* __right_value70 = (void*)0;
struct sVar* value_116;
void* __right_value71 = (void*)0;
struct sType* type2_117;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
struct tuple2$2char$phsType$ph* item_118;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct CVALUE* come_value_119;
void* __right_value76 = (void*)0;
char* __dec_obj34;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sType* __dec_obj35;
_Bool __result_obj__62;
    info->current_stack_num++;
    class_name_0=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_1=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 644, "struct sClass*")),(char*)come_increment_ref_count(class_name_0),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
    vtable_2=info->lv_table;
    while(    vtable_2) {
        for(        o2_saved_3=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_2->mVars)),it_6=map$2char$phsVar$ph_begin((o2_saved_3));        !map$2char$phsVar$ph_end((o2_saved_3));        it_6=map$2char$phsVar$ph_next((o2_saved_3))        ){
            key_9=it_6;
            value_10=((struct sVar*)(__right_value8=map$2char$phsVar$ph_operator_load_element(vtable_2->mVars,((char*)(__right_value7=__builtin_string(key_9))))));
            (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value8,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_23=(struct sType*)come_increment_ref_count(sType_clone(value_10->mType));
            type2_23->mPointerNum++;
            item_47=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 657, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_10->mCValueName)),(struct sType*)come_increment_ref_count(type2_23)));
            if(            value_10->mCValueName!=((void*)0)) {
                if(                strcmp(value_10->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_10->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_10->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_10->mType->mClass->mName,"va_list")||string_operator_equals(value_10->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_23->mArrayNum)==1) {
                    type3_58=(struct sType*)come_increment_ref_count(sType_clone(type2_23));
                    list$1sNode$ph_reset(type3_58->mArrayNum);
                    type3_58->mPointerNum=1;
                    type3_58->mOriginIsArray=(_Bool)1;
                    item2_61=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 677, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_10->mCValueName)),(struct sType*)come_increment_ref_count(type3_58)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_1->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_61)));
                    value_10->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_58,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_61,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_1->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_47)));
                }
            }
            /*c*/ come_call_finalizer3(type2_23,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_47,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_3,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_2=vtable_2->mParent;
    }
    output_struct(current_stack_1,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_0),(struct sClass*)come_increment_ref_count(current_stack_1));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_0,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_0);
    vtable_2=info->lv_table;
    while(    vtable_2) {
        for(        o2_saved_113=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_2->mVars)),it_114=map$2char$phsVar$ph_begin((o2_saved_113));        !map$2char$phsVar$ph_end((o2_saved_113));        it_114=map$2char$phsVar$ph_next((o2_saved_113))        ){
            key_115=it_114;
            value_116=((struct sVar*)(__right_value70=map$2char$phsVar$ph_operator_load_element(vtable_2->mVars,key_115)));
            /*c*/ come_call_finalizer3(__right_value70,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_117=(struct sType*)come_increment_ref_count(sType_clone(value_116->mType));
            item_118=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 706, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_116->mCValueName),(struct sType*)come_increment_ref_count(type2_117)));
            if(            value_116->mCValueName!=((void*)0)) {
                if(                strcmp(value_116->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_116->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_116->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_116->mType->mClass->mName,"va_list")||string_operator_equals(value_116->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_116->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_117->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_116->mCValueName,value_116->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_116->mCValueName,value_116->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_117->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_116->mCValueName,value_116->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_116->mCValueName,value_116->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_117,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_118,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_113,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_2=vtable_2->mParent;
    }
    come_value_119=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 745, "struct CVALUE*"))));
    __dec_obj34=come_value_119->c_value,
    come_value_119->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj35=come_value_119->type,
    come_value_119->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 748, "struct sType*")),(char*)come_increment_ref_count(class_name_0),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_119->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_119->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
    __result_obj__62 = (_Bool)1;
    (class_name_0 = come_decrement_ref_count(class_name_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_1,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_119,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_4;
char* __result_obj__4;
char* __result_obj__5;
char* result_5;
char* __result_obj__6;
result_4 = (void*)0;
result_5 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_4,0,sizeof(char*));
        __result_obj__4 = result_4;
        return __result_obj__4;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__5 = self->key_list->it->item;
        return __result_obj__5;
    }
    memset(&result_5,0,sizeof(char*));
    __result_obj__6 = result_5;
    return __result_obj__6;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_7;
char* __result_obj__7;
char* __result_obj__8;
char* result_8;
char* __result_obj__9;
result_7 = (void*)0;
result_8 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_7,0,sizeof(char*));
        __result_obj__7 = result_7;
        return __result_obj__7;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__8 = self->key_list->it->item;
        return __result_obj__8;
    }
    memset(&result_8,0,sizeof(char*));
    __result_obj__9 = result_8;
    return __result_obj__9;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_11;
unsigned int hash_12;
unsigned int it_13;
struct sVar* __result_obj__10;
struct sVar* __result_obj__11;
struct sVar* __result_obj__12;
struct sVar* __result_obj__13;
default_value_11 = (void*)0;
    memset(&default_value_11,0,sizeof(struct sVar*));
    hash_12=string_get_hash_key(((char*)key))%self->size;
    it_13=hash_12;
    while(    (_Bool)1) {
        if(        self->item_existance[it_13]) {
            if(            string_equals(self->keys[it_13],key)) {
                __result_obj__10 = (struct sVar*)come_increment_ref_count(self->items[it_13]);
                /*c*/ come_call_finalizer3(default_value_11,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__10,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__10;
            }
            it_13++;
            if(            it_13>=self->size) {
                it_13=0;
            }
            else if(            it_13==hash_12) {
                __result_obj__11 = (struct sVar*)come_increment_ref_count(default_value_11);
                /*c*/ come_call_finalizer3(default_value_11,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__11,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__11;
            }
        }
        else {
            __result_obj__12 = (struct sVar*)come_increment_ref_count(default_value_11);
            /*c*/ come_call_finalizer3(default_value_11,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__12,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__12;
        }
    }
    __result_obj__13 = (struct sVar*)come_increment_ref_count(default_value_11);
    /*c*/ come_call_finalizer3(default_value_11,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__13,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
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
struct list_item$1sType$ph* it_14;
struct list_item$1sType$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)) {
        prev_it_15=it_14;
        it_14=it_14->next;
        /*c*/ come_call_finalizer3(prev_it_15,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_16;
struct list_item$1sNode$ph* prev_it_17;
    it_16=self->head;
    while(    it_16!=((void*)0)) {
        prev_it_17=it_16;
        it_16=it_16->next;
        /*c*/ come_call_finalizer3(prev_it_17,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_18;
struct list_item$1char$ph* prev_it_19;
    it_18=self->head;
    while(    it_18!=((void*)0)) {
        prev_it_19=it_18;
        it_18=it_18->next;
        /*c*/ come_call_finalizer3(prev_it_19,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_20;
unsigned int hash_21;
unsigned int it_22;
struct sVar* __result_obj__14;
struct sVar* __result_obj__15;
struct sVar* __result_obj__16;
struct sVar* __result_obj__17;
default_value_20 = (void*)0;
    memset(&default_value_20,0,sizeof(struct sVar*));
    hash_21=string_get_hash_key(((char*)key))%self->size;
    it_22=hash_21;
    while(    (_Bool)1) {
        if(        self->item_existance[it_22]) {
            if(            string_equals(self->keys[it_22],key)) {
                __result_obj__14 = (struct sVar*)come_increment_ref_count(self->items[it_22]);
                /*c*/ come_call_finalizer3(default_value_20,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__14,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__14;
            }
            it_22++;
            if(            it_22>=self->size) {
                it_22=0;
            }
            else if(            it_22==hash_21) {
                __result_obj__15 = (struct sVar*)come_increment_ref_count(default_value_20);
                /*c*/ come_call_finalizer3(default_value_20,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__15,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__15;
            }
        }
        else {
            __result_obj__16 = (struct sVar*)come_increment_ref_count(default_value_20);
            /*c*/ come_call_finalizer3(default_value_20,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__16,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__16;
        }
    }
    __result_obj__17 = (struct sVar*)come_increment_ref_count(default_value_20);
    /*c*/ come_call_finalizer3(default_value_20,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__17,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__17;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__18;
void* __right_value9 = (void*)0;
struct sType* result_24;
void* __right_value10 = (void*)0;
struct sType* __dec_obj1;
void* __right_value11 = (void*)0;
struct sType* __dec_obj2;
void* __right_value19 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value20 = (void*)0;
struct sType* __dec_obj7;
void* __right_value22 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value23 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value24 = (void*)0;
char* __dec_obj10;
void* __right_value25 = (void*)0;
char* __dec_obj11;
void* __right_value26 = (void*)0;
char* __dec_obj12;
void* __right_value34 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value35 = (void*)0;
char* __dec_obj17;
void* __right_value36 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value44 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value45 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__33;
    if(    self==(void*)0) {
        __result_obj__18 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__18,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__18;
    }
    result_24=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_24->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj1=result_24->mOriginalLoadVarType,
        result_24->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj1,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj2=result_24->mChannelType,
        result_24->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj2,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj6=result_24->mGenericsTypes,
        result_24->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj6,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=result_24->mNoSolvedGenericsType,
        result_24->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj8=result_24->mSizeNum,
        result_24->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj9=result_24->mAlignas,
        result_24->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj10=result_24->mTupleName,
        result_24->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj11=result_24->mAttribute,
        result_24->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_24->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_24->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_24->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_24->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_24->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_24->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_24->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_24->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_24->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_24->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_24->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_24->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_24->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_24->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_24->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_24->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_24->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_24->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_24->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_24->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_24->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_24->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_24->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj12=result_24->mAsmName,
        result_24->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_24->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_24->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_24->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj16=result_24->mArrayNum,
        result_24->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj16,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_24->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_24->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_24->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_24->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_24->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj17=result_24->mOriginalTypeName,
        result_24->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_24->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_24->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_24->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_24->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj18=result_24->mParamTypes,
        result_24->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj18,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj22=result_24->mParamNames,
        result_24->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj23=result_24->mResultType,
        result_24->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_24->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_24->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)) {
        result_24->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__33 = (struct sType*)come_increment_ref_count(result_24);
    /*c*/ come_call_finalizer3(result_24,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__33,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__33;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__19;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct list$1sType$ph* result_25;
struct list_item$1sType$ph* it_26;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct list$1sType$ph* __result_obj__22;
    if(    self==((void*)0)) {
        __result_obj__19 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__19,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__19;
    }
    result_25=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_25,(struct sType*)come_increment_ref_count(sType_clone(it_26->item)));
        }
        else {
            list$1sType$ph_add(result_25,(struct sType*)come_increment_ref_count(sType_clone(it_26->item)));
        }
        it_26=it_26->next;
    }
    __result_obj__22 = (struct list$1sType$ph*)come_increment_ref_count(result_25);
    /*c*/ come_call_finalizer3(result_25,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__22,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__22;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__20;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__20 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__20,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__20;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_27;
struct sType* __dec_obj3;
void* __right_value15 = (void*)0;
struct list_item$1sType$ph* litem_28;
struct sType* __dec_obj4;
void* __right_value16 = (void*)0;
struct list_item$1sType$ph* litem_29;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__21;
    if(    self->len==0) {
        litem_27=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj3=litem_27->item,
        litem_27->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1) {
        litem_28=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value15=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj4=litem_28->item,
        litem_28->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value16=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj5=litem_29->item,
        litem_29->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__21 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__21;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_30;
struct list_item$1sType$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)) {
        prev_it_31=it_30;
        it_30=it_30->next;
        /*c*/ come_call_finalizer3(prev_it_31,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__23;
void* __right_value21 = (void*)0;
struct sNode* result_32;
struct sNode* __result_obj__24;
    if(    self==(void*)0) {
        __result_obj__23 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__23) ? __result_obj__23 = come_decrement_ref_count(__result_obj__23, ((struct sNode*)__result_obj__23)->finalize, ((struct sNode*)__result_obj__23)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__23;
    }
    result_32=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_32->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_32->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_32->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_32->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_32->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_32->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_32->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_32->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_32->kind=self->kind;
    }
    __result_obj__24 = (struct sNode*)come_increment_ref_count(result_32);
    ((result_32) ? result_32 = come_decrement_ref_count(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__24) ? __result_obj__24 = come_decrement_ref_count(__result_obj__24, ((struct sNode*)__result_obj__24)->finalize, ((struct sNode*)__result_obj__24)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__24;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__25;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* result_33;
struct list_item$1sNode$ph* it_34;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
struct list$1sNode$ph* __result_obj__28;
    if(    self==((void*)0)) {
        __result_obj__25 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__25,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__25;
    }
    result_33=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_34=self->head;
    while(    it_34!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_33,(struct sNode*)come_increment_ref_count(sNode_clone(it_34->item)));
        }
        else {
            list$1sNode$ph_add(result_33,(struct sNode*)come_increment_ref_count(sNode_clone(it_34->item)));
        }
        it_34=it_34->next;
    }
    __result_obj__28 = (struct list$1sNode$ph*)come_increment_ref_count(result_33);
    /*c*/ come_call_finalizer3(result_33,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__28,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__28;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__26;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__26,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__26;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_35;
struct sNode* __dec_obj13;
void* __right_value30 = (void*)0;
struct list_item$1sNode$ph* litem_36;
struct sNode* __dec_obj14;
void* __right_value31 = (void*)0;
struct list_item$1sNode$ph* litem_37;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__27;
    if(    self->len==0) {
        litem_35=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_35->prev=((void*)0);
        litem_35->next=((void*)0);
        __dec_obj13=litem_35->item,
        litem_35->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_35;
        self->head=litem_35;
    }
    else if(    self->len==1) {
        litem_36=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value30=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_36->prev=self->head;
        litem_36->next=((void*)0);
        __dec_obj14=litem_36->item,
        litem_36->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_36;
        self->head->next=litem_36;
    }
    else {
        litem_37=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value31=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_37->prev=self->tail;
        litem_37->next=((void*)0);
        __dec_obj15=litem_37->item,
        litem_37->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_37;
        self->tail=litem_37;
    }
    self->len++;
    __result_obj__27 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__27;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_38;
struct list_item$1sNode$ph* prev_it_39;
    it_38=self->head;
    while(    it_38!=((void*)0)) {
        prev_it_39=it_38;
        it_38=it_38->next;
        /*c*/ come_call_finalizer3(prev_it_39,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__29;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct list$1char$ph* result_40;
struct list_item$1char$ph* it_41;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct list$1char$ph* __result_obj__32;
    if(    self==((void*)0)) {
        __result_obj__29 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__29,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__29;
    }
    result_40=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_41=self->head;
    while(    it_41!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_40,(char*)come_increment_ref_count((char*)come_memdup(it_41->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_40,(char*)come_increment_ref_count((char*)come_memdup(it_41->item, "./comelang.h", 1032, "char*")));
        }
        it_41=it_41->next;
    }
    __result_obj__32 = (struct list$1char$ph*)come_increment_ref_count(result_40);
    /*c*/ come_call_finalizer3(result_40,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__32,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__32;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__30;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__30,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__30;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_42;
char* __dec_obj19;
void* __right_value40 = (void*)0;
struct list_item$1char$ph* litem_43;
char* __dec_obj20;
void* __right_value41 = (void*)0;
struct list_item$1char$ph* litem_44;
char* __dec_obj21;
struct list$1char$ph* __result_obj__31;
    if(    self->len==0) {
        litem_42=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_42->prev=((void*)0);
        litem_42->next=((void*)0);
        __dec_obj19=litem_42->item,
        litem_42->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_42;
        self->head=litem_42;
    }
    else if(    self->len==1) {
        litem_43=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value40=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj20=litem_43->item,
        litem_43->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value41=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj21=litem_44->item,
        litem_44->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result_obj__31 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__31;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_45;
struct list_item$1char$ph* prev_it_46;
    it_45=self->head;
    while(    it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        /*c*/ come_call_finalizer3(prev_it_46,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__34;
void* __right_value48 = (void*)0;
struct tuple2$2char$phsType$ph* result_48;
void* __right_value49 = (void*)0;
char* __dec_obj24;
void* __right_value50 = (void*)0;
struct sType* __dec_obj25;
struct tuple2$2char$phsType$ph* __result_obj__35;
    if(    self==(void*)0) {
        __result_obj__34 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__34,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__34;
    }
    result_48=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj24=result_48->v1,
        result_48->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj25=result_48->v2,
        result_48->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__35 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_48);
    /*c*/ come_call_finalizer3(result_48,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__35,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__35;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_49;
    result_49=0;
    result_49+=int_get_hash_key(((int)self->v1));
    result_49+=int_get_hash_key(((int)self->v2));
    return result_49;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_50;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_51;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_50=left->head;
    it2_51=right->head;
    while(    it_50!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_50->item,it2_51->item)) {
            return (_Bool)0;
        }
        it_50=it_50->next;
        it2_51=it2_51->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_52;
struct list_item$1sType$ph* it2_53;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_52=left->head;
    it2_53=right->head;
    while(    it_52!=((void*)0)) {
        if(        !sType_equals(it_52->item,it2_53->item)) {
            return (_Bool)0;
        }
        it_52=it_52->next;
        it2_53=it2_53->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_54;
struct list_item$1sNode$ph* it2_55;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_54=left->head;
    it2_55=right->head;
    while(    it_54!=((void*)0)) {
        if(        !sNode_equals(it_54->item,it2_55->item)) {
            return (_Bool)0;
        }
        it_54=it_54->next;
        it2_55=it2_55->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_56;
struct list_item$1char$ph* it2_57;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_56=left->head;
    it2_57=right->head;
    while(    it_56!=((void*)0)) {
        if(        !string_equals(it_56->item,it2_57->item)) {
            return (_Bool)0;
        }
        it_56=it_56->next;
        it2_57=it2_57->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj26;
struct sType* __dec_obj27;
struct tuple2$2char$phsType$ph* __result_obj__36;
    __dec_obj26=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj27=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__36 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__36,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
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
struct list_item$1sNode$ph* it_59;
struct list_item$1sNode$ph* prev_it_60;
struct list$1sNode$ph* __result_obj__37;
    it_59=self->head;
    while(    it_59!=((void*)0)) {
        prev_it_60=it_59;
        it_59=it_59->next;
        /*c*/ come_call_finalizer3(prev_it_60,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__37 = self;
    return __result_obj__37;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value57 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_62;
struct tuple2$2char$phsType$ph* __dec_obj28;
void* __right_value58 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_63;
struct tuple2$2char$phsType$ph* __dec_obj29;
void* __right_value59 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_64;
struct tuple2$2char$phsType$ph* __dec_obj30;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__38;
    if(    self->len==0) {
        litem_62=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value57=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_62->prev=((void*)0);
        litem_62->next=((void*)0);
        __dec_obj28=litem_62->item,
        litem_62->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_62;
        self->head=litem_62;
    }
    else if(    self->len==1) {
        litem_63=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value58=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_63->prev=self->head;
        litem_63->next=((void*)0);
        __dec_obj29=litem_63->item,
        litem_63->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_63;
        self->head->next=litem_63;
    }
    else {
        litem_64=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value59=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_64->prev=self->tail;
        litem_64->next=((void*)0);
        __dec_obj30=litem_64->item,
        litem_64->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj30,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_64;
        self->tail=litem_64;
    }
    self->len++;
    __result_obj__38 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__38;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_65;
int i_66;
    for(    i_65=0;    i_65<self->size;    i_65++    ){
        if(        self->item_existance[i_65]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_65],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_66=0;    i_66<self->size;    i_66++    ){
        if(        self->item_existance[i_66]) {
            if(            1) {
                (self->keys[i_66] = come_decrement_ref_count(self->keys[i_66], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_86;
unsigned int it_87;
_Bool same_key_exist_104;
char* it2_107;
struct map$2char$phsClass$ph* __result_obj__60;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_86=string_get_hash_key(((char*)key))%self->size;
    it_87=hash_86;
    while(    (_Bool)1) {
        if(        self->item_existance[it_87]) {
            if(            string_equals(self->keys[it_87],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_87]);
                    (self->keys[it_87] = come_decrement_ref_count(self->keys[it_87], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_87]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_87]);
                    self->keys[it_87]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_87],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_87]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_87]=item;
                }
                break;
            }
            it_87++;
            if(            it_87>=self->size) {
                it_87=0;
            }
            else if(            it_87==hash_86) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_87]=(_Bool)1;
            if(            1) {
                self->keys[it_87]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_87]=key;
            }
            if(            1) {
                self->items[it_87]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_87]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_104=(_Bool)0;
    for(    it2_107=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_107=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_107,key)) {
            same_key_exist_104=(_Bool)1;
        }
    }
    if(    !same_key_exist_104) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__60 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_67;
void* __right_value62 = (void*)0;
char** keys_68;
void* __right_value63 = (void*)0;
struct sClass** items_69;
void* __right_value64 = (void*)0;
_Bool* item_existance_70;
int len_71;
char* it_74;
struct sClass* default_value_77;
void* __right_value65 = (void*)0;
struct sClass* it2_78;
unsigned int hash_83;
int n_84;
struct sClass* default_value_85;
void* __right_value66 = (void*)0;
default_value_77 = (void*)0;
default_value_85 = (void*)0;
    size_67=self->size*10;
    keys_68=(char**)come_increment_ref_count(((char**)(__right_value62=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_67)), "./comelang.h", 2153, "char**"))));
    items_69=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value63=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_67)), "./comelang.h", 2154, "struct sClass**"))));
    item_existance_70=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value64=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_67)), "./comelang.h", 2155, "_Bool*"))));
    len_71=0;
    for(    it_74=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_74=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_77,0,sizeof(struct sClass*));
        it2_78=((struct sClass*)(__right_value65=map$2char$phsClass$ph_at(self,it_74,(struct sClass*)come_increment_ref_count(default_value_77))));
        /*c*/ come_call_finalizer3(__right_value65,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_83=string_get_hash_key(((char*)it_74))%size_67;
        n_84=hash_83;
        while(        (_Bool)1) {
            if(            item_existance_70[n_84]) {
                n_84++;
                if(                n_84>=size_67) {
                    n_84=0;
                }
                else if(                n_84==hash_83) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_70[n_84]=(_Bool)1;
                keys_68[n_84]=it_74;
                items_69[n_84]=((struct sClass*)(__right_value66=map$2char$phsClass$ph_at(self,it_74,(struct sClass*)come_increment_ref_count(default_value_85))));
                /*c*/ come_call_finalizer3(__right_value66,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_71++;
                /*c*/ come_call_finalizer3(default_value_85,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_85,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_77,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_68;
    self->items=items_69;
    self->item_existance=item_existance_70;
    self->size=size_67;
    self->len=len_71;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_72;
char* __result_obj__39;
char* __result_obj__40;
char* result_73;
char* __result_obj__41;
result_72 = (void*)0;
result_73 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_72,0,sizeof(char*));
        __result_obj__39 = result_72;
        return __result_obj__39;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__40 = self->key_list->it->item;
        return __result_obj__40;
    }
    memset(&result_73,0,sizeof(char*));
    __result_obj__41 = result_73;
    return __result_obj__41;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_75;
char* __result_obj__42;
char* __result_obj__43;
char* result_76;
char* __result_obj__44;
result_75 = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_75,0,sizeof(char*));
        __result_obj__42 = result_75;
        return __result_obj__42;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__43 = self->key_list->it->item;
        return __result_obj__43;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__44 = result_76;
    return __result_obj__44;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_79;
unsigned int it_80;
struct sClass* __result_obj__45;
struct sClass* __result_obj__46;
struct sClass* __result_obj__47;
struct sClass* __result_obj__48;
    hash_79=string_get_hash_key(((char*)key))%self->size;
    it_80=hash_79;
    while(    (_Bool)1) {
        if(        self->item_existance[it_80]) {
            if(            string_equals(self->keys[it_80],key)) {
                __result_obj__45 = (struct sClass*)come_increment_ref_count(self->items[it_80]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__45,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__45;
            }
            it_80++;
            if(            it_80>=self->size) {
                it_80=0;
            }
            else if(            it_80==hash_79) {
                __result_obj__46 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__46,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__46;
            }
        }
        else {
            __result_obj__47 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__47,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__47;
        }
    }
    __result_obj__48 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__48,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_81;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_82;
    it_81=self->head;
    while(    it_81!=((void*)0)) {
        prev_it_82=it_81;
        it_81=it_81->next;
        /*c*/ come_call_finalizer3(prev_it_82,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_88;
struct list_item$1char$ph* it_89;
struct list$1char$ph* __result_obj__52;
    it2_88=0;
    it_89=self->head;
    while(    it_89!=((void*)0)) {
        if(        string_equals(it_89->item,item)) {
            list$1char$ph_delete(self,it2_88,it2_88+1);
            break;
        }
        it2_88++;
        it_89=it_89->next;
    }
    __result_obj__52 = self;
    return __result_obj__52;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_90;
struct list$1char$ph* __result_obj__49;
struct list_item$1char$ph* it_93;
int i_94;
struct list_item$1char$ph* prev_it_95;
struct list_item$1char$ph* it_96;
int i_97;
struct list_item$1char$ph* prev_it_98;
struct list_item$1char$ph* it_99;
struct list_item$1char$ph* head_prev_it_100;
struct list_item$1char$ph* tail_it_101;
int i_102;
struct list_item$1char$ph* prev_it_103;
struct list$1char$ph* __result_obj__51;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_90=tail;
        tail=head;
        head=tmp_90;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__49 = self;
        return __result_obj__49;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_93=self->head;
        i_94=0;
        while(        it_93!=((void*)0)) {
            if(            i_94<tail) {
                prev_it_95=it_93;
                it_93=it_93->next;
                i_94++;
                /*c*/ come_call_finalizer3(prev_it_95,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_94==tail) {
                self->head=it_93;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_93=it_93->next;
                i_94++;
            }
        }
    }
    else if(    tail==self->len) {
        it_96=self->head;
        i_97=0;
        while(        it_96!=((void*)0)) {
            if(            i_97==head) {
                self->tail=it_96->prev;
                self->tail->next=((void*)0);
            }
            if(            i_97>=head) {
                prev_it_98=it_96;
                it_96=it_96->next;
                i_97++;
                /*c*/ come_call_finalizer3(prev_it_98,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_96=it_96->next;
                i_97++;
            }
        }
    }
    else {
        it_99=self->head;
        head_prev_it_100=((void*)0);
        tail_it_101=((void*)0);
        i_102=0;
        while(        it_99!=((void*)0)) {
            if(            i_102==head) {
                head_prev_it_100=it_99->prev;
            }
            if(            i_102==tail) {
                tail_it_101=it_99;
            }
            if(            i_102>=head&&i_102<tail) {
                prev_it_103=it_99;
                it_99=it_99->next;
                i_102++;
                /*c*/ come_call_finalizer3(prev_it_103,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_99=it_99->next;
                i_102++;
            }
        }
        if(        head_prev_it_100!=((void*)0)) {
            head_prev_it_100->next=tail_it_101;
        }
        if(        tail_it_101!=((void*)0)) {
            tail_it_101->prev=head_prev_it_100;
        }
    }
    __result_obj__51 = self;
    return __result_obj__51;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_91;
struct list_item$1char$ph* prev_it_92;
struct list$1char$ph* __result_obj__50;
    it_91=self->head;
    while(    it_91!=((void*)0)) {
        prev_it_92=it_91;
        it_91=it_91->next;
        /*c*/ come_call_finalizer3(prev_it_92,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__50 = self;
    return __result_obj__50;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_105;
char* __result_obj__53;
char* __result_obj__54;
char* result_106;
char* __result_obj__55;
result_105 = (void*)0;
result_106 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_105,0,sizeof(char*));
        __result_obj__53 = result_105;
        return __result_obj__53;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__54 = self->it->item;
        return __result_obj__54;
    }
    memset(&result_106,0,sizeof(char*));
    __result_obj__55 = result_106;
    return __result_obj__55;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_108;
char* __result_obj__56;
char* __result_obj__57;
char* result_109;
char* __result_obj__58;
result_108 = (void*)0;
result_109 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_108,0,sizeof(char*));
        __result_obj__56 = result_108;
        return __result_obj__56;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__57 = self->it->item;
        return __result_obj__57;
    }
    memset(&result_109,0,sizeof(char*));
    __result_obj__58 = result_109;
    return __result_obj__58;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value67 = (void*)0;
struct list_item$1char$ph* litem_110;
char* __dec_obj31;
void* __right_value68 = (void*)0;
struct list_item$1char$ph* litem_111;
char* __dec_obj32;
void* __right_value69 = (void*)0;
struct list_item$1char$ph* litem_112;
char* __dec_obj33;
struct list$1char$ph* __result_obj__59;
    if(    self->len==0) {
        litem_110=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value67=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_110->prev=((void*)0);
        litem_110->next=((void*)0);
        __dec_obj31=litem_110->item,
        litem_110->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_110;
        self->head=litem_110;
    }
    else if(    self->len==1) {
        litem_111=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value68=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_111->prev=self->head;
        litem_111->next=((void*)0);
        __dec_obj32=litem_111->item,
        litem_111->item=(char*)come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_111;
        self->head->next=litem_111;
    }
    else {
        litem_112=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value69=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_112->prev=self->tail;
        litem_112->next=((void*)0);
        __dec_obj33=litem_112->item,
        litem_112->item=(char*)come_increment_ref_count(item);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_112;
        self->tail=litem_112;
    }
    self->len++;
    __result_obj__59 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__59;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value79 = (void*)0;
struct list_item$1CVALUE$ph* litem_120;
struct CVALUE* __dec_obj36;
void* __right_value80 = (void*)0;
struct list_item$1CVALUE$ph* litem_121;
struct CVALUE* __dec_obj37;
void* __right_value81 = (void*)0;
struct list_item$1CVALUE$ph* litem_122;
struct CVALUE* __dec_obj38;
struct list$1CVALUE$ph* __result_obj__61;
    if(    self->len==0) {
        litem_120=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value79=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_120->prev=((void*)0);
        litem_120->next=((void*)0);
        __dec_obj36=litem_120->item,
        litem_120->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj36,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_120;
        self->head=litem_120;
    }
    else if(    self->len==1) {
        litem_121=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value80=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_121->prev=self->head;
        litem_121->next=((void*)0);
        __dec_obj37=litem_121->item,
        litem_121->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj37,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_121;
        self->head->next=litem_121;
    }
    else {
        litem_122=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value81=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_122->prev=self->tail;
        litem_122->next=((void*)0);
        __dec_obj38=litem_122->item,
        litem_122->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_122;
        self->tail=litem_122;
    }
    self->len++;
    __result_obj__61 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__61;
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

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value82 = (void*)0;
char* none_generics_name_123;
void* __right_value83 = (void*)0;
char* fun_name2_124;
void* __right_value84 = (void*)0;
char* fun_name3_125;
void* __right_value85 = (void*)0;
struct sType* no_solved_type_126;
void* __right_value86 = (void*)0;
struct sGenericsFun* generics_fun_127;
struct sType* type2_130;
void* __right_value87 = (void*)0;
struct sType* type_before_131;
void* __right_value88 = (void*)0;
char* __dec_obj39;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_132=0;
_Bool err_133=0;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__70;
void* __right_value97 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__74;
    none_generics_name_123=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_124=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_125=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_123,fun_name));
    no_solved_type_126=(struct sType*)come_increment_ref_count(sType_clone(type));
    generics_fun_127=((struct sGenericsFun*)(__right_value86=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_125,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value86,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_127) {
        type2_130=(struct sType*)come_increment_ref_count(no_solved_type_126);
        type_before_131=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj39=fun_name2_124,
        fun_name2_124=(char*)come_increment_ref_count(create_method_name(type2_130,(_Bool)0,fun_name,info,array_equal_pointer));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value90=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_124)),generics_fun_127,type2_130,info)));
        name_132=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        err_133=multiple_assign_var1->v2;
        /*c*/ come_call_finalizer3(__right_value90,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_133) {
            ((struct tuple2$2int$bool$*)(__right_value91=err_msg(info,"%s not found",fun_name3_125)));
            /*c*/ come_call_finalizer3(__right_value91,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__70 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value96=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 29, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            /*c*/ come_call_finalizer3(type2_130,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_before_131,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (none_generics_name_123 = come_decrement_ref_count(none_generics_name_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name2_124 = come_decrement_ref_count(fun_name2_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name3_125 = come_decrement_ref_count(fun_name3_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(no_solved_type_126,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value96,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__70,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__70;
        }
        type=type_before_131;
        /*c*/ come_call_finalizer3(type2_130,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_before_131,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__74 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value101=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 35, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name2_124, "20method.c", 35, "char*")),generics_fun_127))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_123 = come_decrement_ref_count(none_generics_name_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_124 = come_decrement_ref_count(fun_name2_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_125 = come_decrement_ref_count(fun_name3_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(no_solved_type_126,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value101,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_128;
unsigned int it_129;
struct sGenericsFun* __result_obj__63;
struct sGenericsFun* __result_obj__64;
struct sGenericsFun* __result_obj__65;
struct sGenericsFun* __result_obj__66;
    hash_128=string_get_hash_key(((char*)key))%self->size;
    it_129=hash_128;
    while(    (_Bool)1) {
        if(        self->item_existance[it_129]) {
            if(            string_equals(self->keys[it_129],key)) {
                __result_obj__63 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_129]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__63,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__63;
            }
            it_129++;
            if(            it_129>=self->size) {
                it_129=0;
            }
            else if(            it_129==hash_128) {
                __result_obj__64 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__64,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__64;
            }
        }
        else {
            __result_obj__65 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__65,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__65;
        }
    }
    __result_obj__66 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
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

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self){
struct tuple2$2char$phvoid$p* __result_obj__67;
void* __right_value93 = (void*)0;
struct tuple2$2char$phvoid$p* result_134;
void* __right_value94 = (void*)0;
char* __dec_obj40;
struct tuple2$2char$phvoid$p* __result_obj__68;
    if(    self==(void*)0) {
        __result_obj__67 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__67,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__67;
    }
    result_134=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj40=result_134->v1,
        result_134->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phvoid$p_clone", 4, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_134->v2=self->v2;
    }
    __result_obj__68 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(result_134);
    /*c*/ come_call_finalizer3(result_134,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_135;
    result_135=0;
    result_135+=int_get_hash_key(((int)self->v1));
    result_135+=int_get_hash_key(((int)self->v2));
    return result_135;
}

static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj41;
struct tuple2$2char$phvoid$p* __result_obj__69;
    __dec_obj41=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__69 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__69,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self){
struct tuple2$2char$phsGenericsFun$p* __result_obj__71;
void* __right_value98 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_136;
void* __right_value99 = (void*)0;
char* __dec_obj42;
struct tuple2$2char$phsGenericsFun$p* __result_obj__72;
    if(    self==(void*)0) {
        __result_obj__71 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__71,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__71;
    }
    result_136=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj42=result_136->v1,
        result_136->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsGenericsFun$p_clone", 4, "char*"));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_136->v2=self->v2;
    }
    __result_obj__72 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(result_136);
    /*c*/ come_call_finalizer3(result_136,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_137;
    result_137=0;
    result_137+=int_get_hash_key(((int)self->v1));
    result_137+=int_get_hash_key(((int)self->v2));
    return result_137;
}

static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mSLine,right->mSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsSName,right->mGenericsSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsSLine,right->mGenericsSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstFun,right->mConstFun)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj43;
struct tuple2$2char$phsGenericsFun$p* __result_obj__73;
    __dec_obj43=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__73 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__73,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__73;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value102 = (void*)0;
char* fun_name3_139;
struct list$1sType$ph* method_generics_types_before_140;
struct list$1sType$ph* __dec_obj44;
void* __right_value103 = (void*)0;
struct sGenericsFun* generics_fun_141;
void* __right_value104 = (void*)0;
_Bool _if_conditional1;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__75;
struct list$1sType$ph* __dec_obj45;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__76;
    static int num_method_generics_138=0;
    fun_name3_139=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_138++));
    method_generics_types_before_140=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj44=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj44,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_141=((struct sGenericsFun*)(__right_value103=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value103,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_141) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_139)),generics_fun_141,info))),        _if_conditional1) {
            ((struct tuple2$2int$bool$*)(__right_value105=err_msg(info,"%s not found",fun_name3_139)));
            /*c*/ come_call_finalizer3(__right_value105,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__75 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value108=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 51, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name3_139 = come_decrement_ref_count(fun_name3_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types_before_140,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value108,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__75,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__75;
        }
    }
    __dec_obj45=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_140);
    /*b*/ come_call_finalizer3(__dec_obj45,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__76 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value111=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 57, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name3_139, "20method.c", 57, "char*")),generics_fun_141))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name3_139 = come_decrement_ref_count(fun_name3_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types_before_140,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value111,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__76,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value116 = (void*)0;
struct sNode* current_stack_frame_node_142;
_Bool Value_144;
_Bool __result_obj__79;
void* __right_value117 = (void*)0;
struct CVALUE* come_value_147;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct buffer* method_block2_148;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* method_block_type_149;
void* __right_value122 = (void*)0;
char* class_name_156;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct sClass* current_stack_frame_struct_163;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
_Bool __result_obj__92;
void* __right_value127 = (void*)0;
struct sType* result_type_164;
struct list$1sType$ph* param_types_165;
struct list$1char$ph* param_names_166;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* all_alhabet_sname_167;
char* p_168;
int num_method_block_169;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
int i_170;
struct list$1sType$ph* o2_saved_171;
struct sType* it_174;
struct sType* param_type_177;
void* __right_value132 = (void*)0;
char* param_name_178;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
char* param_name_179;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* param_name_180;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct buffer* source3_181;
char* p_182;
char* head_183;
int sline_184;
struct buffer* __dec_obj47;
void* __right_value139 = (void*)0;
struct sNode* node_185;
_Bool in_method_block_186;
_Bool Value_187;
_Bool __result_obj__99;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
char* method_block_name_188;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct CVALUE* come_value2_189;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct sFun* fun2_190;
void* __right_value146 = (void*)0;
_Bool __result_obj__104;
struct sType* method_block_type2_193;
void* __right_value147 = (void*)0;
char* __dec_obj48;
void* __right_value148 = (void*)0;
struct sType* __dec_obj49;
struct buffer* __dec_obj50;
void* __right_value149 = (void*)0;
struct sType* __dec_obj51;
_Bool contained_method_generics_method_block_194;
struct list$1sType$ph* o2_saved_195;
struct sType* it_196;
void* __right_value150 = (void*)0;
_Bool __result_obj__106;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 62, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value113=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 62, "struct sCurrentNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_142=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value113,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_144=node_compile(current_stack_frame_node_142,info);
    if(    !Value_144) {
        __result_obj__79 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_142) ? current_stack_frame_node_142 = come_decrement_ref_count(current_stack_frame_node_142, ((struct sNode*)current_stack_frame_node_142)->finalize, ((struct sNode*)current_stack_frame_node_142)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__79;
    }
    else {
    }
    come_value_147=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_147));
    method_block2_148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 71, "struct buffer*"))));
    method_block_type_149=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value120=list$1sType$ph_operator_load_element(fun->mParamTypes,-1)))));
    /*c*/ come_call_finalizer3(__right_value120,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    class_name_156=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value123=list$1sType$ph_operator_load_element(method_block_type_149->mParamTypes,0)))->mClass=((struct sClass*)(__right_value124=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_156)));
    /*c*/ come_call_finalizer3(__right_value123,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value124,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    current_stack_frame_struct_163=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value125=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_156)));
    /*c*/ come_call_finalizer3(__right_value125,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_149->mClass->mName,"lambda")) {
        ((struct tuple2$2int$bool$*)(__right_value126=err_msg(info,"This function does not have method block(%s)",fun_name)));
        /*c*/ come_call_finalizer3(__right_value126,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__92 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_142) ? current_stack_frame_node_142 = come_decrement_ref_count(current_stack_frame_node_142, ((struct sNode*)current_stack_frame_node_142)->finalize, ((struct sNode*)current_stack_frame_node_142)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_147,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_148,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_149,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_156 = come_decrement_ref_count(class_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__92;
    }
    result_type_164=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_149->mResultType));
    result_type_164->mStatic=(_Bool)0;
    param_types_165=method_block_type_149->mParamTypes;
    param_names_166=method_block_type_149->mParamNames;
    all_alhabet_sname_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 92, "struct buffer*"))));
    {
        p_168=info->sname;
        while(        *p_168) {
            if(            xisalnum(*p_168)) {
                buffer_append_char(all_alhabet_sname_167,*p_168++);
            }
            else {
                p_168++;
            }
        }
    }
    num_method_block_169=info->num_method_block;
    buffer_append_format(method_block2_148,"%s method_block%d_%s(",((char*)(__right_value130=make_type_name_string(result_type_164,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value131=buffer_to_string(all_alhabet_sname_167))));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_170=0;
    for(    o2_saved_171=(param_types_165),it_174=list$1sType$ph_begin((o2_saved_171));    !list$1sType$ph_end((o2_saved_171));    it_174=list$1sType$ph_next((o2_saved_171))    ){
        param_type_177=it_174;
        if(        i_170==0) {
            param_name_178=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_148,"%s",((char*)(__right_value133=make_define_var(param_type_177,param_name_178,(_Bool)0,info))));
            (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_178 = come_decrement_ref_count(param_name_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_170==1) {
            param_name_179=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_148,"%s",((char*)(__right_value135=make_define_var_no_solved(param_type_177,param_name_179,(_Bool)0,(_Bool)0,info))));
            (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_179 = come_decrement_ref_count(param_name_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_180=(char*)come_increment_ref_count(xsprintf("it%d",i_170));
            buffer_append_format(method_block2_148,"%s",((char*)(__right_value137=make_define_var_no_solved(param_type_177,param_name_180,(_Bool)0,(_Bool)0,info))));
            (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_180 = come_decrement_ref_count(param_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_170!=list$1sType$ph_length(param_types_165)-1) {
            buffer_append_str(method_block2_148,",");
        }
        i_170++;
    }
    buffer_append_str(method_block2_148,")\n");
    buffer_append_str(method_block2_148,((char*)(__right_value138=buffer_to_string(method_block))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_181=(struct buffer*)come_increment_ref_count(info->source);
    p_182=info->p;
    head_183=info->head;
    sline_184=info->sline;
    __dec_obj47=info->source,
    info->source=(struct buffer*)come_increment_ref_count(method_block2_148);
    /*b*/ come_call_finalizer3(__dec_obj47,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_185=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_186=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_187=node_compile(node_185,info);
    if(    !Value_187) {
        __result_obj__99 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_142) ? current_stack_frame_node_142 = come_decrement_ref_count(current_stack_frame_node_142, ((struct sNode*)current_stack_frame_node_142)->finalize, ((struct sNode*)current_stack_frame_node_142)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_147,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_148,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_149,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_156 = come_decrement_ref_count(class_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_164,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_167,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_181,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_185) ? node_185 = come_decrement_ref_count(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__99;
    }
    else {
    }
    info->in_method_block=in_method_block_186;
    method_block_name_188=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",num_method_block_169,((char*)(__right_value140=buffer_to_string(all_alhabet_sname_167)))));
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_189=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 163, "struct CVALUE*"))));
    fun2_190=((struct sFun*)(__right_value145=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value144=__builtin_string(method_block_name_188))),((void*)0))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value145,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun2_190==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value146=err_msg(info,"method block function not found(%s)",method_block_name_188)));
        /*c*/ come_call_finalizer3(__right_value146,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__104 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_142) ? current_stack_frame_node_142 = come_decrement_ref_count(current_stack_frame_node_142, ((struct sNode*)current_stack_frame_node_142)->finalize, ((struct sNode*)current_stack_frame_node_142)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_147,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_148,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_149,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_156 = come_decrement_ref_count(class_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_164,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_167,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_181,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_185) ? node_185 = come_decrement_ref_count(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_188 = come_decrement_ref_count(method_block_name_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_189,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__104;
    }
    method_block_type2_193=fun2_190->mLambdaType;
    __dec_obj48=come_value2_189->c_value,
    come_value2_189->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_188));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj49=come_value2_189->type,
    come_value2_189->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_193));
    /*b*/ come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_189->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_189));
    __dec_obj50=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_181);
    /*b*/ come_call_finalizer3(__dec_obj50,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_182;
    info->head=head_183;
    info->sline=sline_184;
    info->current_stack_frame_struct=current_stack_frame_struct_163;
    __dec_obj51=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_194=(_Bool)0;
    for(    o2_saved_195=(param_types_165),it_196=list$1sType$ph_begin((o2_saved_195));    !list$1sType$ph_end((o2_saved_195));    it_196=list$1sType$ph_next((o2_saved_195))    ){
        if(        is_contained_method_generics_types(it_196,info)) {
            contained_method_generics_method_block_194=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_164,info)) {
        contained_method_generics_method_block_194=(_Bool)1;
    }
    if(    contained_method_generics_method_block_194) {
        map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value150=__builtin_string(method_block_name_188))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__106 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((current_stack_frame_node_142) ? current_stack_frame_node_142 = come_decrement_ref_count(current_stack_frame_node_142, ((struct sNode*)current_stack_frame_node_142)->finalize, ((struct sNode*)current_stack_frame_node_142)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_147,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block2_148,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_type_149,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_156 = come_decrement_ref_count(class_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_164,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(all_alhabet_sname_167,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(source3_181,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_185) ? node_185 = come_decrement_ref_count(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_188 = come_decrement_ref_count(method_block_name_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value2_189,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__106;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__77;
void* __right_value114 = (void*)0;
struct sCurrentNode* result_143;
void* __right_value115 = (void*)0;
char* __dec_obj46;
struct sCurrentNode* __result_obj__78;
    if(    self==(void*)0) {
        __result_obj__77 = (void*)0;
        return __result_obj__77;
    }
    result_143=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)) {
        result_143->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj46=result_143->sname,
        result_143->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_143->sline_real=self->sline_real;
    }
    __result_obj__78 = result_143;
    /*c*/ come_call_finalizer3(result_143,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_145;
struct list_item$1CVALUE$ph* prev_it_146;
    it_145=self->head;
    while(    it_145!=((void*)0)) {
        prev_it_146=it_145;
        it_145=it_145->next;
        /*c*/ come_call_finalizer3(prev_it_146,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_150;
int i_151;
struct sType* __result_obj__80;
struct sType* default_value_152;
struct sType* __result_obj__81;
default_value_152 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_150=self->head;
    i_151=0;
    while(    it_150!=((void*)0)) {
        if(        position==i_151) {
            __result_obj__80 = (struct sType*)come_increment_ref_count(it_150->item);
            /*c*/ come_call_finalizer3(__result_obj__80,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__80;
        }
        it_150=it_150->next;
        i_151++;
    }
    memset(&default_value_152,0,sizeof(struct sType*));
    __result_obj__81 = (struct sType*)come_increment_ref_count(default_value_152);
    /*c*/ come_call_finalizer3(default_value_152,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__81,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_153;
int i_154;
struct sType* __result_obj__82;
struct sType* default_value_155;
struct sType* __result_obj__83;
default_value_155 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_153=self->head;
    i_154=0;
    while(    it_153!=((void*)0)) {
        if(        position==i_154) {
            __result_obj__82 = (struct sType*)come_increment_ref_count(it_153->item);
            /*c*/ come_call_finalizer3(__result_obj__82,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__82;
        }
        it_153=it_153->next;
        i_154++;
    }
    memset(&default_value_155,0,sizeof(struct sType*));
    __result_obj__83 = (struct sType*)come_increment_ref_count(default_value_155);
    /*c*/ come_call_finalizer3(default_value_155,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__83;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_157;
unsigned int hash_158;
unsigned int it_159;
struct sClass* __result_obj__84;
struct sClass* __result_obj__85;
struct sClass* __result_obj__86;
struct sClass* __result_obj__87;
default_value_157 = (void*)0;
    memset(&default_value_157,0,sizeof(struct sClass*));
    hash_158=string_get_hash_key(((char*)key))%self->size;
    it_159=hash_158;
    while(    (_Bool)1) {
        if(        self->item_existance[it_159]) {
            if(            string_equals(self->keys[it_159],key)) {
                __result_obj__84 = (struct sClass*)come_increment_ref_count(self->items[it_159]);
                /*c*/ come_call_finalizer3(default_value_157,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__84,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__84;
            }
            it_159++;
            if(            it_159>=self->size) {
                it_159=0;
            }
            else if(            it_159==hash_158) {
                __result_obj__85 = (struct sClass*)come_increment_ref_count(default_value_157);
                /*c*/ come_call_finalizer3(default_value_157,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__85,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__85;
            }
        }
        else {
            __result_obj__86 = (struct sClass*)come_increment_ref_count(default_value_157);
            /*c*/ come_call_finalizer3(default_value_157,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__86,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__86;
        }
    }
    __result_obj__87 = (struct sClass*)come_increment_ref_count(default_value_157);
    /*c*/ come_call_finalizer3(default_value_157,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__87,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__87;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_160;
unsigned int hash_161;
unsigned int it_162;
struct sClass* __result_obj__88;
struct sClass* __result_obj__89;
struct sClass* __result_obj__90;
struct sClass* __result_obj__91;
default_value_160 = (void*)0;
    memset(&default_value_160,0,sizeof(struct sClass*));
    hash_161=string_get_hash_key(((char*)key))%self->size;
    it_162=hash_161;
    while(    (_Bool)1) {
        if(        self->item_existance[it_162]) {
            if(            string_equals(self->keys[it_162],key)) {
                __result_obj__88 = (struct sClass*)come_increment_ref_count(self->items[it_162]);
                /*c*/ come_call_finalizer3(default_value_160,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__88,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__88;
            }
            it_162++;
            if(            it_162>=self->size) {
                it_162=0;
            }
            else if(            it_162==hash_161) {
                __result_obj__89 = (struct sClass*)come_increment_ref_count(default_value_160);
                /*c*/ come_call_finalizer3(default_value_160,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__89,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__89;
            }
        }
        else {
            __result_obj__90 = (struct sClass*)come_increment_ref_count(default_value_160);
            /*c*/ come_call_finalizer3(default_value_160,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__90,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__90;
        }
    }
    __result_obj__91 = (struct sClass*)come_increment_ref_count(default_value_160);
    /*c*/ come_call_finalizer3(default_value_160,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__91,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__91;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_172;
struct sType* __result_obj__93;
struct sType* __result_obj__94;
struct sType* result_173;
struct sType* __result_obj__95;
result_172 = (void*)0;
result_173 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_172,0,sizeof(struct sType*));
        __result_obj__93 = result_172;
        return __result_obj__93;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__94 = self->it->item;
        return __result_obj__94;
    }
    memset(&result_173,0,sizeof(struct sType*));
    __result_obj__95 = result_173;
    return __result_obj__95;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_175;
struct sType* __result_obj__96;
struct sType* __result_obj__97;
struct sType* result_176;
struct sType* __result_obj__98;
result_175 = (void*)0;
result_176 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_175,0,sizeof(struct sType*));
        __result_obj__96 = result_175;
        return __result_obj__96;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__97 = self->it->item;
        return __result_obj__97;
    }
    memset(&result_176,0,sizeof(struct sType*));
    __result_obj__98 = result_176;
    return __result_obj__98;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_191;
unsigned int it_192;
struct sFun* __result_obj__100;
struct sFun* __result_obj__101;
struct sFun* __result_obj__102;
struct sFun* __result_obj__103;
    hash_191=string_get_hash_key(((char*)key))%self->size;
    it_192=hash_191;
    while(    (_Bool)1) {
        if(        self->item_existance[it_192]) {
            if(            string_equals(self->keys[it_192],key)) {
                __result_obj__100 = (struct sFun*)come_increment_ref_count(self->items[it_192]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__100,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__100;
            }
            it_192++;
            if(            it_192>=self->size) {
                it_192=0;
            }
            else if(            it_192==hash_191) {
                __result_obj__101 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__101,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__101;
            }
        }
        else {
            __result_obj__102 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__102,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__102;
        }
    }
    __result_obj__103 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__103,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__103;
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_197;
unsigned int it_198;
struct map$2char$phsFun$ph* __result_obj__105;
    hash_197=string_get_hash_key(((char*)key))%self->size;
    it_198=hash_197;
    while(    (_Bool)1) {
        if(        self->item_existance[it_198]) {
            if(            string_equals(self->keys[it_198],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_198]);
                self->item_existance[it_198]=(_Bool)0;
                if(                1) {
                    (self->keys[it_198] = come_decrement_ref_count(self->keys[it_198], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_198]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_198],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_198]=((void*)0);
                self->len--;
                break;
            }
            it_198++;
            if(            it_198>=self->size) {
                it_198=0;
            }
            else if(            it_198==hash_197) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__105 = self;
    return __result_obj__105;
}

struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info){
char* generics_fun_name_199;
struct sFun* fun_200;
struct sGenericsFun* generics_fun_201;
void* __right_value151 = (void*)0;
struct sClass* klass_202;
void* __right_value152 = (void*)0;
_Bool _while_condtional1;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
char* __dec_obj52;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_203=0;
struct sGenericsFun* gfun_204=0;
char* __dec_obj53;
void* __right_value159 = (void*)0;
char* none_generics_name_205;
void* __right_value160 = (void*)0;
char* fun_name3_206;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_207=0;
struct sGenericsFun* gfun_208=0;
char* __dec_obj54;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_209=0;
struct sGenericsFun* gfun_210=0;
char* __dec_obj55;
int i_211;
void* __right_value165 = (void*)0;
char* new_fun_name_212;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
char* __dec_obj56;
struct sType* obj_array_type_219;
void* __right_value170 = (void*)0;
char* array_method_name_220;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
char* __dec_obj57;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
char* __dec_obj58;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__124;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
char* __dec_obj61;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sClass* klass_235;
void* __right_value193 = (void*)0;
_Bool _while_condtional2;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
char* __dec_obj62;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_236=0;
char* real_fun_name_237=0;
char* __dec_obj63;
void* __right_value199 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_238=0;
char* real_fun_name_239=0;
void* __right_value200 = (void*)0;
char* __dec_obj64;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
char* original_obj_type_fun_name_240;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
char* __dec_obj65;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__125;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__126;
    generics_fun_name_199=((void*)0);
    fun_200=((void*)0);
    generics_fun_201=((void*)0);
    if(    charp_operator_equals(fun_name,"super")) {
        fun_name=((char*)(__right_value151=create_non_method_name(obj_type,(_Bool)0,info->come_fun->mName,info,(_Bool)1)));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        klass_202=obj_type->mClass;
        while(        (_while_condtional1=(((struct sClass*)(__right_value152=map$2char$phsClass$ph_operator_load_element(info->classes,klass_202->mParentClassName))))),        /*c*/ come_call_finalizer3(__right_value152,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _while_condtional1) {
            klass_202=((struct sClass*)(__right_value153=map$2char$phsClass$ph_operator_load_element(info->classes,klass_202->mParentClassName)));
            /*c*/ come_call_finalizer3(__right_value153,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj52=generics_fun_name_199,
            generics_fun_name_199=(char*)come_increment_ref_count(create_method_name_using_class(klass_202,(_Bool)0,fun_name,info,(_Bool)1));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            fun_200=((struct sFun*)(__right_value156=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value155=__builtin_string(generics_fun_name_199))),((void*)0))));
            (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value156,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            fun_200) {
                break;
            }
        }
    }
    else {
        if(        obj_type&&obj_type->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type->mNoSolvedGenericsType->mGenericsTypes)>0) {
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value158=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
            name_203=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_204=multiple_assign_var2->v2;
            /*c*/ come_call_finalizer3(__right_value158,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj53=generics_fun_name_199,
            generics_fun_name_199=(char*)come_increment_ref_count(name_203);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            generics_fun_201=gfun_204;
            (name_203 = come_decrement_ref_count(name_203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        list$1sType$ph_length(info->method_generics_types)>0) {
            none_generics_name_205=(char*)come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName));
            fun_name3_206=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_205,fun_name));
            multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value162=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_206)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
            name_207=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            gfun_208=multiple_assign_var3->v2;
            /*c*/ come_call_finalizer3(__right_value162,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj54=generics_fun_name_199,
            generics_fun_name_199=(char*)come_increment_ref_count(name_207);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            generics_fun_201=gfun_208;
            (none_generics_name_205 = come_decrement_ref_count(none_generics_name_205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name3_206 = come_decrement_ref_count(fun_name3_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_207 = come_decrement_ref_count(name_207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value164=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
            name_209=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_210=multiple_assign_var4->v2;
            /*c*/ come_call_finalizer3(__right_value164,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj55=generics_fun_name_199,
            generics_fun_name_199=(char*)come_increment_ref_count(name_209);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            generics_fun_201=gfun_210;
            (name_209 = come_decrement_ref_count(name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        for(        i_211=128;        i_211>=1;        i_211--        ){
            new_fun_name_212=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_199,i_211));
            fun_200=((struct sFun*)(__right_value168=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value167=__builtin_string(new_fun_name_212))))));
            (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value168,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            fun_200!=((void*)0)) {
                __dec_obj56=generics_fun_name_199,
                generics_fun_name_199=(char*)come_increment_ref_count(__builtin_string(new_fun_name_212));
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_212 = come_decrement_ref_count(new_fun_name_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_212 = come_decrement_ref_count(new_fun_name_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_200==((void*)0)) {
            obj_array_type_219=obj_type->mOriginalLoadVarType;
            if(            obj_array_type_219&&list$1sNode$ph_length(obj_array_type_219->mArrayNum)>0) {
                array_method_name_220=(char*)come_increment_ref_count(create_method_name(obj_array_type_219,(_Bool)0,fun_name,info,(_Bool)0));
                fun_200=((struct sFun*)(__right_value172=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value171=__builtin_string(array_method_name_220))),((void*)0))));
                (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value172,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_200) {
                    __dec_obj57=generics_fun_name_199,
                    generics_fun_name_199=(char*)come_increment_ref_count(__builtin_string(array_method_name_220));
                    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    fun_200=((struct sFun*)(__right_value175=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value174=__builtin_string(generics_fun_name_199))),((void*)0))));
                    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value175,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_200==((void*)0)) {
                        __dec_obj58=generics_fun_name_199,
                        generics_fun_name_199=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value176=__builtin_string(fun_name))),info,(_Bool)1));
                        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_200=((struct sFun*)(__right_value179=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value178=__builtin_string(generics_fun_name_199))),((void*)0))));
                        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value179,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_200==((void*)0)) {
                            __result_obj__124 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value186=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p**)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 277, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                            (array_method_name_220 = come_decrement_ref_count(array_method_name_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (generics_fun_name_199 = come_decrement_ref_count(generics_fun_name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value186,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__result_obj__124,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__124;
                        }
                    }
                }
                (array_method_name_220 = come_decrement_ref_count(array_method_name_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                fun_200=((struct sFun*)(__right_value188=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value187=__builtin_string(generics_fun_name_199))),((void*)0))));
                (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value188,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_200==((void*)0)) {
                    __dec_obj61=generics_fun_name_199,
                    generics_fun_name_199=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value189=__builtin_string(fun_name))),info,(_Bool)1));
                    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    fun_200=((struct sFun*)(__right_value192=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value191=__builtin_string(generics_fun_name_199))),((void*)0))));
                    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value192,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_200==((void*)0)) {
                        klass_235=obj_type->mClass;
                        while(                        (_while_condtional2=(((struct sClass*)(__right_value193=map$2char$phsClass$ph_operator_load_element(info->classes,klass_235->mParentClassName))))),                        /*c*/ come_call_finalizer3(__right_value193,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _while_condtional2) {
                            klass_235=((struct sClass*)(__right_value194=map$2char$phsClass$ph_operator_load_element(info->classes,klass_235->mParentClassName)));
                            /*c*/ come_call_finalizer3(__right_value194,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            __dec_obj62=generics_fun_name_199,
                            generics_fun_name_199=(char*)come_increment_ref_count(create_method_name_using_class(klass_235,(_Bool)0,fun_name,info,(_Bool)1));
                            __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            fun_200=((struct sFun*)(__right_value197=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value196=__builtin_string(generics_fun_name_199))),((void*)0))));
                            (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value197,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            if(                            fun_200) {
                                break;
                            }
                        }
                    }
                    if(                    fun_200==((void*)0)&&charp_operator_equals(fun_name,"to_string")) {
                        multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value198=create_to_string_automatically(obj_type,fun_name,info)));
                        fun2_236=multiple_assign_var5->v1;
                        real_fun_name_237=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        /*c*/ come_call_finalizer3(__right_value198,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        fun_200=fun2_236;
                        __dec_obj63=generics_fun_name_199,
                        generics_fun_name_199=(char*)come_increment_ref_count(real_fun_name_237);
                        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        (real_fun_name_237 = come_decrement_ref_count(real_fun_name_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    fun_200==((void*)0)&&charp_operator_equals(fun_name,"equals")) {
                        multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value199=create_equals_automatically(obj_type,fun_name,info)));
                        fun2_238=multiple_assign_var6->v1;
                        real_fun_name_239=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        /*c*/ come_call_finalizer3(__right_value199,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        fun_200=((struct sFun*)(__right_value200=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_239)));
                        /*c*/ come_call_finalizer3(__right_value200,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        __dec_obj64=generics_fun_name_199,
                        generics_fun_name_199=(char*)come_increment_ref_count(real_fun_name_239);
                        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        (real_fun_name_239 = come_decrement_ref_count(real_fun_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    fun_200==((void*)0)) {
                        original_obj_type_fun_name_240=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type,(_Bool)0,((char*)(__right_value201=__builtin_string(fun_name))),info,(_Bool)1));
                        (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_200=((struct sFun*)(__right_value204=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value203=__builtin_string(original_obj_type_fun_name_240))),((void*)0))));
                        (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value204,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_200) {
                            __dec_obj65=generics_fun_name_199,
                            generics_fun_name_199=(char*)come_increment_ref_count(original_obj_type_fun_name_240);
                            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        (original_obj_type_fun_name_240 = come_decrement_ref_count(original_obj_type_fun_name_240, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    fun_200==((void*)0)) {
                        __result_obj__125 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value206=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p**)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 326, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name_199),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                        /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (generics_fun_name_199 = come_decrement_ref_count(generics_fun_name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value206,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__result_obj__125,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__125;
                    }
                }
            }
        }
    }
    __result_obj__126 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value208=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p**)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 333, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name_199),fun_200,generics_fun_201))));
    /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (generics_fun_name_199 = come_decrement_ref_count(generics_fun_name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value208,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__126,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__126;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_213;
unsigned int hash_214;
unsigned int it_215;
struct sFun* __result_obj__107;
struct sFun* __result_obj__108;
struct sFun* __result_obj__109;
struct sFun* __result_obj__110;
default_value_213 = (void*)0;
    memset(&default_value_213,0,sizeof(struct sFun*));
    hash_214=string_get_hash_key(((char*)key))%self->size;
    it_215=hash_214;
    while(    (_Bool)1) {
        if(        self->item_existance[it_215]) {
            if(            string_equals(self->keys[it_215],key)) {
                __result_obj__107 = (struct sFun*)come_increment_ref_count(self->items[it_215]);
                /*c*/ come_call_finalizer3(default_value_213,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__107,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__107;
            }
            it_215++;
            if(            it_215>=self->size) {
                it_215=0;
            }
            else if(            it_215==hash_214) {
                __result_obj__108 = (struct sFun*)come_increment_ref_count(default_value_213);
                /*c*/ come_call_finalizer3(default_value_213,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__108,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__108;
            }
        }
        else {
            __result_obj__109 = (struct sFun*)come_increment_ref_count(default_value_213);
            /*c*/ come_call_finalizer3(default_value_213,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__109,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__109;
        }
    }
    __result_obj__110 = (struct sFun*)come_increment_ref_count(default_value_213);
    /*c*/ come_call_finalizer3(default_value_213,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__110,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__110;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_216;
unsigned int hash_217;
unsigned int it_218;
struct sFun* __result_obj__111;
struct sFun* __result_obj__112;
struct sFun* __result_obj__113;
struct sFun* __result_obj__114;
default_value_216 = (void*)0;
    memset(&default_value_216,0,sizeof(struct sFun*));
    hash_217=string_get_hash_key(((char*)key))%self->size;
    it_218=hash_217;
    while(    (_Bool)1) {
        if(        self->item_existance[it_218]) {
            if(            string_equals(self->keys[it_218],key)) {
                __result_obj__111 = (struct sFun*)come_increment_ref_count(self->items[it_218]);
                /*c*/ come_call_finalizer3(default_value_216,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__111,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__111;
            }
            it_218++;
            if(            it_218>=self->size) {
                it_218=0;
            }
            else if(            it_218==hash_217) {
                __result_obj__112 = (struct sFun*)come_increment_ref_count(default_value_216);
                /*c*/ come_call_finalizer3(default_value_216,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__112,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__112;
            }
        }
        else {
            __result_obj__113 = (struct sFun*)come_increment_ref_count(default_value_216);
            /*c*/ come_call_finalizer3(default_value_216,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__113,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__113;
        }
    }
    __result_obj__114 = (struct sFun*)come_increment_ref_count(default_value_216);
    /*c*/ come_call_finalizer3(default_value_216,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__114,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__114;
}

static void tuple3$3char$phsFun$psGenericsFun$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_clone(struct tuple3$3char$phsFun$psGenericsFun$p* self){
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__115;
void* __right_value180 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* result_221;
void* __right_value181 = (void*)0;
char* __dec_obj59;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__116;
    if(    self==(void*)0) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__115,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__115;
    }
    result_221=(struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "tuple3$3char$phsFun$psGenericsFun$p_clone", 3, "struct tuple3$3char$phsFun$psGenericsFun$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj59=result_221->v1,
        result_221->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple3$3char$phsFun$psGenericsFun$p_clone", 4, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_221->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_221->v3=self->v3;
    }
    __result_obj__116 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(result_221);
    /*c*/ come_call_finalizer3(result_221,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__116,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__116;
}

static unsigned int tuple3$3char$phsFun$psGenericsFun$p_get_hash_key(struct tuple3$3char$phsFun$psGenericsFun$p* self){
unsigned int result_222;
    result_222=0;
    result_222+=int_get_hash_key(((int)self->v1));
    result_222+=int_get_hash_key(((int)self->v2));
    result_222+=int_get_hash_key(((int)self->v3));
    return result_222;
}

static _Bool tuple3$3char$phsFun$psGenericsFun$p_equals(struct tuple3$3char$phsFun$psGenericsFun$p* left, struct tuple3$3char$phsFun$psGenericsFun$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTextBlock,right->mTextBlock)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTextBlockSName,right->mTextBlockSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTextBlockSline,right->mTextBlockSline)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstFun,right->mConstFun)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenericsFun,right->mGenericsFun)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNode$ph_equals(left->mNodes,right->mNodes)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mVarTable,right->mVarTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitSemicolon,right->mOmitSemicolon)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2char$phsVar$ph_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2char$phsVar$ph_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right){
int n_223;
_Bool result_224;
char* it_225;
char* default_value_226;
void* __right_value182 = (void*)0;
char* it2_227;
struct sVar* default_value2_230;
void* __right_value183 = (void*)0;
struct sVar* item_231;
void* __right_value184 = (void*)0;
struct sVar* item2_234;
default_value_226 = (void*)0;
default_value2_230 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_223=0;
    result_224=(_Bool)1;
    for(    it_225=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_225=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_226,0,sizeof(char*));
        it2_227=((char*)(__right_value182=list$1char$ph_item(right->key_list,n_223,default_value_226)));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_225,it2_227)) {
            memset(&default_value2_230,0,sizeof(struct sVar*));
            item_231=((struct sVar*)(__right_value183=map$2char$phsVar$ph_at(left,it_225,(struct sVar*)come_increment_ref_count(default_value2_230))));
            /*c*/ come_call_finalizer3(__right_value183,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_234=((struct sVar*)(__right_value184=map$2char$phsVar$ph_at(right,it2_227,(struct sVar*)come_increment_ref_count(default_value2_230))));
            /*c*/ come_call_finalizer3(__right_value184,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_231,item2_234)) {
                result_224=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_230,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_224=(_Bool)0;
        }
        n_223++;
        (default_value_226 = come_decrement_ref_count(default_value_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_224;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_228;
int i_229;
char* __result_obj__117;
char* __result_obj__118;
    if(    position<0) {
        position+=self->len;
    }
    it_228=self->head;
    i_229=0;
    while(    it_228!=((void*)0)) {
        if(        position==i_229) {
            __result_obj__117 = (char*)come_increment_ref_count(it_228->item);
            (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__117;
        }
        it_228=it_228->next;
        i_229++;
    }
    __result_obj__118 = (char*)come_increment_ref_count(default_value);
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__118;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_232;
unsigned int it_233;
struct sVar* __result_obj__119;
struct sVar* __result_obj__120;
struct sVar* __result_obj__121;
struct sVar* __result_obj__122;
    hash_232=string_get_hash_key(((char*)key))%self->size;
    it_233=hash_232;
    while(    (_Bool)1) {
        if(        self->item_existance[it_233]) {
            if(            string_equals(self->keys[it_233],key)) {
                __result_obj__119 = (struct sVar*)come_increment_ref_count(self->items[it_233]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__119,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__119;
            }
            it_233++;
            if(            it_233>=self->size) {
                it_233=0;
            }
            else if(            it_233==hash_232) {
                __result_obj__120 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__120,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__120;
            }
        }
        else {
            __result_obj__121 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__121,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__121;
        }
    }
    __result_obj__122 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__122,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__122;
}

static _Bool sVar_equals(struct sVar* left, struct sVar* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mCValueName,right->mCValueName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoFree,right->mNoFree)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mComma,right->mComma)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
char* __dec_obj60;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__123;
    __dec_obj60=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result_obj__123 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__123,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__123;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, _Bool guard_break, struct sInfo* info, _Bool no_err){
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value211 = (void*)0;
char* __dec_obj67;
void* __right_value222 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj73;
void* __right_value223 = (void*)0;
struct buffer* __dec_obj74;
void* __right_value224 = (void*)0;
struct list$1sType$ph* __dec_obj75;
struct sMethodCallNode* __result_obj__133;
    ((struct sNodeBase*)(__right_value209=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value209,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj66=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj67=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj73=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj73,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj74=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    /*b*/ come_call_finalizer3(__dec_obj74,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj75=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj75,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    self->guard_break=guard_break;
    self->no_err=no_err;
    __result_obj__133 = (struct sMethodCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__133,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__133;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __right_value225 = (void*)0;
char* __result_obj__134;
    __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value225=__builtin_string("sMethodCallNode"))));
    (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__134;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_251;
struct list$1tuple2$2char$phsNode$ph$ph* params_252;
struct sNode* obj_253;
struct buffer* method_block_254;
int method_block_sline_255;
_Bool no_infference_method_generics_256;
struct list$1sType$ph* method_generics_types_257;
_Bool recursive_258;
struct list$1sType$ph* method_generics_types_before_259;
struct list$1sType$ph* __dec_obj76;
void* __right_value226 = (void*)0;
struct list$1sType$ph* __dec_obj77;
_Bool Value_260;
_Bool __result_obj__135;
void* __right_value227 = (void*)0;
struct CVALUE* obj_value_261;
void* __right_value228 = (void*)0;
struct sType* obj_type_262;
_Bool no_output_come_code_263;
void* __right_value229 = (void*)0;
struct sType* type_264;
void* __right_value230 = (void*)0;
char* none_generics_name_265;
void* __right_value231 = (void*)0;
char* fun_name2_266;
void* __right_value232 = (void*)0;
char* fun_name3_267;
void* __right_value233 = (void*)0;
struct sGenericsFun* generics_fun_268;
_Bool method_generics_269;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var7 = (void*)0;
char* name_270=0;
struct sGenericsFun* gfun_271=0;
char* generics_fun_name_272;
void* __right_value236 = (void*)0;
struct sFun* fun_273;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct list$1CVALUE$ph* come_params_274;
_Bool no_output_come_code_275;
_Bool __result_obj__137;
void* __right_value239 = (void*)0;
struct CVALUE* method_block_node_276;
void* __right_value240 = (void*)0;
struct sType* method_block_lambda_type_283;
void* __right_value241 = (void*)0;
struct sType* method_block_result_type_284;
void* __right_value242 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_285;
struct sType* generics_fun_method_block_result_type_286;
int method_generics_num_287;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
int n_296;
struct list$1sType$ph* o2_saved_297;
struct sType* it_298;
int method_generics_num_299;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1CVALUE$ph* come_params_300;
int i_301;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_302;
struct tuple2$2char$phsNode$ph* it_305;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_308=0;
struct sNode* node_309=0;
_Bool Value_310;
_Bool __result_obj__151;
void* __right_value254 = (void*)0;
struct CVALUE* come_value_311;
void* __right_value255 = (void*)0;
struct sType* __dec_obj82;
int method_generics_num_312;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1sType$ph* o2_saved_313;
struct sType* it_314;
int method_generics_num_315;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1CVALUE$ph* come_params_316;
int i_317;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_318;
struct tuple2$2char$phsNode$ph* it_319;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_320=0;
struct sNode* node_321=0;
_Bool Value_322;
_Bool __result_obj__152;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_323;
void* __right_value265 = (void*)0;
struct sType* __dec_obj83;
int method_generics_num_324;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
int n_325;
struct list$1sType$ph* o2_saved_326;
struct sType* it_327;
int method_generics_num_328;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sClass* klass_329;
_Bool calling_dynamic_method_330;
struct sType* lambda_type_331;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_332;
struct tuple2$2char$phsType$ph* it_335;
struct tuple2$2char$phsType$ph* multiple_assign_var10 = (void*)0;
char* field_name_338=0;
struct sType* field_type_339=0;
void* __right_value272 = (void*)0;
struct sType* result_type_340;
void* __right_value273 = (void*)0;
_Bool __result_obj__159;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1CVALUE$ph* come_params_341;
int i_342;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_343;
struct tuple2$2char$phsNode$ph* it_344;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_345=0;
struct sNode* node_346=0;
_Bool Value_347;
_Bool __result_obj__160;
void* __right_value276 = (void*)0;
struct CVALUE* come_value_348;
void* __right_value277 = (void*)0;
struct sType* __dec_obj84;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
_Bool _if_conditional2;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct buffer* buf_349;
int j_350;
struct list$1CVALUE$ph* o2_saved_351;
struct CVALUE* it_354;
void* __right_value286 = (void*)0;
char* __dec_obj85;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct CVALUE* come_value2_357;
void* __right_value289 = (void*)0;
char* __dec_obj86;
void* __right_value290 = (void*)0;
struct sType* result_type2_358;
void* __right_value291 = (void*)0;
struct sType* __dec_obj87;
void* __right_value292 = (void*)0;
_Bool __result_obj__167;
struct list$1sType$ph* __dec_obj88;
void* __right_value293 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var12 = (void*)0;
char* generics_fun_name_359=0;
struct sFun* fun_360=0;
struct sGenericsFun* generics_fun_361=0;
void* __right_value294 = (void*)0;
_Bool __result_obj__168;
void* __right_value295 = (void*)0;
_Bool __result_obj__169;
void* __right_value296 = (void*)0;
struct sType* result_type_362;
void* __right_value297 = (void*)0;
struct sType* __dec_obj89;
void* __right_value298 = (void*)0;
_Bool __result_obj__170;
void* __right_value299 = (void*)0;
struct sType* result_type2_363;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1sType$ph* param_types_364;
struct list$1sType$ph* o2_saved_365;
struct sType* it_366;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* it2_367;
struct sType* no_solved_obj_type_368;
void* __right_value304 = (void*)0;
struct sType* it3_369;
void* __right_value305 = (void*)0;
struct list$1sType$ph* type_checking_param_types_370;
int n_371;
struct list$1sType$ph* o2_saved_372;
struct sType* it_373;
struct sType* no_solved_obj_type_374;
void* __right_value306 = (void*)0;
struct sType* it3_375;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1CVALUE$ph* come_params_376;
int i_377;
_Bool first_param_381;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_382;
struct tuple2$2char$phsNode$ph* it_383;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_384=0;
struct sNode* node_385=0;
int n_386;
struct list$1char$ph* o2_saved_387;
char* it_388;
_Bool Value_389;
_Bool __result_obj__172;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value313 = (void*)0;
struct sType* __dec_obj93;
void* __right_value314 = (void*)0;
_Bool _if_conditional3;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
_Bool _if_conditional4;
void* __right_value321 = (void*)0;
int i_396;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_397;
struct tuple2$2char$phsNode$ph* it_398;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_399=0;
struct sNode* node_400=0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
_Bool _if_conditional5;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
_Bool _elif_conditional1;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool __result_obj__179;
void* __right_value331 = (void*)0;
_Bool _if_conditional6;
_Bool Value_407;
_Bool __result_obj__180;
void* __right_value332 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value333 = (void*)0;
struct sType* __dec_obj95;
void* __right_value334 = (void*)0;
_Bool _if_conditional7;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
_Bool _if_conditional8;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
_Bool _if_conditional9;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
char* default_param_409;
void* __right_value345 = (void*)0;
char* param_name_410;
void* __right_value346 = (void*)0;
_Bool _if_conditional10;
struct buffer* source_411;
char* p_412;
char* head_413;
int sline_414;
void* __right_value347 = (void*)0;
struct buffer* __dec_obj96;
void* __right_value348 = (void*)0;
struct sNode* node_415;
_Bool Value_416;
_Bool __result_obj__181;
struct buffer* __dec_obj97;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value350 = (void*)0;
struct sType* __dec_obj98;
void* __right_value351 = (void*)0;
_Bool _if_conditional11;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
_Bool _if_conditional12;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
_Bool _if_conditional13;
void* __right_value360 = (void*)0;
_Bool __result_obj__182;
_Bool __result_obj__183;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct buffer* buf_418;
char* saved_obj_value_419;
struct sVar* saved_var_420;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* var_name_422;
void* __right_value365 = (void*)0;
struct sType* type_423;
struct sVar* var__424;
void* __right_value366 = (void*)0;
char* __dec_obj99;
int j_425;
struct list$1CVALUE$ph* o2_saved_426;
struct CVALUE* it_427;
int j_428;
struct list$1CVALUE$ph* o2_saved_429;
struct CVALUE* it_430;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct CVALUE* come_value2_431;
void* __right_value369 = (void*)0;
char* __dec_obj100;
void* __right_value370 = (void*)0;
struct sType* __dec_obj101;
void* __right_value371 = (void*)0;
char* __dec_obj102;
void* __right_value372 = (void*)0;
struct list$1sType$ph* __dec_obj103;
_Bool __result_obj__184;
    fun_name_251=(char*)come_increment_ref_count(self->fun_name);
    params_252=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_253=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_254=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_255=self->method_block_sline;
    no_infference_method_generics_256=self->no_infference_method_generics;
    method_generics_types_257=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_258=self->recursive;
    method_generics_types_before_259=((void*)0);
    __dec_obj76=method_generics_types_before_259,
    method_generics_types_before_259=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj76,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj77=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj77,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_260=node_compile(obj_253,info);
    if(    !Value_260) {
        __result_obj__135 = (_Bool)0;
        (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__135;
    }
    else {
    }
    obj_value_261=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    obj_type_262=(struct sType*)come_increment_ref_count(sType_clone(obj_value_261->type));
    if(    !no_infference_method_generics_256) {
        no_output_come_code_263=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_264=(struct sType*)come_increment_ref_count(sType_clone(obj_type_262));
        none_generics_name_265=(char*)come_increment_ref_count(get_none_generics_name(type_264->mClass->mName));
        fun_name2_266=(char*)come_increment_ref_count(create_method_name(type_264,(_Bool)0,fun_name_251,info,(_Bool)1));
        fun_name3_267=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_265,fun_name_251));
        generics_fun_268=((struct sGenericsFun*)(__right_value233=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_267,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value233,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_268) {
            method_generics_269=list$1char$ph_length(generics_fun_268->mMethodGenericsTypeNames)>0;
            if(            method_generics_269&&list$1sType$ph_length(info->method_generics_types)==0) {
                multiple_assign_var7=((struct tuple2$2char$phsGenericsFun$p*)(__right_value235=make_generics_function(type_264,(char*)come_increment_ref_count(__builtin_string(fun_name_251)),info,(_Bool)1)));
                name_270=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                gfun_271=multiple_assign_var7->v2;
                /*c*/ come_call_finalizer3(__right_value235,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_name_272=(char*)come_increment_ref_count(name_270);
                fun_273=((struct sFun*)(__right_value236=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_272,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value236,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_params_274=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 420, "struct list$1CVALUE$ph*"))));
                if(                method_block_254) {
                    no_output_come_code_275=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_254,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_274),fun_273,fun_name3_267,method_block_sline_255,info,(_Bool)1)) {
                        __result_obj__137 = (_Bool)0;
                        (name_270 = come_decrement_ref_count(name_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_272 = come_decrement_ref_count(generics_fun_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_params_274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (none_generics_name_265 = come_decrement_ref_count(none_generics_name_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_266 = come_decrement_ref_count(fun_name2_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_267 = come_decrement_ref_count(fun_name3_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__137;
                    }
                    info->no_output_come_code=no_output_come_code_275;
                    method_block_node_276=((struct CVALUE*)(__right_value239=list$1CVALUE$ph_operator_load_element(come_params_274,-1)));
                    /*c*/ come_call_finalizer3(__right_value239,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    method_block_lambda_type_283=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_276->type));
                    method_block_result_type_284=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_285=((struct sType*)(__right_value242=list$1sType$ph_operator_load_element(generics_fun_268->mParamTypes,-1)));
                    /*c*/ come_call_finalizer3(__right_value242,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    generics_fun_method_block_result_type_286=generics_fun_method_block_lambda_type_285->mResultType;
                    if(                    generics_fun_method_block_result_type_286->mClass->mMethodGenerics) {
                        method_generics_num_287=generics_fun_method_block_result_type_286->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_287,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_284)));
                        /*c*/ come_call_finalizer3(__right_value246,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_296=0;
                    for(                    o2_saved_297=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_285->mParamTypes)),it_298=list$1sType$ph_begin((o2_saved_297));                    !list$1sType$ph_end((o2_saved_297));                    it_298=list$1sType$ph_next((o2_saved_297))                    ){
                        if(                        it_298->mClass->mMethodGenerics) {
                            method_generics_num_299=it_298->mClass->mMethodGenericsNum;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_299,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value250=list$1sType$ph_operator_load_element(method_block_lambda_type_283->mParamTypes,n_296))))));
                            /*c*/ come_call_finalizer3(__right_value248,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__right_value249,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__right_value250,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        n_296++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_297,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_params_300=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 449, "struct list$1CVALUE$ph*"))));
                    i_301=0;
                    for(                    o2_saved_302=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_252)),it_305=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_302));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_302));                    it_305=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_302))                    ){
                        multiple_assign_var8=it_305;
                        label_308=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                        node_309=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
                        if(                        i_301==0) {
                            list$1CVALUE$ph_push_back(come_params_300,(struct CVALUE*)come_increment_ref_count(obj_value_261));
                            i_301++;
                        }
                        else {
                            Value_310=node_compile(node_309,info);
                            if(                            !Value_310) {
                                __result_obj__151 = (_Bool)0;
                                (label_308 = come_decrement_ref_count(label_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_309) ? node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_302,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_lambda_type_283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_result_type_284,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_300,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_270 = come_decrement_ref_count(name_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_272 = come_decrement_ref_count(generics_fun_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_265 = come_decrement_ref_count(none_generics_name_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_266 = come_decrement_ref_count(fun_name2_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_267 = come_decrement_ref_count(fun_name3_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__151;
                            }
                            else {
                            }
                            come_value_311=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj82=come_value_311->type,
                            come_value_311->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_311->type,info->generics_type,info));
                            /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_300,(struct CVALUE*)come_increment_ref_count(come_value_311));
                            /*c*/ come_call_finalizer3(come_value_311,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_308 = come_decrement_ref_count(label_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_309) ? node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_302,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_268->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_312=generics_fun_268->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_312,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            /*c*/ come_call_finalizer3(__right_value256,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                    }
                    n_296=0;
                    for(                    o2_saved_313=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_268->mParamTypes)),it_314=list$1sType$ph_begin((o2_saved_313));                    !list$1sType$ph_end((o2_saved_313));                    it_314=list$1sType$ph_next((o2_saved_313))                    ){
                        if(                        it_314->mClass->mMethodGenerics) {
                            method_generics_num_315=it_314->mClass->mMethodGenericsNum;
                            if(                            n_296<list$1CVALUE$ph_length(come_params_300)) {
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_315,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value260=list$1CVALUE$ph_operator_load_element(come_params_300,n_296)))->type)));
                                /*c*/ come_call_finalizer3(__right_value258,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(__right_value259,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(__right_value260,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_296++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_313,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_lambda_type_283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_result_type_284,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_300,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    come_params_316=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 488, "struct list$1CVALUE$ph*"))));
                    i_317=0;
                    for(                    o2_saved_318=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_252)),it_319=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_318));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_318));                    it_319=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_318))                    ){
                        multiple_assign_var9=it_319;
                        label_320=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_321=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_317==0) {
                            list$1CVALUE$ph_push_back(come_params_316,(struct CVALUE*)come_increment_ref_count(obj_value_261));
                            i_317++;
                        }
                        else {
                            Value_322=node_compile(node_321,info);
                            if(                            !Value_322) {
                                __result_obj__152 = (_Bool)0;
                                (label_320 = come_decrement_ref_count(label_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_321) ? node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_318,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_316,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_270 = come_decrement_ref_count(name_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_272 = come_decrement_ref_count(generics_fun_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_265 = come_decrement_ref_count(none_generics_name_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_266 = come_decrement_ref_count(fun_name2_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_267 = come_decrement_ref_count(fun_name3_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__152;
                            }
                            else {
                            }
                            come_value_323=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj83=come_value_323->type,
                            come_value_323->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_323->type,info->generics_type,info));
                            /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_316,(struct CVALUE*)come_increment_ref_count(come_value_323));
                            /*c*/ come_call_finalizer3(come_value_323,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_320 = come_decrement_ref_count(label_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_321) ? node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_318,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_268->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_324=generics_fun_268->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_324,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            /*c*/ come_call_finalizer3(__right_value266,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                    }
                    n_325=0;
                    for(                    o2_saved_326=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_268->mParamTypes)),it_327=list$1sType$ph_begin((o2_saved_326));                    !list$1sType$ph_end((o2_saved_326));                    it_327=list$1sType$ph_next((o2_saved_326))                    ){
                        if(                        it_327->mClass->mMethodGenerics) {
                            method_generics_num_328=it_327->mClass->mMethodGenericsNum;
                            if(                            n_325<list$1CVALUE$ph_length(come_params_316)) {
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_328,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value270=list$1CVALUE$ph_operator_load_element(come_params_316,n_325)))->type)));
                                /*c*/ come_call_finalizer3(__right_value268,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(__right_value269,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(__right_value270,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_325++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_326,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_316,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_272);
                (name_270 = come_decrement_ref_count(name_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_272 = come_decrement_ref_count(generics_fun_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_params_274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_263;
        /*c*/ come_call_finalizer3(type_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (none_generics_name_265 = come_decrement_ref_count(none_generics_name_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_266 = come_decrement_ref_count(fun_name2_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_267 = come_decrement_ref_count(fun_name3_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_329=obj_type_262->mClass;
    calling_dynamic_method_330=(_Bool)0;
    lambda_type_331=((void*)0);
    for(    o2_saved_332=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_329->mFields)),it_335=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_332));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_332));    it_335=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_332))    ){
        multiple_assign_var10=it_335;
        field_name_338=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        field_type_339=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        string_operator_equals(field_name_338,fun_name_251)&&string_operator_equals(field_type_339->mClass->mName,"lambda")) {
            calling_dynamic_method_330=(_Bool)1;
            lambda_type_331=field_type_339;
            (field_name_338 = come_decrement_ref_count(field_name_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        (field_name_338 = come_decrement_ref_count(field_name_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_332,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    calling_dynamic_method_330) {
        result_type_340=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_331->mResultType));
        result_type_340->mStatic=(_Bool)0;
        if(        obj_type_262->mImmutable) {
            if(            !result_type_340->mImmutable) {
                ((struct tuple2$2int$bool$*)(__right_value273=err_msg(info,"Immutable object can't call mutable method(%s)",fun_name_251)));
                /*c*/ come_call_finalizer3(__right_value273,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__159 = (_Bool)1;
                /*c*/ come_call_finalizer3(result_type_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__159;
            }
        }
        come_params_341=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 558, "struct list$1CVALUE$ph*"))));
        i_342=0;
        for(        o2_saved_343=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_252)),it_344=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_343));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_343));        it_344=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_343))        ){
            multiple_assign_var11=it_344;
            label_345=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_346=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            i_342==0) {
                list$1CVALUE$ph_push_back(come_params_341,(struct CVALUE*)come_increment_ref_count(obj_value_261));
                i_342++;
            }
            else {
                Value_347=node_compile(node_346,info);
                if(                !Value_347) {
                    __result_obj__160 = (_Bool)0;
                    (label_345 = come_decrement_ref_count(label_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_346) ? node_346 = come_decrement_ref_count(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_343,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_341,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__160;
                }
                else {
                }
                come_value_348=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj84=come_value_348->type,
                come_value_348->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_348->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                check_assign_type(((char*)(__right_value280=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value278=string_to_string(fun_name_251))),((char*)(__right_value279=int_to_string(i_342)))))),((struct sType*)(__right_value281=list$1sType$ph_operator_load_element(lambda_type_331->mParamTypes,i_342-1))),come_value_348->type,come_value_348,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value281,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional2=(((struct sType*)(__right_value282=list$1sType$ph_operator_load_element(lambda_type_331->mParamTypes,i_342-1)))->mHeap&&come_value_348->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value282,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)(__right_value283=list$1sType$ph_operator_load_element(lambda_type_331->mParamTypes,i_342-1))),come_value_348->type,come_value_348,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value283,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_push_back(come_params_341,(struct CVALUE*)come_increment_ref_count(come_value_348));
                i_342++;
                /*c*/ come_call_finalizer3(come_value_348,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_345 = come_decrement_ref_count(label_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_346) ? node_346 = come_decrement_ref_count(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_343,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buf_349=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 589, "struct buffer*"))));
        buffer_append_format(buf_349,"%s->%s",obj_value_261->c_value,fun_name_251);
        buffer_append_str(buf_349,"(");
        j_350=0;
        for(        o2_saved_351=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_341)),it_354=list$1CVALUE$ph_begin((o2_saved_351));        !list$1CVALUE$ph_end((o2_saved_351));        it_354=list$1CVALUE$ph_next((o2_saved_351))        ){
            if(            j_350==0) {
                __dec_obj85=it_354->c_value,
                it_354->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_354->c_value));
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            buffer_append_str(buf_349,it_354->c_value);
            if(            j_350!=list$1CVALUE$ph_length(come_params_341)-1) {
                buffer_append_str(buf_349,",");
            }
            j_350++;
        }
        /*c*/ come_call_finalizer3(o2_saved_351,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_349,")");
        come_value2_357=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 609, "struct CVALUE*"))));
        __dec_obj86=come_value2_357->c_value,
        come_value2_357->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_349));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type2_358=(struct sType*)come_increment_ref_count(solve_generics(result_type_340,info->generics_type,info));
        __dec_obj87=come_value2_357->type,
        come_value2_357->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_358));
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_357->type->mStatic=(_Bool)0;
        come_value2_357->type->mImmutable=(_Bool)0;
        come_value2_357->var=((void*)0);
        if(        self->guard_break&&!result_type2_358->mException) {
            ((struct tuple2$2int$bool$*)(__right_value292=err_msg(info,"Invalid guard break")));
            /*c*/ come_call_finalizer3(__right_value292,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__167 = (_Bool)1;
            /*c*/ come_call_finalizer3(result_type_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_341,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_349,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_value2_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__167;
        }
        if(        result_type2_358->mHeap) {
            append_object_to_right_values2(come_value2_357,(struct sType*)come_increment_ref_count(result_type2_358),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value2_357->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_357));
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj88=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_259);
        /*b*/ come_call_finalizer3(__dec_obj88,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        /*c*/ come_call_finalizer3(result_type_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_341,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_349,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        multiple_assign_var12=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value293=get_method(fun_name_251,(struct sType*)come_increment_ref_count(obj_type_262),info)));
        generics_fun_name_359=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        fun_360=multiple_assign_var12->v2;
        generics_fun_361=multiple_assign_var12->v3;
        /*c*/ come_call_finalizer3(__right_value293,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_360==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value294=err_msg(info,"function not found(%s) at method(%s)(ZY)",generics_fun_name_359,info->come_fun->mName)));
            /*c*/ come_call_finalizer3(__right_value294,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__168 = (_Bool)1;
            (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__168;
        }
        if(        list$1sType$ph_length(fun_360->mParamTypes)==0) {
            ((struct tuple2$2int$bool$*)(__right_value295=err_msg(info,"Method require function parametor")));
            /*c*/ come_call_finalizer3(__right_value295,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__169 = (_Bool)1;
            (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__169;
        }
        result_type_362=(struct sType*)come_increment_ref_count(sType_clone(fun_360->mResultType));
        __dec_obj89=result_type_362,
        result_type_362=(struct sType*)come_increment_ref_count(solve_generics(result_type_362,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_362->mStatic=(_Bool)0;
        if(        obj_type_262->mImmutable) {
            if(            !result_type_362->mImmutable) {
                ((struct tuple2$2int$bool$*)(__right_value298=err_msg(info,"Immutable object can't call mutable method(%s)",fun_name_251)));
                /*c*/ come_call_finalizer3(__right_value298,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__170 = (_Bool)1;
                (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__170;
            }
        }
        result_type2_363=(struct sType*)come_increment_ref_count(solve_generics(result_type_362,info->generics_type,info));
        param_types_364=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 667, "struct list$1sType$ph*"))));
        for(        o2_saved_365=(struct list$1sType$ph*)come_increment_ref_count((fun_360->mParamTypes)),it_366=list$1sType$ph_begin((o2_saved_365));        !list$1sType$ph_end((o2_saved_365));        it_366=list$1sType$ph_next((o2_saved_365))        ){
            if(            it_366==((void*)0)) {
                list$1sType$ph_push_back(param_types_364,(struct sType*)come_increment_ref_count(sType_clone(it_366)));
            }
            else {
                it2_367=(struct sType*)come_increment_ref_count(solve_generics(it_366,info->generics_type,info));
                no_solved_obj_type_368=(struct sType*)come_increment_ref_count(obj_type_262->mNoSolvedGenericsType);
                it3_369=(struct sType*)come_increment_ref_count(solve_generics(it_366,no_solved_obj_type_368,info));
                list$1sType$ph_push_back(param_types_364,(struct sType*)come_increment_ref_count(it2_367));
                /*c*/ come_call_finalizer3(it2_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(no_solved_obj_type_368,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(it3_369,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(o2_saved_365,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_checking_param_types_370=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_364));
        if(        generics_fun_361) {
            n_371=0;
            for(            o2_saved_372=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_361->mParamTypes)),it_373=list$1sType$ph_begin((o2_saved_372));            !list$1sType$ph_end((o2_saved_372));            it_373=list$1sType$ph_next((o2_saved_372))            ){
                if(                it_373==((void*)0)) {
                }
                else {
                    no_solved_obj_type_374=(struct sType*)come_increment_ref_count(obj_type_262->mNoSolvedGenericsType);
                    it3_375=(struct sType*)come_increment_ref_count(solve_generics(it_373,no_solved_obj_type_374,info));
                    /*c*/ come_call_finalizer3(no_solved_obj_type_374,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(it3_375,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                n_371++;
            }
            /*c*/ come_call_finalizer3(o2_saved_372,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        come_params_376=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 697, "struct list$1CVALUE$ph*"))));
        for(        i_377=0;        i_377<list$1sType$ph_length(fun_360->mParamTypes)-(((method_block_254)?(2):(0)));        i_377++        ){
            list$1CVALUE$ph_add(come_params_376,((void*)0));
        }
        first_param_381=(_Bool)1;
        for(        o2_saved_382=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_252)),it_383=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_382));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_382));        it_383=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_382))        ){
            multiple_assign_var13=it_383;
            label_384=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_385=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            first_param_381) {
                first_param_381=(_Bool)0;
            }
            else if(            label_384) {
                n_386=0;
                for(                o2_saved_387=(struct list$1char$ph*)come_increment_ref_count((fun_360->mParamNames)),it_388=list$1char$ph_begin((o2_saved_387));                !list$1char$ph_end((o2_saved_387));                it_388=list$1char$ph_next((o2_saved_387))                ){
                    if(                    string_operator_equals(label_384,it_388)) {
                        break;
                    }
                    n_386++;
                }
                /*c*/ come_call_finalizer3(o2_saved_387,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_389=node_compile(node_385,info);
                if(                !Value_389) {
                    __result_obj__172 = (_Bool)0;
                    (label_384 = come_decrement_ref_count(label_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_382,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_370,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__172;
                }
                else {
                }
                come_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj93=come_value_390->type,
                come_value_390->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_390->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional3=(((struct sType*)(__right_value314=list$1sType$ph_operator_load_element(param_types_364,n_386))))),                /*c*/ come_call_finalizer3(__right_value314,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    check_assign_type(((char*)(__right_value317=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value315=string_to_string(fun_name_251))),((char*)(__right_value316=int_to_string(n_386)))))),((struct sType*)(__right_value318=list$1sType$ph_operator_load_element(type_checking_param_types_370,n_386))),come_value_390->type,come_value_390,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value318,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional4=(((struct sType*)(__right_value319=list$1sType$ph_operator_load_element(param_types_364,n_386)))&&((struct sType*)(__right_value320=list$1sType$ph_operator_load_element(param_types_364,n_386)))->mHeap&&come_value_390->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value319,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value320,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)(__right_value321=list$1sType$ph_operator_load_element(param_types_364,n_386))),come_value_390->type,come_value_390,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value321,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_376,n_386,(struct CVALUE*)come_increment_ref_count(come_value_390));
                /*c*/ come_call_finalizer3(come_value_390,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_384 = come_decrement_ref_count(label_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_382,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_396=0;
        for(        o2_saved_397=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_252)),it_398=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_397));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_397));        it_398=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_397))        ){
            multiple_assign_var14=it_398;
            label_399=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            node_400=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            i_396==0) {
                check_assign_type(((char*)(__right_value324=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value322=string_to_string(fun_name_251))),((char*)(__right_value323=int_to_string(i_396)))))),((struct sType*)(__right_value325=list$1sType$ph_operator_load_element(type_checking_param_types_370,i_396))),obj_value_261->type,obj_value_261,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value322 = come_decrement_ref_count(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value325,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional5=(((struct sType*)(__right_value326=list$1sType$ph_operator_load_element(param_types_364,i_396)))->mHeap&&obj_value_261->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value326,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)(__right_value327=list$1sType$ph_operator_load_element(param_types_364,i_396))),obj_value_261->type,obj_value_261,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value327,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value328=list$1sType$ph_operator_load_element(param_types_364,i_396)))->mHeap&&!obj_value_261->type->mHeap&&!gComeGC)),                /*c*/ come_call_finalizer3(__right_value328,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _elif_conditional1) {
                    ((struct tuple2$2int$bool$*)(__right_value330=err_msg(info,"require heap parametor(%s)",((char*)(__right_value329=list$1char$ph_operator_load_element(fun_360->mParamNames,i_396))))));
                    (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value330,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__179 = (_Bool)1;
                    (label_399 = come_decrement_ref_count(label_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_400) ? node_400 = come_decrement_ref_count(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_397,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_370,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__179;
                }
                list$1CVALUE$ph_replace(come_params_376,i_396,(struct CVALUE*)come_increment_ref_count(obj_value_261));
                i_396++;
            }
            else if(            label_399) {
            }
            else {
                while(                (_Bool)1) {
                    if(                    (_if_conditional6=(((struct CVALUE*)(__right_value331=list$1CVALUE$ph_operator_load_element(come_params_376,i_396)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value331,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional6) {
                        break;
                    }
                    else {
                        i_396++;
                    }
                }
                Value_407=node_compile(node_400,info);
                if(                !Value_407) {
                    __result_obj__180 = (_Bool)0;
                    (label_399 = come_decrement_ref_count(label_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_400) ? node_400 = come_decrement_ref_count(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_397,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_370,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__180;
                }
                else {
                }
                come_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj95=come_value_408->type,
                come_value_408->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_408->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional7=(((struct sType*)(__right_value334=list$1sType$ph_operator_load_element(param_types_364,i_396))))),                /*c*/ come_call_finalizer3(__right_value334,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional7) {
                    check_assign_type(((char*)(__right_value337=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value335=string_to_string(fun_name_251))),((char*)(__right_value336=int_to_string(i_396)))))),((struct sType*)(__right_value338=list$1sType$ph_operator_load_element(type_checking_param_types_370,i_396))),come_value_408->type,come_value_408,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value338,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional8=(((struct sType*)(__right_value339=list$1sType$ph_operator_load_element(param_types_364,i_396)))&&((struct sType*)(__right_value340=list$1sType$ph_operator_load_element(param_types_364,i_396)))->mHeap&&come_value_408->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value339,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value340,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    std_move(((struct sType*)(__right_value341=list$1sType$ph_operator_load_element(param_types_364,i_396))),come_value_408->type,come_value_408,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value341,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_376,i_396,(struct CVALUE*)come_increment_ref_count(come_value_408));
                i_396++;
                /*c*/ come_call_finalizer3(come_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_399 = come_decrement_ref_count(label_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_400) ? node_400 = come_decrement_ref_count(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_397,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        while(        (_Bool)1) {
            if(            (_if_conditional9=(((struct CVALUE*)(__right_value342=list$1CVALUE$ph_operator_load_element(come_params_376,i_396)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value342,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                break;
            }
            else {
                i_396++;
            }
        }
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params_252)<list$1sType$ph_length(fun_360->mParamTypes)+(((method_block_254)?(-2):(0)))) {
            for(            ;            i_396<list$1sType$ph_length(fun_360->mParamTypes)+(((method_block_254)?(-2):(0)));            i_396++            ){
                default_param_409=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value343=list$1char$ph_operator_load_element(fun_360->mParamDefaultParametors,i_396))), "20method.c", 800, "char*"));
                (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_410=((char*)(__right_value345=list$1char$ph_operator_load_element(fun_360->mParamNames,i_396)));
                (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional10=(default_param_409&&string_operator_not_equals(default_param_409,"")&&((struct CVALUE*)(__right_value346=list$1CVALUE$ph_operator_load_element(come_params_376,i_396)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value346,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    source_411=(struct buffer*)come_increment_ref_count(info->source);
                    p_412=info->p;
                    head_413=info->head;
                    sline_414=info->sline;
                    __dec_obj96=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_409));
                    /*b*/ come_call_finalizer3(__dec_obj96,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_415=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_416=node_compile(node_415,info);
                    if(                    !Value_416) {
                        __result_obj__181 = (_Bool)0;
                        /*c*/ come_call_finalizer3(source_411,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_415) ? node_415 = come_decrement_ref_count(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_409 = come_decrement_ref_count(default_param_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_370,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__181;
                    }
                    else {
                    }
                    __dec_obj97=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(source_411);
                    /*b*/ come_call_finalizer3(__dec_obj97,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_412;
                    info->head=head_413;
                    info->sline=sline_414;
                    come_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    __dec_obj98=come_value_417->type,
                    come_value_417->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_417->type,info->generics_type,info));
                    /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    (_if_conditional11=(((struct sType*)(__right_value351=list$1sType$ph_operator_load_element(param_types_364,i_396))))),                    /*c*/ come_call_finalizer3(__right_value351,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional11) {
                        check_assign_type(((char*)(__right_value354=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value352=string_to_string(fun_name_251))),((char*)(__right_value353=int_to_string(i_396)))))),((struct sType*)(__right_value355=list$1sType$ph_operator_load_element(type_checking_param_types_370,i_396))),come_value_417->type,come_value_417,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value353 = come_decrement_ref_count(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value355,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    if(                    (_if_conditional12=(((struct sType*)(__right_value356=list$1sType$ph_operator_load_element(param_types_364,i_396)))&&((struct sType*)(__right_value357=list$1sType$ph_operator_load_element(param_types_364,i_396)))->mHeap&&come_value_417->type->mHeap)),                    /*c*/ come_call_finalizer3(__right_value356,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value357,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional12) {
                        std_move(((struct sType*)(__right_value358=list$1sType$ph_operator_load_element(param_types_364,i_396))),come_value_417->type,come_value_417,info,(_Bool)1);
                        /*c*/ come_call_finalizer3(__right_value358,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    list$1CVALUE$ph_replace(come_params_376,i_396,(struct CVALUE*)come_increment_ref_count(come_value_417));
                    /*c*/ come_call_finalizer3(source_411,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_415) ? node_415 = come_decrement_ref_count(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    if(                    (_if_conditional13=(((struct CVALUE*)(__right_value359=list$1CVALUE$ph_operator_load_element(come_params_376,i_396)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value359,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional13) {
                        ((struct tuple2$2int$bool$*)(__right_value360=err_msg(info,"require parametor(%s) %d",fun_360->mName,i_396)));
                        /*c*/ come_call_finalizer3(__right_value360,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        __result_obj__182 = (_Bool)1;
                        (default_param_409 = come_decrement_ref_count(default_param_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_370,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__182;
                    }
                }
                (default_param_409 = come_decrement_ref_count(default_param_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_254) {
            if(            !compile_method_block(method_block_254,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_376),fun_360,fun_name_251,method_block_sline_255,info,(_Bool)0)) {
                __result_obj__183 = (_Bool)0;
                (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_checking_param_types_370,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__183;
            }
        }
        buf_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 849, "struct buffer*"))));
        buffer_append_str(buf_418,generics_fun_name_359);
        buffer_append_str(buf_418,"(");
        saved_obj_value_419=((void*)0);
        saved_var_420=((void*)0);
        if(        result_type2_363->mDefferRightValue) {
            static int n_421=0;
            n_421++;
            var_name_422=(char*)come_increment_ref_count(xsprintf("deffer_right_value\%s",((char*)(__right_value363=int_to_string(n_421)))));
            (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            type_423=(struct sType*)come_increment_ref_count(sType_clone(obj_type_262));
            type_423->mDefferRightValue=(_Bool)1;
            add_variable_to_table(var_name_422,(struct sType*)come_increment_ref_count(type_423),info,(_Bool)0,info->comma_instead_of_semicolon);
            var__424=get_variable_from_table(info->lv_table,var_name_422);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value366=make_define_var(type_423,var__424->mCValueName,(_Bool)0,info))));
            (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            info->comma_instead_of_semicolon) {
                add_come_code(info,"%s=%s,",var__424->mCValueName,obj_value_261->c_value);
            }
            else {
                add_come_code(info,"%s=%s;\n",var__424->mCValueName,obj_value_261->c_value);
            }
            __dec_obj99=saved_obj_value_419,
            saved_obj_value_419=(char*)come_increment_ref_count(var__424->mCValueName);
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            saved_var_420=var__424;
            j_425=0;
            for(            o2_saved_426=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_376)),it_427=list$1CVALUE$ph_begin((o2_saved_426));            !list$1CVALUE$ph_end((o2_saved_426));            it_427=list$1CVALUE$ph_next((o2_saved_426))            ){
                if(                j_425==0) {
                    buffer_append_str(buf_418,saved_obj_value_419);
                }
                else {
                    buffer_append_str(buf_418,it_427->c_value);
                }
                if(                j_425!=list$1CVALUE$ph_length(come_params_376)-1) {
                    buffer_append_str(buf_418,",");
                }
                j_425++;
            }
            /*c*/ come_call_finalizer3(o2_saved_426,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_422 = come_decrement_ref_count(var_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_423,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            j_428=0;
            for(            o2_saved_429=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_376)),it_430=list$1CVALUE$ph_begin((o2_saved_429));            !list$1CVALUE$ph_end((o2_saved_429));            it_430=list$1CVALUE$ph_next((o2_saved_429))            ){
                buffer_append_str(buf_418,it_430->c_value);
                if(                j_428!=list$1CVALUE$ph_length(come_params_376)-1) {
                    buffer_append_str(buf_418,",");
                }
                j_428++;
            }
            /*c*/ come_call_finalizer3(o2_saved_429,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(buf_418,")");
        come_value2_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 909, "struct CVALUE*"))));
        come_value2_431->var=((void*)0);
        __dec_obj100=come_value2_431->c_value,
        come_value2_431->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_418));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj101=come_value2_431->type,
        come_value2_431->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_363));
        /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_431->type->mStatic=(_Bool)0;
        come_value2_431->type->mImmutable=(_Bool)0;
        if(        result_type2_363->mHeap) {
            append_object_to_right_values2(come_value2_431,(struct sType*)come_increment_ref_count(result_type2_363),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_262),saved_obj_value_419,saved_var_420);
        }
        else if(        saved_obj_value_419) {
            append_object_to_right_values2(come_value2_431,(struct sType*)come_increment_ref_count(result_type2_363),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_262),saved_obj_value_419,saved_var_420);
        }
        __dec_obj102=come_value2_431->c_value,
        come_value2_431->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_431->c_value,come_value2_431->type,info));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_come_last_code(info,"%s",come_value2_431->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_431));
        if(        is_contained_method_generics_types(obj_type_262,info)&&generics_fun_name_359) {
            map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value372=__builtin_string(generics_fun_name_359))));
            (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj103=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_259);
        /*b*/ come_call_finalizer3(__dec_obj103,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_360;
        (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_checking_param_types_370,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_418,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (saved_obj_value_419 = come_decrement_ref_count(saved_obj_value_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__184 = (_Bool)1;
    (fun_name_251 = come_decrement_ref_count(fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_252,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((obj_253) ? obj_253 = come_decrement_ref_count(obj_253, ((struct sNode*)obj_253)->finalize, ((struct sNode*)obj_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(method_block_254,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_before_259,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__127;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_243;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_244;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__132;
    if(    self==((void*)0)) {
        __result_obj__127 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__127,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__127;
    }
    result_243=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_244=self->head;
    while(    it_244!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_243,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_244->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_243,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_244->item)));
        }
        it_244=it_244->next;
    }
    __result_obj__132 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_243);
    /*c*/ come_call_finalizer3(result_243,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__132,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__132;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_241;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__128;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__128 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__128,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__128;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value214 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_245;
struct tuple2$2char$phsNode$ph* __dec_obj68;
void* __right_value215 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_246;
struct tuple2$2char$phsNode$ph* __dec_obj69;
void* __right_value216 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_247;
struct tuple2$2char$phsNode$ph* __dec_obj70;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__129;
    if(    self->len==0) {
        litem_245=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value214=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_245->prev=((void*)0);
        litem_245->next=((void*)0);
        __dec_obj68=litem_245->item,
        litem_245->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj68,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_245;
        self->head=litem_245;
    }
    else if(    self->len==1) {
        litem_246=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value215=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_246->prev=self->head;
        litem_246->next=((void*)0);
        __dec_obj69=litem_246->item,
        litem_246->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj69,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_246;
        self->head->next=litem_246;
    }
    else {
        litem_247=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value216=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_247->prev=self->tail;
        litem_247->next=((void*)0);
        __dec_obj70=litem_247->item,
        litem_247->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj70,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_247;
        self->tail=litem_247;
    }
    self->len++;
    __result_obj__129 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__129;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__130;
void* __right_value217 = (void*)0;
struct tuple2$2char$phsNode$ph* result_248;
void* __right_value218 = (void*)0;
char* __dec_obj71;
void* __right_value219 = (void*)0;
struct sNode* __dec_obj72;
struct tuple2$2char$phsNode$ph* __result_obj__131;
    if(    self==(void*)0) {
        __result_obj__130 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__130,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__130;
    }
    result_248=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj71=result_248->v1,
        result_248->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj72=result_248->v2,
        result_248->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__131 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_248);
    /*c*/ come_call_finalizer3(result_248,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__131,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__131;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_249;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_250;
    it_249=self->head;
    while(    it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        /*c*/ come_call_finalizer3(prev_it_250,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__136;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__136 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__136,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__136;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_277;
int i_278;
struct CVALUE* __result_obj__138;
struct CVALUE* default_value_279;
struct CVALUE* __result_obj__139;
default_value_279 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_277=self->head;
    i_278=0;
    while(    it_277!=((void*)0)) {
        if(        position==i_278) {
            __result_obj__138 = (struct CVALUE*)come_increment_ref_count(it_277->item);
            /*c*/ come_call_finalizer3(__result_obj__138,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__138;
        }
        it_277=it_277->next;
        i_278++;
    }
    memset(&default_value_279,0,sizeof(struct CVALUE*));
    __result_obj__139 = (struct CVALUE*)come_increment_ref_count(default_value_279);
    /*c*/ come_call_finalizer3(default_value_279,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__139,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__139;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_280;
int i_281;
struct CVALUE* __result_obj__140;
struct CVALUE* default_value_282;
struct CVALUE* __result_obj__141;
default_value_282 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_280=self->head;
    i_281=0;
    while(    it_280!=((void*)0)) {
        if(        position==i_281) {
            __result_obj__140 = (struct CVALUE*)come_increment_ref_count(it_280->item);
            /*c*/ come_call_finalizer3(__result_obj__140,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__140;
        }
        it_280=it_280->next;
        i_281++;
    }
    memset(&default_value_282,0,sizeof(struct CVALUE*));
    __result_obj__141 = (struct CVALUE*)come_increment_ref_count(default_value_282);
    /*c*/ come_call_finalizer3(default_value_282,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__141,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__141;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_288;
int i_289;
struct sType* default_value_290;
struct list$1sType$ph* __result_obj__143;
struct list_item$1sType$ph* it_294;
int i_295;
struct sType* __dec_obj81;
struct list$1sType$ph* __result_obj__144;
default_value_290 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_288=self->len;
        for(        i_289=0;        i_289<position-len_288;        i_289++        ){
            memset(&default_value_290,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_290));
            /*c*/ come_call_finalizer3(default_value_290,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__143 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__143;
    }
    it_294=self->head;
    i_295=0;
    while(    it_294!=((void*)0)) {
        if(        position==i_295) {
            __dec_obj81=it_294->item,
            it_294->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_294=it_294->next;
        i_295++;
    }
    __result_obj__144 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__144;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value243 = (void*)0;
struct list_item$1sType$ph* litem_291;
struct sType* __dec_obj78;
void* __right_value244 = (void*)0;
struct list_item$1sType$ph* litem_292;
struct sType* __dec_obj79;
void* __right_value245 = (void*)0;
struct list_item$1sType$ph* litem_293;
struct sType* __dec_obj80;
struct list$1sType$ph* __result_obj__142;
    if(    self->len==0) {
        litem_291=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value243=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj78=litem_291->item,
        litem_291->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value244=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj79=litem_292->item,
        litem_292->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value245=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj80=litem_293->item,
        litem_293->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result_obj__142 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__142;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_303;
struct tuple2$2char$phsNode$ph* __result_obj__145;
struct tuple2$2char$phsNode$ph* __result_obj__146;
struct tuple2$2char$phsNode$ph* result_304;
struct tuple2$2char$phsNode$ph* __result_obj__147;
result_303 = (void*)0;
result_304 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_303,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__145 = result_303;
        return __result_obj__145;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__146 = self->it->item;
        return __result_obj__146;
    }
    memset(&result_304,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__147 = result_304;
    return __result_obj__147;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_306;
struct tuple2$2char$phsNode$ph* __result_obj__148;
struct tuple2$2char$phsNode$ph* __result_obj__149;
struct tuple2$2char$phsNode$ph* result_307;
struct tuple2$2char$phsNode$ph* __result_obj__150;
result_306 = (void*)0;
result_307 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_306,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__148 = result_306;
        return __result_obj__148;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__149 = self->it->item;
        return __result_obj__149;
    }
    memset(&result_307,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__150 = result_307;
    return __result_obj__150;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_333;
struct tuple2$2char$phsType$ph* __result_obj__153;
struct tuple2$2char$phsType$ph* __result_obj__154;
struct tuple2$2char$phsType$ph* result_334;
struct tuple2$2char$phsType$ph* __result_obj__155;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_333,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__153 = result_333;
        return __result_obj__153;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__154 = self->it->item;
        return __result_obj__154;
    }
    memset(&result_334,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__155 = result_334;
    return __result_obj__155;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_336;
struct tuple2$2char$phsType$ph* __result_obj__156;
struct tuple2$2char$phsType$ph* __result_obj__157;
struct tuple2$2char$phsType$ph* result_337;
struct tuple2$2char$phsType$ph* __result_obj__158;
result_336 = (void*)0;
result_337 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_336,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__156 = result_336;
        return __result_obj__156;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__157 = self->it->item;
        return __result_obj__157;
    }
    memset(&result_337,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__158 = result_337;
    return __result_obj__158;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_352;
struct CVALUE* __result_obj__161;
struct CVALUE* __result_obj__162;
struct CVALUE* result_353;
struct CVALUE* __result_obj__163;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(struct CVALUE*));
        __result_obj__161 = result_352;
        return __result_obj__161;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__162 = self->it->item;
        return __result_obj__162;
    }
    memset(&result_353,0,sizeof(struct CVALUE*));
    __result_obj__163 = result_353;
    return __result_obj__163;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_355;
struct CVALUE* __result_obj__164;
struct CVALUE* __result_obj__165;
struct CVALUE* result_356;
struct CVALUE* __result_obj__166;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_355,0,sizeof(struct CVALUE*));
        __result_obj__164 = result_355;
        return __result_obj__164;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__165 = self->it->item;
        return __result_obj__165;
    }
    memset(&result_356,0,sizeof(struct CVALUE*));
    __result_obj__166 = result_356;
    return __result_obj__166;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value309 = (void*)0;
struct list_item$1CVALUE$ph* litem_378;
struct CVALUE* __dec_obj90;
void* __right_value310 = (void*)0;
struct list_item$1CVALUE$ph* litem_379;
struct CVALUE* __dec_obj91;
void* __right_value311 = (void*)0;
struct list_item$1CVALUE$ph* litem_380;
struct CVALUE* __dec_obj92;
struct list$1CVALUE$ph* __result_obj__171;
    if(    self->len==0) {
        litem_378=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value309=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1043, "struct list_item$1CVALUE$ph*"))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj90=litem_378->item,
        litem_378->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj90,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value310=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1053, "struct list_item$1CVALUE$ph*"))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj91=litem_379->item,
        litem_379->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj91,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value311=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1063, "struct list_item$1CVALUE$ph*"))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj92=litem_380->item,
        litem_380->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result_obj__171 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_391;
int i_392;
struct CVALUE* default_value_393;
struct list$1CVALUE$ph* __result_obj__173;
struct list_item$1CVALUE$ph* it_394;
int i_395;
struct CVALUE* __dec_obj94;
struct list$1CVALUE$ph* __result_obj__174;
default_value_393 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_391=self->len;
        for(        i_392=0;        i_392<position-len_391;        i_392++        ){
            memset(&default_value_393,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_393));
            /*c*/ come_call_finalizer3(default_value_393,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__173 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__173;
    }
    it_394=self->head;
    i_395=0;
    while(    it_394!=((void*)0)) {
        if(        position==i_395) {
            __dec_obj94=it_394->item,
            it_394->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj94,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_394=it_394->next;
        i_395++;
    }
    __result_obj__174 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__174;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_401;
int i_402;
char* __result_obj__175;
char* default_value_403;
char* __result_obj__176;
default_value_403 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_401=self->head;
    i_402=0;
    while(    it_401!=((void*)0)) {
        if(        position==i_402) {
            __result_obj__175 = (char*)come_increment_ref_count(it_401->item);
            (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__175;
        }
        it_401=it_401->next;
        i_402++;
    }
    memset(&default_value_403,0,sizeof(char*));
    __result_obj__176 = (char*)come_increment_ref_count(default_value_403);
    (default_value_403 = come_decrement_ref_count(default_value_403, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__176;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_404;
int i_405;
char* __result_obj__177;
char* default_value_406;
char* __result_obj__178;
default_value_406 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_404=self->head;
    i_405=0;
    while(    it_404!=((void*)0)) {
        if(        position==i_405) {
            __result_obj__177 = (char*)come_increment_ref_count(it_404->item);
            (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__177;
        }
        it_404=it_404->next;
        i_405++;
    }
    memset(&default_value_406,0,sizeof(char*));
    __result_obj__178 = (char*)come_increment_ref_count(default_value_406);
    (default_value_406 = come_decrement_ref_count(default_value_406, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__178;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info, _Bool no_err){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value382 = (void*)0;
struct sNode* node_432;
void* __right_value383 = (void*)0;
struct sNode* __dec_obj110;
struct sNode* __result_obj__187;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 947, "struct sNode");
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value374=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 947, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,guard_break,info,no_err))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_432=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value374,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    !no_err) {
        __dec_obj110=node_432,
        node_432=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_432),info));
        (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__187 = (struct sNode*)come_increment_ref_count(node_432);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_432) ? node_432 = come_decrement_ref_count(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__187) ? __result_obj__187 = come_decrement_ref_count(__result_obj__187, ((struct sNode*)__result_obj__187)->finalize, ((struct sNode*)__result_obj__187)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__187;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__185;
void* __right_value375 = (void*)0;
struct sMethodCallNode* result_433;
void* __right_value376 = (void*)0;
char* __dec_obj104;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj105;
void* __right_value378 = (void*)0;
char* __dec_obj106;
void* __right_value379 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj107;
void* __right_value380 = (void*)0;
struct buffer* __dec_obj108;
void* __right_value381 = (void*)0;
struct list$1sType$ph* __dec_obj109;
struct sMethodCallNode* __result_obj__186;
    if(    self==(void*)0) {
        __result_obj__185 = (void*)0;
        return __result_obj__185;
    }
    result_433=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*"));
    if(    self!=((void*)0)) {
        result_433->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj104=result_433->sname,
        result_433->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMethodCallNode_clone", 5, "char*"));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_433->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj105=result_433->obj,
        result_433->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj106=result_433->fun_name,
        result_433->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sMethodCallNode_clone", 8, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj107=result_433->params,
        result_433->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj107,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj108=result_433->method_block,
        result_433->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj108,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_433->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj109=result_433->method_generics_types,
        result_433->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj109,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_433->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_433->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_433->fun=self->fun;
    }
    if(    self!=((void*)0)) {
        result_433->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)) {
        result_433->no_err=self->no_err;
    }
    __result_obj__186 = result_433;
    /*c*/ come_call_finalizer3(result_433,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__186;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_434;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
_Bool parse_method_generics_type_439;
char* p_440;
int sline_441;
void* __right_value392 = (void*)0;
char* word_442;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1sType$ph* method_generics_types_443;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_444=0;
char* name_445=0;
_Bool err_446=0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
char* p_447;
int sline_448;
_Bool err_flag_449;
void* __right_value399 = (void*)0;
char* label_450;
void* __right_value400 = (void*)0;
char* __dec_obj116;
char* __dec_obj117;
_Bool no_comma_451;
_Bool in_fun_param_452;
void* __right_value401 = (void*)0;
struct sNode* node_453;
void* __right_value402 = (void*)0;
struct sNode* __dec_obj118;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct buffer* method_block_454;
int method_block_sline_455;
char* head_456;
void* __right_value405 = (void*)0;
char* tail_457;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct buffer* __dec_obj119;
int len_458;
void* __right_value408 = (void*)0;
char* mem_459;
struct sNode* node_460;
_Bool guard_break_461;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj121;
_Bool guard_break_462;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj122;
void* __right_value418 = (void*)0;
struct sNode* __dec_obj123;
struct sNode* __result_obj__190;
node_460 = (void*)0;
    params_434=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 958, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_push_back(params_434,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 959, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_439=(_Bool)0;
    {
        p_440=info->p;
        sline_441=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_442=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_442,info)) {
                    parse_method_generics_type_439=(_Bool)1;
                }
                (word_442 = come_decrement_ref_count(word_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_440;
        info->sline=sline_441;
    }
    method_generics_types_443=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 989, "struct list$1sType$ph*"))));
    if(    parse_method_generics_type_439&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1) {
            if(            *info->p==0) {
                ((struct tuple2$2int$bool$*)(__right_value395=err_msg(info,"unexpected source end")));
                /*c*/ come_call_finalizer3(__right_value395,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
                multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value396=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_444=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                name_445=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                err_446=multiple_assign_var15->v3;
                /*c*/ come_call_finalizer3(__right_value396,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_446) {
                    ((struct tuple2$2int$bool$*)(__right_value397=err_msg(info,"invalid method generics paramtor type")));
                    /*c*/ come_call_finalizer3(__right_value397,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_443,(struct sType*)come_increment_ref_count(sType_clone(type_444)));
                /*c*/ come_call_finalizer3(type_444,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_445 = come_decrement_ref_count(name_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while(        (_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_447=info->p;
            sline_448=info->sline;
            err_flag_449=(_Bool)0;
            label_450=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj116=label_450,
                label_450=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_449=(_Bool)1;
            }
            if(            err_flag_449==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj117=label_450,
                label_450=((void*)0);
                __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_447;
                info->sline=sline_448;
            }
            no_comma_451=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_452=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_453=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj118=node_453,
            node_453=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_453),info));
            (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->in_fun_param=in_fun_param_452;
            info->no_comma=no_comma_451;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_434,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1065, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_450),(struct sNode*)come_increment_ref_count(node_453))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_450 = come_decrement_ref_count(label_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_453) ? node_453 = come_decrement_ref_count(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_450 = come_decrement_ref_count(label_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_453) ? node_453 = come_decrement_ref_count(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_454=((void*)0);
    method_block_sline_455=0;
    if(    *info->p==123) {
        head_456=info->p;
        method_block_sline_455=info->sline;
        ((char*)(__right_value405=skip_block(info,(_Bool)0)));
        (__right_value405 = come_decrement_ref_count(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_457=info->p;
        __dec_obj119=method_block_454,
        method_block_454=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 1089, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj119,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_458=tail_457-head_456;
        mem_459=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_458+1)), "20method.c", 1092, "char*"));
        memcpy(mem_459,head_456,len_458);
        mem_459[len_458]=0;
        buffer_append_str(method_block_454,mem_459);
        buffer_append_str(method_block_454,"\n");
        (mem_459 = come_decrement_ref_count(mem_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        guard_break_461=(_Bool)1;
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1111, "struct sNode");
        _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value411=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1111, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_434),method_block_454,method_block_sline_455,method_generics_types_443,(_Bool)0,(_Bool)1,guard_break_461,info,(_Bool)0))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sMethodCallNode_finalize;
        _inf_value3->clone=(void*)sMethodCallNode_clone;
        _inf_value3->compile=(void*)sMethodCallNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sMethodCallNode_terminated;
        _inf_value3->kind=(void*)sMethodCallNode_kind;
        __dec_obj120=node_460,
        node_460=(struct sNode*)come_increment_ref_count(_inf_value3);
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value411,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj121=node_460,
        node_460=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_460),info));
        (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    else {
        guard_break_462=(_Bool)0;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1117, "struct sNode");
        _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value416=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1117, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_434),method_block_454,method_block_sline_455,method_generics_types_443,(_Bool)0,(_Bool)1,guard_break_462,info,(_Bool)0))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sMethodCallNode_finalize;
        _inf_value4->clone=(void*)sMethodCallNode_clone;
        _inf_value4->compile=(void*)sMethodCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sMethodCallNode_terminated;
        _inf_value4->kind=(void*)sMethodCallNode_kind;
        __dec_obj122=node_460,
        node_460=(struct sNode*)come_increment_ref_count(_inf_value4);
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value416,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj123=node_460,
        node_460=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_460),info));
        (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__190 = (struct sNode*)come_increment_ref_count(node_460);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_434,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_443,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_460) ? node_460 = come_decrement_ref_count(node_460, ((struct sNode*)node_460)->finalize, ((struct sNode*)node_460)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__190) ? __result_obj__190 = come_decrement_ref_count(__result_obj__190, ((struct sNode*)__result_obj__190)->finalize, ((struct sNode*)__result_obj__190)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__190;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value386 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_435;
struct tuple2$2char$phsNode$ph* __dec_obj111;
void* __right_value387 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_436;
struct tuple2$2char$phsNode$ph* __dec_obj112;
void* __right_value388 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_437;
struct tuple2$2char$phsNode$ph* __dec_obj113;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__188;
    if(    self->len==0) {
        litem_435=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value386=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_435->prev=((void*)0);
        litem_435->next=((void*)0);
        __dec_obj111=litem_435->item,
        litem_435->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj111,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_435;
        self->head=litem_435;
    }
    else if(    self->len==1) {
        litem_436=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value387=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_436->prev=self->head;
        litem_436->next=((void*)0);
        __dec_obj112=litem_436->item,
        litem_436->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj112,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_436;
        self->head->next=litem_436;
    }
    else {
        litem_437=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value388=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_437->prev=self->tail;
        litem_437->next=((void*)0);
        __dec_obj113=litem_437->item,
        litem_437->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj113,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_437;
        self->tail=litem_437;
    }
    self->len++;
    __result_obj__188 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_438;
    result_438=0;
    result_438+=int_get_hash_key(((int)self->v1));
    result_438+=int_get_hash_key(((int)self->v2));
    return result_438;
}

static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj114;
struct sNode* __dec_obj115;
struct tuple2$2char$phsNode$ph* __result_obj__189;
    __dec_obj114=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj115=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__189 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* _inf_value5;
struct sCurrentNode* _inf_obj_value5;
void* __right_value421 = (void*)0;
struct sNode* __result_obj__191;
void* __right_value422 = (void*)0;
struct sNode* __result_obj__192;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1128, "struct sNode");
        _inf_obj_value5=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value420=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1128, "struct sCurrentNode*")),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sCurrentNode_finalize;
        _inf_value5->clone=(void*)sCurrentNode_clone;
        _inf_value5->compile=(void*)sCurrentNode_compile;
        _inf_value5->sline=(void*)sCurrentNode_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sCurrentNode_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sCurrentNode_kind;
        __result_obj__191 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value421=_inf_value5)));
        /*c*/ come_call_finalizer3(__right_value420,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value421) ? __right_value421 = come_decrement_ref_count(__right_value421, ((struct sNode*)__right_value421)->finalize, ((struct sNode*)__right_value421)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__191) ? __result_obj__191 = come_decrement_ref_count(__result_obj__191, ((struct sNode*)__result_obj__191)->finalize, ((struct sNode*)__result_obj__191)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__191;
    }
    __result_obj__192 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value422=string_node_v17(buf,head,head_sline,info))));
    ((__right_value422) ? __right_value422 = come_decrement_ref_count(__right_value422, ((struct sNode*)__right_value422)->finalize, ((struct sNode*)__right_value422)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__192) ? __result_obj__192 = come_decrement_ref_count(__result_obj__192, ((struct sNode*)__result_obj__192)->finalize, ((struct sNode*)__result_obj__192)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__192;
}

