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

struct sCurrentNode
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
void show_type(struct sType* type, struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
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
struct sType* get_no_solved_type(struct sType* type);
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
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
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
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
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
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
_Bool is_contained_generics_funcstion(struct sFun* fun, struct sInfo* info);
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
struct list$1sType$ph* o2_saved_11;
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
            come_call_finalizer(buffer_finalize, buf_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__1 = come_decrement_ref_count(__result_obj__1, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__1;
        }
        come_value_2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf_0,"_Alignas(%s) ",come_value_2->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
        for(        o2_saved_11=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_14=list$1sType$ph_begin((o2_saved_11))        ;        !list$1sType$ph_end((o2_saved_11))        ;        it_14=list$1sType$ph_next((o2_saved_11))        ){
            param_type_str_17=(char*)come_increment_ref_count(make_type_name_string(it_14,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
            buffer_append_str(buf_0,param_type_str_17);
            if(            j_10!=list$1sType$ph_length(type->mParamTypes)-1            ) {
                buffer_append_str(buf_0,",");
            }
            j_10++;
            (param_type_str_17 = come_decrement_ref_count(param_type_str_17, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_0,")");
        (result_type_str_9 = come_decrement_ref_count(result_type_str_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        if(        class_name_1==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value6=err_msg(info,"class name is null")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value6, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__8 = (char*)come_increment_ref_count(((char*)(__right_value7=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__8 = come_decrement_ref_count(__result_obj__8, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__9 = (char*)come_increment_ref_count(((char*)(__right_value9=buffer_to_string(buf_0))));
    come_call_finalizer(buffer_finalize, buf_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__9 = come_decrement_ref_count(__result_obj__9, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__9;
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
struct list_item$1sType$ph* it_3;
struct list_item$1sType$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)    ) {
        prev_it_4=it_3;
        it_3=it_3->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_5;
struct list_item$1sNode$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        prev_it_6=it_5;
        it_5=it_5->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_7;
struct list_item$1char$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)    ) {
        prev_it_8=it_7;
        it_7=it_7->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

struct sType* get_no_solved_type(struct sType* type){
struct sType* result_19;
struct sType* __dec_obj1;
void* __right_value47 = (void*)0;
struct sType* __dec_obj25;
int i_43;
struct list$1sType$ph* o2_saved_44;
struct sType* it_45;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sType* __result_obj__29;
result_19 = (void*)0;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj1=result_19,
        result_19=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj25=result_19,
        result_19=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    i_43=0;
    for(    o2_saved_44=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_45=list$1sType$ph_begin((o2_saved_44))    ;    !list$1sType$ph_end((o2_saved_44))    ;    it_45=list$1sType$ph_next((o2_saved_44))    ){
        list$1sType$ph_operator_store_element(result_19->mGenericsTypes,i_43,(struct sType*)come_increment_ref_count(get_no_solved_type(it_45)));
        come_call_finalizer(sType_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i_43++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__29 = (struct sType*)come_increment_ref_count(result_19);
    come_call_finalizer(sType_finalize, result_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__29;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__10;
void* __right_value10 = (void*)0;
struct sType* result_20;
void* __right_value11 = (void*)0;
struct sType* __dec_obj2;
void* __right_value12 = (void*)0;
struct sType* __dec_obj3;
void* __right_value20 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value21 = (void*)0;
struct sType* __dec_obj8;
void* __right_value23 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value24 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value25 = (void*)0;
char* __dec_obj11;
void* __right_value26 = (void*)0;
char* __dec_obj12;
void* __right_value27 = (void*)0;
char* __dec_obj13;
void* __right_value35 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value36 = (void*)0;
char* __dec_obj18;
void* __right_value37 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value45 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value46 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__25;
    if(    self==(void*)0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    result_20=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_20->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj2=result_20->mOriginalLoadVarType,
        result_20->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_20->mChannelType,
        result_20->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_20->mGenericsTypes,
        result_20->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_20->mNoSolvedGenericsType,
        result_20->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_20->mSizeNum,
        result_20->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_20->mAlignas,
        result_20->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_20->mTupleName,
        result_20->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_20->mAttribute,
        result_20->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_20->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_20->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_20->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_20->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_20->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_20->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_20->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_20->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_20->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_20->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_20->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_20->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_20->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_20->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_20->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_20->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_20->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_20->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_20->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_20->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_20->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_20->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_20->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_20->mAsmName,
        result_20->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_20->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_20->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_20->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_20->mArrayNum,
        result_20->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_20->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_20->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_20->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_20->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_20->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_20->mOriginalTypeName,
        result_20->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_20->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_20->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_20->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_20->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_20->mParamTypes,
        result_20->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_20->mParamNames,
        result_20->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_20->mResultType,
        result_20->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_20->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_20->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__25 = result_20;
    come_call_finalizer(sType_finalize, result_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__11;
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
struct list$1sType$ph* result_21;
struct list_item$1sType$ph* it_22;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct list$1sType$ph* __result_obj__14;
    if(    self==((void*)0)    ) {
        __result_obj__11 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__11;
    }
    result_21=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 957, "struct list$1sType$ph*"))));
    it_22=self->head;
    while(    it_22!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_21,(struct sType*)come_increment_ref_count(sType_clone(it_22->item)));
        }
        else {
            list$1sType$ph_add(result_21,(struct sType*)come_increment_ref_count(sType_clone(it_22->item)));
        }
        it_22=it_22->next;
    }
    __result_obj__14 = (struct list$1sType$ph*)come_increment_ref_count(result_21);
    come_call_finalizer(list$1sType$ph$p_finalize, result_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__12;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__12 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__12;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value15 = (void*)0;
struct list_item$1sType$ph* litem_23;
struct sType* __dec_obj4;
void* __right_value16 = (void*)0;
struct list_item$1sType$ph* litem_24;
struct sType* __dec_obj5;
void* __right_value17 = (void*)0;
struct list_item$1sType$ph* litem_25;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__13;
    if(    self->len==0    ) {
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value15=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 976, "struct list_item$1sType$ph*"))));
        litem_23->prev=((void*)0);
        litem_23->next=((void*)0);
        __dec_obj4=litem_23->item,
        litem_23->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_23;
        self->head=litem_23;
    }
    else if(    self->len==1    ) {
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value16=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 986, "struct list_item$1sType$ph*"))));
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        __dec_obj5=litem_24->item,
        litem_24->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        litem_25=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value17=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 996, "struct list_item$1sType$ph*"))));
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        __dec_obj6=litem_25->item,
        litem_25->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
    __result_obj__13 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__13;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_26;
struct list_item$1sType$ph* prev_it_27;
    it_26=self->head;
    while(    it_26!=((void*)0)    ) {
        prev_it_27=it_26;
        it_26=it_26->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__15;
void* __right_value22 = (void*)0;
struct sNode* result_28;
struct sNode* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__15 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__15) ? __result_obj__15 = come_decrement_ref_count(__result_obj__15, ((struct sNode*)__result_obj__15)->finalize, ((struct sNode*)__result_obj__15)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__15;
    }
    result_28=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_28->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_28->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_28->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_28->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_28->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_28->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_28->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_28->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_28->kind=self->kind;
    }
    __result_obj__16 = (struct sNode*)come_increment_ref_count(result_28);
    ((result_28) ? result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__16) ? __result_obj__16 = come_decrement_ref_count(__result_obj__16, ((struct sNode*)__result_obj__16)->finalize, ((struct sNode*)__result_obj__16)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__16;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__17;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct list$1sNode$ph* result_29;
struct list_item$1sNode$ph* it_30;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct list$1sNode$ph* __result_obj__20;
    if(    self==((void*)0)    ) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__17;
    }
    result_29=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 957, "struct list$1sNode$ph*"))));
    it_30=self->head;
    while(    it_30!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_29,(struct sNode*)come_increment_ref_count(sNode_clone(it_30->item)));
        }
        else {
            list$1sNode$ph_add(result_29,(struct sNode*)come_increment_ref_count(sNode_clone(it_30->item)));
        }
        it_30=it_30->next;
    }
    __result_obj__20 = (struct list$1sNode$ph*)come_increment_ref_count(result_29);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value30 = (void*)0;
struct list_item$1sNode$ph* litem_31;
struct sNode* __dec_obj14;
void* __right_value31 = (void*)0;
struct list_item$1sNode$ph* litem_32;
struct sNode* __dec_obj15;
void* __right_value32 = (void*)0;
struct list_item$1sNode$ph* litem_33;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__19;
    if(    self->len==0    ) {
        litem_31=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value30=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 976, "struct list_item$1sNode$ph*"))));
        litem_31->prev=((void*)0);
        litem_31->next=((void*)0);
        __dec_obj14=litem_31->item,
        litem_31->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_31;
        self->head=litem_31;
    }
    else if(    self->len==1    ) {
        litem_32=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value31=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 986, "struct list_item$1sNode$ph*"))));
        litem_32->prev=self->head;
        litem_32->next=((void*)0);
        __dec_obj15=litem_32->item,
        litem_32->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_32;
        self->head->next=litem_32;
    }
    else {
        litem_33=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value32=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 996, "struct list_item$1sNode$ph*"))));
        litem_33->prev=self->tail;
        litem_33->next=((void*)0);
        __dec_obj16=litem_33->item,
        litem_33->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_33;
        self->tail=litem_33;
    }
    self->len++;
    __result_obj__19 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__19;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_34;
struct list_item$1sNode$ph* prev_it_35;
    it_34=self->head;
    while(    it_34!=((void*)0)    ) {
        prev_it_35=it_34;
        it_34=it_34->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__21;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct list$1char$ph* result_36;
struct list_item$1char$ph* it_37;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1char$ph* __result_obj__24;
    if(    self==((void*)0)    ) {
        __result_obj__21 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__21;
    }
    result_36=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 957, "struct list$1char$ph*"))));
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_36,(char*)come_increment_ref_count((char*)come_memdup(it_37->item, "./comelang.h", 962, "char*")));
        }
        else {
            list$1char$ph_add(result_36,(char*)come_increment_ref_count((char*)come_memdup(it_37->item, "./comelang.h", 965, "char*")));
        }
        it_37=it_37->next;
    }
    __result_obj__24 = (struct list$1char$ph*)come_increment_ref_count(result_36);
    come_call_finalizer(list$1char$ph$p_finalize, result_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__22;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__22 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value40 = (void*)0;
struct list_item$1char$ph* litem_38;
char* __dec_obj20;
void* __right_value41 = (void*)0;
struct list_item$1char$ph* litem_39;
char* __dec_obj21;
void* __right_value42 = (void*)0;
struct list_item$1char$ph* litem_40;
char* __dec_obj22;
struct list$1char$ph* __result_obj__23;
    if(    self->len==0    ) {
        litem_38=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value40=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 976, "struct list_item$1char$ph*"))));
        litem_38->prev=((void*)0);
        litem_38->next=((void*)0);
        __dec_obj20=litem_38->item,
        litem_38->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_38;
        self->head=litem_38;
    }
    else if(    self->len==1    ) {
        litem_39=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value41=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 986, "struct list_item$1char$ph*"))));
        litem_39->prev=self->head;
        litem_39->next=((void*)0);
        __dec_obj21=litem_39->item,
        litem_39->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_39;
        self->head->next=litem_39;
    }
    else {
        litem_40=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value42=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 996, "struct list_item$1char$ph*"))));
        litem_40->prev=self->tail;
        litem_40->next=((void*)0);
        __dec_obj22=litem_40->item,
        litem_40->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_40;
        self->tail=litem_40;
    }
    self->len++;
    __result_obj__23 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__23;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_41;
struct list_item$1char$ph* prev_it_42;
    it_41=self->head;
    while(    it_41!=((void*)0)    ) {
        prev_it_42=it_41;
        it_41=it_41->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_46;
int i_47;
struct sType* default_value_48;
struct list$1sType$ph* __result_obj__27;
struct list_item$1sType$ph* it_52;
int i_53;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__28;
default_value_48 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_46=self->len;
        for(        i_47=0        ;        i_47<position-len_46        ;        i_47++        ){
            memset(&default_value_48,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_48));
            come_call_finalizer(sType_finalize, default_value_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__27 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__27;
    }
    it_52=self->head;
    i_53=0;
    while(    it_52!=((void*)0)    ) {
        if(        position==i_53        ) {
            __dec_obj29=it_52->item,
            it_52->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_52=it_52->next;
        i_53++;
    }
    __result_obj__28 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__28;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value48 = (void*)0;
struct list_item$1sType$ph* litem_49;
struct sType* __dec_obj26;
void* __right_value49 = (void*)0;
struct list_item$1sType$ph* litem_50;
struct sType* __dec_obj27;
void* __right_value50 = (void*)0;
struct list_item$1sType$ph* litem_51;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__26;
    if(    self->len==0    ) {
        litem_49=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value48=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_49->prev=((void*)0);
        litem_49->next=((void*)0);
        __dec_obj26=litem_49->item,
        litem_49->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_49;
        self->head=litem_49;
    }
    else if(    self->len==1    ) {
        litem_50=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value49=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1056, "struct list_item$1sType$ph*"))));
        litem_50->prev=self->head;
        litem_50->next=((void*)0);
        __dec_obj27=litem_50->item,
        litem_50->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_50;
        self->head->next=litem_50;
    }
    else {
        litem_51=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value50=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1066, "struct list_item$1sType$ph*"))));
        litem_51->prev=self->tail;
        litem_51->next=((void*)0);
        __dec_obj28=litem_51->item,
        litem_51->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_51;
        self->tail=litem_51;
    }
    self->len++;
    __result_obj__26 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__26;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name){
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_54;
void* __right_value55 = (void*)0;
struct sType* type2_55;
char* class_name_56;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct buffer* buf_57;
int i_58;
void* __right_value58 = (void*)0;
char* __result_obj__30;
int i_59;
void* __right_value59 = (void*)0;
struct sType* gtype_60;
void* __right_value60 = (void*)0;
int i_67;
int i_68;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
char* __result_obj__35;
    buf_54=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 173, "struct buffer*"))));
    type2_55=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
    class_name_56=type2_55->mClass->mName;
    if(    original_type_name&&type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")    ) {
        buf_57=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 181, "struct buffer*"))));
        buffer_append_str(buf_57,type->mOriginalTypeName);
        for(        i_58=0        ;        i_58<type->mOriginalTypeNamePointerNum        ;        i_58++        ){
            buffer_append_str(buf_57,"*");
        }
        if(        type->mOriginalTypeNameHeap        ) {
            buffer_append_str(buf_57,"%");
        }
        __result_obj__30 = (char*)come_increment_ref_count(((char*)(__right_value58=buffer_to_string(buf_57))));
        come_call_finalizer(buffer_finalize, buf_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type2_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__30 = come_decrement_ref_count(__result_obj__30, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__30;
        come_call_finalizer(buffer_finalize, buf_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        buffer_append_str(buf_54,class_name_56);
        if(        list$1sType$ph_length(type2_55->mGenericsTypes)>0        ) {
            buffer_append_str(buf_54,"<");
            for(            i_59=0            ;            i_59<list$1sType$ph_length(type2_55->mGenericsTypes)            ;            i_59++            ){
                gtype_60=((struct sType*)(__right_value59=list$1sType$ph_operator_load_element(type2_55->mGenericsTypes,i_59)));
                come_call_finalizer(sType_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                buffer_append_str(buf_54,((char*)(__right_value60=make_come_type_name_string(gtype_60,info,(_Bool)0))));
                (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                i_59!=list$1sType$ph_length(type2_55->mGenericsTypes)-1                ) {
                    buffer_append_str(buf_54,",");
                }
            }
            buffer_append_str(buf_54,">");
        }
        if(        charp_operator_not_equals(class_name_56,"lambda")        ) {
            for(            i_67=0            ;            i_67<type2_55->mPointerNum            ;            i_67++            ){
                buffer_append_str(buf_54,"*");
            }
        }
        if(        list$1sNode$ph_length(type2_55->mArrayNum)>0        ) {
            for(            i_68=0            ;            i_68<list$1sNode$ph_length(type2_55->mArrayNum)            ;            i_68++            ){
                buffer_append_str(buf_54,"[]");
            }
        }
        if(        type2_55->mHeap        ) {
            buffer_append_str(buf_54,"%");
        }
        if(        type2_55->mAttribute        ) {
            buffer_append_str(buf_54,((char*)(__right_value61=charp_operator_add(" ",type2_55->mAttribute))));
            (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__35 = (char*)come_increment_ref_count(((char*)(__right_value62=buffer_to_string(buf_54))));
    come_call_finalizer(buffer_finalize, buf_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__35 = come_decrement_ref_count(__result_obj__35, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__35;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_61;
int i_62;
struct sType* __result_obj__31;
struct sType* default_value_63;
struct sType* __result_obj__32;
default_value_63 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_61=self->head;
    i_62=0;
    while(    it_61!=((void*)0)    ) {
        if(        position==i_62        ) {
            __result_obj__31 = (struct sType*)come_increment_ref_count(it_61->item);
            come_call_finalizer(sType_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__31;
        }
        it_61=it_61->next;
        i_62++;
    }
    memset(&default_value_63,0,sizeof(struct sType*));
    __result_obj__32 = (struct sType*)come_increment_ref_count(default_value_63);
    come_call_finalizer(sType_finalize, default_value_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_64;
int i_65;
struct sType* __result_obj__33;
struct sType* default_value_66;
struct sType* __result_obj__34;
default_value_66 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_64=self->head;
    i_65=0;
    while(    it_64!=((void*)0)    ) {
        if(        position==i_65        ) {
            __result_obj__33 = (struct sType*)come_increment_ref_count(it_64->item);
            come_call_finalizer(sType_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__33;
        }
        it_64=it_64->next;
        i_65++;
    }
    memset(&default_value_66,0,sizeof(struct sType*));
    __result_obj__34 = (struct sType*)come_increment_ref_count(default_value_66);
    come_call_finalizer(sType_finalize, default_value_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_69;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
char* __result_obj__36;
int i_70;
struct list$1sType$ph* o2_saved_71;
struct sType* it_72;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
char* __result_obj__37;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
int i_73;
int i_74;
struct list$1sType$ph* o2_saved_75;
struct sType* it_76;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
char* __result_obj__38;
void* __right_value77 = (void*)0;
char* __result_obj__39;
    buf_69=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 237, "struct buffer*"))));
    if(    type->mResultType==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value65=err_msg(info,"invalid lambda type")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__36 = (char*)come_increment_ref_count(((char*)(__right_value66=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__36 = come_decrement_ref_count(__result_obj__36, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__36;
    }
    if(    type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")    ) {
        buffer_append_format(buf_69,"(*%s)(",var_name);
        i_70=0;
        for(        o2_saved_71=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_72=list$1sType$ph_begin((o2_saved_71))        ;        !list$1sType$ph_end((o2_saved_71))        ;        it_72=list$1sType$ph_next((o2_saved_71))        ){
            buffer_append_str(buf_69,((char*)(__right_value67=make_type_name_string(it_72,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            i_70!=list$1sType$ph_length(type->mParamTypes)-1            ) {
                buffer_append_str(buf_69,",");
            }
            i_70++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_69,")");
        if(        type->mAttribute        ) {
            buffer_append_str(buf_69,((char*)(__right_value68=charp_operator_add(" ",type->mAttribute))));
            (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __result_obj__37 = (char*)come_increment_ref_count(((char*)(__right_value70=make_lambda_type_name_string(type->mResultType,((char*)(__right_value69=buffer_to_string(buf_69))),info))));
        come_call_finalizer(buffer_finalize, buf_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__37 = come_decrement_ref_count(__result_obj__37, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__37;
    }
    else {
        if(        type->mLambdaArray        ) {
            if(            type->mLambdaArrayNum==0            ) {
                buffer_append_format(buf_69,"%s (*%s[])(",((char*)(__right_value71=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name);
                (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                buffer_append_format(buf_69,"%s (*%s[%d])(",((char*)(__right_value72=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name,type->mLambdaArrayNum);
                (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            buffer_append_format(buf_69,"%s ",((char*)(__right_value73=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            type->mFunctionPointerNum>1            ) {
                buffer_append_str(buf_69,"(");
                for(                i_73=0                ;                i_73<type->mFunctionPointerNum                ;                i_73++                ){
                    buffer_append_str(buf_69,"*");
                }
                buffer_append_format(buf_69,"%s)(",var_name);
            }
            else {
                buffer_append_format(buf_69,"(*%s)(",var_name);
            }
        }
        i_74=0;
        for(        o2_saved_75=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_76=list$1sType$ph_begin((o2_saved_75))        ;        !list$1sType$ph_end((o2_saved_75))        ;        it_76=list$1sType$ph_next((o2_saved_75))        ){
            buffer_append_str(buf_69,((char*)(__right_value74=make_type_name_string(it_76,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            i_74!=list$1sType$ph_length(type->mParamTypes)-1            ) {
                buffer_append_str(buf_69,",");
            }
            i_74++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_69,")");
        if(        type->mAttribute        ) {
            buffer_append_str(buf_69,((char*)(__right_value75=charp_operator_add(" ",type->mAttribute))));
            (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value76=buffer_to_string(buf_69))));
        come_call_finalizer(buffer_finalize, buf_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__38;
    }
    __result_obj__39 = (char*)come_increment_ref_count(((char*)(__right_value77=buffer_to_string(buf_69))));
    come_call_finalizer(buffer_finalize, buf_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__39 = come_decrement_ref_count(__result_obj__39, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__39;
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type){
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
struct buffer* buf_77;
void* __right_value80 = (void*)0;
struct sType* type2_78;
void* __right_value81 = (void*)0;
char* str_79;
void* __right_value82 = (void*)0;
char* str_80;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
char* __result_obj__40;
void* __right_value85 = (void*)0;
struct CVALUE* come_value_81;
char* type_str_82;
void* __right_value86 = (void*)0;
char* __dec_obj30;
void* __right_value87 = (void*)0;
char* __dec_obj31;
char* type_str_83;
void* __right_value88 = (void*)0;
char* __dec_obj32;
void* __right_value89 = (void*)0;
char* __dec_obj33;
struct list$1sNode$ph* o2_saved_84;
struct sNode* it_87;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
char* __result_obj__47;
void* __right_value92 = (void*)0;
struct CVALUE* cvalue_90;
char* type_str_91;
void* __right_value93 = (void*)0;
char* __dec_obj34;
void* __right_value94 = (void*)0;
char* __dec_obj35;
void* __right_value95 = (void*)0;
char* __result_obj__48;
void* __right_value96 = (void*)0;
char* __result_obj__49;
type_str_82 = (void*)0;
type_str_83 = (void*)0;
type_str_91 = (void*)0;
    buf_77=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 314, "struct buffer*"))));
    type2_78=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type2_78->mArrayPointerType    ) {
        type2_78->mPointerNum--;
    }
    if(    string_operator_equals(type2_78->mClass->mName,"lambda")&&type2_78->mAsmName!=((void*)0)&&string_operator_not_equals(type2_78->mAsmName,"")    ) {
        str_79=(char*)come_increment_ref_count(header_lambda(type2_78,(char*)come_increment_ref_count(type2_78->mAsmName),info));
        buffer_append_str(buf_77,str_79);
        (str_79 = come_decrement_ref_count(str_79, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    string_operator_equals(type2_78->mClass->mName,"lambda")    ) {
        str_80=(char*)come_increment_ref_count(make_lambda_type_name_string(type2_78,name,info));
        buffer_append_str(buf_77,str_80);
        (str_80 = come_decrement_ref_count(str_80, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    type2_78->mSizeNum!=((void*)0)    ) {
        if(        !node_compile(type2_78->mSizeNum,info)        ) {
            ((struct tuple2$2int$bool$*)(__right_value83=err_msg(info,"invalid bit field number")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__40 = come_decrement_ref_count(__result_obj__40, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__40;
        }
        come_value_81=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        come_type        ) {
            __dec_obj30=type_str_82,
            type_str_82=(char*)come_increment_ref_count(make_come_type_name_string(type2_78,info,(_Bool)0));
            __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj31=type_str_82,
            type_str_82=(char*)come_increment_ref_count(make_type_name_string(type2_78,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        buffer_append_format(buf_77,"%s ",type_str_82);
        buffer_append_format(buf_77,"%s:%s",name,come_value_81->c_value);
        if(        type2_78->mAsmName!=((void*)0)&&string_operator_not_equals(type2_78->mAsmName,"")        ) {
            buffer_append_format(buf_77," __asm__(\"%s\")",type2_78->mAsmName);
        }
        if(        type2_78->mAsmName!=((void*)0)&&string_operator_not_equals(type2_78->mAsmName,"")        ) {
            buffer_append_format(buf_77," __asm__(\"%s\")",type2_78->mAsmName);
        }
        come_call_finalizer(CVALUE_finalize, come_value_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (type_str_82 = come_decrement_ref_count(type_str_82, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(type2_78->mArrayNum)>0    ) {
        if(        come_type        ) {
            __dec_obj32=type_str_83,
            type_str_83=(char*)come_increment_ref_count(make_come_type_name_string(type2_78,info,(_Bool)0));
            __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj33=type_str_83,
            type_str_83=(char*)come_increment_ref_count(make_type_name_string(type2_78,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        buffer_append_str(buf_77,type_str_83);
        buffer_append_str(buf_77," ");
        buffer_append_str(buf_77,name);
        for(        o2_saved_84=(struct list$1sNode$ph*)come_increment_ref_count((type2_78->mArrayNum)),it_87=list$1sNode$ph_begin((o2_saved_84))        ;        !list$1sNode$ph_end((o2_saved_84))        ;        it_87=list$1sNode$ph_next((o2_saved_84))        ){
            if(            !node_compile(it_87,info)            ) {
                ((struct tuple2$2int$bool$*)(__right_value90=err_msg(info,"invalid array number")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_str_83 = come_decrement_ref_count(type_str_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__47;
            }
            cvalue_90=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(buf_77,"[%s]",cvalue_90->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        type2_78->mArrayPointerType        ) {
            buffer_append_str(buf_77,"[]");
        }
        if(        type2_78->mAsmName!=((void*)0)&&string_operator_not_equals(type2_78->mAsmName,"")        ) {
            buffer_append_format(buf_77," __asm__(\"%s\")",type2_78->mAsmName);
        }
        (type_str_83 = come_decrement_ref_count(type_str_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        if(        come_type        ) {
            __dec_obj34=type_str_91,
            type_str_91=(char*)come_increment_ref_count(make_come_type_name_string(type2_78,info,(_Bool)0));
            __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj35=type_str_91,
            type_str_91=(char*)come_increment_ref_count(make_type_name_string(type2_78,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        string_operator_equals(type_str_91,"")        ) {
            __result_obj__48 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
            (type_str_91 = come_decrement_ref_count(type_str_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__48;
        }
        buffer_append_str(buf_77,type_str_91);
        buffer_append_str(buf_77," ");
        buffer_append_str(buf_77,name);
        if(        type2_78->mArrayPointerType        ) {
            buffer_append_str(buf_77,"[]");
        }
        if(        type2_78->mAsmName!=((void*)0)&&string_operator_not_equals(type2_78->mAsmName,"")        ) {
            buffer_append_format(buf_77," __asm__(\"%s\")",type2_78->mAsmName);
        }
        (type_str_91 = come_decrement_ref_count(type_str_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_77))));
    come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__49;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_85;
struct sNode* __result_obj__41;
struct sNode* __result_obj__42;
struct sNode* result_86;
struct sNode* __result_obj__43;
result_85 = (void*)0;
result_86 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_85,0,sizeof(struct sNode*));
        __result_obj__41 = result_85;
        return __result_obj__41;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__42 = self->it->item;
        return __result_obj__42;
    }
    memset(&result_86,0,sizeof(struct sNode*));
    __result_obj__43 = result_86;
    return __result_obj__43;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_88;
struct sNode* __result_obj__44;
struct sNode* __result_obj__45;
struct sNode* result_89;
struct sNode* __result_obj__46;
result_88 = (void*)0;
result_89 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_88,0,sizeof(struct sNode*));
        __result_obj__44 = result_88;
        return __result_obj__44;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__45 = self->it->item;
        return __result_obj__45;
    }
    memset(&result_89,0,sizeof(struct sNode*));
    __result_obj__46 = result_89;
    return __result_obj__46;
}

char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info){
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct buffer* header_92;
void* __right_value99 = (void*)0;
char* result_type_name_93;
void* __right_value100 = (void*)0;
char* impl_name_94;
int i_95;
void* __right_value101 = (void*)0;
struct sType* param_type_96;
void* __right_value102 = (void*)0;
char* param_name_103;
void* __right_value103 = (void*)0;
char* default_parametor_104;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__54;
    header_92=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 421, "struct buffer*"))));
    result_type_name_93=(char*)come_increment_ref_count(make_come_type_name_string(fun->mResultType,info,(_Bool)0));
    if(    impl_type    ) {
        impl_name_94=(char*)come_increment_ref_count(make_come_type_name_string(impl_type,info,(_Bool)0));
        buffer_append_format(header_92,"extern %s %s::%s(",result_type_name_93,impl_name_94,base_fun_name);
        (impl_name_94 = come_decrement_ref_count(impl_name_94, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        buffer_append_format(header_92,"extern %s %s(",result_type_name_93,base_fun_name);
    }
    for(    i_95=0    ;    i_95<list$1sType$ph_length(fun->mParamTypes)    ;    i_95++    ){
        param_type_96=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(fun->mParamTypes,i_95));
        param_name_103=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamNames,i_95));
        default_parametor_104=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamDefaultParametors,i_95));
        if(        default_parametor_104        ) {
            buffer_append_format(header_92,"%s %s=%s",((char*)(__right_value104=make_come_type_name_string(param_type_96,info,(_Bool)0))),param_name_103,default_parametor_104);
            (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            buffer_append_format(header_92,"%s %s",((char*)(__right_value105=make_come_type_name_string(param_type_96,info,(_Bool)0))),param_name_103);
            (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        i_95!=list$1sType$ph_length(fun->mParamTypes)-1        ) {
            buffer_append_str(header_92,",");
        }
        come_call_finalizer(sType_finalize, param_type_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (param_name_103 = come_decrement_ref_count(param_name_103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (default_parametor_104 = come_decrement_ref_count(default_parametor_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    version_==-1||version_==0    ) {
        buffer_append_str(header_92,");\n");
    }
    else {
        buffer_append_format(header_92,") version %d;\n",version_);
    }
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value106=buffer_to_string(header_92))));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, header_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_type_name_93 = come_decrement_ref_count(result_type_name_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__54;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_97;
int i_98;
char* __result_obj__50;
char* default_value_99;
char* __result_obj__51;
default_value_99 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_97=self->head;
    i_98=0;
    while(    it_97!=((void*)0)    ) {
        if(        position==i_98        ) {
            __result_obj__50 = (char*)come_increment_ref_count(it_97->item);
            (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__50;
        }
        it_97=it_97->next;
        i_98++;
    }
    memset(&default_value_99,0,sizeof(char*));
    __result_obj__51 = (char*)come_increment_ref_count(default_value_99);
    (default_value_99 = come_decrement_ref_count(default_value_99, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__51;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_100;
int i_101;
char* __result_obj__52;
char* default_value_102;
char* __result_obj__53;
default_value_102 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_100=self->head;
    i_101=0;
    while(    it_100!=((void*)0)    ) {
        if(        position==i_101        ) {
            __result_obj__52 = (char*)come_increment_ref_count(it_100->item);
            (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__52;
        }
        it_100=it_100->next;
        i_101++;
    }
    memset(&default_value_102,0,sizeof(char*));
    __result_obj__53 = (char*)come_increment_ref_count(default_value_102);
    (default_value_102 = come_decrement_ref_count(default_value_102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__53;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct buffer* output_105;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct buffer* output2_106;
int i_107;
struct list$1sType$ph* o2_saved_108;
struct sType* it_109;
void* __right_value111 = (void*)0;
char* name_110;
void* __right_value112 = (void*)0;
char* str_111;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
char* str_112;
void* __right_value115 = (void*)0;
struct sType* base_result_type_113;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct list$1sNode$ph* __dec_obj36;
void* __right_value118 = (void*)0;
char* result_type_str_114;
int i_115;
struct list$1sType$ph* o2_saved_116;
struct sType* it_117;
void* __right_value119 = (void*)0;
char* name_118;
void* __right_value120 = (void*)0;
char* str_119;
void* __right_value121 = (void*)0;
struct sNode* node_120;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
char* __result_obj__59;
void* __right_value124 = (void*)0;
struct CVALUE* cvalue_127;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
char* result_type_str_128;
int i_129;
struct list$1sType$ph* o2_saved_130;
struct sType* it_131;
void* __right_value127 = (void*)0;
char* name_132;
void* __right_value128 = (void*)0;
char* str_133;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
char* __result_obj__60;
    output_105=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 462, "struct buffer*"))));
    if(    fun->mResultType->mResultType    ) {
        output2_106=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 464, "struct buffer*"))));
        buffer_append_str(output2_106,fun->mName);
        buffer_append_str(output2_106,"(");
        i_107=0;
        for(        o2_saved_108=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_109=list$1sType$ph_begin((o2_saved_108))        ;        !list$1sType$ph_end((o2_saved_108))        ;        it_109=list$1sType$ph_next((o2_saved_108))        ){
            name_110=((char*)(__right_value111=list$1char$ph_operator_load_element(fun->mParamNames,i_107)));
            (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_111=(char*)come_increment_ref_count(make_define_var(it_109,name_110,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output2_106,str_111);
            if(            i_107==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output2_106,", ...");
                }
            }
            else {
                buffer_append_str(output2_106,", ");
            }
            i_107++;
            (str_111 = come_decrement_ref_count(str_111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(output2_106,")");
        str_112=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value113=buffer_to_string(output2_106))),info));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun->mStatic        ) {
            buffer_append_str(output_105,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_105,"inline ");
        }
        buffer_append_str(output_105,str_112);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value115=buffer_to_string(output_105))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer(buffer_finalize, output2_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (str_112 = come_decrement_ref_count(str_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0    ) {
        base_result_type_113=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj36=base_result_type_113->mArrayNum,
        base_result_type_113->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 518, "struct list$1sNode$ph*"))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_str_114=(char*)come_increment_ref_count(make_type_name_string(base_result_type_113,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_105,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_105,"inline ");
        }
        buffer_append_str(output_105,result_type_str_114);
        buffer_append_str(output_105," (*");
        buffer_append_str(output_105,fun->mName);
        buffer_append_str(output_105,"(");
        i_115=0;
        for(        o2_saved_116=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_117=list$1sType$ph_begin((o2_saved_116))        ;        !list$1sType$ph_end((o2_saved_116))        ;        it_117=list$1sType$ph_next((o2_saved_116))        ){
            name_118=((char*)(__right_value119=list$1char$ph_operator_load_element(fun->mParamNames,i_115)));
            (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_119=(char*)come_increment_ref_count(make_define_var(it_117,name_118,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output_105,str_119);
            if(            i_115==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_105,", ...");
                }
            }
            else {
                buffer_append_str(output_105,", ");
            }
            i_115++;
            (str_119 = come_decrement_ref_count(str_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        node_120=((struct sNode*)(__right_value121=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value121) ? __right_value121 = come_decrement_ref_count(__right_value121, ((struct sNode*)__right_value121)->finalize, ((struct sNode*)__right_value121)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        if(        !node_compile(node_120,info)        ) {
            ((struct tuple2$2int$bool$*)(__right_value122=err_msg(info,"invalid array number")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__59 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
            come_call_finalizer(sType_finalize, base_result_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (result_type_str_114 = come_decrement_ref_count(result_type_str_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, output_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__59;
        }
        cvalue_127=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_105,"))[%s]",cvalue_127->c_value);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value125=buffer_to_string(output_105))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer(sType_finalize, base_result_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (result_type_str_114 = come_decrement_ref_count(result_type_str_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        result_type_str_128=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_105,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_105,"inline ");
        }
        buffer_append_str(output_105,result_type_str_128);
        buffer_append_str(output_105," ");
        buffer_append_str(output_105,fun->mName);
        buffer_append_str(output_105,"(");
        i_129=0;
        for(        o2_saved_130=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_131=list$1sType$ph_begin((o2_saved_130))        ;        !list$1sType$ph_end((o2_saved_130))        ;        it_131=list$1sType$ph_next((o2_saved_130))        ){
            name_132=((char*)(__right_value127=list$1char$ph_operator_load_element(fun->mParamNames,i_129)));
            (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_133=(char*)come_increment_ref_count(make_define_var(it_131,name_132,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output_105,str_133);
            if(            i_129==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_105,", ...");
                }
            }
            else {
                buffer_append_str(output_105,", ");
            }
            i_129++;
            (str_133 = come_decrement_ref_count(str_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(output_105,")");
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value129=buffer_to_string(output_105))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        (result_type_str_128 = come_decrement_ref_count(result_type_str_128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    buffer_append_str(output_105,"{\n");
    buffer_append_str(output_105,((char*)(__right_value130=buffer_to_string(fun->mSourceHead))));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_str(output_105,((char*)(__right_value131=buffer_to_string(fun->mSourceHead2))));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_str(output_105,((char*)(__right_value132=buffer_to_string(fun->mSource))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_str(output_105,"}\n");
    __result_obj__60 = (char*)come_increment_ref_count(((char*)(__right_value133=buffer_to_string(output_105))));
    come_call_finalizer(buffer_finalize, output_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__60;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_121;
int i_122;
struct sNode* __result_obj__55;
struct sNode* default_value_123;
struct sNode* __result_obj__56;
default_value_123 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_121=self->head;
    i_122=0;
    while(    it_121!=((void*)0)    ) {
        if(        position==i_122        ) {
            __result_obj__55 = (struct sNode*)come_increment_ref_count(it_121->item);
            ((__result_obj__55) ? __result_obj__55 = come_decrement_ref_count(__result_obj__55, ((struct sNode*)__result_obj__55)->finalize, ((struct sNode*)__result_obj__55)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__55;
        }
        it_121=it_121->next;
        i_122++;
    }
    memset(&default_value_123,0,sizeof(struct sNode*));
    __result_obj__56 = (struct sNode*)come_increment_ref_count(default_value_123);
    ((default_value_123) ? default_value_123 = come_decrement_ref_count(default_value_123, ((struct sNode*)default_value_123)->finalize, ((struct sNode*)default_value_123)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__56) ? __result_obj__56 = come_decrement_ref_count(__result_obj__56, ((struct sNode*)__result_obj__56)->finalize, ((struct sNode*)__result_obj__56)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__56;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_124;
int i_125;
struct sNode* __result_obj__57;
struct sNode* default_value_126;
struct sNode* __result_obj__58;
default_value_126 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_124=self->head;
    i_125=0;
    while(    it_124!=((void*)0)    ) {
        if(        position==i_125        ) {
            __result_obj__57 = (struct sNode*)come_increment_ref_count(it_124->item);
            ((__result_obj__57) ? __result_obj__57 = come_decrement_ref_count(__result_obj__57, ((struct sNode*)__result_obj__57)->finalize, ((struct sNode*)__result_obj__57)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__57;
        }
        it_124=it_124->next;
        i_125++;
    }
    memset(&default_value_126,0,sizeof(struct sNode*));
    __result_obj__58 = (struct sNode*)come_increment_ref_count(default_value_126);
    ((default_value_126) ? default_value_126 = come_decrement_ref_count(default_value_126, ((struct sNode*)default_value_126)->finalize, ((struct sNode*)default_value_126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__58) ? __result_obj__58 = come_decrement_ref_count(__result_obj__58, ((struct sNode*)__result_obj__58)->finalize, ((struct sNode*)__result_obj__58)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__58;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct buffer* output_134;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct buffer* output2_135;
int i_136;
struct list$1sType$ph* o2_saved_137;
struct sType* it_138;
void* __right_value138 = (void*)0;
char* name_139;
void* __right_value139 = (void*)0;
char* str_140;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
char* str_141;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sType* base_result_type_142;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1sNode$ph* __dec_obj37;
void* __right_value146 = (void*)0;
char* result_type_str_143;
int i_144;
struct list$1sType$ph* o2_saved_145;
struct sType* it_146;
void* __right_value147 = (void*)0;
char* name_147;
void* __right_value148 = (void*)0;
char* str_148;
void* __right_value149 = (void*)0;
struct sNode* node_149;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
char* __result_obj__61;
void* __right_value152 = (void*)0;
struct CVALUE* cvalue_150;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
char* result_type_str_151;
int i_152;
struct list$1sType$ph* o2_saved_153;
struct sType* it_154;
void* __right_value156 = (void*)0;
char* name_155;
void* __right_value157 = (void*)0;
char* str_156;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
char* __result_obj__62;
    output_134=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 644, "struct buffer*"))));
    if(    fun->mResultType->mResultType    ) {
        output2_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 647, "struct buffer*"))));
        buffer_append_str(output2_135,fun->mName);
        buffer_append_str(output2_135,"(");
        i_136=0;
        for(        o2_saved_137=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_138=list$1sType$ph_begin((o2_saved_137))        ;        !list$1sType$ph_end((o2_saved_137))        ;        it_138=list$1sType$ph_next((o2_saved_137))        ){
            name_139=((char*)(__right_value138=list$1char$ph_operator_load_element(fun->mParamNames,i_136)));
            (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_140=(char*)come_increment_ref_count(make_define_var(it_138,name_139,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output2_135,str_140);
            if(            i_136!=list$1sType$ph_length(fun->mParamTypes)-1            ) {
                buffer_append_str(output2_135,", ");
            }
            i_136++;
            (str_140 = come_decrement_ref_count(str_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(output2_135,")");
        str_141=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value140=buffer_to_string(output2_135))),info));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun->mStatic        ) {
            buffer_append_str(output_134,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_134,"inline ");
        }
        buffer_append_str(output_134,str_141);
        if(        string_operator_not_equals(fun->mFunAttribute,"")        ) {
            buffer_append_str(output_134,((char*)(__right_value143=xsprintf(" \%s ",((char*)(__right_value142=string_to_string(fun->mFunAttribute)))))));
            (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        buffer_append_str(output_134,";\n");
        come_call_finalizer(buffer_finalize, output2_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (str_141 = come_decrement_ref_count(str_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0    ) {
        base_result_type_142=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj37=base_result_type_142->mArrayNum,
        base_result_type_142->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 683, "struct list$1sNode$ph*"))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_str_143=(char*)come_increment_ref_count(make_type_name_string(base_result_type_142,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_134,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_134,"inline ");
        }
        buffer_append_str(output_134,result_type_str_143);
        buffer_append_str(output_134," (*");
        buffer_append_str(output_134,fun->mName);
        buffer_append_str(output_134,"(");
        i_144=0;
        for(        o2_saved_145=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_146=list$1sType$ph_begin((o2_saved_145))        ;        !list$1sType$ph_end((o2_saved_145))        ;        it_146=list$1sType$ph_next((o2_saved_145))        ){
            name_147=((char*)(__right_value147=list$1char$ph_operator_load_element(fun->mParamNames,i_144)));
            (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_148=(char*)come_increment_ref_count(make_define_var(it_146,name_147,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output_134,str_148);
            if(            i_144==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_134,", ...");
                }
            }
            else {
                buffer_append_str(output_134,", ");
            }
            i_144++;
            (str_148 = come_decrement_ref_count(str_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        node_149=((struct sNode*)(__right_value149=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value149) ? __right_value149 = come_decrement_ref_count(__right_value149, ((struct sNode*)__right_value149)->finalize, ((struct sNode*)__right_value149)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        if(        !node_compile(node_149,info)        ) {
            ((struct tuple2$2int$bool$*)(__right_value150=err_msg(info,"invalid array number")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value150, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
            come_call_finalizer(sType_finalize, base_result_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (result_type_str_143 = come_decrement_ref_count(result_type_str_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, output_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__61;
        }
        cvalue_150=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_134,"))[%s]",cvalue_150->c_value);
        if(        string_operator_not_equals(fun->mAttribute,"")        ) {
            buffer_append_str(output_134,((char*)(__right_value154=xsprintf("\%s ",((char*)(__right_value153=string_to_string(fun->mAttribute)))))));
            (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        buffer_append_format(output_134,";\n");
        come_call_finalizer(sType_finalize, base_result_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (result_type_str_143 = come_decrement_ref_count(result_type_str_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        result_type_str_151=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_134,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_134,"inline ");
        }
        buffer_append_str(output_134,result_type_str_151);
        buffer_append_str(output_134," ");
        buffer_append_str(output_134,fun->mName);
        buffer_append_str(output_134,"(");
        i_152=0;
        for(        o2_saved_153=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_154=list$1sType$ph_begin((o2_saved_153))        ;        !list$1sType$ph_end((o2_saved_153))        ;        it_154=list$1sType$ph_next((o2_saved_153))        ){
            name_155=((char*)(__right_value156=list$1char$ph_operator_load_element(fun->mParamNames,i_152)));
            (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_156=(char*)come_increment_ref_count(make_define_var(it_154,name_155,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output_134,str_156);
            if(            i_152==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_134,", ...");
                }
            }
            else {
                buffer_append_str(output_134,", ");
            }
            i_152++;
            (str_156 = come_decrement_ref_count(str_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        string_operator_not_equals(fun->mFunAttribute,"")        ) {
            buffer_append_str(output_134,((char*)(__right_value159=xsprintf(") \%s;\n",((char*)(__right_value158=string_to_string(fun->mFunAttribute)))))));
            (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            buffer_append_str(output_134,");\n");
        }
        (result_type_str_151 = come_decrement_ref_count(result_type_str_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__62 = (char*)come_increment_ref_count(((char*)(__right_value160=buffer_to_string(output_134))));
    come_call_finalizer(buffer_finalize, output_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__62;
}

static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct buffer* output_157;
void* __right_value163 = (void*)0;
char* result_type_str_158;
int i_159;
struct list$1sType$ph* o2_saved_160;
struct sType* it_161;
void* __right_value164 = (void*)0;
char* name_162;
void* __right_value165 = (void*)0;
char* str_163;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
char* __result_obj__63;
    output_157=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 778, "struct buffer*"))));
    result_type_str_158=(char*)come_increment_ref_count(make_type_name_string(lambda_type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    buffer_append_str(output_157,result_type_str_158);
    buffer_append_str(output_157," ");
    buffer_append_str(output_157,name);
    buffer_append_str(output_157,"(");
    i_159=0;
    for(    o2_saved_160=(struct list$1sType$ph*)come_increment_ref_count((lambda_type->mParamTypes)),it_161=list$1sType$ph_begin((o2_saved_160))    ;    !list$1sType$ph_end((o2_saved_160))    ;    it_161=list$1sType$ph_next((o2_saved_160))    ){
        name_162=((char*)(__right_value164=list$1char$ph_operator_load_element(lambda_type->mParamNames,i_159)));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        str_163=(char*)come_increment_ref_count(make_define_var(it_161,name_162,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(output_157,str_163);
        if(        i_159==list$1sType$ph_length(lambda_type->mParamTypes)-1        ) {
            if(            lambda_type->mVarArgs            ) {
                buffer_append_str(output_157,", ...");
            }
        }
        else {
            buffer_append_str(output_157,", ");
        }
        i_159++;
        (str_163 = come_decrement_ref_count(str_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    lambda_type->mAttribute    ) {
        buffer_append_str(output_157,((char*)(__right_value168=string_operator_add(((char*)(__right_value167=charp_operator_add(" ",lambda_type->mAttribute))),");\n"))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        buffer_append_str(output_157,");\n");
    }
    __result_obj__63 = (char*)come_increment_ref_count(((char*)(__right_value169=buffer_to_string(output_157))));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, output_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_type_str_158 = come_decrement_ref_count(result_type_str_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__63 = come_decrement_ref_count(__result_obj__63, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__63;
}

void add_come_code(struct sInfo* info, const char* msg, ...){
char* msg2_164;
va_list args_165;
int len_166;
int i_167;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
msg2_164 = (void*)0;
memset(&args_165, 0, sizeof(va_list));
memset(&i_167, 0, sizeof(int));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_165,msg);
    len_166=vasprintf(&msg2_164,msg,args_165);
    __builtin_va_end(args_165);
    if(    info->come_fun    ) {
        for(        i_167=0        ;        i_167<info->block_level        ;        i_167++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(__right_value170=xsprintf("%s",msg2_164))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value171=xsprintf("%s",msg2_164))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    free(msg2_164);
    come_call_finalizer(va_list_finalize, (&args_165), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static void va_list_finalize(va_list self){
}

void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_168;
va_list args_169;
int len_170;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value175 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
msg2_168 = (void*)0;
memset(&args_169, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)    ) {
        __builtin_va_start(args_169,msg);
        len_170=vasprintf(&msg2_168,msg,args_169);
        __builtin_va_end(args_169);
        if(        (_condtional_value_X1=(((char*)(__right_value174=map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value173=__builtin_string(id))))))==((void*)0))),        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X1        ) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeader,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_168)));
            (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        free(msg2_168);
        come_call_finalizer(va_list_finalize, (&args_169), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_171;
unsigned int hash_172;
unsigned int it_173;
char* __result_obj__64;
char* __result_obj__65;
char* __result_obj__66;
char* __result_obj__67;
default_value_171 = (void*)0;
    memset(&default_value_171,0,sizeof(char*));
    hash_172=string_get_hash_key(((char*)key))%self->size;
    it_173=hash_172;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_173]        ) {
            if(            string_equals(self->keys[it_173],key)            ) {
                __result_obj__64 = (char*)come_increment_ref_count(self->items[it_173]);
                (default_value_171 = come_decrement_ref_count(default_value_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__64;
            }
            it_173++;
            if(            it_173>=self->size            ) {
                it_173=0;
            }
            else if(            it_173==hash_172            ) {
                __result_obj__65 = (char*)come_increment_ref_count(default_value_171);
                (default_value_171 = come_decrement_ref_count(default_value_171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__65;
            }
        }
        else {
            __result_obj__66 = (char*)come_increment_ref_count(default_value_171);
            (default_value_171 = come_decrement_ref_count(default_value_171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__66;
        }
    }
    __result_obj__67 = (char*)come_increment_ref_count(default_value_171);
    (default_value_171 = come_decrement_ref_count(default_value_171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__67;
}

static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_174;
unsigned int hash_175;
unsigned int it_176;
char* __result_obj__68;
char* __result_obj__69;
char* __result_obj__70;
char* __result_obj__71;
default_value_174 = (void*)0;
    memset(&default_value_174,0,sizeof(char*));
    hash_175=string_get_hash_key(((char*)key))%self->size;
    it_176=hash_175;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_176]        ) {
            if(            string_equals(self->keys[it_176],key)            ) {
                __result_obj__68 = (char*)come_increment_ref_count(self->items[it_176]);
                (default_value_174 = come_decrement_ref_count(default_value_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__68;
            }
            it_176++;
            if(            it_176>=self->size            ) {
                it_176=0;
            }
            else if(            it_176==hash_175            ) {
                __result_obj__69 = (char*)come_increment_ref_count(default_value_174);
                (default_value_174 = come_decrement_ref_count(default_value_174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__69;
            }
        }
        else {
            __result_obj__70 = (char*)come_increment_ref_count(default_value_174);
            (default_value_174 = come_decrement_ref_count(default_value_174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__70;
        }
    }
    __result_obj__71 = (char*)come_increment_ref_count(default_value_174);
    (default_value_174 = come_decrement_ref_count(default_value_174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__71;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_194;
unsigned int it_195;
_Bool same_key_exist_212;
char* it2_215;
struct map$2char$phchar$ph* __result_obj__93;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_194=string_get_hash_key(((char*)key))%self->size;
    it_195=hash_194;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_195]        ) {
            if(            string_equals(self->keys[it_195],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_195]);
                    (self->keys[it_195] = come_decrement_ref_count(self->keys[it_195], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_195]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_195]);
                    self->keys[it_195]=key;
                }
                if(                1                ) {
                    (self->items[it_195] = come_decrement_ref_count(self->items[it_195], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_195]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_195]=item;
                }
                break;
            }
            it_195++;
            if(            it_195>=self->size            ) {
                it_195=0;
            }
            else if(            it_195==hash_194            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_195]=(_Bool)1;
            if(            1            ) {
                self->keys[it_195]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_195]=key;
            }
            if(            1            ) {
                self->items[it_195]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_195]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_212=(_Bool)0;
    for(    it2_215=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_215=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_215,key)        ) {
            same_key_exist_212=(_Bool)1;
        }
    }
    if(    !same_key_exist_212    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__93 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__93;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_177;
void* __right_value176 = (void*)0;
char** keys_178;
void* __right_value177 = (void*)0;
char** items_179;
void* __right_value178 = (void*)0;
_Bool* item_existance_180;
int len_181;
char* it_184;
char* default_value_187;
void* __right_value179 = (void*)0;
char* it2_188;
unsigned int hash_191;
int n_192;
char* default_value_193;
void* __right_value180 = (void*)0;
default_value_187 = (void*)0;
default_value_193 = (void*)0;
    size_177=self->size*10;
    keys_178=(char**)come_increment_ref_count(((char**)(__right_value176=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_177)), "./comelang.h", 2083, "char**"))));
    items_179=(char**)come_increment_ref_count(((char**)(__right_value177=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_177)), "./comelang.h", 2084, "char**"))));
    item_existance_180=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value178=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_177)), "./comelang.h", 2085, "_Bool*"))));
    len_181=0;
    for(    it_184=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it_184=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_187,0,sizeof(char*));
        it2_188=((char*)(__right_value179=map$2char$phchar$ph_at(self,it_184,(char*)come_increment_ref_count(default_value_187))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash_191=string_get_hash_key(((char*)it_184))%size_177;
        n_192=hash_191;
        while(        (_Bool)1        ) {
            if(            item_existance_180[n_192]            ) {
                n_192++;
                if(                n_192>=size_177                ) {
                    n_192=0;
                }
                else if(                n_192==hash_191                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_180[n_192]=(_Bool)1;
                keys_178[n_192]=it_184;
                items_179[n_192]=((char*)(__right_value180=map$2char$phchar$ph_at(self,it_184,(char*)come_increment_ref_count(default_value_193))));
                (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len_181++;
                (default_value_193 = come_decrement_ref_count(default_value_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_193 = come_decrement_ref_count(default_value_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value_187 = come_decrement_ref_count(default_value_187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_178;
    self->items=items_179;
    self->item_existance=item_existance_180;
    self->size=size_177;
    self->len=len_181;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_182;
char* __result_obj__72;
char* __result_obj__73;
char* result_183;
char* __result_obj__74;
result_182 = (void*)0;
result_183 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_182,0,sizeof(char*));
        __result_obj__72 = result_182;
        return __result_obj__72;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__73 = self->key_list->it->item;
        return __result_obj__73;
    }
    memset(&result_183,0,sizeof(char*));
    __result_obj__74 = result_183;
    return __result_obj__74;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_185;
char* __result_obj__75;
char* __result_obj__76;
char* result_186;
char* __result_obj__77;
result_185 = (void*)0;
result_186 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_185,0,sizeof(char*));
        __result_obj__75 = result_185;
        return __result_obj__75;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__76 = self->key_list->it->item;
        return __result_obj__76;
    }
    memset(&result_186,0,sizeof(char*));
    __result_obj__77 = result_186;
    return __result_obj__77;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_189;
unsigned int it_190;
char* __result_obj__78;
char* __result_obj__79;
char* __result_obj__80;
char* __result_obj__81;
    hash_189=string_get_hash_key(((char*)key))%self->size;
    it_190=hash_189;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_190]        ) {
            if(            string_equals(self->keys[it_190],key)            ) {
                __result_obj__78 = (char*)come_increment_ref_count(self->items[it_190]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__78;
            }
            it_190++;
            if(            it_190>=self->size            ) {
                it_190=0;
            }
            else if(            it_190==hash_189            ) {
                __result_obj__79 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__79;
            }
        }
        else {
            __result_obj__80 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__80;
        }
    }
    __result_obj__81 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_196;
struct list_item$1char$ph* it_197;
struct list$1char$ph* __result_obj__85;
    it2_196=0;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        if(        string_equals(it_197->item,item)        ) {
            list$1char$ph_delete(self,it2_196,it2_196+1);
            break;
        }
        it2_196++;
        it_197=it_197->next;
    }
    __result_obj__85 = self;
    return __result_obj__85;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_198;
struct list$1char$ph* __result_obj__82;
struct list_item$1char$ph* it_201;
int i_202;
struct list_item$1char$ph* prev_it_203;
struct list_item$1char$ph* it_204;
int i_205;
struct list_item$1char$ph* prev_it_206;
struct list_item$1char$ph* it_207;
struct list_item$1char$ph* head_prev_it_208;
struct list_item$1char$ph* tail_it_209;
int i_210;
struct list_item$1char$ph* prev_it_211;
struct list$1char$ph* __result_obj__84;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_198=tail;
        tail=head;
        head=tmp_198;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__82 = self;
        return __result_obj__82;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_201=self->head;
        i_202=0;
        while(        it_201!=((void*)0)        ) {
            if(            i_202<tail            ) {
                prev_it_203=it_201;
                it_201=it_201->next;
                i_202++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_202==tail            ) {
                self->head=it_201;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_201=it_201->next;
                i_202++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_204=self->head;
        i_205=0;
        while(        it_204!=((void*)0)        ) {
            if(            i_205==head            ) {
                self->tail=it_204->prev;
                self->tail->next=((void*)0);
            }
            if(            i_205>=head            ) {
                prev_it_206=it_204;
                it_204=it_204->next;
                i_205++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_204=it_204->next;
                i_205++;
            }
        }
    }
    else {
        it_207=self->head;
        head_prev_it_208=((void*)0);
        tail_it_209=((void*)0);
        i_210=0;
        while(        it_207!=((void*)0)        ) {
            if(            i_210==head            ) {
                head_prev_it_208=it_207->prev;
            }
            if(            i_210==tail            ) {
                tail_it_209=it_207;
            }
            if(            i_210>=head&&i_210<tail            ) {
                prev_it_211=it_207;
                it_207=it_207->next;
                i_210++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_207=it_207->next;
                i_210++;
            }
        }
        if(        head_prev_it_208!=((void*)0)        ) {
            head_prev_it_208->next=tail_it_209;
        }
        if(        tail_it_209!=((void*)0)        ) {
            tail_it_209->prev=head_prev_it_208;
        }
    }
    __result_obj__84 = self;
    return __result_obj__84;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_199;
struct list_item$1char$ph* prev_it_200;
struct list$1char$ph* __result_obj__83;
    it_199=self->head;
    while(    it_199!=((void*)0)    ) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_213;
char* __result_obj__86;
char* __result_obj__87;
char* result_214;
char* __result_obj__88;
result_213 = (void*)0;
result_214 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_213,0,sizeof(char*));
        __result_obj__86 = result_213;
        return __result_obj__86;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__87 = self->it->item;
        return __result_obj__87;
    }
    memset(&result_214,0,sizeof(char*));
    __result_obj__88 = result_214;
    return __result_obj__88;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_216;
char* __result_obj__89;
char* __result_obj__90;
char* result_217;
char* __result_obj__91;
result_216 = (void*)0;
result_217 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_216,0,sizeof(char*));
        __result_obj__89 = result_216;
        return __result_obj__89;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__90 = self->it->item;
        return __result_obj__90;
    }
    memset(&result_217,0,sizeof(char*));
    __result_obj__91 = result_217;
    return __result_obj__91;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value181 = (void*)0;
struct list_item$1char$ph* litem_218;
char* __dec_obj38;
void* __right_value182 = (void*)0;
struct list_item$1char$ph* litem_219;
char* __dec_obj39;
void* __right_value183 = (void*)0;
struct list_item$1char$ph* litem_220;
char* __dec_obj40;
struct list$1char$ph* __result_obj__92;
    if(    self->len==0    ) {
        litem_218=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value181=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_218->prev=((void*)0);
        litem_218->next=((void*)0);
        __dec_obj38=litem_218->item,
        litem_218->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_218;
        self->head=litem_218;
    }
    else if(    self->len==1    ) {
        litem_219=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value182=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_219->prev=self->head;
        litem_219->next=((void*)0);
        __dec_obj39=litem_219->item,
        litem_219->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_219;
        self->head->next=litem_219;
    }
    else {
        litem_220=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value183=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1066, "struct list_item$1char$ph*"))));
        litem_220->prev=self->tail;
        litem_220->next=((void*)0);
        __dec_obj40=litem_220->item,
        litem_220->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_220;
        self->tail=litem_220;
    }
    self->len++;
    __result_obj__92 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__92;
}

void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_221;
va_list args_222;
int len_223;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
msg2_221 = (void*)0;
memset(&args_222, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)    ) {
        __builtin_va_start(args_222,msg);
        len_223=vasprintf(&msg2_221,msg,args_222);
        __builtin_va_end(args_222);
        if(        (_condtional_value_X2=(((char*)(__right_value189=map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value188=__builtin_string(id))))))==((void*)0))),        (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X2        ) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeaderStructs,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_221)));
            (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        free(msg2_221);
        come_call_finalizer(va_list_finalize, (&args_222), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

_Bool is_contained_generics_funcstion(struct sFun* fun, struct sInfo* info){
struct list$1sType$ph* o2_saved_224;
struct sType* it_225;
void* __right_value194 = (void*)0;
struct sType* type_226;
struct sType* __dec_obj41;
_Bool __result_obj__94;
struct sType* result_type_227;
struct sType* __dec_obj42;
_Bool __result_obj__95;
_Bool __result_obj__96;
    for(    o2_saved_224=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_225=list$1sType$ph_begin((o2_saved_224))    ;    !list$1sType$ph_end((o2_saved_224))    ;    it_225=list$1sType$ph_next((o2_saved_224))    ){
        type_226=(struct sType*)come_increment_ref_count(sType_clone(it_225));
        if(        type_226->mNoSolvedGenericsType        ) {
            __dec_obj41=type_226,
            type_226=(struct sType*)come_increment_ref_count(type_226->mNoSolvedGenericsType);
            come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        is_contained_generics_class(type_226,info)        ) {
            __result_obj__94 = (_Bool)1;
            come_call_finalizer(sType_finalize, type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__94;
        }
        come_call_finalizer(sType_finalize, type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    result_type_227=(struct sType*)come_increment_ref_count(fun->mResultType);
    if(    result_type_227->mNoSolvedGenericsType    ) {
        __dec_obj42=result_type_227,
        result_type_227=(struct sType*)come_increment_ref_count(result_type_227->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    is_contained_generics_class(result_type_227,info)    ) {
        __result_obj__95 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__95;
    }
    __result_obj__96 = (_Bool)0;
    come_call_finalizer(sType_finalize, result_type_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__96;
}

_Bool output_source_file(struct sInfo* info){
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sFun* main_fun_228;
_Bool main_module_235;
struct map$2char$phsFun$ph* o2_saved_236;
char* it_239;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct sFun* it2_242;
void* __right_value201 = (void*)0;
struct sFun* new_fun_243;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
char* output_file_name_263;
struct _IO_FILE* f_264;
_Bool __exception_result_var_b1;
struct map$2char$phbuffer$ph* o2_saved_265;
char* it_268;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct buffer* buf_271;
void* __right_value212 = (void*)0;
struct map$2char$phbuffer$ph* o2_saved_280;
char* it_281;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct buffer* buf_282;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct map$2char$phsFun$ph* o2_saved_283;
char* it_284;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sFun* it2_285;
_Bool contained_generics_286;
void* __right_value221 = (void*)0;
char* header_287;
struct map$2char$phchar$ph* o2_saved_288;
char* it_289;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
char* str_290;
struct map$2char$phsFun$ph* o2_saved_293;
char* it_294;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct sFun* it2_295;
_Bool contained_generics_296;
void* __right_value228 = (void*)0;
char* output_297;
struct map$2char$phsFun$ph* o2_saved_298;
char* it_299;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sFun* it2_300;
_Bool contained_generics_301;
void* __right_value232 = (void*)0;
char* output_302;
_Bool __result_obj__130;
    main_fun_228=((struct sFun*)(__right_value197=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value196=xsprintf("main"))))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value197, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    main_module_235=(_Bool)0;
    if(    main_fun_228    ) {
        if(        !main_fun_228->mExternal        ) {
            main_module_235=(_Bool)1;
        }
    }
    if(    main_module_235    ) {
        for(        o2_saved_236=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->uniq_funcs)),it_239=map$2char$phsFun$ph_begin((o2_saved_236))        ;        !map$2char$phsFun$ph_end((o2_saved_236))        ;        it_239=map$2char$phsFun$ph_next((o2_saved_236))        ){
            it2_242=((struct sFun*)(__right_value200=map$2char$phsFun$ph_operator_load_element(info->uniq_funcs,((char*)(__right_value199=__builtin_string(it_239))))));
            (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            new_fun_243=(struct sFun*)come_increment_ref_count(compile_uniq_function(it2_242,info));
            map$2char$phsFun$ph_put(info->funcs,(char*)come_increment_ref_count(__builtin_string(it_239)),(struct sFun*)come_increment_ref_count(new_fun_243));
            come_call_finalizer(sFun_finalize, new_fun_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    output_file_name_263=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    f_264=fopen(output_file_name_263,"w");
    if(    f_264==((void*)0)    ) {
        (come_push_stackframe("03output_code.c", 933, 0),__exception_result_var_b1=die("fopen"), come_pop_stackframe(), __exception_result_var_b1);
    }
    fprintf(f_264,"/// previous struct definition ///\n");
    for(    o2_saved_265=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->previous_struct_definition)),it_268=map$2char$phbuffer$ph_begin((o2_saved_265))    ;    !map$2char$phbuffer$ph_end((o2_saved_265))    ;    it_268=map$2char$phbuffer$ph_next((o2_saved_265))    ){
        buf_271=((struct buffer*)(__right_value211=map$2char$phbuffer$ph_operator_load_element(info->previous_struct_definition,((char*)(__right_value210=__builtin_string(it_268))))));
        (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, __right_value211, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fprintf(f_264,"%s\n",((char*)(__right_value212=buffer_to_string(buf_271))));
        (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f_264,"/// struct definition ///\n");
    for(    o2_saved_280=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->struct_definition)),it_281=map$2char$phbuffer$ph_begin((o2_saved_280))    ;    !map$2char$phbuffer$ph_end((o2_saved_280))    ;    it_281=map$2char$phbuffer$ph_next((o2_saved_280))    ){
        buf_282=((struct buffer*)(__right_value215=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value214=__builtin_string(it_281))))));
        (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, __right_value215, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fprintf(f_264,"%s\n",((char*)(__right_value216=buffer_to_string(buf_282))));
        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f_264,"// source head\n");
    fprintf(f_264,"%s\n",((char*)(__right_value217=buffer_to_string(info->module->mSourceHead))));
    (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    fprintf(f_264,"// header function\n");
    for(    o2_saved_283=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_284=map$2char$phsFun$ph_begin((o2_saved_283))    ;    !map$2char$phsFun$ph_end((o2_saved_283))    ;    it_284=map$2char$phsFun$ph_next((o2_saved_283))    ){
        it2_285=((struct sFun*)(__right_value220=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value219=__builtin_string(it_284))))));
        (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value220, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        contained_generics_286=is_contained_generics_funcstion(it2_285,info);
        if(        !contained_generics_286        ) {
            header_287=(char*)come_increment_ref_count(header_function(it2_285,info));
            if(            it2_285->mInline            ) {
            }
            else if(            string_operator_not_equals(it_284,"__builtin_va_start")&&string_operator_not_equals(it_284,"__builtin_va_end")            ) {
                fprintf(f_264,"%s",header_287);
            }
            (header_287 = come_decrement_ref_count(header_287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f_264,"// uniq global variable\n");
    if(    main_module_235    ) {
        for(        o2_saved_288=(struct map$2char$phchar$ph*)come_increment_ref_count((info->uniq_definition)),it_289=map$2char$phchar$ph_begin((o2_saved_288))        ;        !map$2char$phchar$ph_end((o2_saved_288))        ;        it_289=map$2char$phchar$ph_next((o2_saved_288))        ){
            str_290=((char*)(__right_value224=map$2char$phchar$ph_operator_load_element(info->uniq_definition,((char*)(__right_value223=__builtin_string(it_289))))));
            (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            fprintf(f_264,"%s\n",str_290);
        }
        come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    fprintf(f_264,"// inline function\n");
    for(    o2_saved_293=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_294=map$2char$phsFun$ph_begin((o2_saved_293))    ;    !map$2char$phsFun$ph_end((o2_saved_293))    ;    it_294=map$2char$phsFun$ph_next((o2_saved_293))    ){
        it2_295=((struct sFun*)(__right_value227=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value226=__builtin_string(it_294))))));
        (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value227, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        contained_generics_296=is_contained_generics_funcstion(it2_295,info);
        if(        contained_generics_296        ) {
        }
        else if(        it2_295->mInline        ) {
            output_297=(char*)come_increment_ref_count(output_function(it2_295,info));
            fprintf(f_264,"%s",output_297);
            (output_297 = come_decrement_ref_count(output_297, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f_264,"\n");
    fprintf(f_264,"// body function\n");
    for(    o2_saved_298=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_299=map$2char$phsFun$ph_begin((o2_saved_298))    ;    !map$2char$phsFun$ph_end((o2_saved_298))    ;    it_299=map$2char$phsFun$ph_next((o2_saved_298))    ){
        it2_300=((struct sFun*)(__right_value231=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value230=__builtin_string(it_299))))));
        (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value231, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        contained_generics_301=is_contained_generics_funcstion(it2_300,info);
        if(        contained_generics_301        ) {
        }
        else if(        it2_300->mExternal        ) {
        }
        else if(        !main_module_235&&it2_300->mUniq        ) {
        }
        else if(        it2_300->mInline        ) {
        }
        else {
            output_302=(char*)come_increment_ref_count(output_function(it2_300,info));
            fprintf(f_264,"%s",output_302);
            fprintf(f_264,"\n");
            (output_302 = come_decrement_ref_count(output_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fclose(f_264);
    __result_obj__130 = (_Bool)1;
    (output_file_name_263 = come_decrement_ref_count(output_file_name_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__130;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_229;
unsigned int hash_230;
unsigned int it_231;
struct sFun* __result_obj__97;
struct sFun* __result_obj__98;
struct sFun* __result_obj__99;
struct sFun* __result_obj__100;
default_value_229 = (void*)0;
    memset(&default_value_229,0,sizeof(struct sFun*));
    hash_230=string_get_hash_key(((char*)key))%self->size;
    it_231=hash_230;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_231]        ) {
            if(            string_equals(self->keys[it_231],key)            ) {
                __result_obj__97 = (struct sFun*)come_increment_ref_count(self->items[it_231]);
                come_call_finalizer(sFun_finalize, default_value_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__97;
            }
            it_231++;
            if(            it_231>=self->size            ) {
                it_231=0;
            }
            else if(            it_231==hash_230            ) {
                __result_obj__98 = (struct sFun*)come_increment_ref_count(default_value_229);
                come_call_finalizer(sFun_finalize, default_value_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__98;
            }
        }
        else {
            __result_obj__99 = (struct sFun*)come_increment_ref_count(default_value_229);
            come_call_finalizer(sFun_finalize, default_value_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__99;
        }
    }
    __result_obj__100 = (struct sFun*)come_increment_ref_count(default_value_229);
    come_call_finalizer(sFun_finalize, default_value_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
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
struct sFun* default_value_232;
unsigned int hash_233;
unsigned int it_234;
struct sFun* __result_obj__101;
struct sFun* __result_obj__102;
struct sFun* __result_obj__103;
struct sFun* __result_obj__104;
default_value_232 = (void*)0;
    memset(&default_value_232,0,sizeof(struct sFun*));
    hash_233=string_get_hash_key(((char*)key))%self->size;
    it_234=hash_233;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_234]        ) {
            if(            string_equals(self->keys[it_234],key)            ) {
                __result_obj__101 = (struct sFun*)come_increment_ref_count(self->items[it_234]);
                come_call_finalizer(sFun_finalize, default_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__101;
            }
            it_234++;
            if(            it_234>=self->size            ) {
                it_234=0;
            }
            else if(            it_234==hash_233            ) {
                __result_obj__102 = (struct sFun*)come_increment_ref_count(default_value_232);
                come_call_finalizer(sFun_finalize, default_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__102;
            }
        }
        else {
            __result_obj__103 = (struct sFun*)come_increment_ref_count(default_value_232);
            come_call_finalizer(sFun_finalize, default_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__103;
        }
    }
    __result_obj__104 = (struct sFun*)come_increment_ref_count(default_value_232);
    come_call_finalizer(sFun_finalize, default_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_237;
char* __result_obj__105;
char* __result_obj__106;
char* result_238;
char* __result_obj__107;
result_237 = (void*)0;
result_238 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_237,0,sizeof(char*));
        __result_obj__105 = result_237;
        return __result_obj__105;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__106 = self->key_list->it->item;
        return __result_obj__106;
    }
    memset(&result_238,0,sizeof(char*));
    __result_obj__107 = result_238;
    return __result_obj__107;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_240;
char* __result_obj__108;
char* __result_obj__109;
char* result_241;
char* __result_obj__110;
result_240 = (void*)0;
result_241 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_240,0,sizeof(char*));
        __result_obj__108 = result_240;
        return __result_obj__108;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__109 = self->key_list->it->item;
        return __result_obj__109;
    }
    memset(&result_241,0,sizeof(char*));
    __result_obj__110 = result_241;
    return __result_obj__110;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_257;
int it_258;
_Bool same_key_exist_259;
char* it2_260;
struct map$2char$phsFun$ph* __result_obj__115;
    if(    self->len*2>=self->size    ) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_257=string_get_hash_key(((char*)key))%self->size;
    it_258=hash_257;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_258]        ) {
            if(            string_equals(self->keys[it_258],key)            ) {
                if(                1                ) {
                    (self->keys[it_258] = come_decrement_ref_count(self->keys[it_258], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_258]);
                    self->keys[it_258]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_258]);
                    self->keys[it_258]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_258], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_258]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_258]=item;
                }
                break;
            }
            it_258++;
            if(            it_258>=self->size            ) {
                it_258=0;
            }
            else if(            it_258==hash_257            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_258]=(_Bool)1;
            if(            1            ) {
                self->keys[it_258]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_258]=key;
            }
            if(            1            ) {
                self->items[it_258]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_258]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_259=(_Bool)0;
    for(    it2_260=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_260=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_260,key)        ) {
            same_key_exist_259=(_Bool)1;
        }
    }
    if(    !same_key_exist_259    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__115 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__115;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_244;
void* __right_value202 = (void*)0;
char** keys_245;
void* __right_value203 = (void*)0;
struct sFun** items_246;
void* __right_value204 = (void*)0;
_Bool* item_existance_247;
int len_248;
char* it_249;
struct sFun* default_value_250;
void* __right_value205 = (void*)0;
struct sFun* it2_251;
unsigned int hash_254;
int n_255;
struct sFun* default_value_256;
void* __right_value206 = (void*)0;
default_value_250 = (void*)0;
default_value_256 = (void*)0;
    size_244=self->size*10;
    keys_245=(char**)come_increment_ref_count(((char**)(__right_value202=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_244)), "./comelang.h", 2083, "char**"))));
    items_246=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value203=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_244)), "./comelang.h", 2084, "struct sFun**"))));
    item_existance_247=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value204=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_244)), "./comelang.h", 2085, "_Bool*"))));
    len_248=0;
    for(    it_249=map$2char$phsFun$ph_begin(self)    ;    !map$2char$phsFun$ph_end(self)    ;    it_249=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_250,0,sizeof(struct sFun*));
        it2_251=((struct sFun*)(__right_value205=map$2char$phsFun$ph_at(self,it_249,(struct sFun*)come_increment_ref_count(default_value_250))));
        come_call_finalizer(sFun_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_254=string_get_hash_key(((char*)it_249))%size_244;
        n_255=hash_254;
        while(        (_Bool)1        ) {
            if(            item_existance_247[n_255]            ) {
                n_255++;
                if(                n_255>=size_244                ) {
                    n_255=0;
                }
                else if(                n_255==hash_254                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_247[n_255]=(_Bool)1;
                keys_245[n_255]=it_249;
                items_246[n_255]=((struct sFun*)(__right_value206=map$2char$phsFun$ph_at(self,it_249,(struct sFun*)come_increment_ref_count(default_value_256))));
                come_call_finalizer(sFun_finalize, __right_value206, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_248++;
                come_call_finalizer(sFun_finalize, default_value_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_245;
    self->items=items_246;
    self->item_existance=item_existance_247;
    self->size=size_244;
    self->len=len_248;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_252;
unsigned int it_253;
struct sFun* __result_obj__111;
struct sFun* __result_obj__112;
struct sFun* __result_obj__113;
struct sFun* __result_obj__114;
    hash_252=string_get_hash_key(((char*)key))%self->size;
    it_253=hash_252;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_253]        ) {
            if(            string_equals(self->keys[it_253],key)            ) {
                __result_obj__111 = (struct sFun*)come_increment_ref_count(self->items[it_253]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__111;
            }
            it_253++;
            if(            it_253>=self->size            ) {
                it_253=0;
            }
            else if(            it_253==hash_252            ) {
                __result_obj__112 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__112;
            }
        }
        else {
            __result_obj__113 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__113;
        }
    }
    __result_obj__114 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_261;
int i_262;
    for(    i_261=0    ;    i_261<self->size    ;    i_261++    ){
        if(        self->item_existance[i_261]        ) {
            if(            1            ) {
                come_call_finalizer(sFun_finalize, self->items[i_261], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_262=0    ;    i_262<self->size    ;    i_262++    ){
        if(        self->item_existance[i_262]        ) {
            if(            1            ) {
                (self->keys[i_262] = come_decrement_ref_count(self->keys[i_262], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_266;
char* __result_obj__116;
char* __result_obj__117;
char* result_267;
char* __result_obj__118;
result_266 = (void*)0;
result_267 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_266,0,sizeof(char*));
        __result_obj__116 = result_266;
        return __result_obj__116;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__117 = self->key_list->it->item;
        return __result_obj__117;
    }
    memset(&result_267,0,sizeof(char*));
    __result_obj__118 = result_267;
    return __result_obj__118;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_269;
char* __result_obj__119;
char* __result_obj__120;
char* result_270;
char* __result_obj__121;
result_269 = (void*)0;
result_270 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_269,0,sizeof(char*));
        __result_obj__119 = result_269;
        return __result_obj__119;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__120 = self->key_list->it->item;
        return __result_obj__120;
    }
    memset(&result_270,0,sizeof(char*));
    __result_obj__121 = result_270;
    return __result_obj__121;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_272;
unsigned int hash_273;
unsigned int it_274;
struct buffer* __result_obj__122;
struct buffer* __result_obj__123;
struct buffer* __result_obj__124;
struct buffer* __result_obj__125;
default_value_272 = (void*)0;
    memset(&default_value_272,0,sizeof(struct buffer*));
    hash_273=string_get_hash_key(((char*)key))%self->size;
    it_274=hash_273;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_274]        ) {
            if(            string_equals(self->keys[it_274],key)            ) {
                __result_obj__122 = (struct buffer*)come_increment_ref_count(self->items[it_274]);
                come_call_finalizer(buffer_finalize, default_value_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__122;
            }
            it_274++;
            if(            it_274>=self->size            ) {
                it_274=0;
            }
            else if(            it_274==hash_273            ) {
                __result_obj__123 = (struct buffer*)come_increment_ref_count(default_value_272);
                come_call_finalizer(buffer_finalize, default_value_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__123;
            }
        }
        else {
            __result_obj__124 = (struct buffer*)come_increment_ref_count(default_value_272);
            come_call_finalizer(buffer_finalize, default_value_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__124;
        }
    }
    __result_obj__125 = (struct buffer*)come_increment_ref_count(default_value_272);
    come_call_finalizer(buffer_finalize, default_value_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_275;
unsigned int hash_276;
unsigned int it_277;
struct buffer* __result_obj__126;
struct buffer* __result_obj__127;
struct buffer* __result_obj__128;
struct buffer* __result_obj__129;
default_value_275 = (void*)0;
    memset(&default_value_275,0,sizeof(struct buffer*));
    hash_276=string_get_hash_key(((char*)key))%self->size;
    it_277=hash_276;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_277]        ) {
            if(            string_equals(self->keys[it_277],key)            ) {
                __result_obj__126 = (struct buffer*)come_increment_ref_count(self->items[it_277]);
                come_call_finalizer(buffer_finalize, default_value_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__126;
            }
            it_277++;
            if(            it_277>=self->size            ) {
                it_277=0;
            }
            else if(            it_277==hash_276            ) {
                __result_obj__127 = (struct buffer*)come_increment_ref_count(default_value_275);
                come_call_finalizer(buffer_finalize, default_value_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__127;
            }
        }
        else {
            __result_obj__128 = (struct buffer*)come_increment_ref_count(default_value_275);
            come_call_finalizer(buffer_finalize, default_value_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__128;
        }
    }
    __result_obj__129 = (struct buffer*)come_increment_ref_count(default_value_275);
    come_call_finalizer(buffer_finalize, default_value_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_278;
int i_279;
    for(    i_278=0    ;    i_278<self->size    ;    i_278++    ){
        if(        self->item_existance[i_278]        ) {
            if(            1            ) {
                come_call_finalizer(buffer_finalize, self->items[i_278], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_279=0    ;    i_279<self->size    ;    i_279++    ){
        if(        self->item_existance[i_279]        ) {
            if(            1            ) {
                (self->keys[i_279] = come_decrement_ref_count(self->keys[i_279], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_291;
int i_292;
    for(    i_291=0    ;    i_291<self->size    ;    i_291++    ){
        if(        self->item_existance[i_291]        ) {
            if(            1            ) {
                (self->items[i_291] = come_decrement_ref_count(self->items[i_291], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_292=0    ;    i_292<self->size    ;    i_292++    ){
        if(        self->item_existance[i_292]        ) {
            if(            1            ) {
                (self->keys[i_292] = come_decrement_ref_count(self->keys[i_292], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

_Bool output_header_file(struct sInfo* info){
char* output_file_name_303;
struct _IO_FILE* f_304;
struct map$2char$phchar$ph* o2_saved_305;
char* it_306;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
char* item_307;
struct map$2char$phchar$ph* o2_saved_308;
char* it_309;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
char* item_310;
_Bool __result_obj__131;
    output_file_name_303=(char*)come_increment_ref_count(info->output_file_name);
    f_304=fopen(output_file_name_303,"a");
    if(    string_operator_equals(info->output_file_name,"common.h")    ) {
        fprintf(f_304,"#ifndef __COMMON_H__\n");
        fprintf(f_304,"#define __COMMON_H__\n");
        fprintf(f_304,"#include <comelang.h>\n");
    }
    for(    o2_saved_305=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeaderStructs)),it_306=map$2char$phchar$ph_begin((o2_saved_305))    ;    !map$2char$phchar$ph_end((o2_saved_305))    ;    it_306=map$2char$phchar$ph_next((o2_saved_305))    ){
        item_307=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value234=__builtin_string(it_306)))));
        (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        fprintf(f_304,"%s",item_307);
        (item_307 = come_decrement_ref_count(item_307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_308=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeader)),it_309=map$2char$phchar$ph_begin((o2_saved_308))    ;    !map$2char$phchar$ph_end((o2_saved_308))    ;    it_309=map$2char$phchar$ph_next((o2_saved_308))    ){
        item_310=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value237=__builtin_string(it_309)))));
        (__right_value236 = come_decrement_ref_count(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        fprintf(f_304,"%s",item_310);
        (item_310 = come_decrement_ref_count(item_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved_308, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f_304,"\n");
    if(    string_operator_equals(info->output_file_name,"common.h")    ) {
        fprintf(f_304,"#endif\n");
    }
    fclose(f_304);
    __result_obj__131 = (_Bool)1;
    (output_file_name_303 = come_decrement_ref_count(output_file_name_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__131;
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
char* msg2_311;
va_list args_312;
int len_313;
msg2_311 = (void*)0;
memset(&args_312, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_312,code);
    len_313=vasprintf(&msg2_311,code,args_312);
    __builtin_va_end(args_312);
    if(    info->come_fun    ) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_311);
    }
    free(msg2_311);
    come_call_finalizer(va_list_finalize, (&args_312), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
char* msg2_314;
va_list args_315;
int len_316;
msg2_314 = (void*)0;
memset(&args_315, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_315,code);
    len_316=vasprintf(&msg2_314,code,args_315);
    __builtin_va_end(args_315);
    if(    info->come_fun    ) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_314);
    }
    free(msg2_314);
    come_call_finalizer(va_list_finalize, (&args_315), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
char* __dec_obj43;
char* __dec_obj44;
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
            __dec_obj43=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        info->module->mLastCode2        ) {
            add_come_code(info,"%s;\n",info->module->mLastCode2);
            __dec_obj44=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
char* __dec_obj45;
char* __dec_obj46;
    if(    info->prohibits_output_last_code    ) {
        return;
    }
    if(    info->no_output_come_code    ) {
        return;
    }
    if(    info->module->mLastCode    ) {
        add_come_code(info,"%s ,",info->module->mLastCode);
        __dec_obj45=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    info->module->mLastCode2    ) {
        add_come_code(info,"%s ,",info->module->mLastCode2);
        __dec_obj46=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
char* msg2_317;
va_list args_318;
int len_319;
void* __right_value239 = (void*)0;
char* __dec_obj47;
msg2_317 = (void*)0;
memset(&args_318, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_318,msg);
    len_319=vasprintf(&msg2_317,msg,args_318);
    __builtin_va_end(args_318);
    __dec_obj47=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(__builtin_string(msg2_317));
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    free(msg2_317);
    come_call_finalizer(va_list_finalize, (&args_318), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
char* msg2_320;
va_list args_321;
int len_322;
void* __right_value240 = (void*)0;
char* __dec_obj48;
msg2_320 = (void*)0;
memset(&args_321, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_321,msg);
    len_322=vasprintf(&msg2_320,msg,args_321);
    __builtin_va_end(args_321);
    __dec_obj48=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(__builtin_string(msg2_320));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    free(msg2_320);
    come_call_finalizer(va_list_finalize, (&args_321), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUE$ph_delete(info->stack,-value,-1);
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail){
int tmp_323;
struct list$1CVALUE$ph* __result_obj__132;
struct list_item$1CVALUE$ph* it_326;
int i_327;
struct list_item$1CVALUE$ph* prev_it_328;
struct list_item$1CVALUE$ph* it_329;
int i_330;
struct list_item$1CVALUE$ph* prev_it_331;
struct list_item$1CVALUE$ph* it_332;
struct list_item$1CVALUE$ph* head_prev_it_333;
struct list_item$1CVALUE$ph* tail_it_334;
int i_335;
struct list_item$1CVALUE$ph* prev_it_336;
struct list$1CVALUE$ph* __result_obj__134;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_323=tail;
        tail=head;
        head=tmp_323;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__132 = self;
        return __result_obj__132;
    }
    if(    head==0&&tail==self->len    ) {
        list$1CVALUE$ph_reset(self);
    }
    else if(    head==0    ) {
        it_326=self->head;
        i_327=0;
        while(        it_326!=((void*)0)        ) {
            if(            i_327<tail            ) {
                prev_it_328=it_326;
                it_326=it_326->next;
                i_327++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_327==tail            ) {
                self->head=it_326;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_326=it_326->next;
                i_327++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_329=self->head;
        i_330=0;
        while(        it_329!=((void*)0)        ) {
            if(            i_330==head            ) {
                self->tail=it_329->prev;
                self->tail->next=((void*)0);
            }
            if(            i_330>=head            ) {
                prev_it_331=it_329;
                it_329=it_329->next;
                i_330++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_331, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_329=it_329->next;
                i_330++;
            }
        }
    }
    else {
        it_332=self->head;
        head_prev_it_333=((void*)0);
        tail_it_334=((void*)0);
        i_335=0;
        while(        it_332!=((void*)0)        ) {
            if(            i_335==head            ) {
                head_prev_it_333=it_332->prev;
            }
            if(            i_335==tail            ) {
                tail_it_334=it_332;
            }
            if(            i_335>=head&&i_335<tail            ) {
                prev_it_336=it_332;
                it_332=it_332->next;
                i_335++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_332=it_332->next;
                i_335++;
            }
        }
        if(        head_prev_it_333!=((void*)0)        ) {
            head_prev_it_333->next=tail_it_334;
        }
        if(        tail_it_334!=((void*)0)        ) {
            tail_it_334->prev=head_prev_it_333;
        }
    }
    __result_obj__134 = self;
    return __result_obj__134;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_324;
struct list_item$1CVALUE$ph* prev_it_325;
struct list$1CVALUE$ph* __result_obj__133;
    it_324=self->head;
    while(    it_324!=((void*)0)    ) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
char* __dec_obj49;
void* __right_value241 = (void*)0;
void* __right_value247 = (void*)0;
struct CVALUE* result_337;
void* __right_value248 = (void*)0;
struct CVALUE* __result_obj__141;
    __dec_obj49=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_337=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(((struct CVALUE*)(__right_value241=list$1CVALUE$ph_operator_load_element(info->stack,offset)))));
    come_call_finalizer(CVALUE_finalize, __right_value241, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    result_337==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value248=err_msg(info,"invalid stack value")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value248, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(2);
    }
    list$1CVALUE$ph_delete(info->stack,-1,-1);
    __result_obj__141 = (struct CVALUE*)come_increment_ref_count(result_337);
    come_call_finalizer(CVALUE_finalize, result_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_338;
int i_339;
struct CVALUE* __result_obj__135;
struct CVALUE* default_value_340;
struct CVALUE* __result_obj__136;
default_value_340 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_338=self->head;
    i_339=0;
    while(    it_338!=((void*)0)    ) {
        if(        position==i_339        ) {
            __result_obj__135 = (struct CVALUE*)come_increment_ref_count(it_338->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__135;
        }
        it_338=it_338->next;
        i_339++;
    }
    memset(&default_value_340,0,sizeof(struct CVALUE*));
    __result_obj__136 = (struct CVALUE*)come_increment_ref_count(default_value_340);
    come_call_finalizer(CVALUE_finalize, default_value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_341;
int i_342;
struct CVALUE* __result_obj__137;
struct CVALUE* default_value_343;
struct CVALUE* __result_obj__138;
default_value_343 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_341=self->head;
    i_342=0;
    while(    it_341!=((void*)0)    ) {
        if(        position==i_342        ) {
            __result_obj__137 = (struct CVALUE*)come_increment_ref_count(it_341->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__137;
        }
        it_341=it_341->next;
        i_342++;
    }
    memset(&default_value_343,0,sizeof(struct CVALUE*));
    __result_obj__138 = (struct CVALUE*)come_increment_ref_count(default_value_343);
    come_call_finalizer(CVALUE_finalize, default_value_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__139;
void* __right_value242 = (void*)0;
struct CVALUE* result_344;
void* __right_value243 = (void*)0;
char* __dec_obj50;
void* __right_value244 = (void*)0;
struct sType* __dec_obj51;
void* __right_value245 = (void*)0;
char* __dec_obj52;
void* __right_value246 = (void*)0;
char* __dec_obj53;
struct CVALUE* __result_obj__140;
    if(    self==(void*)0    ) {
        __result_obj__139 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__139;
    }
    result_344=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        __dec_obj50=result_344->c_value,
        result_344->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj51=result_344->type,
        result_344->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_344->var=self->var;
    }
    if(    self!=((void*)0)    ) {
        result_344->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        __dec_obj52=result_344->c_value_without_right_value_objects,
        result_344->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        __dec_obj53=result_344->c_value_without_cast_object_value,
        result_344->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__140 = (struct CVALUE*)come_increment_ref_count(result_344);
    come_call_finalizer(CVALUE_finalize, result_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

void transpiler_clear_last_code(struct sInfo* info){
char* __dec_obj54;
char* __dec_obj55;
    __dec_obj54=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj55=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
}

