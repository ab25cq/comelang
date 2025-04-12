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
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
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
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
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
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
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
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
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
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sReturnNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list$1sVar$ph* o2_saved_39;
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
struct list$1sVar$ph* o2_saved_51;
struct sVar* it_52;
void* __right_value61 = (void*)0;
struct list$1sVar$ph* __dec_obj28;
void* __right_value62 = (void*)0;
    if(    self->value    ) {
        come_fun_0=info->come_fun;
        result_type_1=(struct sType*)come_increment_ref_count(sType_clone(come_fun_0->mResultType));
        result_type2_31=(struct sType*)come_increment_ref_count(solve_generics(result_type_1,info->generics_type,info));
        result_type3_32=result_type2_31->mNoSolvedGenericsType;
        if(        result_type2_31->mNoSolvedGenericsType        ) {
            result_type3_32=result_type2_31->mNoSolvedGenericsType;
        }
        else {
            result_type3_32=result_type2_31;
        }
        Value_33=node_compile(self->value,info);
        if(        !Value_33        ) {
            __result_obj__19 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__19;
        }
        else {
        }
        come_value_34=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_35=(struct sType*)come_increment_ref_count(solve_generics(come_value_34->type,info->generics_type,info));
        __dec_obj26=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_34->type));
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        gComeC        ) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0)&&!existance_free_right_value_objects(info)        ) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else {
            static int result_num_36=0;
            result_num_36++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value47=make_define_var(result_type2_31,((char*)(__right_value46=xsprintf("__result_obj__\%s",((char*)(__right_value45=int_to_string(result_num_36)))))),(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            !info->come_fun->mNoResultType            ) {
                if(                !gComeC||!(strlen(result_type2_31->mClass->mName)>strlen("tuple")&&memcmp(result_type2_31->mClass->mName,"tuple",strlen("tuple"))==0)                ) {
                    check_assign_type("result type",result_type2_31,come_value_type_35,come_value_34,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2_31->mHeap                ) {
                    type_name_37=(char*)come_increment_ref_count(make_type_name_string(come_value_34->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value50=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value49=int_to_string(result_num_36)))))),type_name_37,come_value_34->c_value);
                    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name_37 = come_decrement_ref_count(type_name_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value52=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value51=int_to_string(result_num_36)))))),come_value_34->c_value);
                    (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value54=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value53=int_to_string(result_num_36)))))),come_value_34->c_value);
                (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1            ) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var                ) {
                    for(                    o2_saved_39=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_42=list$1sVar$ph_begin((o2_saved_39))                    ;                    !list$1sVar$ph_end((o2_saved_39))                    ;                    it_42=list$1sVar$ph_next((o2_saved_39))                    ){
                        free_object(((struct sType*)(__right_value55=sType_clone(it_42->mType))),it_42->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                        come_call_finalizer(sType_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    __dec_obj27=info->match_it_var,
                    __if_result__0_38=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__0_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")            ) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value56=xsprintf("come_heap_final();\n"))));
                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            result_type2_31->mHeap            ) {
                free_object(result_type2_31,((char*)(__right_value58=xsprintf("__result_obj__\%s",((char*)(__right_value57=int_to_string(result_num_36)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0);
                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value60=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value59=int_to_string(result_num_36)))))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(sType_finalize, result_type_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        come_fun_49=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_49->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1        ) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var            ) {
                for(                o2_saved_51=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_52=list$1sVar$ph_begin((o2_saved_51))                ;                !list$1sVar$ph_end((o2_saved_51))                ;                it_52=list$1sVar$ph_next((o2_saved_51))                ){
                    free_object(((struct sType*)(__right_value61=sType_clone(it_52->mType))),it_52->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                __dec_obj28=info->match_it_var,
                __if_result__1_50=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__1_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value62=xsprintf("come_heap_final();\n"))));
            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
    if(    self==(void*)0    ) {
        __result_obj__3 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__3;
    }
    result_8=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_8->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj3=result_8->mOriginalLoadVarType,
        result_8->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj4=result_8->mChannelType,
        result_8->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj8=result_8->mGenericsTypes,
        result_8->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj9=result_8->mNoSolvedGenericsType,
        result_8->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj10=result_8->mSizeNum,
        result_8->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj11=result_8->mAlignas,
        result_8->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj12=result_8->mTupleName,
        result_8->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj13=result_8->mAttribute,
        result_8->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_8->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_8->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_8->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_8->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_8->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_8->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_8->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_8->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_8->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_8->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_8->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_8->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_8->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj14=result_8->mAsmName,
        result_8->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_8->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj18=result_8->mArrayNum,
        result_8->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj19=result_8->mOriginalTypeName,
        result_8->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj20=result_8->mParamTypes,
        result_8->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj24=result_8->mParamNames,
        result_8->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj25=result_8->mResultType,
        result_8->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_8->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__18 = (struct sType*)come_increment_ref_count(result_8);
    come_call_finalizer(sType_finalize, result_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
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
struct list$1sType$ph* __result_obj__4;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1sType$ph* result_9;
struct list_item$1sType$ph* it_10;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __result_obj__7;
    if(    self==((void*)0)    ) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__4;
    }
    result_9=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 957, "struct list$1sType$ph*"))));
    it_10=self->head;
    while(    it_10!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        else {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        it_10=it_10->next;
    }
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(result_9);
    come_call_finalizer(list$1sType$ph$p_finalize, result_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
    if(    self->len==0    ) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 976, "struct list_item$1sType$ph*"))));
        litem_11->prev=((void*)0);
        litem_11->next=((void*)0);
        __dec_obj5=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_11;
        self->head=litem_11;
    }
    else if(    self->len==1    ) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 986, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj6=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 996, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj7=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__6 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__6;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_14;
struct list_item$1sType$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)    ) {
        prev_it_15=it_14;
        it_14=it_14->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__8;
void* __right_value15 = (void*)0;
struct sNode* result_16;
struct sNode* __result_obj__9;
    if(    self==(void*)0    ) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__8;
    }
    result_16=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_16->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_16->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_16->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_16->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_16->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_16->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_16->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_16->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_16->kind=self->kind;
    }
    __result_obj__9 = (struct sNode*)come_increment_ref_count(result_16);
    ((result_16) ? result_16 = come_decrement_ref_count(result_16, ((struct sNode*)result_16)->finalize, ((struct sNode*)result_16)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
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
    if(    self==((void*)0)    ) {
        __result_obj__10 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__10;
    }
    result_17=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 957, "struct list$1sNode$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        else {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(result_17);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
    if(    self->len==0    ) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 976, "struct list_item$1sNode$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj15=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1    ) {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 986, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj16=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 996, "struct list_item$1sNode$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj17=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__12 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__12;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_22;
struct list_item$1sNode$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)    ) {
        prev_it_23=it_22;
        it_22=it_22->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    if(    self==((void*)0)    ) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__14;
    }
    result_24=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 957, "struct list$1char$ph*"))));
    it_25=self->head;
    while(    it_25!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 962, "char*")));
        }
        else {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 965, "char*")));
        }
        it_25=it_25->next;
    }
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(result_24);
    come_call_finalizer(list$1char$ph$p_finalize, result_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
    if(    self->len==0    ) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 976, "struct list_item$1char$ph*"))));
        litem_26->prev=((void*)0);
        litem_26->next=((void*)0);
        __dec_obj21=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_26;
        self->head=litem_26;
    }
    else if(    self->len==1    ) {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 986, "struct list_item$1char$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj22=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 996, "struct list_item$1char$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj23=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__16 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__16;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_29;
struct list_item$1char$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)    ) {
        prev_it_30=it_29;
        it_29=it_29->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    if(    self==((void*)0)    ) {
        memset(&result_40,0,sizeof(struct sVar*));
        __result_obj__20 = result_40;
        return __result_obj__20;
    }
    self->it=self->head;
    if(    self->it    ) {
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
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_43,0,sizeof(struct sVar*));
        __result_obj__23 = result_43;
        return __result_obj__23;
    }
    self->it=self->it->next;
    if(    self->it    ) {
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
    while(    it_45!=((void*)0)    ) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_47;
struct list_item$1sVar$ph* prev_it_48;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value63 = (void*)0;
char* __dec_obj29;
struct sOutputNode* __result_obj__26;
    ((struct sNodeBase*)(__right_value63=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj29=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__26 = (struct sOutputNode*)come_increment_ref_count(self);
    come_call_finalizer(sOutputNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sOutputNode_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value64 = (void*)0;
char* __result_obj__27;
    __result_obj__27 = (char*)come_increment_ref_count(((char*)(__right_value64=__builtin_string("sOutputNode"))));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__27;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value65 = (void*)0;
char* __dec_obj30;
struct list$1sNode$ph* __dec_obj31;
struct sInlineAssembler* __result_obj__28;
    ((struct sNodeBase*)(__right_value65=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj30=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj31=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__28 = (struct sInlineAssembler*)come_increment_ref_count(self);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value66 = (void*)0;
char* __result_obj__29;
    __result_obj__29 = (char*)come_increment_ref_count(((char*)(__right_value66=__builtin_string("sInlineAssembler"))));
    (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__29 = come_decrement_ref_count(__result_obj__29, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
    while(    *p_56!=40    ) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
    }
    if(    *p_56==40    ) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
        while(        *p_56==32||*p_56==9||*p_56==10        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    dquort_57=(_Bool)0;
    num_exp_58=0;
    while(    *p_56    ) {
        if(        *p_56==34        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            dquort_57=!dquort_57;
        }
        else if(        dquort_57        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
        else if(        *p_56==40        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            node_59=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_58++));
            Value_66=node_compile(node_59,info);
            if(            !Value_66            ) {
                __result_obj__34 = (_Bool)0;
                ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__34;
            }
            else {
            }
            come_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_55,come_value_67->c_value);
            if(            *p_56==41            ) {
                buffer_append_char(buf_55,*p_56);
                p_56++;
            }
            ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    __dec_obj32=come_value_54->c_value,
    come_value_54->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value74=buffer_to_string(buf_55)))));
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj33=come_value_54->type,
    come_value_54->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 236, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_54->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s",come_value_54->c_value);
    __result_obj__36 = (_Bool)1;
    (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_60;
int i_61;
struct sNode* __result_obj__30;
struct sNode* default_value_62;
struct sNode* __result_obj__31;
default_value_62 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_60=self->head;
    i_61=0;
    while(    it_60!=((void*)0)    ) {
        if(        position==i_61        ) {
            __result_obj__30 = (struct sNode*)come_increment_ref_count(it_60->item);
            ((__result_obj__30) ? __result_obj__30 = come_decrement_ref_count(__result_obj__30, ((struct sNode*)__result_obj__30)->finalize, ((struct sNode*)__result_obj__30)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__30;
        }
        it_60=it_60->next;
        i_61++;
    }
    memset(&default_value_62,0,sizeof(struct sNode*));
    __result_obj__31 = (struct sNode*)come_increment_ref_count(default_value_62);
    ((default_value_62) ? default_value_62 = come_decrement_ref_count(default_value_62, ((struct sNode*)default_value_62)->finalize, ((struct sNode*)default_value_62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__31) ? __result_obj__31 = come_decrement_ref_count(__result_obj__31, ((struct sNode*)__result_obj__31)->finalize, ((struct sNode*)__result_obj__31)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__31;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_63;
int i_64;
struct sNode* __result_obj__32;
struct sNode* default_value_65;
struct sNode* __result_obj__33;
default_value_65 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_63=self->head;
    i_64=0;
    while(    it_63!=((void*)0)    ) {
        if(        position==i_64        ) {
            __result_obj__32 = (struct sNode*)come_increment_ref_count(it_63->item);
            ((__result_obj__32) ? __result_obj__32 = come_decrement_ref_count(__result_obj__32, ((struct sNode*)__result_obj__32)->finalize, ((struct sNode*)__result_obj__32)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__32;
        }
        it_63=it_63->next;
        i_64++;
    }
    memset(&default_value_65,0,sizeof(struct sNode*));
    __result_obj__33 = (struct sNode*)come_increment_ref_count(default_value_65);
    ((default_value_65) ? default_value_65 = come_decrement_ref_count(default_value_65, ((struct sNode*)default_value_65)->finalize, ((struct sNode*)default_value_65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
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
    if(    self->len==0    ) {
        litem_68=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value79=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1046, "struct list_item$1CVALUE$ph*"))));
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj34=litem_68->item,
        litem_68->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_68;
        self->head=litem_68;
    }
    else if(    self->len==1    ) {
        litem_69=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value80=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1056, "struct list_item$1CVALUE$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj35=litem_69->item,
        litem_69->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value81=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1066, "struct list_item$1CVALUE$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj36=litem_70->item,
        litem_70->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__35 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__35;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value82 = (void*)0;
struct sLineNode* __result_obj__37;
    ((struct sNodeBase*)(__right_value82=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__37 = (struct sLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLineNode_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value83 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string("sLineNode"))));
    (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__38;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct CVALUE* come_value_71;
void* __right_value86 = (void*)0;
char* __dec_obj37;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct sType* __dec_obj38;
_Bool __result_obj__39;
    come_value_71=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 261, "struct CVALUE*"))));
    __dec_obj37=come_value_71->c_value,
    come_value_71->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj38=come_value_71->type,
    come_value_71->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 264, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_71->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
    add_come_last_code(info,"%s",come_value_71->c_value);
    __result_obj__39 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value90 = (void*)0;
struct sSNameNode* __result_obj__40;
    ((struct sNodeBase*)(__right_value90=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__40 = (struct sSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sSNameNode_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value91 = (void*)0;
char* __result_obj__41;
    __result_obj__41 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string("sSNameNode"))));
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__41 = come_decrement_ref_count(__result_obj__41, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__41;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct CVALUE* come_value_72;
void* __right_value94 = (void*)0;
char* __dec_obj39;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct sType* __dec_obj40;
_Bool __result_obj__42;
    come_value_72=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 289, "struct CVALUE*"))));
    __dec_obj39=come_value_72->c_value,
    come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj40=come_value_72->type,
    come_value_72->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 292, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_72->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    add_come_last_code(info,"%s",come_value_72->c_value);
    __result_obj__42 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value98 = (void*)0;
struct sFuncNode* __result_obj__43;
    ((struct sNodeBase*)(__right_value98=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value98, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__43 = (struct sFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFuncNode_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value99 = (void*)0;
char* __result_obj__44;
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string("sFuncNode"))));
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct CVALUE* come_value_73;
void* __right_value102 = (void*)0;
char* __dec_obj41;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sType* __dec_obj42;
_Bool __result_obj__45;
    come_value_73=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 317, "struct CVALUE*"))));
    __dec_obj41=come_value_73->c_value,
    come_value_73->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj42=come_value_73->type,
    come_value_73->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 320, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_73->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
    add_come_last_code(info,"%s",come_value_73->c_value);
    __result_obj__45 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__45;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value106 = (void*)0;
struct sWildCard* __result_obj__46;
    ((struct sNodeBase*)(__right_value106=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__46 = (struct sWildCard*)come_increment_ref_count(self);
    come_call_finalizer(sWildCard_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sWildCard_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value107 = (void*)0;
char* __result_obj__47;
    __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("sWildCard"))));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__47;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct sNode* value_node_74;
_Bool Value_75;
_Bool __result_obj__48;
_Bool __result_obj__49;
    value_node_74=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value108=xsprintf("Value"))),info));
    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    Value_75=node_compile(value_node_74,info);
    if(    !Value_75    ) {
        __result_obj__48 = (_Bool)0;
        ((value_node_74) ? value_node_74 = come_decrement_ref_count(value_node_74, ((struct sNode*)value_node_74)->finalize, ((struct sNode*)value_node_74)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__48;
    }
    else {
    }
    __result_obj__49 = (_Bool)1;
    ((value_node_74) ? value_node_74 = come_decrement_ref_count(value_node_74, ((struct sNode*)value_node_74)->finalize, ((struct sNode*)value_node_74)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__49;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value110 = (void*)0;
struct sCallerFuncNode* __result_obj__50;
    ((struct sNodeBase*)(__right_value110=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__50 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value111 = (void*)0;
char* __result_obj__51;
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string("sCallerFuncNode"))));
    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__51;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct CVALUE* come_value_76;
void* __right_value114 = (void*)0;
char* __dec_obj43;
void* __right_value115 = (void*)0;
char* __dec_obj44;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct sType* __dec_obj45;
_Bool __result_obj__52;
    come_value_76=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 369, "struct CVALUE*"))));
    if(    info->caller_fun    ) {
        __dec_obj43=come_value_76->c_value,
        come_value_76->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj44=come_value_76->c_value,
        come_value_76->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj45=come_value_76->type,
    come_value_76->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 377, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_76->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
    add_come_last_code(info,"%s",come_value_76->c_value);
    __result_obj__52 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__52;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
struct sCallerLineNode* __result_obj__53;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__53 = (struct sCallerLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct CVALUE* come_value_77;
void* __right_value122 = (void*)0;
char* __dec_obj46;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct sType* __dec_obj47;
_Bool __result_obj__54;
    come_value_77=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 398, "struct CVALUE*"))));
    __dec_obj46=come_value_77->c_value,
    come_value_77->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj47=come_value_77->type,
    come_value_77->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 401, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_77->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    add_come_last_code(info,"%s",come_value_77->c_value);
    __result_obj__54 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value126 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string("sCallerLineNode"))));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value127 = (void*)0;
struct sCallerSNameNode* __result_obj__56;
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__56 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__56;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct CVALUE* come_value_78;
void* __right_value130 = (void*)0;
char* __dec_obj48;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__57;
    come_value_78=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 426, "struct CVALUE*"))));
    __dec_obj48=come_value_78->c_value,
    come_value_78->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=come_value_78->type,
    come_value_78->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 429, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_78->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    add_come_last_code(info,"%s",come_value_78->c_value);
    __result_obj__57 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value134 = (void*)0;
char* __result_obj__58;
    __result_obj__58 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string("sCallerSNameNode"))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__58;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* __dec_obj50;
void* __right_value147 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj56;
struct list$1sType$ph* __dec_obj57;
struct buffer* __dec_obj58;
struct sFunCallNode* __result_obj__65;
    ((struct sNodeBase*)(__right_value135=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj50=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj56=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj57=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj58=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer(buffer_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__65 = (struct sFunCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value148 = (void*)0;
char* __result_obj__66;
    __result_obj__66 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string("sFunCallNode"))));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__66;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block    ) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_89;
struct list$1tuple2$2char$phsNode$ph$ph* params_90;
struct buffer* method_block_91;
int method_block_sline_92;
struct sVar* var__93;
struct sType* lambda_type_94;
void* __right_value149 = (void*)0;
_Bool __result_obj__67;
void* __right_value150 = (void*)0;
struct sType* result_type_95;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct list$1CVALUE$ph* come_params_96;
void* __right_value153 = (void*)0;
_Bool __result_obj__69;
int i_99;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_100;
struct tuple2$2char$phsNode$ph* it_103;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label_106=0;
struct sNode* node_107=0;
_Bool Value_108;
_Bool __result_obj__76;
void* __right_value154 = (void*)0;
struct CVALUE* come_value_109;
void* __right_value155 = (void*)0;
struct sType* __dec_obj59;
void* __right_value156 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct buffer* buf_116;
int j_117;
struct list$1CVALUE$ph* o2_saved_118;
struct CVALUE* it_121;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct CVALUE* come_value_124;
void* __right_value167 = (void*)0;
char* __dec_obj60;
void* __right_value168 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__87;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sGenericsFun* generics_fun_125;
_Bool method_generics_128;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct list$1sType$ph* method_generics_types_129;
void* __right_value173 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_130=0;
struct sGenericsFun* gfun_131=0;
char* generics_fun_name_132;
void* __right_value174 = (void*)0;
struct sFun* fun_133;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1CVALUE$ph* come_params_136;
void* __right_value177 = (void*)0;
struct sFun* fun_137;
_Bool no_output_come_code_138;
_Bool __result_obj__96;
void* __right_value178 = (void*)0;
struct CVALUE* method_block_node_139;
void* __right_value179 = (void*)0;
struct sType* method_block_lambda_type_146;
void* __right_value180 = (void*)0;
struct sType* method_block_result_type_147;
void* __right_value181 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_148;
struct sType* generics_fun_method_block_result_type_149;
int method_generics_num_150;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
int n_159;
struct list$1sType$ph* o2_saved_160;
struct sType* it_163;
int method_generics_num_166;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1CVALUE$ph* come_params_167;
int i_168;
struct sType* result_type_169;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_170;
struct tuple2$2char$phsNode$ph* it_171;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_172=0;
struct sNode* node_173=0;
_Bool Value_174;
_Bool __result_obj__110;
void* __right_value193 = (void*)0;
struct CVALUE* come_value_175;
void* __right_value194 = (void*)0;
struct sType* __dec_obj66;
int method_generics_num_179;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
int n_180;
struct list$1sType$ph* o2_saved_181;
struct sType* it_182;
int method_generics_num_183;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_202=0;
struct sGenericsFun* gfun_203=0;
char* __dec_obj70;
void* __right_value205 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_204=0;
struct sGenericsFun* gfun_205=0;
char* __dec_obj71;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1CVALUE$ph* come_params_206;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_207;
struct tuple2$2char$phsNode$ph* it_208;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_209=0;
struct sNode* node_210=0;
_Bool Value_211;
_Bool __result_obj__117;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value209 = (void*)0;
struct sType* __dec_obj72;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct buffer* buf_213;
int j_214;
struct list$1CVALUE$ph* o2_saved_215;
struct CVALUE* it_216;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct CVALUE* come_value_217;
void* __right_value214 = (void*)0;
char* __dec_obj73;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct sType* __dec_obj74;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __dec_obj75;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sType* __dec_obj76;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* __dec_obj77;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sType* __dec_obj78;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sType* __dec_obj79;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* __dec_obj80;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sType* __dec_obj81;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sType* __dec_obj82;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* __dec_obj83;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sType* __dec_obj84;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sType* __dec_obj85;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* __dec_obj86;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sType* __dec_obj87;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __dec_obj88;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj89;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj90;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj91;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* __dec_obj92;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __dec_obj93;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sType* __dec_obj94;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sType* __dec_obj95;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* __dec_obj96;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __dec_obj97;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sType* __dec_obj98;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sType* __dec_obj99;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sType* __dec_obj100;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* __dec_obj101;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj102;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj103;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj104;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj105;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj106;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj107;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj108;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj109;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj110;
_Bool __result_obj__118;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1CVALUE$ph* come_params_218;
int i_219;
struct sType* result_type_220;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_221;
struct tuple2$2char$phsNode$ph* it_222;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_223=0;
struct sNode* node_224=0;
_Bool Value_225;
_Bool __result_obj__119;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_226;
void* __right_value320 = (void*)0;
struct sType* __dec_obj111;
struct sType* __dec_obj112;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct buffer* buf_227;
int j_228;
struct list$1CVALUE$ph* o2_saved_229;
struct CVALUE* it_230;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_231;
void* __right_value325 = (void*)0;
char* __dec_obj113;
struct sType* __dec_obj114;
_Bool __result_obj__120;
void* __right_value326 = (void*)0;
char* __dec_obj115;
void* __right_value327 = (void*)0;
char* __dec_obj116;
char* p_232;
int version_233;
char* p2_234;
int i_236;
void* __right_value328 = (void*)0;
char* new_fun_name_237;
void* __right_value329 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value330 = (void*)0;
char* __dec_obj117;
void* __right_value331 = (void*)0;
char* new_fun_name_244;
void* __right_value332 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value333 = (void*)0;
char* __dec_obj118;
void* __right_value334 = (void*)0;
_Bool __result_obj__129;
int i_245;
void* __right_value335 = (void*)0;
char* new_fun_name_246;
void* __right_value336 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value337 = (void*)0;
char* __dec_obj119;
void* __right_value338 = (void*)0;
struct sFun* fun_247;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1CVALUE$ph* come_params_248;
int i_249;
struct sType* result_type_250;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_251;
struct tuple2$2char$phsNode$ph* it_252;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_253=0;
struct sNode* node_254=0;
_Bool Value_255;
_Bool __result_obj__130;
void* __right_value341 = (void*)0;
struct CVALUE* come_value_256;
void* __right_value342 = (void*)0;
struct sType* __dec_obj120;
struct sType* __dec_obj121;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct buffer* buf_257;
int j_258;
struct list$1CVALUE$ph* o2_saved_259;
struct CVALUE* it_260;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_261;
void* __right_value347 = (void*)0;
char* __dec_obj122;
struct sType* __dec_obj123;
_Bool __result_obj__131;
void* __right_value348 = (void*)0;
struct sType* result_type_262;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct list$1sType$ph* param_types_263;
struct list$1sType$ph* o2_saved_264;
struct sType* it_265;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sType* it2_266;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj124;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1CVALUE$ph* come_params_267;
int i_268;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_269;
struct tuple2$2char$phsNode$ph* it_270;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_271=0;
struct sNode* node_272=0;
_Bool Value_273;
_Bool __result_obj__132;
void* __right_value357 = (void*)0;
struct CVALUE* come_value_274;
void* __right_value358 = (void*)0;
struct sType* __dec_obj125;
int n_275;
struct list$1char$ph* o2_saved_276;
char* it_279;
void* __right_value359 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value366 = (void*)0;
int i_287;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_288;
struct tuple2$2char$phsNode$ph* it_289;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_290=0;
struct sNode* node_291=0;
_Bool Value_292;
_Bool __result_obj__141;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_293;
void* __right_value368 = (void*)0;
struct sType* __dec_obj127;
void* __right_value369 = (void*)0;
_Bool _condtional_value_X8;
_Bool Value_294;
_Bool __result_obj__142;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_295;
void* __right_value371 = (void*)0;
struct sType* __dec_obj128;
void* __right_value372 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value373 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
_Bool _condtional_value_X12;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
char* default_param_296;
void* __right_value384 = (void*)0;
char* param_name_303;
void* __right_value385 = (void*)0;
_Bool _condtional_value_X13;
struct buffer* source_304;
char* p_305;
char* head_306;
int sline_307;
void* __right_value386 = (void*)0;
struct buffer* __dec_obj129;
void* __right_value387 = (void*)0;
struct sNode* node_308;
_Bool Value_309;
_Bool __result_obj__147;
struct buffer* __dec_obj130;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_310;
void* __right_value389 = (void*)0;
struct sType* __dec_obj131;
void* __right_value390 = (void*)0;
_Bool _condtional_value_X14;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
_Bool _condtional_value_X15;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
_Bool _condtional_value_X16;
void* __right_value399 = (void*)0;
_Bool __result_obj__148;
void* __right_value400 = (void*)0;
_Bool __result_obj__149;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value405 = (void*)0;
struct sNode* current_stack_frame_node_311;
_Bool Value_313;
_Bool __result_obj__152;
void* __right_value406 = (void*)0;
struct CVALUE* come_value_314;
void* __right_value407 = (void*)0;
struct sType* __dec_obj133;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct buffer* method_block2_315;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sType* method_block_type_316;
void* __right_value412 = (void*)0;
char* class_name_317;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sClass* current_stack_frame_struct_326;
void* __right_value415 = (void*)0;
int num_method_block_327;
void* __right_value416 = (void*)0;
_Bool __result_obj__161;
void* __right_value417 = (void*)0;
struct sType* result_type_328;
void* __right_value418 = (void*)0;
struct sType* result_type2_329;
void* __right_value419 = (void*)0;
struct list$1sType$ph* param_types_330;
struct list$1char$ph* param_names_331;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct buffer* all_alhabet_sname_332;
char* p_333;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1sType$ph* o2_saved_334;
struct sType* it_335;
struct sType* param_type_336;
void* __right_value424 = (void*)0;
char* param_name_337;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
char* param_name_338;
void* __right_value427 = (void*)0;
struct sType* param_type2_339;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
char* param_name_340;
void* __right_value430 = (void*)0;
struct sType* param_type2_341;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* source3_342;
char* p_343;
char* head_344;
int sline_345;
struct buffer* __dec_obj134;
void* __right_value433 = (void*)0;
struct sNode* node_346;
_Bool Value_347;
_Bool __result_obj__162;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
char* method_block_name_348;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value2_349;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* fun2_350;
void* __right_value440 = (void*)0;
_Bool __result_obj__163;
struct sType* method_block_type2_351;
void* __right_value441 = (void*)0;
char* __dec_obj135;
void* __right_value442 = (void*)0;
struct sType* __dec_obj136;
struct buffer* __dec_obj137;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* buf_352;
void* __right_value445 = (void*)0;
char* __dec_obj138;
void* __right_value446 = (void*)0;
char* __dec_obj139;
void* __right_value447 = (void*)0;
char* __dec_obj140;
int j_353;
struct list$1CVALUE$ph* o2_saved_354;
struct CVALUE* it_355;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct CVALUE* come_value_356;
void* __right_value450 = (void*)0;
char* __dec_obj141;
void* __right_value451 = (void*)0;
struct sType* __dec_obj142;
void* __right_value452 = (void*)0;
char* __dec_obj143;
_Bool __result_obj__164;
memset(&i_236, 0, sizeof(int));
    fun_name_89=(char*)come_increment_ref_count(self->fun_name);
    params_90=self->params;
    method_block_91=self->method_block;
    method_block_sline_92=self->method_block_sline;
    var__93=get_variable_from_table(info->lv_table,fun_name_89);
    if(    var__93==((void*)0)    ) {
        var__93=get_variable_from_table(info->gv_table,fun_name_89);
    }
    if(    var__93    ) {
        lambda_type_94=var__93->mType;
        if(        string_operator_not_equals(lambda_type_94->mClass->mName,"lambda")        ) {
            ((struct tuple2$2int$bool$*)(__right_value149=err_msg(info,"%s is not lambda, can't call",fun_name_89)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__67 = (_Bool)1;
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__67;
        }
        result_type_95=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_94->mResultType));
        result_type_95->mStatic=(_Bool)0;
        come_params_96=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 499, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_94->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_90)&&!lambda_type_94->mVarArgs        ) {
            ((struct tuple2$2int$bool$*)(__right_value153=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_89,list$1sType$ph_length(lambda_type_94->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_90))));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__69 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__69;
        }
        i_99=0;
        for(        o2_saved_100=(params_90),it_103=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_100))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_100))        ;        it_103=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_100))        ){
            multiple_assign_var1=it_103;
            label_106=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_107=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_108=node_compile(node_107,info);
            if(            !Value_108            ) {
                __result_obj__76 = (_Bool)0;
                (label_106 = come_decrement_ref_count(label_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_107) ? node_107 = come_decrement_ref_count(node_107, ((struct sNode*)node_107)->finalize, ((struct sNode*)node_107)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__76;
            }
            else {
            }
            come_value_109=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj59=come_value_109->type,
            come_value_109->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_109->type,info->generics_type,info));
            come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X1=(lambda_type_94->mVarArgs&&((struct sType*)(__right_value156=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99)))==((void*)0))),            come_call_finalizer(sType_finalize, __right_value156, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
            }
            else {
                check_assign_type(((char*)(__right_value159=xsprintf("\%s calling param #\%s",((char*)(__right_value157=string_to_string(fun_name_89))),((char*)(__right_value158=int_to_string(i_99)))))),((struct sType*)(__right_value160=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99))),come_value_109->type,come_value_109,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X2=(((struct sType*)(__right_value161=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99)))->mHeap&&come_value_109->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X2                ) {
                    std_move(((struct sType*)(__right_value162=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99))),come_value_109->type,come_value_109,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params_96,(struct CVALUE*)come_increment_ref_count(come_value_109));
            i_99++;
            (label_106 = come_decrement_ref_count(label_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_107) ? node_107 = come_decrement_ref_count(node_107, ((struct sNode*)node_107)->finalize, ((struct sNode*)node_107)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 534, "struct buffer*"))));
        buffer_append_str(buf_116,var__93->mCValueName);
        buffer_append_str(buf_116,"(");
        j_117=0;
        for(        o2_saved_118=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_96)),it_121=list$1CVALUE$ph_begin((o2_saved_118))        ;        !list$1CVALUE$ph_end((o2_saved_118))        ;        it_121=list$1CVALUE$ph_next((o2_saved_118))        ){
            buffer_append_str(buf_116,it_121->c_value);
            if(            j_117!=list$1CVALUE$ph_length(come_params_96)-1            ) {
                buffer_append_str(buf_116,",");
            }
            j_117++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_116,")");
        come_value_124=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 551, "struct CVALUE*"))));
        __dec_obj60=come_value_124->c_value,
        come_value_124->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_116));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj61=come_value_124->type,
        come_value_124->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_95));
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_124->type->mStatic=(_Bool)0;
        come_value_124->var=((void*)0);
        if(        lambda_type_94->mResultType->mHeap        ) {
            append_object_to_right_values(come_value_124,(struct sType*)come_increment_ref_count(lambda_type_94->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_124->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        info->calling_fun=((void*)0);
        __result_obj__87 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__87;
        come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    generics_fun_125=((struct sGenericsFun*)(__right_value170=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value169=__builtin_string(fun_name_89))),((void*)0))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __right_value170, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    method_generics_128=(_Bool)0;
    if(    generics_fun_125    ) {
        method_generics_128=list$1char$ph_length(generics_fun_125->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_128    ) {
        if(        list$1sType$ph_length(self->method_generics_types)==0        ) {
            method_generics_types_129=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 576, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value173=make_method_generics_function((char*)come_increment_ref_count(fun_name_89),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_129),info)));
            name_130=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_131=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value173, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            generics_fun_name_132=(char*)come_increment_ref_count(name_130);
            fun_133=((struct sFun*)(__right_value174=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_132,((void*)0))));
            come_call_finalizer(sFun_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            method_block_91            ) {
                come_params_136=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 583, "struct list$1CVALUE$ph*"))));
                fun_137=((struct sFun*)(__right_value177=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_132,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value177, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                no_output_come_code_138=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_91,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_136),fun_137,fun_name_89,method_block_sline_92,info,(_Bool)1)                ) {
                    __result_obj__96 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__96;
                }
                info->no_output_come_code=no_output_come_code_138;
                method_block_node_139=((struct CVALUE*)(__right_value178=list$1CVALUE$ph_operator_load_element(come_params_136,-1)));
                come_call_finalizer(CVALUE_finalize, __right_value178, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                method_block_lambda_type_146=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_139->type));
                method_block_result_type_147=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_148=((struct sType*)(__right_value181=list$1sType$ph_operator_load_element(generics_fun_125->mParamTypes,-1)));
                come_call_finalizer(sType_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                generics_fun_method_block_result_type_149=generics_fun_method_block_lambda_type_148->mResultType;
                if(                generics_fun_method_block_result_type_149->mClass->mMethodGenerics                ) {
                    method_generics_num_150=generics_fun_method_block_result_type_149->mClass->mMethodGenericsNum;
                    list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_150,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_147)));
                    come_call_finalizer(sType_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                n_159=0;
                for(                o2_saved_160=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_148->mParamTypes)),it_163=list$1sType$ph_begin((o2_saved_160))                ;                !list$1sType$ph_end((o2_saved_160))                ;                it_163=list$1sType$ph_next((o2_saved_160))                ){
                    if(                    it_163->mClass->mMethodGenerics                    ) {
                        method_generics_num_166=it_163->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_166,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value189=list$1sType$ph_operator_load_element(method_block_lambda_type_146->mParamTypes,n_159))))));
                        come_call_finalizer(sType_finalize, __right_value187, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    n_159++;
                }
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_lambda_type_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_result_type_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_params_167=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 615, "struct list$1CVALUE$ph*"))));
            i_168=0;
            result_type_169=((void*)0);
            for(            o2_saved_170=(params_90),it_171=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_170))            ;            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_170))            ;            it_171=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_170))            ){
                multiple_assign_var3=it_171;
                label_172=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_173=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_174=node_compile(node_173,info);
                if(                !Value_174                ) {
                    __result_obj__110 = (_Bool)0;
                    (label_172 = come_decrement_ref_count(label_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__110;
                }
                else {
                }
                come_value_175=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj66=come_value_175->type,
                come_value_175->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_175->type,info->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                list$1CVALUE$ph_add(come_params_167,(struct CVALUE*)come_increment_ref_count(come_value_175));
                (label_172 = come_decrement_ref_count(label_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            generics_fun_125->mResultType->mClass->mMethodGenerics            ) {
                method_generics_num_179=generics_fun_125->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type                ) {
                    list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_179,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    come_call_finalizer(sType_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            n_180=0;
            for(            o2_saved_181=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_125->mParamTypes)),it_182=list$1sType$ph_begin((o2_saved_181))            ;            !list$1sType$ph_end((o2_saved_181))            ;            it_182=list$1sType$ph_next((o2_saved_181))            ){
                if(                it_182->mClass->mMethodGenerics                ) {
                    method_generics_num_183=it_182->mClass->mMethodGenericsNum;
                    if(                    n_180<list$1CVALUE$ph_length(come_params_167)                    ) {
                        list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_183,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value202=list$1CVALUE$ph_operator_load_element(come_params_167,n_180)))->type)));
                        come_call_finalizer(CVALUE_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value201, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, __right_value202, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
                n_180++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_132);
            (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value204=make_method_generics_function((char*)come_increment_ref_count(fun_name_89),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_129),info)));
            name_202=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_203=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value204, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj70=fun_name_89,
            fun_name_89=(char*)come_increment_ref_count(name_202);
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_202 = come_decrement_ref_count(name_202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value205=make_method_generics_function((char*)come_increment_ref_count(fun_name_89),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_204=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_205=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj71=fun_name_89,
            fun_name_89=(char*)come_increment_ref_count(name_204);
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_89,"__builtin_memmove")||string_operator_equals(fun_name_89,"__builtin_memset")||string_operator_equals(fun_name_89,"__builtin_ffs")||string_operator_equals(fun_name_89,"__builtin_ffsl")||string_operator_equals(fun_name_89,"__builtin_ffsll")||string_operator_equals(fun_name_89,"__builtin_bswap16")||string_operator_equals(fun_name_89,"__builtin_bswap32")||string_operator_equals(fun_name_89,"__builtin_bswap64")||string_operator_equals(fun_name_89,"__builtin_constant_p")||string_operator_equals(fun_name_89,"__builtin_expect")||string_operator_equals(fun_name_89,"__builtin___memset_chk")||string_operator_equals(fun_name_89,"__builtin_object_size")||string_operator_equals(fun_name_89,"__builtin___memcpy_chk")||string_operator_equals(fun_name_89,"__builtin___strncpy_chk")||string_operator_equals(fun_name_89,"__builtin___strncat_chk")||string_operator_equals(fun_name_89,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_89,"__builtin_strrchr")||string_operator_equals(fun_name_89,"__builtin_clz")||string_operator_equals(fun_name_89,"__dsb")||string_operator_equals(fun_name_89,"__isb")||string_operator_equals(fun_name_89,"__dmb")||(strlen(fun_name_89)==strlen("__builtin_arm_")&&memcmp(fun_name_89,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_89,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_89,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_89,"__c11_atomic_store")||string_operator_equals(fun_name_89,"__c11_atomic_load")||string_operator_equals(fun_name_89,"__c11_atomic_exchange")||string_operator_equals(fun_name_89,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_89,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_xor")    ) {
        come_params_206=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 690, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_207=(params_90),it_208=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_207))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_207))        ;        it_208=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_207))        ){
            multiple_assign_var6=it_208;
            label_209=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_210=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_211=node_compile(node_210,info);
            if(            !Value_211            ) {
                __result_obj__117 = (_Bool)0;
                (label_209 = come_decrement_ref_count(label_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_210) ? node_210 = come_decrement_ref_count(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__117;
            }
            else {
            }
            come_value_212=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj72=come_value_212->type,
            come_value_212->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_212->type,info->generics_type,info));
            come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_206,(struct CVALUE*)come_increment_ref_count(come_value_212));
            (label_209 = come_decrement_ref_count(label_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_210) ? node_210 = come_decrement_ref_count(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 705, "struct buffer*"))));
        buffer_append_str(buf_213,fun_name_89);
        buffer_append_str(buf_213,"(");
        j_214=0;
        for(        o2_saved_215=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_206)),it_216=list$1CVALUE$ph_begin((o2_saved_215))        ;        !list$1CVALUE$ph_end((o2_saved_215))        ;        it_216=list$1CVALUE$ph_next((o2_saved_215))        ){
            buffer_append_str(buf_213,it_216->c_value);
            if(            j_214!=list$1CVALUE$ph_length(come_params_206)-1            ) {
                buffer_append_str(buf_213,",");
            }
            j_214++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_213,")");
        come_value_217=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 722, "struct CVALUE*"))));
        __dec_obj73=come_value_217->c_value,
        come_value_217->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_213));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(fun_name_89,"__builtin_memmove")||string_operator_equals(fun_name_89,"__builtin_memset")        ) {
            __dec_obj74=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 726, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_ffs")        ) {
            __dec_obj75=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 729, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_ffsl")        ) {
            __dec_obj76=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_ffsll")        ) {
            __dec_obj77=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 735, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_bswap16")        ) {
            __dec_obj78=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_bswap32")        ) {
            __dec_obj79=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_bswap64")        ) {
            __dec_obj80=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_constant_p")        ) {
            __dec_obj81=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_expect")        ) {
            __dec_obj82=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___memset_chk")        ) {
            __dec_obj83=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_object_size")        ) {
            __dec_obj84=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 757, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___memcpy_chk")        ) {
            __dec_obj85=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 760, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___strncpy_chk")        ) {
            __dec_obj86=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___strncat_chk")        ) {
            __dec_obj87=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 768, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_strrchr")        ) {
            __dec_obj88=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 772, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___vsnprintf_chk")        ) {
            __dec_obj89=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_clz")        ) {
            __dec_obj90=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_thread_fence")        ) {
            __dec_obj91=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_signal_fence")        ) {
            __dec_obj92=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_exchange")        ) {
            __dec_obj93=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value272=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value272, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_exchange_strong")        ) {
            __dec_obj94=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value274=list$1CVALUE$ph_operator_load_element(come_params_206,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value274, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_exchange_weak")        ) {
            __dec_obj95=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value276=list$1CVALUE$ph_operator_load_element(come_params_206,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value276, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_store")        ) {
            __dec_obj96=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 797, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_load")        ) {
            __dec_obj97=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value281=list$1CVALUE$ph_operator_load_element(come_params_206,0)))->type));
            come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value281, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_add")        ) {
            __dec_obj98=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value283=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_sub")        ) {
            __dec_obj99=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value285=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value285, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_and")        ) {
            __dec_obj100=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value287=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value287, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_or")        ) {
            __dec_obj101=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value289=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_xor")        ) {
            __dec_obj102=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value291=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__dsb")        ) {
            __dec_obj103=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 819, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__isb")        ) {
            __dec_obj104=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 822, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__dmb")        ) {
            __dec_obj105=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_cdp")        ) {
            __dec_obj106=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 828, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_ldc")        ) {
            __dec_obj107=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 831, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_stc")        ) {
            __dec_obj108=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_stcl")        ) {
            __dec_obj109=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_ldcl")        ) {
            __dec_obj110=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_217->var=((void*)0);
        add_come_last_code(info,"%s",come_value_217->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_217));
        __result_obj__118 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__118;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"__builtin_va_arg")    ) {
        come_params_218=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 852, "struct list$1CVALUE$ph*"))));
        i_219=0;
        result_type_220=((void*)0);
        for(        o2_saved_221=(params_90),it_222=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_221))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_221))        ;        it_222=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_221))        ){
            multiple_assign_var7=it_222;
            label_223=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_224=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_225=node_compile(node_224,info);
            if(            !Value_225            ) {
                __result_obj__119 = (_Bool)0;
                (label_223 = come_decrement_ref_count(label_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__119;
            }
            else {
            }
            come_value_226=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj111=come_value_226->type,
            come_value_226->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_226->type,info->generics_type,info));
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_218,(struct CVALUE*)come_increment_ref_count(come_value_226));
            __dec_obj112=result_type_220,
            result_type_220=(struct sType*)come_increment_ref_count(come_value_226->type);
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_223 = come_decrement_ref_count(label_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 872, "struct buffer*"))));
        buffer_append_str(buf_227,fun_name_89);
        buffer_append_str(buf_227,"(");
        j_228=0;
        for(        o2_saved_229=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_218)),it_230=list$1CVALUE$ph_begin((o2_saved_229))        ;        !list$1CVALUE$ph_end((o2_saved_229))        ;        it_230=list$1CVALUE$ph_next((o2_saved_229))        ){
            buffer_append_str(buf_227,it_230->c_value);
            if(            j_228!=list$1CVALUE$ph_length(come_params_218)-1            ) {
                buffer_append_str(buf_227,",");
            }
            j_228++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_227,")");
        come_value_231=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 889, "struct CVALUE*"))));
        __dec_obj113=come_value_231->c_value,
        come_value_231->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_227));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj114=come_value_231->type,
        come_value_231->type=(struct sType*)come_increment_ref_count(result_type_220);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_231->var=((void*)0);
        add_come_last_code(info,"%s",come_value_231->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_231));
        __result_obj__120 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__120;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(fun_name_89,"string")    ) {
        __dec_obj115=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"wstring")    ) {
        __dec_obj116=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"inherit")    ) {
        p_232=info->come_fun->mName;
        version_233=0;
        while(        *p_232        ) {
            if(            *p_232==95&&*(p_232+1)==118&&xisdigit(*(p_232+2))            ) {
                p2_234=p_232+2;
                version_233=0;
                while(                xisdigit(*p2_234)                ) {
                    version_233=version_233*10+(*p2_234-48);
                    p2_234++;
                }
                break;
            }
            else {
                p_232++;
            }
        }
        char real_fun_name_235[2048];
        memset(&real_fun_name_235, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_235,info->come_fun->mName,p_232-info->come_fun->mName);
        real_fun_name_235[p_232-info->come_fun->mName]=0;
        for(        i_236=version_233-1        ;        i_236>=1        ;        i_236--        ){
            new_fun_name_237=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_235,i_236));
            if(            (_condtional_value_X3=(((struct sFun*)(__right_value329=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_237))))),            come_call_finalizer(sFun_finalize, __right_value329, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X3            ) {
                __dec_obj117=fun_name_89,
                fun_name_89=(char*)come_increment_ref_count(__builtin_string(new_fun_name_237));
                __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_237 = come_decrement_ref_count(new_fun_name_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_237 = come_decrement_ref_count(new_fun_name_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        i_236==0        ) {
            new_fun_name_244=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_235));
            if(            (_condtional_value_X4=(((struct sFun*)(__right_value332=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_244))))),            come_call_finalizer(sFun_finalize, __right_value332, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X4            ) {
                __dec_obj118=fun_name_89,
                fun_name_89=(char*)come_increment_ref_count(__builtin_string(new_fun_name_244));
                __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            string_operator_equals(fun_name_89,info->come_fun->mName)            ) {
                ((struct tuple2$2int$bool$*)(__right_value334=err_msg(info,"invalid inherit")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value334, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__129 = (_Bool)1;
                (new_fun_name_244 = come_decrement_ref_count(new_fun_name_244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__129;
            }
            (new_fun_name_244 = come_decrement_ref_count(new_fun_name_244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_245=128        ;        i_245>=1        ;        i_245--        ){
            new_fun_name_246=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_89,i_245));
            if(            (_condtional_value_X5=(((struct sFun*)(__right_value336=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_246))))),            come_call_finalizer(sFun_finalize, __right_value336, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X5            ) {
                __dec_obj119=fun_name_89,
                fun_name_89=(char*)come_increment_ref_count(__builtin_string(new_fun_name_246));
                __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_246 = come_decrement_ref_count(new_fun_name_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_246 = come_decrement_ref_count(new_fun_name_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    fun_247=((struct sFun*)(__right_value338=map$2char$phsFun$ph_at(info->funcs,fun_name_89,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_247==((void*)0)    ) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_89);
        come_params_248=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 970, "struct list$1CVALUE$ph*"))));
        i_249=0;
        result_type_250=((void*)0);
        for(        o2_saved_251=(params_90),it_252=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_251))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_251))        ;        it_252=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_251))        ){
            multiple_assign_var8=it_252;
            label_253=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_254=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_255=node_compile(node_254,info);
            if(            !Value_255            ) {
                __result_obj__130 = (_Bool)0;
                (label_253 = come_decrement_ref_count(label_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_254) ? node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__130;
            }
            else {
            }
            come_value_256=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj120=come_value_256->type,
            come_value_256->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_256->type,info->generics_type,info));
            come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_248,(struct CVALUE*)come_increment_ref_count(come_value_256));
            __dec_obj121=result_type_250,
            result_type_250=(struct sType*)come_increment_ref_count(come_value_256->type);
            come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_253 = come_decrement_ref_count(label_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_254) ? node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 990, "struct buffer*"))));
        buffer_append_str(buf_257,fun_name_89);
        buffer_append_str(buf_257,"(");
        j_258=0;
        for(        o2_saved_259=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_248)),it_260=list$1CVALUE$ph_begin((o2_saved_259))        ;        !list$1CVALUE$ph_end((o2_saved_259))        ;        it_260=list$1CVALUE$ph_next((o2_saved_259))        ){
            buffer_append_str(buf_257,it_260->c_value);
            if(            j_258!=list$1CVALUE$ph_length(come_params_248)-1            ) {
                buffer_append_str(buf_257,",");
            }
            j_258++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_257,")");
        come_value_261=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1007, "struct CVALUE*"))));
        __dec_obj122=come_value_261->c_value,
        come_value_261->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_257));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj123=come_value_261->type,
        come_value_261->type=(struct sType*)come_increment_ref_count(result_type_250);
        come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_261->var=((void*)0);
        add_come_last_code(info,"%s",come_value_261->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_261));
        __result_obj__131 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__131;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    result_type_262=(struct sType*)come_increment_ref_count(sType_clone(fun_247->mResultType));
    result_type_262->mStatic=(_Bool)0;
    param_types_263=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1022, "struct list$1sType$ph*"))));
    for(    o2_saved_264=(struct list$1sType$ph*)come_increment_ref_count((fun_247->mParamTypes)),it_265=list$1sType$ph_begin((o2_saved_264))    ;    !list$1sType$ph_end((o2_saved_264))    ;    it_265=list$1sType$ph_next((o2_saved_264))    ){
        it2_266=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value351=sType_clone(it_265))),info->generics_type,info));
        come_call_finalizer(sType_finalize, __right_value351, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_push_back(param_types_263,(struct sType*)come_increment_ref_count(sType_clone(it2_266)));
        come_call_finalizer(sType_finalize, it2_266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj124=result_type_262,
    result_type_262=(struct sType*)come_increment_ref_count(solve_generics(result_type_262,info->generics_type,info));
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_params_267=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1030, "struct list$1CVALUE$ph*"))));
    for(    i_268=0    ;    i_268<list$1sType$ph_length(fun_247->mParamTypes)-(((method_block_91)?(2):(0)))    ;    i_268++    ){
        list$1CVALUE$ph_add(come_params_267,((void*)0));
    }
    for(    o2_saved_269=(params_90),it_270=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_269))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_269))    ;    it_270=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_269))    ){
        multiple_assign_var9=it_270;
        label_271=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        node_272=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        fun_247->mVarArgs||string_operator_equals(fun_name_89,"__builtin_va_start")        ) {
        }
        else if(        label_271        ) {
            Value_273=node_compile(node_272,info);
            if(            !Value_273            ) {
                __result_obj__132 = (_Bool)0;
                (label_271 = come_decrement_ref_count(label_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_272) ? node_272 = come_decrement_ref_count(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__132;
            }
            else {
            }
            come_value_274=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj125=come_value_274->type,
            come_value_274->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_274->type,info->generics_type,info));
            come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            n_275=0;
            for(            o2_saved_276=(struct list$1char$ph*)come_increment_ref_count((fun_247->mParamNames)),it_279=list$1char$ph_begin((o2_saved_276))            ;            !list$1char$ph_end((o2_saved_276))            ;            it_279=list$1char$ph_next((o2_saved_276))            ){
                if(                string_operator_equals(label_271,it_279)                ) {
                    break;
                }
                n_275++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X6=(((struct sType*)(__right_value359=list$1sType$ph_operator_load_element(param_types_263,n_275))))),            come_call_finalizer(sType_finalize, __right_value359, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X6            ) {
                check_assign_type(((char*)(__right_value362=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value360=string_to_string(fun_name_89))),((char*)(__right_value361=int_to_string(n_275)))))),((struct sType*)(__right_value363=list$1sType$ph_operator_load_element(param_types_263,n_275))),come_value_274->type,come_value_274,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value363, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X7=(((struct sType*)(__right_value364=list$1sType$ph_operator_load_element(param_types_263,n_275)))&&((struct sType*)(__right_value365=list$1sType$ph_operator_load_element(param_types_263,n_275)))->mHeap&&come_value_274->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value364, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value365, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X7            ) {
                std_move(((struct sType*)(__right_value366=list$1sType$ph_operator_load_element(param_types_263,n_275))),come_value_274->type,come_value_274,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value366, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_267,n_275,(struct CVALUE*)come_increment_ref_count(come_value_274));
            come_call_finalizer(CVALUE_finalize, come_value_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_271 = come_decrement_ref_count(label_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_272) ? node_272 = come_decrement_ref_count(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    i_287=0;
    for(    o2_saved_288=(params_90),it_289=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_288))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_288))    ;    it_289=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_288))    ){
        multiple_assign_var10=it_289;
        label_290=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_291=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_247->mVarArgs||string_operator_equals(fun_name_89,"__builtin_va_start")        ) {
            Value_292=node_compile(node_291,info);
            if(            !Value_292            ) {
                __result_obj__141 = (_Bool)0;
                (label_290 = come_decrement_ref_count(label_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_291) ? node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__141;
            }
            else {
            }
            come_value_293=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj127=come_value_293->type,
            come_value_293->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_293->type,info->generics_type,info));
            come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                if(                (_condtional_value_X8=(((struct CVALUE*)(__right_value369=list$1CVALUE$ph_operator_load_element(come_params_267,i_287)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value369, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X8                ) {
                    break;
                }
                else {
                    i_287++;
                }
            }
            list$1CVALUE$ph_replace(come_params_267,i_287,(struct CVALUE*)come_increment_ref_count(come_value_293));
            i_287++;
            come_call_finalizer(CVALUE_finalize, come_value_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        label_290        ) {
        }
        else {
            Value_294=node_compile(node_291,info);
            if(            !Value_294            ) {
                __result_obj__142 = (_Bool)0;
                (label_290 = come_decrement_ref_count(label_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_291) ? node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__142;
            }
            else {
            }
            come_value_295=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj128=come_value_295->type,
            come_value_295->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_295->type,info->generics_type,info));
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                if(                (_condtional_value_X9=(((struct CVALUE*)(__right_value372=list$1CVALUE$ph_operator_load_element(come_params_267,i_287)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value372, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X9                ) {
                    break;
                }
                else {
                    i_287++;
                }
            }
            if(            (_condtional_value_X10=(((struct sType*)(__right_value373=list$1sType$ph_operator_load_element(param_types_263,i_287))))),            come_call_finalizer(sType_finalize, __right_value373, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X10            ) {
                check_assign_type(((char*)(__right_value376=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value374=string_to_string(fun_name_89))),((char*)(__right_value375=int_to_string(i_287)))))),((struct sType*)(__right_value377=list$1sType$ph_operator_load_element(param_types_263,i_287))),come_value_295->type,come_value_295,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value377, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X11=(((struct sType*)(__right_value378=list$1sType$ph_operator_load_element(param_types_263,i_287)))&&((struct sType*)(__right_value379=list$1sType$ph_operator_load_element(param_types_263,i_287)))->mHeap&&come_value_295->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value378, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value379, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X11            ) {
                std_move(((struct sType*)(__right_value380=list$1sType$ph_operator_load_element(param_types_263,i_287))),come_value_295->type,come_value_295,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value380, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_267,i_287,(struct CVALUE*)come_increment_ref_count(come_value_295));
            i_287++;
            come_call_finalizer(CVALUE_finalize, come_value_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_290 = come_decrement_ref_count(label_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_291) ? node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    (_Bool)1    ) {
        if(        (_condtional_value_X12=(((struct CVALUE*)(__right_value381=list$1CVALUE$ph_operator_load_element(come_params_267,i_287)))==((void*)0))),        come_call_finalizer(CVALUE_finalize, __right_value381, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X12        ) {
            break;
        }
        else {
            i_287++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_90)<list$1sType$ph_length(fun_247->mParamTypes)    ) {
        for(        ;        i_287<list$1sType$ph_length(fun_247->mParamTypes)-(((method_block_91)?(2):(0)))        ;        i_287++        ){
            default_param_296=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value382=list$1char$ph_operator_load_element(fun_247->mParamDefaultParametors,i_287))), "05call.c", 1139, "char*"));
            (__right_value382 = come_decrement_ref_count(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_name_303=((char*)(__right_value384=list$1char$ph_operator_load_element(fun_247->mParamNames,i_287)));
            (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            (_condtional_value_X13=(default_param_296&&string_operator_not_equals(default_param_296,"")&&((struct CVALUE*)(__right_value385=list$1CVALUE$ph_operator_load_element(come_params_267,i_287)))==((void*)0))),            come_call_finalizer(CVALUE_finalize, __right_value385, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X13            ) {
                source_304=(struct buffer*)come_increment_ref_count(info->source);
                p_305=info->p;
                head_306=info->head;
                sline_307=info->sline;
                __dec_obj129=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_296));
                come_call_finalizer(buffer_finalize, __dec_obj129,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_308=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_309=node_compile(node_308,info);
                if(                !Value_309                ) {
                    __result_obj__147 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source_304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((node_308) ? node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (default_param_296 = come_decrement_ref_count(default_param_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__147;
                }
                else {
                }
                __dec_obj130=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_304);
                come_call_finalizer(buffer_finalize, __dec_obj130,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=p_305;
                info->head=head_306;
                info->sline=sline_307;
                come_value_310=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj131=come_value_310->type,
                come_value_310->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_310->type,info->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X14=(((struct sType*)(__right_value390=list$1sType$ph_operator_load_element(param_types_263,i_287))))),                come_call_finalizer(sType_finalize, __right_value390, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X14                ) {
                    check_assign_type(((char*)(__right_value393=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value391=string_to_string(fun_name_89))),((char*)(__right_value392=int_to_string(i_287)))))),((struct sType*)(__right_value394=list$1sType$ph_operator_load_element(param_types_263,i_287))),come_value_310->type,come_value_310,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value393 = come_decrement_ref_count(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value394, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                (_condtional_value_X15=(((struct sType*)(__right_value395=list$1sType$ph_operator_load_element(param_types_263,i_287)))&&((struct sType*)(__right_value396=list$1sType$ph_operator_load_element(param_types_263,i_287)))->mHeap&&come_value_310->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value395, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                come_call_finalizer(sType_finalize, __right_value396, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X15                ) {
                    std_move(((struct sType*)(__right_value397=list$1sType$ph_operator_load_element(param_types_263,i_287))),come_value_310->type,come_value_310,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value397, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_267,i_287,(struct CVALUE*)come_increment_ref_count(come_value_310));
                come_call_finalizer(buffer_finalize, source_304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_308) ? node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                (_condtional_value_X16=(((struct CVALUE*)(__right_value398=list$1CVALUE$ph_operator_load_element(come_params_267,i_287)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value398, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X16                ) {
                    ((struct tuple2$2int$bool$*)(__right_value399=err_msg(info,"require parametor(%s)(1) %d",fun_247->mName,i_287)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value399, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__148 = (_Bool)1;
                    (default_param_296 = come_decrement_ref_count(default_param_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__148;
                }
            }
            (default_param_296 = come_decrement_ref_count(default_param_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_247->mParamTypes)-(((method_block_91)?(2):(0)))!=list$1CVALUE$ph_length(come_params_267)&&!fun_247->mVarArgs&&string_operator_not_equals(fun_name_89,"__builtin_va_start")&&string_operator_not_equals(fun_name_89,"__builtin_va_end")    ) {
        ((struct tuple2$2int$bool$*)(__right_value400=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_89,list$1sType$ph_length(fun_247->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_90))));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value400, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__149 = (_Bool)1;
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__149;
    }
    if(    method_block_91    ) {
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1191, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value402=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1191, "struct sCurrentNode*")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode_finalize;
        _inf_value1->clone=(void*)sCurrentNode_clone;
        _inf_value1->compile=(void*)sCurrentNode_compile;
        _inf_value1->sline=(void*)sCurrentNode_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode_kind;
        current_stack_frame_node_311=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer(sCurrentNode_finalize, __right_value402, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        Value_313=node_compile(current_stack_frame_node_311,info);
        if(        !Value_313        ) {
            __result_obj__152 = (_Bool)0;
            ((current_stack_frame_node_311) ? current_stack_frame_node_311 = come_decrement_ref_count(current_stack_frame_node_311, ((struct sNode*)current_stack_frame_node_311)->finalize, ((struct sNode*)current_stack_frame_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__152;
        }
        else {
        }
        come_value_314=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj133=come_value_314->type,
        come_value_314->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_314->type,info->generics_type,info));
        come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_267,(struct CVALUE*)come_increment_ref_count(come_value_314));
        method_block2_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1201, "struct buffer*"))));
        method_block_type_316=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value410=list$1sType$ph_operator_load_element(fun_247->mParamTypes,-1)))));
        come_call_finalizer(sType_finalize, __right_value410, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        class_name_317=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value413=list$1sType$ph_operator_load_element(method_block_type_316->mParamTypes,0)))->mClass=((struct sClass*)(__right_value414=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_317)));
        come_call_finalizer(sType_finalize, __right_value413, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, __right_value414, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        current_stack_frame_struct_326=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value415=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_317)));
        come_call_finalizer(sClass_finalize, __right_value415, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->num_method_block++;
        num_method_block_327=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_316->mClass->mName,"lambda")        ) {
            ((struct tuple2$2int$bool$*)(__right_value416=err_msg(info,"This function does not have method block(%s)",fun_name_89)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value416, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__161 = (_Bool)1;
            ((current_stack_frame_node_311) ? current_stack_frame_node_311 = come_decrement_ref_count(current_stack_frame_node_311, ((struct sNode*)current_stack_frame_node_311)->finalize, ((struct sNode*)current_stack_frame_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_317 = come_decrement_ref_count(class_name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__161;
        }
        result_type_328=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_316->mResultType));
        result_type_328->mStatic=(_Bool)0;
        result_type2_329=(struct sType*)come_increment_ref_count(solve_generics(result_type_328,info->generics_type,info));
        param_types_330=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_316->mParamTypes));
        param_names_331=method_block_type_316->mParamNames;
        all_alhabet_sname_332=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1225, "struct buffer*"))));
        {
            p_333=info->sname;
            while(            *p_333            ) {
                if(                xisalnum(*p_333)                ) {
                    buffer_append_char(all_alhabet_sname_332,*p_333++);
                }
                else {
                    p_333++;
                }
            }
        }
        buffer_append_format(method_block2_315,"%s fun_block%d_%s(",((char*)(__right_value422=make_come_type_name_string(result_type2_329,info,(_Bool)0))),num_method_block_327,((char*)(__right_value423=buffer_to_string(all_alhabet_sname_332))));
        (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value423 = come_decrement_ref_count(__right_value423, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        i_287=0;
        for(        o2_saved_334=(struct list$1sType$ph*)come_increment_ref_count((param_types_330)),it_335=list$1sType$ph_begin((o2_saved_334))        ;        !list$1sType$ph_end((o2_saved_334))        ;        it_335=list$1sType$ph_next((o2_saved_334))        ){
            param_type_336=it_335;
            if(            i_287==0            ) {
                param_name_337=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_315,"%s",((char*)(__right_value425=make_define_var(param_type_336,param_name_337,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value425 = come_decrement_ref_count(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_337 = come_decrement_ref_count(param_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            i_287==1            ) {
                param_name_338=(char*)come_increment_ref_count(xsprintf("it"));
                param_type2_339=(struct sType*)come_increment_ref_count(solve_generics(param_type_336,info->generics_type,info));
                buffer_append_format(method_block2_315,"%s",((char*)(__right_value428=make_define_var(param_type2_339,param_name_338,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_338 = come_decrement_ref_count(param_name_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_339, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                param_name_340=(char*)come_increment_ref_count(xsprintf("it%d",i_287));
                param_type2_341=(struct sType*)come_increment_ref_count(solve_generics(param_type_336,info->generics_type,info));
                buffer_append_format(method_block2_315,"%s",((char*)(__right_value431=make_define_var(param_type2_341,param_name_340,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value431 = come_decrement_ref_count(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_340 = come_decrement_ref_count(param_name_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            i_287!=list$1sType$ph_length(param_types_330)-1            ) {
                buffer_append_str(method_block2_315,",");
            }
            i_287++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(method_block2_315,")\n");
        buffer_append_str(method_block2_315,((char*)(__right_value432=buffer_to_string(method_block_91))));
        (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        source3_342=(struct buffer*)come_increment_ref_count(info->source);
        p_343=info->p;
        head_344=info->head;
        sline_345=info->sline;
        __dec_obj134=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_315);
        come_call_finalizer(buffer_finalize, __dec_obj134,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_92;
        node_346=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_347=node_compile(node_346,info);
        if(        !Value_347        ) {
            __result_obj__162 = (_Bool)0;
            ((current_stack_frame_node_311) ? current_stack_frame_node_311 = come_decrement_ref_count(current_stack_frame_node_311, ((struct sNode*)current_stack_frame_node_311)->finalize, ((struct sNode*)current_stack_frame_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_317 = come_decrement_ref_count(class_name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_346) ? node_346 = come_decrement_ref_count(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__162;
        }
        else {
        }
        method_block_name_348=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_327,((char*)(__right_value434=buffer_to_string(all_alhabet_sname_332)))));
        (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_value2_349=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1292, "struct CVALUE*"))));
        fun2_350=((struct sFun*)(__right_value439=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value438=__builtin_string(method_block_name_348))),((void*)0))));
        (__right_value438 = come_decrement_ref_count(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value439, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun2_350==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value440=err_msg(info,"method block function not found(%s)",method_block_name_348)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value440, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__163 = (_Bool)1;
            ((current_stack_frame_node_311) ? current_stack_frame_node_311 = come_decrement_ref_count(current_stack_frame_node_311, ((struct sNode*)current_stack_frame_node_311)->finalize, ((struct sNode*)current_stack_frame_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_317 = come_decrement_ref_count(class_name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_346) ? node_346 = come_decrement_ref_count(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (method_block_name_348 = come_decrement_ref_count(method_block_name_348, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value2_349, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__163;
        }
        method_block_type2_351=fun2_350->mLambdaType;
        __dec_obj135=come_value2_349->c_value,
        come_value2_349->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_348));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj136=come_value2_349->type,
        come_value2_349->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_351));
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_349->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_267,(struct CVALUE*)come_increment_ref_count(come_value2_349));
        __dec_obj137=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_342);
        come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_343;
        info->head=head_344;
        info->sline=sline_345;
        info->current_stack_frame_struct=current_stack_frame_struct_326;
        ((current_stack_frame_node_311) ? current_stack_frame_node_311 = come_decrement_ref_count(current_stack_frame_node_311, ((struct sNode*)current_stack_frame_node_311)->finalize, ((struct sNode*)current_stack_frame_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_317 = come_decrement_ref_count(class_name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_346) ? node_346 = come_decrement_ref_count(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (method_block_name_348 = come_decrement_ref_count(method_block_name_348, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_349, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf_352=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1317, "struct buffer*"))));
    if(    string_operator_equals(fun_name_89,"__isoc23_strtoll")    ) {
        __dec_obj138=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"__isoc23_strtoul")    ) {
        __dec_obj139=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"__isoc23_strtoull")    ) {
        __dec_obj140=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    buffer_append_str(buf_352,fun_name_89);
    buffer_append_str(buf_352,"(");
    j_353=0;
    for(    o2_saved_354=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_267)),it_355=list$1CVALUE$ph_begin((o2_saved_354))    ;    !list$1CVALUE$ph_end((o2_saved_354))    ;    it_355=list$1CVALUE$ph_next((o2_saved_354))    ){
        buffer_append_str(buf_352,it_355->c_value);
        if(        j_353!=list$1CVALUE$ph_length(come_params_267)-1        ) {
            buffer_append_str(buf_352,",");
        }
        j_353++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_352,")");
    come_value_356=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1344, "struct CVALUE*"))));
    __dec_obj141=come_value_356->c_value,
    come_value_356->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_352));
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj142=come_value_356->type,
    come_value_356->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_262));
    come_call_finalizer(sType_finalize, __dec_obj142,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_356->type->mStatic=(_Bool)0;
    come_value_356->type->mImmutable=(_Bool)0;
    come_value_356->var=((void*)0);
    if(    fun_247->mResultType->mHeap    ) {
        append_object_to_right_values(come_value_356,(struct sType*)come_increment_ref_count(result_type_262),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")    ) {
        if(        string_operator_not_equals(fun_name_89,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_89,"null_check")&&string_operator_not_equals(fun_name_89,"come_push_stackframe")&&string_operator_not_equals(fun_name_89,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_89,"come_pop_stackframe")&&string_operator_not_equals(fun_name_89,"come_pop_stackframe_v2")        ) {
            __dec_obj143=come_value_356->c_value,
            come_value_356->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_356->c_value,come_value_356->type,info));
            __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_356->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_356));
    info->calling_fun=fun_247;
    __result_obj__164 = (_Bool)1;
    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__164;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__59;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_81;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_82;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    result_81=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 957, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_82=self->head;
    while(    it_82!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_82->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_82->item)));
        }
        it_82=it_82->next;
    }
    __result_obj__64 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_81);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_79;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_80;
    it_79=self->head;
    while(    it_79!=((void*)0)    ) {
        prev_it_80=it_79;
        it_79=it_79->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value139 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_83;
struct tuple2$2char$phsNode$ph* __dec_obj51;
void* __right_value140 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_84;
struct tuple2$2char$phsNode$ph* __dec_obj52;
void* __right_value141 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_85;
struct tuple2$2char$phsNode$ph* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__61;
    if(    self->len==0    ) {
        litem_83=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value139=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 976, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_83->prev=((void*)0);
        litem_83->next=((void*)0);
        __dec_obj51=litem_83->item,
        litem_83->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_83;
        self->head=litem_83;
    }
    else if(    self->len==1    ) {
        litem_84=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value140=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 986, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_84->prev=self->head;
        litem_84->next=((void*)0);
        __dec_obj52=litem_84->item,
        litem_84->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_84;
        self->head->next=litem_84;
    }
    else {
        litem_85=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value141=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 996, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_85->prev=self->tail;
        litem_85->next=((void*)0);
        __dec_obj53=litem_85->item,
        litem_85->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_85;
        self->tail=litem_85;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__62;
void* __right_value142 = (void*)0;
struct tuple2$2char$phsNode$ph* result_86;
void* __right_value143 = (void*)0;
char* __dec_obj54;
void* __right_value144 = (void*)0;
struct sNode* __dec_obj55;
struct tuple2$2char$phsNode$ph* __result_obj__63;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__62;
    }
    result_86=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj54=result_86->v1,
        result_86->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj55=result_86->v2,
        result_86->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__63 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_86);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_87;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_88;
    it_87=self->head;
    while(    it_87!=((void*)0)    ) {
        prev_it_88=it_87;
        it_87=it_87->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__68 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_97;
struct list_item$1CVALUE$ph* prev_it_98;
    it_97=self->head;
    while(    it_97!=((void*)0)    ) {
        prev_it_98=it_97;
        it_97=it_97->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_101;
struct tuple2$2char$phsNode$ph* __result_obj__70;
struct tuple2$2char$phsNode$ph* __result_obj__71;
struct tuple2$2char$phsNode$ph* result_102;
struct tuple2$2char$phsNode$ph* __result_obj__72;
result_101 = (void*)0;
result_102 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_101,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__70 = result_101;
        return __result_obj__70;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__71 = self->it->item;
        return __result_obj__71;
    }
    memset(&result_102,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__72 = result_102;
    return __result_obj__72;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_104;
struct tuple2$2char$phsNode$ph* __result_obj__73;
struct tuple2$2char$phsNode$ph* __result_obj__74;
struct tuple2$2char$phsNode$ph* result_105;
struct tuple2$2char$phsNode$ph* __result_obj__75;
result_104 = (void*)0;
result_105 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_104,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__73 = result_104;
        return __result_obj__73;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_105,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__75 = result_105;
    return __result_obj__75;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_110;
int i_111;
struct sType* __result_obj__77;
struct sType* default_value_112;
struct sType* __result_obj__78;
default_value_112 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_110=self->head;
    i_111=0;
    while(    it_110!=((void*)0)    ) {
        if(        position==i_111        ) {
            __result_obj__77 = (struct sType*)come_increment_ref_count(it_110->item);
            come_call_finalizer(sType_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__77;
        }
        it_110=it_110->next;
        i_111++;
    }
    memset(&default_value_112,0,sizeof(struct sType*));
    __result_obj__78 = (struct sType*)come_increment_ref_count(default_value_112);
    come_call_finalizer(sType_finalize, default_value_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_113;
int i_114;
struct sType* __result_obj__79;
struct sType* default_value_115;
struct sType* __result_obj__80;
default_value_115 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_113=self->head;
    i_114=0;
    while(    it_113!=((void*)0)    ) {
        if(        position==i_114        ) {
            __result_obj__79 = (struct sType*)come_increment_ref_count(it_113->item);
            come_call_finalizer(sType_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__79;
        }
        it_113=it_113->next;
        i_114++;
    }
    memset(&default_value_115,0,sizeof(struct sType*));
    __result_obj__80 = (struct sType*)come_increment_ref_count(default_value_115);
    come_call_finalizer(sType_finalize, default_value_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_119;
struct CVALUE* __result_obj__81;
struct CVALUE* __result_obj__82;
struct CVALUE* result_120;
struct CVALUE* __result_obj__83;
result_119 = (void*)0;
result_120 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_119,0,sizeof(struct CVALUE*));
        __result_obj__81 = result_119;
        return __result_obj__81;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__82 = self->it->item;
        return __result_obj__82;
    }
    memset(&result_120,0,sizeof(struct CVALUE*));
    __result_obj__83 = result_120;
    return __result_obj__83;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_122;
struct CVALUE* __result_obj__84;
struct CVALUE* __result_obj__85;
struct CVALUE* result_123;
struct CVALUE* __result_obj__86;
result_122 = (void*)0;
result_123 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_122,0,sizeof(struct CVALUE*));
        __result_obj__84 = result_122;
        return __result_obj__84;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__85 = self->it->item;
        return __result_obj__85;
    }
    memset(&result_123,0,sizeof(struct CVALUE*));
    __result_obj__86 = result_123;
    return __result_obj__86;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_126;
unsigned int it_127;
struct sGenericsFun* __result_obj__88;
struct sGenericsFun* __result_obj__89;
struct sGenericsFun* __result_obj__90;
struct sGenericsFun* __result_obj__91;
    hash_126=string_get_hash_key(((char*)key))%self->size;
    it_127=hash_126;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_127]        ) {
            if(            string_equals(self->keys[it_127],key)            ) {
                __result_obj__88 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_127]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__88;
            }
            it_127++;
            if(            it_127>=self->size            ) {
                it_127=0;
            }
            else if(            it_127==hash_126            ) {
                __result_obj__89 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__89;
            }
        }
        else {
            __result_obj__90 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__90;
        }
    }
    __result_obj__91 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
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

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_134;
unsigned int it_135;
struct sFun* __result_obj__92;
struct sFun* __result_obj__93;
struct sFun* __result_obj__94;
struct sFun* __result_obj__95;
    hash_134=string_get_hash_key(((char*)key))%self->size;
    it_135=hash_134;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_135]        ) {
            if(            string_equals(self->keys[it_135],key)            ) {
                __result_obj__92 = (struct sFun*)come_increment_ref_count(self->items[it_135]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__92;
            }
            it_135++;
            if(            it_135>=self->size            ) {
                it_135=0;
            }
            else if(            it_135==hash_134            ) {
                __result_obj__93 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__93;
            }
        }
        else {
            __result_obj__94 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__94;
        }
    }
    __result_obj__95 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
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

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_140;
int i_141;
struct CVALUE* __result_obj__97;
struct CVALUE* default_value_142;
struct CVALUE* __result_obj__98;
default_value_142 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_140=self->head;
    i_141=0;
    while(    it_140!=((void*)0)    ) {
        if(        position==i_141        ) {
            __result_obj__97 = (struct CVALUE*)come_increment_ref_count(it_140->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__97;
        }
        it_140=it_140->next;
        i_141++;
    }
    memset(&default_value_142,0,sizeof(struct CVALUE*));
    __result_obj__98 = (struct CVALUE*)come_increment_ref_count(default_value_142);
    come_call_finalizer(CVALUE_finalize, default_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_143;
int i_144;
struct CVALUE* __result_obj__99;
struct CVALUE* default_value_145;
struct CVALUE* __result_obj__100;
default_value_145 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_143=self->head;
    i_144=0;
    while(    it_143!=((void*)0)    ) {
        if(        position==i_144        ) {
            __result_obj__99 = (struct CVALUE*)come_increment_ref_count(it_143->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__99;
        }
        it_143=it_143->next;
        i_144++;
    }
    memset(&default_value_145,0,sizeof(struct CVALUE*));
    __result_obj__100 = (struct CVALUE*)come_increment_ref_count(default_value_145);
    come_call_finalizer(CVALUE_finalize, default_value_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_151;
int i_152;
struct sType* default_value_153;
struct list$1sType$ph* __result_obj__102;
struct list_item$1sType$ph* it_157;
int i_158;
struct sType* __dec_obj65;
struct list$1sType$ph* __result_obj__103;
default_value_153 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_151=self->len;
        for(        i_152=0        ;        i_152<position-len_151        ;        i_152++        ){
            memset(&default_value_153,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_153));
            come_call_finalizer(sType_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__102 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__102;
    }
    it_157=self->head;
    i_158=0;
    while(    it_157!=((void*)0)    ) {
        if(        position==i_158        ) {
            __dec_obj65=it_157->item,
            it_157->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_157=it_157->next;
        i_158++;
    }
    __result_obj__103 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value182 = (void*)0;
struct list_item$1sType$ph* litem_154;
struct sType* __dec_obj62;
void* __right_value183 = (void*)0;
struct list_item$1sType$ph* litem_155;
struct sType* __dec_obj63;
void* __right_value184 = (void*)0;
struct list_item$1sType$ph* litem_156;
struct sType* __dec_obj64;
struct list$1sType$ph* __result_obj__101;
    if(    self->len==0    ) {
        litem_154=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value182=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        __dec_obj62=litem_154->item,
        litem_154->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1    ) {
        litem_155=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value183=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1056, "struct list_item$1sType$ph*"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        __dec_obj63=litem_155->item,
        litem_155->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value184=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1066, "struct list_item$1sType$ph*"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        __dec_obj64=litem_156->item,
        litem_156->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result_obj__101 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__101;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_161;
struct sType* __result_obj__104;
struct sType* __result_obj__105;
struct sType* result_162;
struct sType* __result_obj__106;
result_161 = (void*)0;
result_162 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_161,0,sizeof(struct sType*));
        __result_obj__104 = result_161;
        return __result_obj__104;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__105 = self->it->item;
        return __result_obj__105;
    }
    memset(&result_162,0,sizeof(struct sType*));
    __result_obj__106 = result_162;
    return __result_obj__106;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_164;
struct sType* __result_obj__107;
struct sType* __result_obj__108;
struct sType* result_165;
struct sType* __result_obj__109;
result_164 = (void*)0;
result_165 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_164,0,sizeof(struct sType*));
        __result_obj__107 = result_164;
        return __result_obj__107;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__108 = self->it->item;
        return __result_obj__108;
    }
    memset(&result_165,0,sizeof(struct sType*));
    __result_obj__109 = result_165;
    return __result_obj__109;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value195 = (void*)0;
struct list_item$1CVALUE$ph* litem_176;
struct CVALUE* __dec_obj67;
void* __right_value196 = (void*)0;
struct list_item$1CVALUE$ph* litem_177;
struct CVALUE* __dec_obj68;
void* __right_value197 = (void*)0;
struct list_item$1CVALUE$ph* litem_178;
struct CVALUE* __dec_obj69;
struct list$1CVALUE$ph* __result_obj__111;
    if(    self->len==0    ) {
        litem_176=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value195=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 976, "struct list_item$1CVALUE$ph*"))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        __dec_obj67=litem_176->item,
        litem_176->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1    ) {
        litem_177=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value196=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 986, "struct list_item$1CVALUE$ph*"))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        __dec_obj68=litem_177->item,
        litem_177->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value197=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 996, "struct list_item$1CVALUE$ph*"))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        __dec_obj69=litem_178->item,
        litem_178->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__111 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_184;
unsigned int it_185;
struct map$2char$phsFun$ph* __result_obj__116;
    hash_184=string_get_hash_key(((char*)key))%self->size;
    it_185=hash_184;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_185]        ) {
            if(            string_equals(self->keys[it_185],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it_185]);
                self->item_existance[it_185]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it_185] = come_decrement_ref_count(self->keys[it_185], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it_185]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_185], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                self->items[it_185]=((void*)0);
                self->len--;
                break;
            }
            it_185++;
            if(            it_185>=self->size            ) {
                it_185=0;
            }
            else if(            it_185==hash_184            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__116 = self;
    return __result_obj__116;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_186;
struct list_item$1char$ph* it_187;
struct list$1char$ph* __result_obj__115;
    it2_186=0;
    it_187=self->head;
    while(    it_187!=((void*)0)    ) {
        if(        string_equals(it_187->item,item)        ) {
            list$1char$ph_delete(self,it2_186,it2_186+1);
            break;
        }
        it2_186++;
        it_187=it_187->next;
    }
    __result_obj__115 = self;
    return __result_obj__115;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_188;
struct list$1char$ph* __result_obj__112;
struct list_item$1char$ph* it_191;
int i_192;
struct list_item$1char$ph* prev_it_193;
struct list_item$1char$ph* it_194;
int i_195;
struct list_item$1char$ph* prev_it_196;
struct list_item$1char$ph* it_197;
struct list_item$1char$ph* head_prev_it_198;
struct list_item$1char$ph* tail_it_199;
int i_200;
struct list_item$1char$ph* prev_it_201;
struct list$1char$ph* __result_obj__114;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_188=tail;
        tail=head;
        head=tmp_188;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__112 = self;
        return __result_obj__112;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_191=self->head;
        i_192=0;
        while(        it_191!=((void*)0)        ) {
            if(            i_192<tail            ) {
                prev_it_193=it_191;
                it_191=it_191->next;
                i_192++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_192==tail            ) {
                self->head=it_191;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_191=it_191->next;
                i_192++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_194=self->head;
        i_195=0;
        while(        it_194!=((void*)0)        ) {
            if(            i_195==head            ) {
                self->tail=it_194->prev;
                self->tail->next=((void*)0);
            }
            if(            i_195>=head            ) {
                prev_it_196=it_194;
                it_194=it_194->next;
                i_195++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_194=it_194->next;
                i_195++;
            }
        }
    }
    else {
        it_197=self->head;
        head_prev_it_198=((void*)0);
        tail_it_199=((void*)0);
        i_200=0;
        while(        it_197!=((void*)0)        ) {
            if(            i_200==head            ) {
                head_prev_it_198=it_197->prev;
            }
            if(            i_200==tail            ) {
                tail_it_199=it_197;
            }
            if(            i_200>=head&&i_200<tail            ) {
                prev_it_201=it_197;
                it_197=it_197->next;
                i_200++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_197=it_197->next;
                i_200++;
            }
        }
        if(        head_prev_it_198!=((void*)0)        ) {
            head_prev_it_198->next=tail_it_199;
        }
        if(        tail_it_199!=((void*)0)        ) {
            tail_it_199->prev=head_prev_it_198;
        }
    }
    __result_obj__114 = self;
    return __result_obj__114;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_189;
struct list_item$1char$ph* prev_it_190;
struct list$1char$ph* __result_obj__113;
    it_189=self->head;
    while(    it_189!=((void*)0)    ) {
        prev_it_190=it_189;
        it_189=it_189->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__113 = self;
    return __result_obj__113;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_238;
unsigned int hash_239;
unsigned int it_240;
struct sFun* __result_obj__121;
struct sFun* __result_obj__122;
struct sFun* __result_obj__123;
struct sFun* __result_obj__124;
default_value_238 = (void*)0;
    memset(&default_value_238,0,sizeof(struct sFun*));
    hash_239=string_get_hash_key(((char*)key))%self->size;
    it_240=hash_239;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_240]        ) {
            if(            string_equals(self->keys[it_240],key)            ) {
                __result_obj__121 = (struct sFun*)come_increment_ref_count(self->items[it_240]);
                come_call_finalizer(sFun_finalize, default_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__121;
            }
            it_240++;
            if(            it_240>=self->size            ) {
                it_240=0;
            }
            else if(            it_240==hash_239            ) {
                __result_obj__122 = (struct sFun*)come_increment_ref_count(default_value_238);
                come_call_finalizer(sFun_finalize, default_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__122;
            }
        }
        else {
            __result_obj__123 = (struct sFun*)come_increment_ref_count(default_value_238);
            come_call_finalizer(sFun_finalize, default_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__123;
        }
    }
    __result_obj__124 = (struct sFun*)come_increment_ref_count(default_value_238);
    come_call_finalizer(sFun_finalize, default_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_241;
unsigned int hash_242;
unsigned int it_243;
struct sFun* __result_obj__125;
struct sFun* __result_obj__126;
struct sFun* __result_obj__127;
struct sFun* __result_obj__128;
default_value_241 = (void*)0;
    memset(&default_value_241,0,sizeof(struct sFun*));
    hash_242=string_get_hash_key(((char*)key))%self->size;
    it_243=hash_242;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_243]        ) {
            if(            string_equals(self->keys[it_243],key)            ) {
                __result_obj__125 = (struct sFun*)come_increment_ref_count(self->items[it_243]);
                come_call_finalizer(sFun_finalize, default_value_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__125;
            }
            it_243++;
            if(            it_243>=self->size            ) {
                it_243=0;
            }
            else if(            it_243==hash_242            ) {
                __result_obj__126 = (struct sFun*)come_increment_ref_count(default_value_241);
                come_call_finalizer(sFun_finalize, default_value_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__126;
            }
        }
        else {
            __result_obj__127 = (struct sFun*)come_increment_ref_count(default_value_241);
            come_call_finalizer(sFun_finalize, default_value_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__127;
        }
    }
    __result_obj__128 = (struct sFun*)come_increment_ref_count(default_value_241);
    come_call_finalizer(sFun_finalize, default_value_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_277;
char* __result_obj__133;
char* __result_obj__134;
char* result_278;
char* __result_obj__135;
result_277 = (void*)0;
result_278 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_277,0,sizeof(char*));
        __result_obj__133 = result_277;
        return __result_obj__133;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__134 = self->it->item;
        return __result_obj__134;
    }
    memset(&result_278,0,sizeof(char*));
    __result_obj__135 = result_278;
    return __result_obj__135;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_280;
char* __result_obj__136;
char* __result_obj__137;
char* result_281;
char* __result_obj__138;
result_280 = (void*)0;
result_281 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_280,0,sizeof(char*));
        __result_obj__136 = result_280;
        return __result_obj__136;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__137 = self->it->item;
        return __result_obj__137;
    }
    memset(&result_281,0,sizeof(char*));
    __result_obj__138 = result_281;
    return __result_obj__138;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_282;
int i_283;
struct CVALUE* default_value_284;
struct list$1CVALUE$ph* __result_obj__139;
struct list_item$1CVALUE$ph* it_285;
int i_286;
struct CVALUE* __dec_obj126;
struct list$1CVALUE$ph* __result_obj__140;
default_value_284 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_282=self->len;
        for(        i_283=0        ;        i_283<position-len_282        ;        i_283++        ){
            memset(&default_value_284,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_284));
            come_call_finalizer(CVALUE_finalize, default_value_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__139 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__139;
    }
    it_285=self->head;
    i_286=0;
    while(    it_285!=((void*)0)    ) {
        if(        position==i_286        ) {
            __dec_obj126=it_285->item,
            it_285->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_285=it_285->next;
        i_286++;
    }
    __result_obj__140 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__140;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_297;
int i_298;
char* __result_obj__143;
char* default_value_299;
char* __result_obj__144;
default_value_299 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_297=self->head;
    i_298=0;
    while(    it_297!=((void*)0)    ) {
        if(        position==i_298        ) {
            __result_obj__143 = (char*)come_increment_ref_count(it_297->item);
            (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__143;
        }
        it_297=it_297->next;
        i_298++;
    }
    memset(&default_value_299,0,sizeof(char*));
    __result_obj__144 = (char*)come_increment_ref_count(default_value_299);
    (default_value_299 = come_decrement_ref_count(default_value_299, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_300;
int i_301;
char* __result_obj__145;
char* default_value_302;
char* __result_obj__146;
default_value_302 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_300=self->head;
    i_301=0;
    while(    it_300!=((void*)0)    ) {
        if(        position==i_301        ) {
            __result_obj__145 = (char*)come_increment_ref_count(it_300->item);
            (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__145;
        }
        it_300=it_300->next;
        i_301++;
    }
    memset(&default_value_302,0,sizeof(char*));
    __result_obj__146 = (char*)come_increment_ref_count(default_value_302);
    (default_value_302 = come_decrement_ref_count(default_value_302, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__150;
void* __right_value403 = (void*)0;
struct sCurrentNode* result_312;
void* __right_value404 = (void*)0;
char* __dec_obj132;
struct sCurrentNode* __result_obj__151;
    if(    self==(void*)0    ) {
        __result_obj__150 = (void*)0;
        return __result_obj__150;
    }
    result_312=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result_312->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj132=result_312->sname,
        result_312->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_312->sline_real=self->sline_real;
    }
    __result_obj__151 = result_312;
    come_call_finalizer(sCurrentNode_finalize, result_312, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_318;
unsigned int hash_319;
unsigned int it_320;
struct sClass* __result_obj__153;
struct sClass* __result_obj__154;
struct sClass* __result_obj__155;
struct sClass* __result_obj__156;
default_value_318 = (void*)0;
    memset(&default_value_318,0,sizeof(struct sClass*));
    hash_319=string_get_hash_key(((char*)key))%self->size;
    it_320=hash_319;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_320]        ) {
            if(            string_equals(self->keys[it_320],key)            ) {
                __result_obj__153 = (struct sClass*)come_increment_ref_count(self->items[it_320]);
                come_call_finalizer(sClass_finalize, default_value_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__153;
            }
            it_320++;
            if(            it_320>=self->size            ) {
                it_320=0;
            }
            else if(            it_320==hash_319            ) {
                __result_obj__154 = (struct sClass*)come_increment_ref_count(default_value_318);
                come_call_finalizer(sClass_finalize, default_value_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__154;
            }
        }
        else {
            __result_obj__155 = (struct sClass*)come_increment_ref_count(default_value_318);
            come_call_finalizer(sClass_finalize, default_value_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__155;
        }
    }
    __result_obj__156 = (struct sClass*)come_increment_ref_count(default_value_318);
    come_call_finalizer(sClass_finalize, default_value_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_321;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_322;
    it_321=self->head;
    while(    it_321!=((void*)0)    ) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_322, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_323;
unsigned int hash_324;
unsigned int it_325;
struct sClass* __result_obj__157;
struct sClass* __result_obj__158;
struct sClass* __result_obj__159;
struct sClass* __result_obj__160;
default_value_323 = (void*)0;
    memset(&default_value_323,0,sizeof(struct sClass*));
    hash_324=string_get_hash_key(((char*)key))%self->size;
    it_325=hash_324;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_325]        ) {
            if(            string_equals(self->keys[it_325],key)            ) {
                __result_obj__157 = (struct sClass*)come_increment_ref_count(self->items[it_325]);
                come_call_finalizer(sClass_finalize, default_value_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__157;
            }
            it_325++;
            if(            it_325>=self->size            ) {
                it_325=0;
            }
            else if(            it_325==hash_324            ) {
                __result_obj__158 = (struct sClass*)come_increment_ref_count(default_value_323);
                come_call_finalizer(sClass_finalize, default_value_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__158;
            }
        }
        else {
            __result_obj__159 = (struct sClass*)come_increment_ref_count(default_value_323);
            come_call_finalizer(sClass_finalize, default_value_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__159;
        }
    }
    __result_obj__160 = (struct sClass*)come_increment_ref_count(default_value_323);
    come_call_finalizer(sClass_finalize, default_value_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value453 = (void*)0;
struct buffer* __dec_obj144;
struct sComeCallNode* __result_obj__165;
    ((struct sNodeBase*)(__right_value453=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value453, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj144=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer(buffer_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__165 = (struct sComeCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComeCallNode_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value454 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value454=__builtin_string("sComeCallNode"))));
    (__right_value454 = come_decrement_ref_count(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_357;
struct buffer* come_block_358;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1CVALUE$ph* come_params_359;
void* __right_value457 = (void*)0;
char* var_name_361;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* type__362;
void* __right_value461 = (void*)0;
_Bool __result_obj__171;
void* __right_value462 = (void*)0;
struct sNode* var_node_365;
_Bool Value_366;
_Bool __result_obj__172;
void* __right_value463 = (void*)0;
struct CVALUE* thread_var_value_367;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_368;
void* __right_value466 = (void*)0;
char* __dec_obj145;
struct sType* __dec_obj146;
void* __right_value467 = (void*)0;
struct sNode* null_node_369;
_Bool Value_370;
_Bool __result_obj__173;
void* __right_value468 = (void*)0;
struct CVALUE* __dec_obj147;
void* __right_value469 = (void*)0;
struct sType* __dec_obj148;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode* _inf_obj_value2;
void* __right_value472 = (void*)0;
struct sNode* current_stack_frame_node_371;
_Bool Value_372;
_Bool __result_obj__174;
void* __right_value473 = (void*)0;
struct CVALUE* current_stack_frame_value_373;
void* __right_value474 = (void*)0;
char* fun_name_374;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct buffer* come_block2_375;
void* __right_value477 = (void*)0;
char* class_name_376;
void* __right_value478 = (void*)0;
struct sClass* current_stack_frame_struct_377;
void* __right_value479 = (void*)0;
struct buffer* source3_378;
char* p_379;
char* head_380;
int sline_381;
struct buffer* __dec_obj149;
void* __right_value480 = (void*)0;
struct sNode* node_382;
_Bool in_method_block_383;
_Bool Value_384;
_Bool __result_obj__175;
struct buffer* __dec_obj150;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct CVALUE* fun_value_385;
void* __right_value483 = (void*)0;
char* __dec_obj151;
struct sType* __dec_obj152;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct buffer* buf_386;
void* __right_value486 = (void*)0;
char* fun_name_387;
int j_388;
struct list$1CVALUE$ph* o2_saved_389;
struct CVALUE* it_390;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_391;
void* __right_value489 = (void*)0;
char* __dec_obj153;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* type_392;
void* __right_value493 = (void*)0;
struct sType* __dec_obj154;
_Bool __result_obj__176;
    come_block_sline_357=self->come_block_sline;
    come_block_358=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_359=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1396, "struct list$1CVALUE$ph*"))));
    static int thread_num_360=0;
    thread_num_360++;
    var_name_361=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_360));
    type__362=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value459=map$2char$phsType$ph_at(info->types,((char*)(__right_value458=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value458 = come_decrement_ref_count(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value459, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type__362==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value461=err_msg(info,"pthread_t is not defined")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value461, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__171 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_359, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_361 = come_decrement_ref_count(var_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__171;
    }
    var_node_365=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_361),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__362),(_Bool)1,((void*)0),info,(_Bool)0));
    Value_366=node_compile(var_node_365,info);
    if(    !Value_366    ) {
        __result_obj__172 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_359, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_361 = come_decrement_ref_count(var_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_365) ? var_node_365 = come_decrement_ref_count(var_node_365, ((struct sNode*)var_node_365)->finalize, ((struct sNode*)var_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__172;
    }
    else {
    }
    thread_var_value_367=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_368=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1418, "struct CVALUE*"))));
    __dec_obj145=come_value_368->c_value,
    come_value_368->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_367->c_value));
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj146=come_value_368->type,
    come_value_368->type=(struct sType*)come_increment_ref_count(thread_var_value_367->type);
    come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_368->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_359,(struct CVALUE*)come_increment_ref_count(come_value_368));
    null_node_369=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_370=node_compile(null_node_369,info);
    if(    !Value_370    ) {
        __result_obj__173 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_359, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_361 = come_decrement_ref_count(var_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_365) ? var_node_365 = come_decrement_ref_count(var_node_365, ((struct sNode*)var_node_365)->finalize, ((struct sNode*)var_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_369) ? null_node_369 = come_decrement_ref_count(null_node_369, ((struct sNode*)null_node_369)->finalize, ((struct sNode*)null_node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__173;
    }
    else {
    }
    __dec_obj147=come_value_368,
    come_value_368=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer(CVALUE_finalize, __dec_obj147,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj148=come_value_368->type,
    come_value_368->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_368->type,info->generics_type,info));
    come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_359,(struct CVALUE*)come_increment_ref_count(come_value_368));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1437, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value471=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1437, "struct sCurrentNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode_finalize;
    _inf_value2->clone=(void*)sCurrentNode_clone;
    _inf_value2->compile=(void*)sCurrentNode_compile;
    _inf_value2->sline=(void*)sCurrentNode_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_371=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sCurrentNode_finalize, __right_value471, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_372=node_compile(current_stack_frame_node_371,info);
    if(    !Value_372    ) {
        __result_obj__174 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_359, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_361 = come_decrement_ref_count(var_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_365) ? var_node_365 = come_decrement_ref_count(var_node_365, ((struct sNode*)var_node_365)->finalize, ((struct sNode*)var_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_369) ? null_node_369 = come_decrement_ref_count(null_node_369, ((struct sNode*)null_node_369)->finalize, ((struct sNode*)null_node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node_371) ? current_stack_frame_node_371 = come_decrement_ref_count(current_stack_frame_node_371, ((struct sNode*)current_stack_frame_node_371)->finalize, ((struct sNode*)current_stack_frame_node_371)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__174;
    }
    else {
    }
    current_stack_frame_value_373=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_374=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_360));
    come_block2_375=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1447, "struct buffer*"))));
    class_name_376=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_375,"void* %s(%s* parent)\n",fun_name_374,class_name_376);
    buffer_append_str(come_block2_375,((char*)(__right_value478=buffer_to_string(come_block_358))));
    (__right_value478 = come_decrement_ref_count(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    current_stack_frame_struct_377=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value479=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_376)));
    come_call_finalizer(sClass_finalize, __right_value479, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    source3_378=(struct buffer*)come_increment_ref_count(info->source);
    p_379=info->p;
    head_380=info->head;
    sline_381=info->sline;
    __dec_obj149=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_375);
    come_call_finalizer(buffer_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_357;
    node_382=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_383=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_384=node_compile(node_382,info);
    if(    !Value_384    ) {
        __result_obj__175 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_359, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_361 = come_decrement_ref_count(var_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_365) ? var_node_365 = come_decrement_ref_count(var_node_365, ((struct sNode*)var_node_365)->finalize, ((struct sNode*)var_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_369) ? null_node_369 = come_decrement_ref_count(null_node_369, ((struct sNode*)null_node_369)->finalize, ((struct sNode*)null_node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node_371) ? current_stack_frame_node_371 = come_decrement_ref_count(current_stack_frame_node_371, ((struct sNode*)current_stack_frame_node_371)->finalize, ((struct sNode*)current_stack_frame_node_371)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_374 = come_decrement_ref_count(fun_name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, come_block2_375, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_376 = come_decrement_ref_count(class_name_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_382) ? node_382 = come_decrement_ref_count(node_382, ((struct sNode*)node_382)->finalize, ((struct sNode*)node_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__175;
    }
    else {
    }
    info->in_method_block=in_method_block_383;
    __dec_obj150=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_378);
    come_call_finalizer(buffer_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_379;
    info->head=head_380;
    info->sline=sline_381;
    info->current_stack_frame_struct=current_stack_frame_struct_377;
    fun_value_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1484, "struct CVALUE*"))));
    __dec_obj151=fun_value_385->c_value,
    fun_value_385->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_374));
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj152=come_value_368->type,
    come_value_368->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_368->var=((void*)0);
    list$1CVALUE$ph_add(come_params_359,(struct CVALUE*)come_increment_ref_count(fun_value_385));
    list$1CVALUE$ph_add(come_params_359,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_373));
    buf_386=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1494, "struct buffer*"))));
    (fun_name_374 = come_decrement_ref_count(fun_name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    fun_name_387=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_386,"(");
    buffer_append_str(buf_386,fun_name_387);
    buffer_append_str(buf_386,"(");
    j_388=0;
    for(    o2_saved_389=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_359)),it_390=list$1CVALUE$ph_begin((o2_saved_389))    ;    !list$1CVALUE$ph_end((o2_saved_389))    ;    it_390=list$1CVALUE$ph_next((o2_saved_389))    ){
        buffer_append_str(buf_386,it_390->c_value);
        if(        j_388!=list$1CVALUE$ph_length(come_params_359)-1        ) {
            buffer_append_str(buf_386,",");
        }
        j_388++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_389, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_386,")");
    buffer_append_str(buf_386,", ");
    buffer_append_str(buf_386,thread_var_value_367->c_value);
    buffer_append_str(buf_386,")");
    come_call_finalizer(CVALUE_finalize, come_value_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_391=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1517, "struct CVALUE*"))));
    __dec_obj153=come_value_391->c_value,
    come_value_391->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_386));
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    type_392=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value491=map$2char$phsType$ph_at(info->types,((char*)(__right_value490=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value491, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type_392==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value493=err_msg(info,"pthread_t is not defined")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value493, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj154=come_value_391->type,
    come_value_391->type=(struct sType*)come_increment_ref_count(type_392);
    come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_391->var=((void*)0);
    add_come_last_code(info,"%s",come_value_391->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_391));
    __result_obj__176 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_359, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_361 = come_decrement_ref_count(var_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type__362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((var_node_365) ? var_node_365 = come_decrement_ref_count(var_node_365, ((struct sNode*)var_node_365)->finalize, ((struct sNode*)var_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((null_node_369) ? null_node_369 = come_decrement_ref_count(null_node_369, ((struct sNode*)null_node_369)->finalize, ((struct sNode*)null_node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((current_stack_frame_node_371) ? current_stack_frame_node_371 = come_decrement_ref_count(current_stack_frame_node_371, ((struct sNode*)current_stack_frame_node_371)->finalize, ((struct sNode*)current_stack_frame_node_371)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block2_375, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (class_name_376 = come_decrement_ref_count(class_name_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source3_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_382) ? node_382 = come_decrement_ref_count(node_382, ((struct sNode*)node_382)->finalize, ((struct sNode*)node_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value_385, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_386, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name_387 = come_decrement_ref_count(fun_name_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_391, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__176;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_363;
unsigned int it_364;
struct sType* __result_obj__167;
struct sType* __result_obj__168;
struct sType* __result_obj__169;
struct sType* __result_obj__170;
    hash_363=string_get_hash_key(((char*)key))%self->size;
    it_364=hash_363;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_364]        ) {
            if(            string_equals(self->keys[it_364],key)            ) {
                __result_obj__167 = (struct sType*)come_increment_ref_count(self->items[it_364]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__167;
            }
            it_364++;
            if(            it_364>=self->size            ) {
                it_364=0;
            }
            else if(            it_364==hash_363            ) {
                __result_obj__168 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__168;
            }
        }
        else {
            __result_obj__169 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__169;
        }
    }
    __result_obj__170 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__170;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value494 = (void*)0;
struct sNode* __dec_obj155;
struct sComeJoinNode* __result_obj__177;
    ((struct sNodeBase*)(__right_value494=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value494, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj155=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__177 = (struct sComeJoinNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__177;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value495 = (void*)0;
char* __result_obj__178;
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("sComeJoinNode"))));
    (__right_value495 = come_decrement_ref_count(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_393;
_Bool Value_394;
_Bool __result_obj__179;
void* __right_value496 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct buffer* buf_396;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value501 = (void*)0;
char* __dec_obj156;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj157;
_Bool __result_obj__180;
    node_393=(struct sNode*)come_increment_ref_count(self->node);
    Value_394=node_compile(node_393,info);
    if(    !Value_394    ) {
        __result_obj__179 = (_Bool)0;
        ((node_393) ? node_393 = come_decrement_ref_count(node_393, ((struct sNode*)node_393)->finalize, ((struct sNode*)node_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__179;
    }
    else {
    }
    come_value_395=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_396=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1564, "struct buffer*"))));
    buffer_append_str(buf_396,"pthread_join(");
    buffer_append_str(buf_396,come_value_395->c_value);
    buffer_append_str(buf_396,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value_395, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1569, "struct CVALUE*"))));
    __dec_obj156=come_value_397->c_value,
    come_value_397->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_396));
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj157=come_value_397->type,
    come_value_397->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1571, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_397->var=((void*)0);
    add_come_last_code(info,"%s",come_value_397->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
    __result_obj__180 = (_Bool)1;
    ((node_393) ? node_393 = come_decrement_ref_count(node_393, ((struct sNode*)node_393)->finalize, ((struct sNode*)node_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf_396, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_397, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__180;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value505 = (void*)0;
struct list$1sNode$ph* __dec_obj158;
struct list$1sBlock$ph* __dec_obj159;
struct sBlock* __dec_obj160;
struct sComePollNode* __result_obj__181;
    ((struct sNodeBase*)(__right_value505=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value505, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj158=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj158,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj159=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj159,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj160=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer(sBlock_finalize, __dec_obj160,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->time_out=time_out;
    __result_obj__181 = (struct sComePollNode*)come_increment_ref_count(self);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComePollNode_finalize, __result_obj__181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__181;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value506 = (void*)0;
char* __result_obj__182;
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value506=__builtin_string("sComePollNode"))));
    (__right_value506 = come_decrement_ref_count(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_402;
struct list$1sBlock$ph* blocks_403;
int time_out_404;
int n_406;
struct list$1sNode$ph* o2_saved_407;
struct sNode* it_410;
_Bool Value_413;
_Bool __result_obj__189;
void* __right_value507 = (void*)0;
struct CVALUE* come_value_414;
int n_415;
struct list$1sNode$ph* o2_saved_416;
struct sNode* it_417;
void* __right_value508 = (void*)0;
_Bool __result_obj__194;
    vars_402=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_403=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_404=self->time_out;
    static int var_num_405=0;
    var_num_405++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_405,list$1sNode$ph_length(vars_402));
    n_406=0;
    for(    o2_saved_407=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_410=list$1sNode$ph_begin((o2_saved_407))    ;    !list$1sNode$ph_end((o2_saved_407))    ;    it_410=list$1sNode$ph_next((o2_saved_407))    ){
        Value_413=node_compile(it_410,info);
        if(        !Value_413        ) {
            __result_obj__189 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_407, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_402, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_403, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__189;
        }
        else {
        }
        come_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_405,n_406,come_value_414->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_405,n_406,1);
        n_406++;
        come_call_finalizer(CVALUE_finalize, come_value_414, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_407, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_405,var_num_405,list$1sNode$ph_length(vars_402),time_out_404);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_405);
    n_415=0;
    for(    o2_saved_416=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_417=list$1sNode$ph_begin((o2_saved_416))    ;    !list$1sNode$ph_end((o2_saved_416))    ;    it_417=list$1sNode$ph_next((o2_saved_416))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_405,n_415,1);
        transpile_block(((struct sBlock*)(__right_value508=list$1sBlock$ph_operator_load_element(blocks_403,n_415))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value508, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        add_come_code(info,"}\n");
        n_415++;
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_405);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__194 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars_402, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_403, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__194;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_398;
struct list_item$1sBlock$ph* prev_it_399;
    it_398=self->head;
    while(    it_398!=((void*)0)    ) {
        prev_it_399=it_398;
        it_398=it_398->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_399, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_400;
struct list_item$1sBlock$ph* prev_it_401;
    it_400=self->head;
    while(    it_400!=((void*)0)    ) {
        prev_it_401=it_400;
        it_400=it_400->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_401, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_408;
struct sNode* __result_obj__183;
struct sNode* __result_obj__184;
struct sNode* result_409;
struct sNode* __result_obj__185;
result_408 = (void*)0;
result_409 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_408,0,sizeof(struct sNode*));
        __result_obj__183 = result_408;
        return __result_obj__183;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__184 = self->it->item;
        return __result_obj__184;
    }
    memset(&result_409,0,sizeof(struct sNode*));
    __result_obj__185 = result_409;
    return __result_obj__185;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_411;
struct sNode* __result_obj__186;
struct sNode* __result_obj__187;
struct sNode* result_412;
struct sNode* __result_obj__188;
result_411 = (void*)0;
result_412 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_411,0,sizeof(struct sNode*));
        __result_obj__186 = result_411;
        return __result_obj__186;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__187 = self->it->item;
        return __result_obj__187;
    }
    memset(&result_412,0,sizeof(struct sNode*));
    __result_obj__188 = result_412;
    return __result_obj__188;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_418;
int i_419;
struct sBlock* __result_obj__190;
struct sBlock* default_value_420;
struct sBlock* __result_obj__191;
default_value_420 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_418=self->head;
    i_419=0;
    while(    it_418!=((void*)0)    ) {
        if(        position==i_419        ) {
            __result_obj__190 = (struct sBlock*)come_increment_ref_count(it_418->item);
            come_call_finalizer(sBlock_finalize, __result_obj__190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__190;
        }
        it_418=it_418->next;
        i_419++;
    }
    memset(&default_value_420,0,sizeof(struct sBlock*));
    __result_obj__191 = (struct sBlock*)come_increment_ref_count(default_value_420);
    come_call_finalizer(sBlock_finalize, default_value_420, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__191;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_421;
int i_422;
struct sBlock* __result_obj__192;
struct sBlock* default_value_423;
struct sBlock* __result_obj__193;
default_value_423 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_421=self->head;
    i_422=0;
    while(    it_421!=((void*)0)    ) {
        if(        position==i_422        ) {
            __result_obj__192 = (struct sBlock*)come_increment_ref_count(it_421->item);
            come_call_finalizer(sBlock_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__192;
        }
        it_421=it_421->next;
        i_422++;
    }
    memset(&default_value_423,0,sizeof(struct sBlock*));
    __result_obj__193 = (struct sBlock*)come_increment_ref_count(default_value_423);
    come_call_finalizer(sBlock_finalize, default_value_423, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__193;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value509 = (void*)0;
struct sNode* __dec_obj161;
void* __right_value510 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj162;
struct sLambdaCall* __result_obj__195;
    ((struct sNodeBase*)(__right_value509=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value509, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj161=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj162=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj162,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__195 = (struct sLambdaCall*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLambdaCall_finalize, __result_obj__195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__195;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value511 = (void*)0;
char* __result_obj__196;
    __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value511=__builtin_string("sLambdaCall"))));
    (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__196;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_424;
struct list$1tuple2$2char$phsNode$ph$ph* params_425;
_Bool Value_426;
_Bool __result_obj__197;
void* __right_value512 = (void*)0;
struct CVALUE* come_value_427;
struct sType* lambda_type_428;
void* __right_value513 = (void*)0;
_Bool __result_obj__198;
void* __right_value514 = (void*)0;
struct sType* result_type_429;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct list$1CVALUE$ph* come_params_430;
void* __right_value517 = (void*)0;
_Bool __result_obj__199;
int i_431;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_432;
struct tuple2$2char$phsNode$ph* it_433;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_434=0;
struct sNode* node_435=0;
_Bool Value_436;
_Bool __result_obj__200;
void* __right_value518 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value519 = (void*)0;
struct sType* __dec_obj163;
void* __right_value520 = (void*)0;
_Bool _condtional_value_X17;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
_Bool _condtional_value_X18;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct buffer* buf_438;
int j_439;
struct list$1CVALUE$ph* o2_saved_440;
struct CVALUE* it_441;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct CVALUE* come_value2_442;
void* __right_value530 = (void*)0;
char* __dec_obj164;
void* __right_value531 = (void*)0;
struct sType* __dec_obj165;
_Bool __result_obj__201;
    node_424=(struct sNode*)come_increment_ref_count(self->node);
    params_425=self->params;
    Value_426=node_compile(node_424,info);
    if(    !Value_426    ) {
        __result_obj__197 = (_Bool)0;
        ((node_424) ? node_424 = come_decrement_ref_count(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__197;
    }
    else {
    }
    come_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_428=come_value_427->type;
    if(    lambda_type_428->mResultType==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value513=err_msg(info,"invalid lambda type")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value513, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__198 = (_Bool)1;
        ((node_424) ? node_424 = come_decrement_ref_count(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_427, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__198;
    }
    result_type_429=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_428->mResultType));
    result_type_429->mStatic=(_Bool)0;
    come_params_430=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1688, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_428->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_425)&&!lambda_type_428->mVarArgs    ) {
        ((struct tuple2$2int$bool$*)(__right_value517=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_428->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_425))));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value517, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__199 = (_Bool)1;
        ((node_424) ? node_424 = come_decrement_ref_count(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_427, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_429, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_430, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__199;
    }
    i_431=0;
    for(    o2_saved_432=(params_425),it_433=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_432))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_432))    ;    it_433=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_432))    ){
        multiple_assign_var11=it_433;
        label_434=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_435=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        Value_436=node_compile(node_435,info);
        if(        !Value_436        ) {
            __result_obj__200 = (_Bool)0;
            (label_434 = come_decrement_ref_count(label_434, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_435) ? node_435 = come_decrement_ref_count(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_424) ? node_424 = come_decrement_ref_count(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_427, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_429, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_430, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__200;
        }
        else {
        }
        come_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj163=come_value_437->type,
        come_value_437->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_437->type,info->generics_type,info));
        come_call_finalizer(sType_finalize, __dec_obj163,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        (_condtional_value_X17=(lambda_type_428->mVarArgs&&((struct sType*)(__right_value520=list$1sType$ph_operator_load_element(lambda_type_428->mParamTypes,i_431)))==((void*)0))),        come_call_finalizer(sType_finalize, __right_value520, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X17        ) {
        }
        else {
            check_assign_type(((char*)(__right_value522=xsprintf("calling param #\%s",((char*)(__right_value521=int_to_string(i_431)))))),((struct sType*)(__right_value523=list$1sType$ph_operator_load_element(lambda_type_428->mParamTypes,i_431))),come_value_437->type,come_value_437,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value523, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X18=(((struct sType*)(__right_value524=list$1sType$ph_operator_load_element(lambda_type_428->mParamTypes,i_431)))->mHeap&&come_value_437->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value524, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X18            ) {
                std_move(((struct sType*)(__right_value525=list$1sType$ph_operator_load_element(lambda_type_428->mParamTypes,i_431))),come_value_437->type,come_value_437,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value525, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params_430,(struct CVALUE*)come_increment_ref_count(come_value_437));
        i_431++;
        (label_434 = come_decrement_ref_count(label_434, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_435) ? node_435 = come_decrement_ref_count(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_437, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf_438=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1720, "struct buffer*"))));
    buffer_append_str(buf_438,"(");
    buffer_append_str(buf_438,come_value_427->c_value);
    buffer_append_str(buf_438,")");
    buffer_append_str(buf_438,"(");
    j_439=0;
    for(    o2_saved_440=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_430)),it_441=list$1CVALUE$ph_begin((o2_saved_440))    ;    !list$1CVALUE$ph_end((o2_saved_440))    ;    it_441=list$1CVALUE$ph_next((o2_saved_440))    ){
        buffer_append_str(buf_438,it_441->c_value);
        if(        j_439!=list$1CVALUE$ph_length(come_params_430)-1        ) {
            buffer_append_str(buf_438,",");
        }
        j_439++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_440, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_438,")");
    come_value2_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1739, "struct CVALUE*"))));
    __dec_obj164=come_value2_442->c_value,
    come_value2_442->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_438));
    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    if(    lambda_type_428->mResultType->mHeap    ) {
        append_object_to_right_values(come_value2_442,(struct sType*)come_increment_ref_count(lambda_type_428->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __dec_obj165=come_value2_442->type,
    come_value2_442->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_429));
    come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_442->type->mStatic=(_Bool)0;
    come_value2_442->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_442->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_442));
    __result_obj__201 = (_Bool)1;
    ((node_424) ? node_424 = come_decrement_ref_count(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_427, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_429, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_430, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_442, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__201;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value532 = (void*)0;
struct sType* __dec_obj166;
struct sVarArgTypeName* __result_obj__202;
    ((struct sNodeBase*)(__right_value532=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value532, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj166=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__202 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__202;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value533 = (void*)0;
char* __result_obj__203;
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value533=__builtin_string("sVarArgTypeName"))));
    (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_443;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct CVALUE* come_value_444;
void* __right_value536 = (void*)0;
char* __dec_obj167;
struct sType* __dec_obj168;
_Bool __result_obj__204;
    type_443=(struct sType*)come_increment_ref_count(self->type);
    come_value_444=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1776, "struct CVALUE*"))));
    __dec_obj167=come_value_444->c_value,
    come_value_444->c_value=(char*)come_increment_ref_count(make_type_name_string(type_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj168=come_value_444->type,
    come_value_444->type=(struct sType*)come_increment_ref_count(type_443);
    come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_444->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_444));
    __result_obj__204 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_443, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_444, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__204;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct list$1sType$ph* method_generics_types_445;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_446=0;
char* name_447=0;
_Bool err_448=0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_449;
_Bool _va_arg_450;
char* p_451;
int sline_452;
_Bool err_flag_453;
void* __right_value545 = (void*)0;
char* label_454;
void* __right_value546 = (void*)0;
char* __dec_obj169;
char* __dec_obj170;
_Bool no_comma_455;
_Bool in_fun_param_456;
void* __right_value547 = (void*)0;
struct sNode* node_457;
void* __right_value548 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct buffer* method_block_461;
int method_block_sline_462;
char* head_463;
void* __right_value554 = (void*)0;
char* tail_464;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct buffer* __dec_obj177;
int len_465;
void* __right_value557 = (void*)0;
char* mem_466;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value566 = (void*)0;
struct sNode* node_467;
void* __right_value567 = (void*)0;
struct sNode* __dec_obj183;
struct sNode* __result_obj__209;
    method_generics_types_445=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1790, "struct list$1sType$ph*"))));
    if(    *info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value539=err_msg(info,"unexpected source end")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value539, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else if(            *info->p==62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value540=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_446=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_447=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                err_448=multiple_assign_var12->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value540, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_448                ) {
                    ((struct tuple2$2int$bool$*)(__right_value541=err_msg(info,"invalid method generics paramtor type")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value541, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_445,(struct sType*)come_increment_ref_count(sType_clone(type_446)));
                come_call_finalizer(sType_finalize, type_446, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_447 = come_decrement_ref_count(name_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_449=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1828, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_450=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")    ) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1    ) {
        if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_451=info->p;
        sline_452=info->sline;
        err_flag_453=(_Bool)0;
        label_454=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95        ) {
            __dec_obj169=label_454,
            label_454=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            err_flag_453=(_Bool)1;
        }
        if(        err_flag_453==(_Bool)1&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj170=label_454,
            label_454=((void*)0);
            __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->p=p_451;
            info->sline=sline_452;
        }
        no_comma_455=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_456=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_457=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj171=node_457,
        node_457=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_457),info));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->no_comma=no_comma_455;
        info->in_fun_param=in_fun_param_456;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_449,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1876, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_454),(struct sNode*)come_increment_ref_count(node_457))));
        parse_sharp_v5(info);
        if(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_454 = come_decrement_ref_count(label_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_457) ? node_457 = come_decrement_ref_count(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (label_454 = come_decrement_ref_count(label_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_457) ? node_457 = come_decrement_ref_count(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->va_arg=_va_arg_450;
    parse_sharp_v5(info);
    method_block_461=((void*)0);
    method_block_sline_462=0;
    if(    *info->p==123    ) {
        head_463=info->p;
        method_block_sline_462=info->sline;
        ((char*)(__right_value554=skip_block(info,(_Bool)0)));
        (__right_value554 = come_decrement_ref_count(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        tail_464=info->p;
        __dec_obj177=method_block_461,
        method_block_461=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1906, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj177,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        len_465=tail_464-head_463;
        mem_466=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_465+1)), "05call.c", 1909, "char*"));
        memcpy(mem_466,head_463,len_465);
        mem_466[len_465]=0;
        buffer_append_str(method_block_461,mem_466);
        buffer_append_str(method_block_461,"\n");
        (mem_466 = come_decrement_ref_count(mem_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1919, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value559=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1919, "struct sFunCallNode*")),fun_name,params_449,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_445),(struct buffer*)come_increment_ref_count(method_block_461),method_block_sline_462,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_467=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunCallNode_finalize, __right_value559, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj183=node_467,
    node_467=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_467),info));
    (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    parse_sharp_v5(info);
    __result_obj__209 = (struct sNode*)come_increment_ref_count(node_467);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_445, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_467) ? node_467 = come_decrement_ref_count(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__209) ? __result_obj__209 = come_decrement_ref_count(__result_obj__209, ((struct sNode*)__result_obj__209)->finalize, ((struct sNode*)__result_obj__209)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__209;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value549 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_458;
struct tuple2$2char$phsNode$ph* __dec_obj172;
void* __right_value550 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_459;
struct tuple2$2char$phsNode$ph* __dec_obj173;
void* __right_value551 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_460;
struct tuple2$2char$phsNode$ph* __dec_obj174;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__205;
    if(    self->len==0    ) {
        litem_458=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value549=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1046, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_458->prev=((void*)0);
        litem_458->next=((void*)0);
        __dec_obj172=litem_458->item,
        litem_458->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj172,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_458;
        self->head=litem_458;
    }
    else if(    self->len==1    ) {
        litem_459=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value550=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1056, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_459->prev=self->head;
        litem_459->next=((void*)0);
        __dec_obj173=litem_459->item,
        litem_459->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj173,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_459;
        self->head->next=litem_459;
    }
    else {
        litem_460=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value551=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1066, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_460->prev=self->tail;
        litem_460->next=((void*)0);
        __dec_obj174=litem_460->item,
        litem_460->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj174,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_460;
        self->tail=litem_460;
    }
    self->len++;
    __result_obj__205 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__205;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj175;
struct sNode* __dec_obj176;
struct tuple2$2char$phsNode$ph* __result_obj__206;
    __dec_obj175=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj176=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__206 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__206;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__207;
void* __right_value560 = (void*)0;
struct sFunCallNode* result_468;
void* __right_value561 = (void*)0;
char* __dec_obj178;
void* __right_value562 = (void*)0;
char* __dec_obj179;
void* __right_value563 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj180;
void* __right_value564 = (void*)0;
struct list$1sType$ph* __dec_obj181;
void* __right_value565 = (void*)0;
struct buffer* __dec_obj182;
struct sFunCallNode* __result_obj__208;
    if(    self==(void*)0    ) {
        __result_obj__207 = (void*)0;
        return __result_obj__207;
    }
    result_468=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)    ) {
        result_468->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj178=result_468->sname,
        result_468->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_468->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __dec_obj179=result_468->fun_name,
        result_468->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj180=result_468->params,
        result_468->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj180,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __dec_obj181=result_468->method_generics_types,
        result_468->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj181,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __dec_obj182=result_468->method_block,
        result_468->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj182,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_468->method_block_sline=self->method_block_sline;
    }
    __result_obj__208 = result_468;
    come_call_finalizer(sFunCallNode_finalize, result_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value568 = (void*)0;
struct sNode* __result_obj__210;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    ((struct tuple2$2int$bool$*)(__right_value568=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value568, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    stackframe_v2();
    exit(3);
    __result_obj__210 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__210) ? __result_obj__210 = come_decrement_ref_count(__result_obj__210, ((struct sNode*)__result_obj__210)->finalize, ((struct sNode*)__result_obj__210)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__210;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sNode* _inf_value4;
struct sReturnNode* _inf_obj_value4;
void* __right_value575 = (void*)0;
struct sNode* __result_obj__213;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1942, "struct sNode");
    _inf_obj_value4=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value570=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1942, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sReturnNode_finalize;
    _inf_value4->clone=(void*)sReturnNode_clone;
    _inf_value4->compile=(void*)sReturnNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sReturnNode_kind;
    __result_obj__213 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value575=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __right_value570, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value575) ? __right_value575 = come_decrement_ref_count(__right_value575, ((struct sNode*)__right_value575)->finalize, ((struct sNode*)__right_value575)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__213) ? __result_obj__213 = come_decrement_ref_count(__result_obj__213, ((struct sNode*)__result_obj__213)->finalize, ((struct sNode*)__result_obj__213)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__213;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__211;
void* __right_value571 = (void*)0;
struct sReturnNode* result_469;
void* __right_value572 = (void*)0;
char* __dec_obj184;
void* __right_value573 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value574 = (void*)0;
char* __dec_obj186;
struct sReturnNode* __result_obj__212;
    if(    self==(void*)0    ) {
        __result_obj__211 = (void*)0;
        return __result_obj__211;
    }
    result_469=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)    ) {
        result_469->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj184=result_469->sname,
        result_469->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_469->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj185=result_469->value,
        result_469->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        __dec_obj186=result_469->value_source,
        result_469->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__212 = result_469;
    come_call_finalizer(sReturnNode_finalize, result_469, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__212;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value579 = (void*)0;
struct sNode* __result_obj__214;
char* head_470;
void* __right_value580 = (void*)0;
struct sNode* value_471;
char* tail_472;
void* __right_value581 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value585 = (void*)0;
struct sNode* __result_obj__215;
int nest_474;
char* head_475;
int head_sline_476;
int sline_real_477;
void* __right_value586 = (void*)0;
char* buf_478;
_Bool is_type_name__479;
_Bool is_special_word_481;
_Bool define_function_pointer_flag_482;
void* __right_value587 = (void*)0;
_Bool lambda_flag_483;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
char* word2_484;
_Bool fun_name_with_type_name_485;
void* __right_value590 = (void*)0;
char* word2_486;
_Bool call_method_generics_fun_call_487;
void* __right_value591 = (void*)0;
char* __dec_obj188;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
_Bool _condtional_value_X19;
int nest_494;
_Bool inline_asm_495;
void* __right_value598 = (void*)0;
char* __dec_obj189;
void* __right_value599 = (void*)0;
char* __dec_obj190;
void* __right_value600 = (void*)0;
char* __dec_obj191;
void* __right_value601 = (void*)0;
struct sNode* node_496;
struct sNode* __result_obj__224;
_Bool no_comma_497;
void* __right_value602 = (void*)0;
struct sNode* exp_498;
void* __right_value603 = (void*)0;
struct sNode* exp2_499;
void* __right_value604 = (void*)0;
struct sNode* __result_obj__225;
void* __right_value605 = (void*)0;
char* block_text_500;
char* contents_501;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sNode* _inf_value7;
struct sOutputNode* _inf_obj_value7;
void* __right_value611 = (void*)0;
struct sNode* __result_obj__228;
void* __right_value612 = (void*)0;
struct sNode* node_503;
struct sNode* __result_obj__229;
void* __right_value613 = (void*)0;
struct sNode* node_504;
struct sNode* __result_obj__230;
struct buffer* come_block_505;
int come_block_sline_506;
char* head_507;
void* __right_value614 = (void*)0;
char* tail_508;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct buffer* __dec_obj194;
int len_509;
void* __right_value617 = (void*)0;
char* mem_510;
char* head_511;
_Bool no_output_come_code_512;
void* __right_value618 = (void*)0;
char* tail_513;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct buffer* __dec_obj195;
int len_514;
void* __right_value621 = (void*)0;
char* mem_515;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* _inf_value8;
struct sComeCallNode* _inf_obj_value8;
void* __right_value627 = (void*)0;
struct sNode* node_516;
struct sNode* __result_obj__233;
struct buffer* come_block_518;
int come_block_sline_519;
void* __right_value628 = (void*)0;
struct sNode* node_520;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sNode* _inf_value9;
struct sComeJoinNode* _inf_obj_value9;
void* __right_value634 = (void*)0;
struct sNode* __result_obj__236;
int time_out_522;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct list$1sNode$ph* vars_523;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1sBlock$ph* blocks_524;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sBlock* else_block_525;
void* __right_value641 = (void*)0;
struct sBlock* __dec_obj200;
void* __right_value642 = (void*)0;
struct sNode* var_name_526;
void* __right_value643 = (void*)0;
struct sBlock* block_527;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value10;
struct sComePollNode* _inf_obj_value10;
void* __right_value696 = (void*)0;
struct sNode* __result_obj__267;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sNode* _inf_value11;
struct sFuncNode* _inf_obj_value11;
void* __right_value701 = (void*)0;
struct sNode* __result_obj__270;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* _inf_value12;
struct sWildCard* _inf_obj_value12;
void* __right_value706 = (void*)0;
struct sNode* __result_obj__273;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
void* __right_value711 = (void*)0;
struct sNode* __result_obj__276;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
void* __right_value716 = (void*)0;
struct sNode* __result_obj__279;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
void* __right_value721 = (void*)0;
struct sNode* __result_obj__282;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
void* __right_value726 = (void*)0;
struct sNode* __result_obj__285;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
void* __right_value731 = (void*)0;
struct sNode* __result_obj__288;
void* __right_value732 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_581=0;
char* name_582=0;
_Bool err_583=0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
void* __right_value738 = (void*)0;
struct sNode* __result_obj__291;
void* __right_value739 = (void*)0;
struct sNode* node_585;
struct sNode* __result_obj__292;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct buffer* buf2_586;
void* __right_value742 = (void*)0;
char* word_587;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct list$1sNode$ph* exps_588;
void* __right_value745 = (void*)0;
struct sNode* exp_589;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
void* __right_value754 = (void*)0;
struct sNode* __result_obj__295;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct buffer* fun_name_591;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sType* type_592;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sClass* klass_599;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sType* __dec_obj232;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
char* buf2_600;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sNode* node_601;
struct sNode* __result_obj__304;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct buffer* fun_name_602;
void* __right_value773 = (void*)0;
char* buf2_603;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* node_604;
struct sNode* __result_obj__305;
void* __right_value776 = (void*)0;
struct sNode* node_605;
struct sNode* __result_obj__306;
void* __right_value777 = (void*)0;
struct sNode* node_606;
struct sNode* __result_obj__307;
void* __right_value778 = (void*)0;
struct sNode* node_607;
struct sNode* __result_obj__308;
void* __right_value779 = (void*)0;
struct sNode* node_608;
struct sNode* __result_obj__309;
void* __right_value780 = (void*)0;
struct sNode* __result_obj__310;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)    ) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59        ) {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1955, "struct sNode");
            _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value578=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1955, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sReturnNode_finalize;
            _inf_value5->clone=(void*)sReturnNode_clone;
            _inf_value5->compile=(void*)sReturnNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sReturnNode_kind;
            __result_obj__214 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value579=_inf_value5)));
            come_call_finalizer(sReturnNode_finalize, __right_value578, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value579) ? __right_value579 = come_decrement_ref_count(__right_value579, ((struct sNode*)__right_value579)->finalize, ((struct sNode*)__right_value579)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__214) ? __result_obj__214 = come_decrement_ref_count(__result_obj__214, ((struct sNode*)__result_obj__214)->finalize, ((struct sNode*)__result_obj__214)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__214;
        }
        else {
            head_470=info->p;
            value_471=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_472=info->p;
            __dec_obj187=value_471,
            value_471=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_471),info));
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            char buf_473[tail_472-head_470+1];
            memset(&buf_473, 0, sizeof(char)            *(tail_472-head_470+1)            );
            memcpy(buf_473,head_470,tail_472-head_470);
            buf_473[tail_472-head_470]=0;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1967, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value584=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1967, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_471),(char*)come_increment_ref_count(__builtin_string(buf_473)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result_obj__215 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value585=_inf_value6)));
            ((value_471) ? value_471 = come_decrement_ref_count(value_471, ((struct sNode*)value_471)->finalize, ((struct sNode*)value_471)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value584, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value585) ? __right_value585 = come_decrement_ref_count(__right_value585, ((struct sNode*)__right_value585)->finalize, ((struct sNode*)__right_value585)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__215) ? __result_obj__215 = come_decrement_ref_count(__result_obj__215, ((struct sNode*)__result_obj__215)->finalize, ((struct sNode*)__result_obj__215)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__215;
            ((value_471) ? value_471 = come_decrement_ref_count(value_471, ((struct sNode*)value_471)->finalize, ((struct sNode*)value_471)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42    ) {
        nest_474=0;
        while(        1        ) {
            if(            *info->p==47&&*(info->p+1)==42            ) {
                info->p+=2;
                nest_474++;
            }
            else if(            *info->p==42&&*(info->p+1)==47            ) {
                info->p+=2;
                nest_474--;
                if(                nest_474==0                ) {
                    break;
                }
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47    ) {
        info->p+=2;
        while(        1        ) {
            if(            *info->p==10            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0            ) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))    ) {
        head_475=info->p;
        head_sline_476=info->sline;
        sline_real_477=info->sline_real;
        info->sline_real=info->sline;
        buf_478=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__479=is_type_name(buf_478,info);
        static char* is_special_word_array_480[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_481=charppa_contained(is_special_word_array_480,19,buf_478);
        define_function_pointer_flag_482=(_Bool)0;
        if(        !is_special_word_481&&*info->p==40&&*(info->p+1)!=42        ) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value587=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value587, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_482=(_Bool)1;
                }
            }
            info->p=head_475;
            info->sline=head_sline_476;
        }
        lambda_flag_483=(_Bool)0;
        if(        !is_special_word_481&&is_type_name__479        ) {
            info->p=head_475;
            info->sline=head_sline_476;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value588=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value588, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            word2_484=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_484,"lambda")            ) {
                lambda_flag_483=(_Bool)1;
            }
            info->p=head_475;
            info->sline=head_sline_476;
            (word2_484 = come_decrement_ref_count(word2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        fun_name_with_type_name_485=(_Bool)0;
        if(        !is_special_word_481        ) {
            info->p=head_475;
            info->sline=head_sline_476;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word2_486=(char*)come_increment_ref_count(parse_word(info));
                (word2_486 = come_decrement_ref_count(word2_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95                ) {
                    fun_name_with_type_name_485=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_475;
            info->sline=head_sline_476;
        }
        call_method_generics_fun_call_487=(_Bool)0;
        {
            info->p=head_475;
            info->sline=head_sline_476;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj188=buf_478,
                buf_478=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X19=(!is_type_name(buf_478,info)&&((struct sVar*)(__right_value594=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value593=__builtin_string(buf_478))))))==((void*)0)&&((struct sVar*)(__right_value597=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value596=__builtin_string(buf_478))))))==((void*)0)&&*info->p==60)),            (__right_value592 = come_decrement_ref_count(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value593 = come_decrement_ref_count(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sVar_finalize, __right_value594, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            (__right_value595 = come_decrement_ref_count(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value596 = come_decrement_ref_count(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sVar_finalize, __right_value597, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X19            ) {
                nest_494=0;
                while(                *info->p                ) {
                    if(                    *info->p==60                    ) {
                        info->p++;
                        nest_494++;
                    }
                    else if(                    *info->p==62                    ) {
                        info->p++;
                        if(                        nest_494==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40                ) {
                    call_method_generics_fun_call_487=(_Bool)1;
                }
            }
            info->p=head_475;
            info->sline=head_sline_476;
        }
        inline_asm_495=(_Bool)0;
        {
            info->p=head_475;
            info->sline=head_sline_476;
            __dec_obj189=buf_478,
            buf_478=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            string_operator_equals(buf_478,"asm")||string_operator_equals(buf_478,"__asm")||string_operator_equals(buf_478,"__asm__")            ) {
                if(                *info->p==40                ) {
                    inline_asm_495=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        __dec_obj190=buf_478,
                        buf_478=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        *info->p==40                        ) {
                            inline_asm_495=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_475;
            info->sline=head_sline_476;
        }
        parse_sharp_v5(info);
        __dec_obj191=buf_478,
        buf_478=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_483        ) {
            info->p=head_475;
            info->sline=head_sline_476;
            node_496=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_477;
            __result_obj__224 = (struct sNode*)come_increment_ref_count(node_496);
            ((node_496) ? node_496 = come_decrement_ref_count(node_496, ((struct sNode*)node_496)->finalize, ((struct sNode*)node_496)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__224) ? __result_obj__224 = come_decrement_ref_count(__result_obj__224, ((struct sNode*)__result_obj__224)->finalize, ((struct sNode*)__result_obj__224)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__224;
            ((node_496) ? node_496 = come_decrement_ref_count(node_496, ((struct sNode*)node_496)->finalize, ((struct sNode*)node_496)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_478,"_Static_assert")||string_operator_equals(buf_478,"static_assert"))&&*info->p==40        ) {
            expected_next_character(40,info);
            no_comma_497=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_498=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_497;
            expected_next_character(44,info);
            exp2_499=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__225 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value604=static_assert_node((struct sNode*)come_increment_ref_count(exp_498),(struct sNode*)come_increment_ref_count(exp2_499),info))));
            ((exp_498) ? exp_498 = come_decrement_ref_count(exp_498, ((struct sNode*)exp_498)->finalize, ((struct sNode*)exp_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2_499) ? exp2_499 = come_decrement_ref_count(exp2_499, ((struct sNode*)exp2_499)->finalize, ((struct sNode*)exp2_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__right_value604) ? __right_value604 = come_decrement_ref_count(__right_value604, ((struct sNode*)__right_value604)->finalize, ((struct sNode*)__right_value604)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__225) ? __result_obj__225 = come_decrement_ref_count(__result_obj__225, ((struct sNode*)__result_obj__225)->finalize, ((struct sNode*)__result_obj__225)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__225;
            ((exp_498) ? exp_498 = come_decrement_ref_count(exp_498, ((struct sNode*)exp_498)->finalize, ((struct sNode*)exp_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2_499) ? exp2_499 = come_decrement_ref_count(exp2_499, ((struct sNode*)exp2_499)->finalize, ((struct sNode*)exp2_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_478,"output")&&*info->p==123        ) {
            block_text_500=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
            contents_501=(char*)come_increment_ref_count(block_text_500);
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2205, "struct sNode");
            _inf_obj_value7=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value607=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2205, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_501),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sOutputNode_finalize;
            _inf_value7->clone=(void*)sOutputNode_clone;
            _inf_value7->compile=(void*)sOutputNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sOutputNode_kind;
            __result_obj__228 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value611=_inf_value7)));
            (block_text_500 = come_decrement_ref_count(block_text_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents_501 = come_decrement_ref_count(contents_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sOutputNode_finalize, __right_value607, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value611) ? __right_value611 = come_decrement_ref_count(__right_value611, ((struct sNode*)__right_value611)->finalize, ((struct sNode*)__right_value611)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__228) ? __result_obj__228 = come_decrement_ref_count(__result_obj__228, ((struct sNode*)__result_obj__228)->finalize, ((struct sNode*)__result_obj__228)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__228;
            (block_text_500 = come_decrement_ref_count(block_text_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents_501 = come_decrement_ref_count(contents_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        string_operator_equals(buf_478,"extern")        ) {
            node_503=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__229 = (struct sNode*)come_increment_ref_count(node_503);
            ((node_503) ? node_503 = come_decrement_ref_count(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__229) ? __result_obj__229 = come_decrement_ref_count(__result_obj__229, ((struct sNode*)__result_obj__229)->finalize, ((struct sNode*)__result_obj__229)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__229;
            ((node_503) ? node_503 = come_decrement_ref_count(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_478,"string")||string_operator_equals(buf_478,"wstring"))&&*info->p==40        ) {
            node_504=(struct sNode*)come_increment_ref_count(parse_function_call(buf_478,info,(_Bool)0));
            info->sline_real=sline_real_477;
            __result_obj__230 = (struct sNode*)come_increment_ref_count(node_504);
            ((node_504) ? node_504 = come_decrement_ref_count(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__230) ? __result_obj__230 = come_decrement_ref_count(__result_obj__230, ((struct sNode*)__result_obj__230)->finalize, ((struct sNode*)__result_obj__230)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__230;
            ((node_504) ? node_504 = come_decrement_ref_count(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_478,"come")        ) {
            come_block_505=((void*)0);
            come_block_sline_506=0;
            if(            *info->p==123            ) {
                head_507=info->p;
                come_block_sline_506=info->sline;
                ((char*)(__right_value614=skip_block(info,(_Bool)0)));
                (__right_value614 = come_decrement_ref_count(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                tail_508=info->p;
                __dec_obj194=come_block_505,
                come_block_505=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2230, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj194,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len_509=tail_508-head_507;
                mem_510=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_509+1)), "05call.c", 2233, "char*"));
                memcpy(mem_510,head_507,len_509);
                mem_510[len_509]=0;
                buffer_append_str(come_block_505,mem_510);
                buffer_append_str(come_block_505,"\n");
                (mem_510 = come_decrement_ref_count(mem_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                head_511=info->p;
                come_block_sline_506=info->sline;
                no_output_come_code_512=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value618=expression_v13(info)));
                ((__right_value618) ? __right_value618 = come_decrement_ref_count(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_512;
                tail_513=info->p;
                __dec_obj195=come_block_505,
                come_block_505=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2251, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj195,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len_514=tail_513-head_511;
                mem_515=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_514+1)), "05call.c", 2254, "char*"));
                memcpy(mem_515,head_511,len_514);
                mem_515[len_514]=0;
                buffer_append_str(come_block_505,"{");
                buffer_append_str(come_block_505,mem_515);
                buffer_append_str(come_block_505,"; }");
                buffer_append_str(come_block_505,"return (void*)0;\n}");
                buffer_append_str(come_block_505,"\n");
                (mem_515 = come_decrement_ref_count(mem_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2265, "struct sNode");
            _inf_obj_value8=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value623=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2265, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_505),come_block_sline_506,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sComeCallNode_finalize;
            _inf_value8->clone=(void*)sComeCallNode_clone;
            _inf_value8->compile=(void*)sComeCallNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sComeCallNode_terminated;
            _inf_value8->kind=(void*)sComeCallNode_kind;
            node_516=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer(sComeCallNode_finalize, __right_value623, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_477;
            __result_obj__233 = (struct sNode*)come_increment_ref_count(node_516);
            come_call_finalizer(buffer_finalize, come_block_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_516) ? node_516 = come_decrement_ref_count(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__233) ? __result_obj__233 = come_decrement_ref_count(__result_obj__233, ((struct sNode*)__result_obj__233)->finalize, ((struct sNode*)__result_obj__233)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__233;
            come_call_finalizer(buffer_finalize, come_block_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_516) ? node_516 = come_decrement_ref_count(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_478,"come_join")&&*info->p==40        ) {
            come_block_518=((void*)0);
            come_block_sline_519=0;
            expected_next_character(40,info);
            node_520=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_477;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2279, "struct sNode");
            _inf_obj_value9=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value630=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2279, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_520),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeJoinNode_finalize;
            _inf_value9->clone=(void*)sComeJoinNode_clone;
            _inf_value9->compile=(void*)sComeJoinNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeJoinNode_terminated;
            _inf_value9->kind=(void*)sComeJoinNode_kind;
            __result_obj__236 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value634=_inf_value9)));
            come_call_finalizer(buffer_finalize, come_block_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_520) ? node_520 = come_decrement_ref_count(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComeJoinNode_finalize, __right_value630, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value634) ? __right_value634 = come_decrement_ref_count(__right_value634, ((struct sNode*)__right_value634)->finalize, ((struct sNode*)__right_value634)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__236) ? __result_obj__236 = come_decrement_ref_count(__result_obj__236, ((struct sNode*)__result_obj__236)->finalize, ((struct sNode*)__result_obj__236)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__236;
            come_call_finalizer(buffer_finalize, come_block_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_520) ? node_520 = come_decrement_ref_count(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_478,"come_poll")&&(*info->p==40||*info->p==123)        ) {
            time_out_522=1;
            if(            *info->p==40            ) {
                info->p++;
                while(                xisdigit(*info->p)                ) {
                    time_out_522=time_out_522*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_523=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2297, "struct list$1sNode$ph*"))));
            blocks_524=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2298, "struct list$1sBlock$ph*"))));
            else_block_525=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2299, "struct sBlock*"))));
            while(            1            ) {
                if(                memcmp(info->p,"else",strlen("else"))==0                ) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj200=else_block_525,
                    else_block_525=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj200,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    if(                    *info->p==125                    ) {
                        break;
                    }
                }
                else {
                    var_name_526=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_527=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_523,(struct sNode*)come_increment_ref_count(var_name_526));
                    list$1sBlock$ph_add(blocks_524,(struct sBlock*)come_increment_ref_count(block_527));
                    if(                    *info->p==125                    ) {
                        ((var_name_526) ? var_name_526 = come_decrement_ref_count(var_name_526, ((struct sNode*)var_name_526)->finalize, ((struct sNode*)var_name_526)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(sBlock_finalize, block_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    ((var_name_526) ? var_name_526 = come_decrement_ref_count(var_name_526, ((struct sNode*)var_name_526)->finalize, ((struct sNode*)var_name_526)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, block_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_477;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2329, "struct sNode");
            _inf_obj_value10=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value648=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2329, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_523),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_524),(struct sBlock*)come_increment_ref_count(else_block_525),time_out_522,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComePollNode_finalize;
            _inf_value10->clone=(void*)sComePollNode_clone;
            _inf_value10->compile=(void*)sComePollNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComePollNode_terminated;
            _inf_value10->kind=(void*)sComePollNode_kind;
            __result_obj__267 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value696=_inf_value10)));
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_523, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_524, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block_525, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComePollNode_finalize, __right_value648, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value696) ? __right_value696 = come_decrement_ref_count(__right_value696, ((struct sNode*)__right_value696)->finalize, ((struct sNode*)__right_value696)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__267) ? __result_obj__267 = come_decrement_ref_count(__result_obj__267, ((struct sNode*)__result_obj__267)->finalize, ((struct sNode*)__result_obj__267)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__267;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_523, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_524, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block_525, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(buf_478,"__func__")||string_operator_equals(buf_478,"__FUNCTION__")        ) {
            info->sline_real=sline_real_477;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2334, "struct sNode");
            _inf_obj_value11=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value698=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2334, "struct sFuncNode*")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFuncNode_finalize;
            _inf_value11->clone=(void*)sFuncNode_clone;
            _inf_value11->compile=(void*)sFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFuncNode_kind;
            __result_obj__270 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value701=_inf_value11)));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFuncNode_finalize, __right_value698, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value701) ? __right_value701 = come_decrement_ref_count(__right_value701, ((struct sNode*)__right_value701)->finalize, ((struct sNode*)__right_value701)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__270) ? __result_obj__270 = come_decrement_ref_count(__result_obj__270, ((struct sNode*)__result_obj__270)->finalize, ((struct sNode*)__result_obj__270)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__270;
        }
        else if(        !gComeC&&string_operator_equals(buf_478,"wildcard")        ) {
            info->sline_real=sline_real_477;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2338, "struct sNode");
            _inf_obj_value12=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value703=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2338, "struct sWildCard*")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sWildCard_finalize;
            _inf_value12->clone=(void*)sWildCard_clone;
            _inf_value12->compile=(void*)sWildCard_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sWildCard_kind;
            __result_obj__273 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value706=_inf_value12)));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sWildCard_finalize, __right_value703, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value706) ? __right_value706 = come_decrement_ref_count(__right_value706, ((struct sNode*)__right_value706)->finalize, ((struct sNode*)__right_value706)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__273) ? __result_obj__273 = come_decrement_ref_count(__result_obj__273, ((struct sNode*)__result_obj__273)->finalize, ((struct sNode*)__result_obj__273)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__273;
        }
        else if(        string_operator_equals(buf_478,"__line__")||string_operator_equals(buf_478,"__LINE__")        ) {
            info->sline_real=sline_real_477;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2342, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value708=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2342, "struct sLineNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            __result_obj__276 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value711=_inf_value13)));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sLineNode_finalize, __right_value708, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value711) ? __right_value711 = come_decrement_ref_count(__right_value711, ((struct sNode*)__right_value711)->finalize, ((struct sNode*)__right_value711)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__276) ? __result_obj__276 = come_decrement_ref_count(__result_obj__276, ((struct sNode*)__result_obj__276)->finalize, ((struct sNode*)__result_obj__276)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__276;
        }
        else if(        string_operator_equals(buf_478,"__sname__")        ) {
            info->sline_real=sline_real_477;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2346, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value713=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2346, "struct sSNameNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            __result_obj__279 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value716=_inf_value14)));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sSNameNode_finalize, __right_value713, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value716) ? __right_value716 = come_decrement_ref_count(__right_value716, ((struct sNode*)__right_value716)->finalize, ((struct sNode*)__right_value716)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__279) ? __result_obj__279 = come_decrement_ref_count(__result_obj__279, ((struct sNode*)__result_obj__279)->finalize, ((struct sNode*)__result_obj__279)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__279;
        }
        else if(        string_operator_equals(buf_478,"__caller_func__")        ) {
            info->sline_real=sline_real_477;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2350, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value718=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2350, "struct sCallerFuncNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            __result_obj__282 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value721=_inf_value15)));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value718, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value721) ? __right_value721 = come_decrement_ref_count(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__282) ? __result_obj__282 = come_decrement_ref_count(__result_obj__282, ((struct sNode*)__result_obj__282)->finalize, ((struct sNode*)__result_obj__282)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__282;
        }
        else if(        string_operator_equals(buf_478,"__caller_line__")        ) {
            info->sline_real=sline_real_477;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2354, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value723=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2354, "struct sCallerLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            __result_obj__285 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value726=_inf_value16)));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerLineNode_finalize, __right_value723, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value726) ? __right_value726 = come_decrement_ref_count(__right_value726, ((struct sNode*)__right_value726)->finalize, ((struct sNode*)__right_value726)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__285) ? __result_obj__285 = come_decrement_ref_count(__result_obj__285, ((struct sNode*)__result_obj__285)->finalize, ((struct sNode*)__result_obj__285)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__285;
        }
        else if(        string_operator_equals(buf_478,"__caller_sname__")        ) {
            info->sline_real=sline_real_477;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2358, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value728=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2358, "struct sCallerSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            __result_obj__288 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value731=_inf_value17)));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value728, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value731) ? __right_value731 = come_decrement_ref_count(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__288) ? __result_obj__288 = come_decrement_ref_count(__result_obj__288, ((struct sNode*)__result_obj__288)->finalize, ((struct sNode*)__result_obj__288)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__288;
        }
        else if(        info->va_arg&&is_type_name(buf_478,info)        ) {
            info->p=head_475;
            info->sline=head_sline_476;
            multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value732=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_581=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_582=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_583=multiple_assign_var13->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value732, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_477;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2367, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value734=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2367, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_581),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            __result_obj__291 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value738=_inf_value18)));
            come_call_finalizer(sType_finalize, type_581, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_582 = come_decrement_ref_count(name_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value734, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value738) ? __right_value738 = come_decrement_ref_count(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__291) ? __result_obj__291 = come_decrement_ref_count(__result_obj__291, ((struct sNode*)__result_obj__291)->finalize, ((struct sNode*)__result_obj__291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__291;
            come_call_finalizer(sType_finalize, type_581, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_582 = come_decrement_ref_count(name_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        string_operator_equals(buf_478,"sizeof")||string_operator_equals(buf_478,"_Alignof")||string_operator_equals(buf_478,"_Alignas")||string_operator_equals(buf_478,"__alignof__")        ) {
            node_585=(struct sNode*)come_increment_ref_count(string_node_v21(buf_478,head_475,head_sline_476,info));
            info->sline_real=sline_real_477;
            __result_obj__292 = (struct sNode*)come_increment_ref_count(node_585);
            ((node_585) ? node_585 = come_decrement_ref_count(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__292) ? __result_obj__292 = come_decrement_ref_count(__result_obj__292, ((struct sNode*)__result_obj__292)->finalize, ((struct sNode*)__result_obj__292)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__292;
            ((node_585) ? node_585 = come_decrement_ref_count(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        inline_asm_495        ) {
            buf2_586=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2376, "struct buffer*"))));
            if(            *info->p!=40            ) {
                word_587=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_586,word_587);
                (word_587 = come_decrement_ref_count(word_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_586,40);
            exps_588=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2387, "struct list$1sNode$ph*"))));
            while(            (_Bool)1            ) {
                if(                *info->p==40                ) {
                    buffer_append_char(buf2_586,40);
                    info->p++;
                    exp_589=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_588,(struct sNode*)come_increment_ref_count(exp_589));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_586,41);
                    ((exp_589) ? exp_589 = come_decrement_ref_count(exp_589, ((struct sNode*)exp_589)->finalize, ((struct sNode*)exp_589)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else if(                *info->p==41                ) {
                    buffer_append_char(buf2_586,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10                ) {
                    info->sline++;
                    buffer_append_char(buf2_586,*info->p);
                    info->p++;
                }
                else if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value746=err_msg(info,"invalid source end at inline assembler")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value746, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_586,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_477;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2424, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value749=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2424, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_586)),(struct list$1sNode$ph*)come_increment_ref_count(exps_588),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            __result_obj__295 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value754=_inf_value19)));
            come_call_finalizer(buffer_finalize, buf2_586, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps_588, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sInlineAssembler_finalize, __right_value749, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value754) ? __right_value754 = come_decrement_ref_count(__right_value754, ((struct sNode*)__right_value754)->finalize, ((struct sNode*)__right_value754)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__295) ? __result_obj__295 = come_decrement_ref_count(__result_obj__295, ((struct sNode*)__result_obj__295)->finalize, ((struct sNode*)__result_obj__295)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__295;
            come_call_finalizer(buffer_finalize, buf2_586, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps_588, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        fun_name_with_type_name_485        ) {
            fun_name_591=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2427, "struct buffer*"))));
            buffer_append_str(fun_name_591,buf_478);
            type_592=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value759=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value758=buffer_to_string(fun_name_591))))))));
            (__right_value757 = come_decrement_ref_count(__right_value757, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value759, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            type_592==((void*)0)            ) {
                klass_599=((struct sClass*)(__right_value763=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value762=buffer_to_string(fun_name_591))))));
                (__right_value761 = come_decrement_ref_count(__right_value761, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value762 = come_decrement_ref_count(__right_value762, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value763, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                klass_599                ) {
                    __dec_obj232=type_592,
                    type_592=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2437, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_478)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj232,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value767=err_msg(info,"null type(%s)",buf_478)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value767, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_592->mClass->mStruct==(_Bool)0                ) {
                    buffer_append_str(fun_name_591,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_591,"_");
            buf2_600=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_591,buf2_600);
            node_601=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value769=buffer_to_string(fun_name_591))),info,(_Bool)0));
            (__right_value769 = come_decrement_ref_count(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real_477;
            __result_obj__304 = (struct sNode*)come_increment_ref_count(node_601);
            come_call_finalizer(buffer_finalize, fun_name_591, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_592, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_600 = come_decrement_ref_count(buf2_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_601) ? node_601 = come_decrement_ref_count(node_601, ((struct sNode*)node_601)->finalize, ((struct sNode*)node_601)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__304;
            come_call_finalizer(buffer_finalize, fun_name_591, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_592, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_600 = come_decrement_ref_count(buf2_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_601) ? node_601 = come_decrement_ref_count(node_601, ((struct sNode*)node_601)->finalize, ((struct sNode*)node_601)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_602=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2472, "struct buffer*"))));
            buffer_append_str(fun_name_602,buf_478);
            buffer_append_str(fun_name_602,"_");
            buf2_603=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_602,buf2_603);
            node_604=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value774=buffer_to_string(fun_name_602))),info,(_Bool)0));
            (__right_value774 = come_decrement_ref_count(__right_value774, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real_477;
            __result_obj__305 = (struct sNode*)come_increment_ref_count(node_604);
            come_call_finalizer(buffer_finalize, fun_name_602, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_603 = come_decrement_ref_count(buf2_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_604) ? node_604 = come_decrement_ref_count(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__305) ? __result_obj__305 = come_decrement_ref_count(__result_obj__305, ((struct sNode*)__result_obj__305)->finalize, ((struct sNode*)__result_obj__305)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__305;
            come_call_finalizer(buffer_finalize, fun_name_602, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_603 = come_decrement_ref_count(buf2_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_604) ? node_604 = come_decrement_ref_count(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_487        ) {
            node_605=(struct sNode*)come_increment_ref_count(parse_function_call(buf_478,info,(_Bool)0));
            info->sline_real=sline_real_477;
            __result_obj__306 = (struct sNode*)come_increment_ref_count(node_605);
            ((node_605) ? node_605 = come_decrement_ref_count(node_605, ((struct sNode*)node_605)->finalize, ((struct sNode*)node_605)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__306;
            ((node_605) ? node_605 = come_decrement_ref_count(node_605, ((struct sNode*)node_605)->finalize, ((struct sNode*)node_605)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !is_special_word_481&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__479)        ) {
            node_606=(struct sNode*)come_increment_ref_count(parse_function_call(buf_478,info,(_Bool)0));
            info->sline_real=sline_real_477;
            __result_obj__307 = (struct sNode*)come_increment_ref_count(node_606);
            ((node_606) ? node_606 = come_decrement_ref_count(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__307;
            ((node_606) ? node_606 = come_decrement_ref_count(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            node_607=(struct sNode*)come_increment_ref_count(string_node_v21(buf_478,head_475,head_sline_476,info));
            info->sline_real=sline_real_477;
            __result_obj__308 = (struct sNode*)come_increment_ref_count(node_607);
            ((node_607) ? node_607 = come_decrement_ref_count(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__308) ? __result_obj__308 = come_decrement_ref_count(__result_obj__308, ((struct sNode*)__result_obj__308)->finalize, ((struct sNode*)__result_obj__308)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__308;
            ((node_607) ? node_607 = come_decrement_ref_count(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (buf_478 = come_decrement_ref_count(buf_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        node_608=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__309 = (struct sNode*)come_increment_ref_count(node_608);
        ((node_608) ? node_608 = come_decrement_ref_count(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__309;
        ((node_608) ? node_608 = come_decrement_ref_count(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    ((struct tuple2$2int$bool$*)(__right_value780=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value780, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__310 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__310) ? __result_obj__310 = come_decrement_ref_count(__result_obj__310, ((struct sNode*)__result_obj__310)->finalize, ((struct sNode*)__result_obj__310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__310;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_488;
unsigned int hash_489;
unsigned int it_490;
struct sVar* __result_obj__216;
struct sVar* __result_obj__217;
struct sVar* __result_obj__218;
struct sVar* __result_obj__219;
default_value_488 = (void*)0;
    memset(&default_value_488,0,sizeof(struct sVar*));
    hash_489=string_get_hash_key(((char*)key))%self->size;
    it_490=hash_489;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_490]        ) {
            if(            string_equals(self->keys[it_490],key)            ) {
                __result_obj__216 = (struct sVar*)come_increment_ref_count(self->items[it_490]);
                come_call_finalizer(sVar_finalize, default_value_488, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__216;
            }
            it_490++;
            if(            it_490>=self->size            ) {
                it_490=0;
            }
            else if(            it_490==hash_489            ) {
                __result_obj__217 = (struct sVar*)come_increment_ref_count(default_value_488);
                come_call_finalizer(sVar_finalize, default_value_488, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__217;
            }
        }
        else {
            __result_obj__218 = (struct sVar*)come_increment_ref_count(default_value_488);
            come_call_finalizer(sVar_finalize, default_value_488, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__218;
        }
    }
    __result_obj__219 = (struct sVar*)come_increment_ref_count(default_value_488);
    come_call_finalizer(sVar_finalize, default_value_488, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__219;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_491;
unsigned int hash_492;
unsigned int it_493;
struct sVar* __result_obj__220;
struct sVar* __result_obj__221;
struct sVar* __result_obj__222;
struct sVar* __result_obj__223;
default_value_491 = (void*)0;
    memset(&default_value_491,0,sizeof(struct sVar*));
    hash_492=string_get_hash_key(((char*)key))%self->size;
    it_493=hash_492;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_493]        ) {
            if(            string_equals(self->keys[it_493],key)            ) {
                __result_obj__220 = (struct sVar*)come_increment_ref_count(self->items[it_493]);
                come_call_finalizer(sVar_finalize, default_value_491, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__220;
            }
            it_493++;
            if(            it_493>=self->size            ) {
                it_493=0;
            }
            else if(            it_493==hash_492            ) {
                __result_obj__221 = (struct sVar*)come_increment_ref_count(default_value_491);
                come_call_finalizer(sVar_finalize, default_value_491, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__221;
            }
        }
        else {
            __result_obj__222 = (struct sVar*)come_increment_ref_count(default_value_491);
            come_call_finalizer(sVar_finalize, default_value_491, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__222;
        }
    }
    __result_obj__223 = (struct sVar*)come_increment_ref_count(default_value_491);
    come_call_finalizer(sVar_finalize, default_value_491, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__223;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__226;
void* __right_value608 = (void*)0;
struct sOutputNode* result_502;
void* __right_value609 = (void*)0;
char* __dec_obj192;
void* __right_value610 = (void*)0;
char* __dec_obj193;
struct sOutputNode* __result_obj__227;
    if(    self==(void*)0    ) {
        __result_obj__226 = (void*)0;
        return __result_obj__226;
    }
    result_502=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)    ) {
        result_502->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj192=result_502->sname,
        result_502->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_502->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        __dec_obj193=result_502->contents,
        result_502->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__227 = result_502;
    come_call_finalizer(sOutputNode_finalize, result_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__227;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__231;
void* __right_value624 = (void*)0;
struct sComeCallNode* result_517;
void* __right_value625 = (void*)0;
char* __dec_obj196;
void* __right_value626 = (void*)0;
struct buffer* __dec_obj197;
struct sComeCallNode* __result_obj__232;
    if(    self==(void*)0    ) {
        __result_obj__231 = (void*)0;
        return __result_obj__231;
    }
    result_517=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)    ) {
        result_517->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj196=result_517->sname,
        result_517->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_517->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        __dec_obj197=result_517->come_block,
        result_517->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer(buffer_finalize, __dec_obj197,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_517->come_block_sline=self->come_block_sline;
    }
    __result_obj__232 = result_517;
    come_call_finalizer(sComeCallNode_finalize, result_517, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__232;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__234;
void* __right_value631 = (void*)0;
struct sComeJoinNode* result_521;
void* __right_value632 = (void*)0;
char* __dec_obj198;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj199;
struct sComeJoinNode* __result_obj__235;
    if(    self==(void*)0    ) {
        __result_obj__234 = (void*)0;
        return __result_obj__234;
    }
    result_521=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)    ) {
        result_521->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj198=result_521->sname,
        result_521->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_521->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj199=result_521->node,
        result_521->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__235 = result_521;
    come_call_finalizer(sComeJoinNode_finalize, result_521, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__235;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__237;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__237 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__237;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value644 = (void*)0;
struct list_item$1sBlock$ph* litem_528;
struct sBlock* __dec_obj201;
void* __right_value645 = (void*)0;
struct list_item$1sBlock$ph* litem_529;
struct sBlock* __dec_obj202;
void* __right_value646 = (void*)0;
struct list_item$1sBlock$ph* litem_530;
struct sBlock* __dec_obj203;
struct list$1sBlock$ph* __result_obj__238;
    if(    self->len==0    ) {
        litem_528=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value644=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 976, "struct list_item$1sBlock$ph*"))));
        litem_528->prev=((void*)0);
        litem_528->next=((void*)0);
        __dec_obj201=litem_528->item,
        litem_528->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj201,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_528;
        self->head=litem_528;
    }
    else if(    self->len==1    ) {
        litem_529=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value645=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 986, "struct list_item$1sBlock$ph*"))));
        litem_529->prev=self->head;
        litem_529->next=((void*)0);
        __dec_obj202=litem_529->item,
        litem_529->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj202,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_529;
        self->head->next=litem_529;
    }
    else {
        litem_530=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value646=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 996, "struct list_item$1sBlock$ph*"))));
        litem_530->prev=self->tail;
        litem_530->next=((void*)0);
        __dec_obj203=litem_530->item,
        litem_530->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_530;
        self->tail=litem_530;
    }
    self->len++;
    __result_obj__238 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__238;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__239;
void* __right_value649 = (void*)0;
struct sComePollNode* result_531;
void* __right_value650 = (void*)0;
char* __dec_obj204;
void* __right_value651 = (void*)0;
struct list$1sNode$ph* __dec_obj205;
void* __right_value694 = (void*)0;
struct list$1sBlock$ph* __dec_obj218;
void* __right_value695 = (void*)0;
struct sBlock* __dec_obj219;
struct sComePollNode* __result_obj__266;
    if(    self==(void*)0    ) {
        __result_obj__239 = (void*)0;
        return __result_obj__239;
    }
    result_531=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)    ) {
        result_531->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj204=result_531->sname,
        result_531->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_531->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        __dec_obj205=result_531->vars,
        result_531->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj205,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        __dec_obj218=result_531->blocks,
        result_531->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj218,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        __dec_obj219=result_531->else_block,
        result_531->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj219,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_531->time_out=self->time_out;
    }
    __result_obj__266 = result_531;
    come_call_finalizer(sComePollNode_finalize, result_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__266;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__240;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1sBlock$ph* result_532;
struct list_item$1sBlock$ph* it_533;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct list$1sBlock$ph* __result_obj__265;
    if(    self==((void*)0)    ) {
        __result_obj__240 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__240;
    }
    result_532=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 957, "struct list$1sBlock$ph*"))));
    it_533=self->head;
    while(    it_533!=((void*)0)    ) {
        if(        1        ) {
            list$1sBlock$ph_add(result_532,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_533->item)));
        }
        else {
            list$1sBlock$ph_add(result_532,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_533->item)));
        }
        it_533=it_533->next;
    }
    __result_obj__265 = (struct list$1sBlock$ph*)come_increment_ref_count(result_532);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result_532, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__265;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__241;
void* __right_value654 = (void*)0;
struct sBlock* result_534;
void* __right_value659 = (void*)0;
struct list$1sNode$ph* __dec_obj206;
void* __right_value691 = (void*)0;
struct sVarTable* __dec_obj217;
struct sBlock* __result_obj__264;
    if(    self==(void*)0    ) {
        __result_obj__241 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__241;
    }
    result_534=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj206=result_534->mNodes,
        result_534->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj206,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj217=result_534->mVarTable,
        result_534->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj217,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_534->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__264 = (struct sBlock*)come_increment_ref_count(result_534);
    come_call_finalizer(sBlock_finalize, result_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__264;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__242;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1sNode$ph* result_535;
struct list_item$1sNode$ph* it_536;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct list$1sNode$ph* __result_obj__243;
    if(    self==((void*)0)    ) {
        __result_obj__242 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__242;
    }
    result_535=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 957, "struct list$1sNode$ph*"))));
    it_536=self->head;
    while(    it_536!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_535,(struct sNode*)come_increment_ref_count(sNode_clone(it_536->item)));
        }
        else {
            list$1sNode$ph_add(result_535,(struct sNode*)come_increment_ref_count(sNode_clone(it_536->item)));
        }
        it_536=it_536->next;
    }
    __result_obj__243 = (struct list$1sNode$ph*)come_increment_ref_count(result_535);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__243;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__244;
void* __right_value660 = (void*)0;
struct sVarTable* result_537;
void* __right_value690 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj216;
struct sVarTable* __result_obj__263;
    if(    self==(void*)0    ) {
        __result_obj__244 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__244;
    }
    result_537=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj216=result_537->mVars,
        result_537->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj216,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_537->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_537->mParent=self->mParent;
    }
    __result_obj__263 = (struct sVarTable*)come_increment_ref_count(result_537);
    come_call_finalizer(sVarTable_finalize, result_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__263;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__245;
void* __right_value661 = (void*)0;
void* __right_value667 = (void*)0;
struct map$2char$phsVar$ph* result_543;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1char$ph* __dec_obj208;
char* it_546;
struct sVar* default_value_549;
void* __right_value670 = (void*)0;
struct sVar* it2_552;
void* __right_value679 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__262;
default_value_549 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__245 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__245;
    }
    result_543=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1915, "struct map$2char$phsVar$ph*"))));
    __dec_obj208=result_543->key_list,
    result_543->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1917, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj208,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_546=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_546=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_549,0,sizeof(struct sVar*));
        it2_552=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_546,(struct sVar*)come_increment_ref_count(default_value_549)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_543,(char*)come_increment_ref_count((char*)come_memdup(it_546, "./comelang.h", 1926, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_552)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_543,(char*)come_increment_ref_count((char*)come_memdup(it_546, "./comelang.h", 1929, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_552)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_543,(char*)come_increment_ref_count(it_546),(struct sVar*)come_increment_ref_count(sVar_clone(it2_552)));
        }
        else {
            map$2char$phsVar$ph_put(result_543,(char*)come_increment_ref_count(it_546),(struct sVar*)come_increment_ref_count(sVar_clone(it2_552)));
        }
        come_call_finalizer(sVar_finalize, default_value_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_552, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__262 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_543);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__262;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_538;
int i_539;
    for(    i_538=0    ;    i_538<self->size    ;    i_538++    ){
        if(        self->item_existance[i_538]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_538], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_539=0    ;    i_539<self->size    ;    i_539++    ){
        if(        self->item_existance[i_539]        ) {
            if(            1            ) {
                (self->keys[i_539] = come_decrement_ref_count(self->keys[i_539], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
int i_540;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1char$ph* __dec_obj207;
struct map$2char$phsVar$ph* __result_obj__247;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value662=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1844, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value663=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1845, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value664=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1846, "_Bool*"))));
    for(    i_540=0    ;    i_540<128    ;    i_540++    ){
        self->item_existance[i_540]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj207=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1856, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj207,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__247 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__247;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__246;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__246 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__246;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_541;
struct list_item$1char$p* prev_it_542;
    it_541=self->head;
    while(    it_541!=((void*)0)    ) {
        prev_it_542=it_541;
        it_541=it_541->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_542, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_544;
char* __result_obj__248;
char* __result_obj__249;
char* result_545;
char* __result_obj__250;
result_544 = (void*)0;
result_545 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_544,0,sizeof(char*));
        __result_obj__248 = result_544;
        return __result_obj__248;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__249 = self->key_list->it->item;
        return __result_obj__249;
    }
    memset(&result_545,0,sizeof(char*));
    __result_obj__250 = result_545;
    return __result_obj__250;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_547;
char* __result_obj__251;
char* __result_obj__252;
char* result_548;
char* __result_obj__253;
result_547 = (void*)0;
result_548 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_547,0,sizeof(char*));
        __result_obj__251 = result_547;
        return __result_obj__251;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__252 = self->key_list->it->item;
        return __result_obj__252;
    }
    memset(&result_548,0,sizeof(char*));
    __result_obj__253 = result_548;
    return __result_obj__253;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_550;
unsigned int it_551;
struct sVar* __result_obj__254;
struct sVar* __result_obj__255;
struct sVar* __result_obj__256;
struct sVar* __result_obj__257;
    hash_550=string_get_hash_key(((char*)key))%self->size;
    it_551=hash_550;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_551]        ) {
            if(            string_equals(self->keys[it_551],key)            ) {
                __result_obj__254 = (struct sVar*)come_increment_ref_count(self->items[it_551]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__254;
            }
            it_551++;
            if(            it_551>=self->size            ) {
                it_551=0;
            }
            else if(            it_551==hash_550            ) {
                __result_obj__255 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__255;
            }
        }
        else {
            __result_obj__256 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__256;
        }
    }
    __result_obj__257 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__257;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_564;
int it_565;
_Bool same_key_exist_566;
char* it2_567;
struct map$2char$phsVar$ph* __result_obj__259;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_564=string_get_hash_key(((char*)key))%self->size;
    it_565=hash_564;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_565]        ) {
            if(            string_equals(self->keys[it_565],key)            ) {
                if(                1                ) {
                    (self->keys[it_565] = come_decrement_ref_count(self->keys[it_565], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_565]);
                    self->keys[it_565]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_565]);
                    self->keys[it_565]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_565], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_565]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_565]=item;
                }
                break;
            }
            it_565++;
            if(            it_565>=self->size            ) {
                it_565=0;
            }
            else if(            it_565==hash_564            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_565]=(_Bool)1;
            if(            1            ) {
                self->keys[it_565]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_565]=key;
            }
            if(            1            ) {
                self->items[it_565]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_565]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_566=(_Bool)0;
    for(    it2_567=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_567=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_567,key)        ) {
            same_key_exist_566=(_Bool)1;
        }
    }
    if(    !same_key_exist_566    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__259 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__259;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_553;
void* __right_value671 = (void*)0;
char** keys_554;
void* __right_value672 = (void*)0;
struct sVar** items_555;
void* __right_value673 = (void*)0;
_Bool* item_existance_556;
int len_557;
char* it_558;
struct sVar* default_value_559;
void* __right_value674 = (void*)0;
struct sVar* it2_560;
unsigned int hash_561;
int n_562;
struct sVar* default_value_563;
void* __right_value675 = (void*)0;
default_value_559 = (void*)0;
default_value_563 = (void*)0;
    size_553=self->size*10;
    keys_554=(char**)come_increment_ref_count(((char**)(__right_value671=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_553)), "./comelang.h", 2083, "char**"))));
    items_555=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value672=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_553)), "./comelang.h", 2084, "struct sVar**"))));
    item_existance_556=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value673=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_553)), "./comelang.h", 2085, "_Bool*"))));
    len_557=0;
    for(    it_558=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_558=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_559,0,sizeof(struct sVar*));
        it2_560=((struct sVar*)(__right_value674=map$2char$phsVar$ph_at(self,it_558,(struct sVar*)come_increment_ref_count(default_value_559))));
        come_call_finalizer(sVar_finalize, __right_value674, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_561=string_get_hash_key(((char*)it_558))%size_553;
        n_562=hash_561;
        while(        (_Bool)1        ) {
            if(            item_existance_556[n_562]            ) {
                n_562++;
                if(                n_562>=size_553                ) {
                    n_562=0;
                }
                else if(                n_562==hash_561                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_556[n_562]=(_Bool)1;
                keys_554[n_562]=it_558;
                items_555[n_562]=((struct sVar*)(__right_value675=map$2char$phsVar$ph_at(self,it_558,(struct sVar*)come_increment_ref_count(default_value_563))));
                come_call_finalizer(sVar_finalize, __right_value675, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_557++;
                come_call_finalizer(sVar_finalize, default_value_563, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_563, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_559, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_554;
    self->items=items_555;
    self->item_existance=item_existance_556;
    self->size=size_553;
    self->len=len_557;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value676 = (void*)0;
struct list_item$1char$ph* litem_568;
char* __dec_obj209;
void* __right_value677 = (void*)0;
struct list_item$1char$ph* litem_569;
char* __dec_obj210;
void* __right_value678 = (void*)0;
struct list_item$1char$ph* litem_570;
char* __dec_obj211;
struct list$1char$ph* __result_obj__258;
    if(    self->len==0    ) {
        litem_568=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value676=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_568->prev=((void*)0);
        litem_568->next=((void*)0);
        __dec_obj209=litem_568->item,
        litem_568->item=(char*)come_increment_ref_count(item);
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_568;
        self->head=litem_568;
    }
    else if(    self->len==1    ) {
        litem_569=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value677=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_569->prev=self->head;
        litem_569->next=((void*)0);
        __dec_obj210=litem_569->item,
        litem_569->item=(char*)come_increment_ref_count(item);
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_569;
        self->head->next=litem_569;
    }
    else {
        litem_570=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value678=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1066, "struct list_item$1char$ph*"))));
        litem_570->prev=self->tail;
        litem_570->next=((void*)0);
        __dec_obj211=litem_570->item,
        litem_570->item=(char*)come_increment_ref_count(item);
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_570;
        self->tail=litem_570;
    }
    self->len++;
    __result_obj__258 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__258;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__260;
void* __right_value680 = (void*)0;
struct sVar* result_571;
void* __right_value681 = (void*)0;
char* __dec_obj212;
void* __right_value682 = (void*)0;
char* __dec_obj213;
void* __right_value683 = (void*)0;
struct sType* __dec_obj214;
void* __right_value684 = (void*)0;
char* __dec_obj215;
struct sVar* __result_obj__261;
    if(    self==(void*)0    ) {
        __result_obj__260 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__260;
    }
    result_571=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj212=result_571->mName,
        result_571->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj213=result_571->mCValueName,
        result_571->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj214=result_571->mType,
        result_571->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj214,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_571->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_571->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_571->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_571->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj215=result_571->mFunName,
        result_571->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__261 = (struct sVar*)come_increment_ref_count(result_571);
    come_call_finalizer(sVar_finalize, result_571, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__261;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_572;
int i_573;
    for(    i_572=0    ;    i_572<self->size    ;    i_572++    ){
        if(        self->item_existance[i_572]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_572], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_573=0    ;    i_573<self->size    ;    i_573++    ){
        if(        self->item_existance[i_573]        ) {
            if(            1            ) {
                (self->keys[i_573] = come_decrement_ref_count(self->keys[i_573], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__268;
void* __right_value699 = (void*)0;
struct sFuncNode* result_574;
void* __right_value700 = (void*)0;
char* __dec_obj220;
struct sFuncNode* __result_obj__269;
    if(    self==(void*)0    ) {
        __result_obj__268 = (void*)0;
        return __result_obj__268;
    }
    result_574=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)    ) {
        result_574->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj220=result_574->sname,
        result_574->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_574->sline_real=self->sline_real;
    }
    __result_obj__269 = result_574;
    come_call_finalizer(sFuncNode_finalize, result_574, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__269;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__271;
void* __right_value704 = (void*)0;
struct sWildCard* result_575;
void* __right_value705 = (void*)0;
char* __dec_obj221;
struct sWildCard* __result_obj__272;
    if(    self==(void*)0    ) {
        __result_obj__271 = (void*)0;
        return __result_obj__271;
    }
    result_575=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)    ) {
        result_575->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj221=result_575->sname,
        result_575->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_575->sline_real=self->sline_real;
    }
    __result_obj__272 = result_575;
    come_call_finalizer(sWildCard_finalize, result_575, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__272;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__274;
void* __right_value709 = (void*)0;
struct sLineNode* result_576;
void* __right_value710 = (void*)0;
char* __dec_obj222;
struct sLineNode* __result_obj__275;
    if(    self==(void*)0    ) {
        __result_obj__274 = (void*)0;
        return __result_obj__274;
    }
    result_576=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)    ) {
        result_576->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj222=result_576->sname,
        result_576->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_576->sline_real=self->sline_real;
    }
    __result_obj__275 = result_576;
    come_call_finalizer(sLineNode_finalize, result_576, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__275;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__277;
void* __right_value714 = (void*)0;
struct sSNameNode* result_577;
void* __right_value715 = (void*)0;
char* __dec_obj223;
struct sSNameNode* __result_obj__278;
    if(    self==(void*)0    ) {
        __result_obj__277 = (void*)0;
        return __result_obj__277;
    }
    result_577=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)    ) {
        result_577->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj223=result_577->sname,
        result_577->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_577->sline_real=self->sline_real;
    }
    __result_obj__278 = result_577;
    come_call_finalizer(sSNameNode_finalize, result_577, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__278;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__280;
void* __right_value719 = (void*)0;
struct sCallerFuncNode* result_578;
void* __right_value720 = (void*)0;
char* __dec_obj224;
struct sCallerFuncNode* __result_obj__281;
    if(    self==(void*)0    ) {
        __result_obj__280 = (void*)0;
        return __result_obj__280;
    }
    result_578=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)    ) {
        result_578->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj224=result_578->sname,
        result_578->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_578->sline_real=self->sline_real;
    }
    __result_obj__281 = result_578;
    come_call_finalizer(sCallerFuncNode_finalize, result_578, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__281;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__283;
void* __right_value724 = (void*)0;
struct sCallerLineNode* result_579;
void* __right_value725 = (void*)0;
char* __dec_obj225;
struct sCallerLineNode* __result_obj__284;
    if(    self==(void*)0    ) {
        __result_obj__283 = (void*)0;
        return __result_obj__283;
    }
    result_579=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)    ) {
        result_579->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj225=result_579->sname,
        result_579->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_579->sline_real=self->sline_real;
    }
    __result_obj__284 = result_579;
    come_call_finalizer(sCallerLineNode_finalize, result_579, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__284;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__286;
void* __right_value729 = (void*)0;
struct sCallerSNameNode* result_580;
void* __right_value730 = (void*)0;
char* __dec_obj226;
struct sCallerSNameNode* __result_obj__287;
    if(    self==(void*)0    ) {
        __result_obj__286 = (void*)0;
        return __result_obj__286;
    }
    result_580=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)    ) {
        result_580->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj226=result_580->sname,
        result_580->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_580->sline_real=self->sline_real;
    }
    __result_obj__287 = result_580;
    come_call_finalizer(sCallerSNameNode_finalize, result_580, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__287;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__289;
void* __right_value735 = (void*)0;
struct sVarArgTypeName* result_584;
void* __right_value736 = (void*)0;
char* __dec_obj227;
void* __right_value737 = (void*)0;
struct sType* __dec_obj228;
struct sVarArgTypeName* __result_obj__290;
    if(    self==(void*)0    ) {
        __result_obj__289 = (void*)0;
        return __result_obj__289;
    }
    result_584=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)    ) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj227=result_584->sname,
        result_584->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj228=result_584->type,
        result_584->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj228,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__290 = result_584;
    come_call_finalizer(sVarArgTypeName_finalize, result_584, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__290;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__293;
void* __right_value750 = (void*)0;
struct sInlineAssembler* result_590;
void* __right_value751 = (void*)0;
char* __dec_obj229;
void* __right_value752 = (void*)0;
char* __dec_obj230;
void* __right_value753 = (void*)0;
struct list$1sNode$ph* __dec_obj231;
struct sInlineAssembler* __result_obj__294;
    if(    self==(void*)0    ) {
        __result_obj__293 = (void*)0;
        return __result_obj__293;
    }
    result_590=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)    ) {
        result_590->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj229=result_590->sname,
        result_590->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_590->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        __dec_obj230=result_590->source,
        result_590->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        __dec_obj231=result_590->exps,
        result_590->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj231,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__294 = result_590;
    come_call_finalizer(sInlineAssembler_finalize, result_590, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__294;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_593;
unsigned int hash_594;
unsigned int it_595;
struct sType* __result_obj__296;
struct sType* __result_obj__297;
struct sType* __result_obj__298;
struct sType* __result_obj__299;
default_value_593 = (void*)0;
    memset(&default_value_593,0,sizeof(struct sType*));
    hash_594=string_get_hash_key(((char*)key))%self->size;
    it_595=hash_594;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_595]        ) {
            if(            string_equals(self->keys[it_595],key)            ) {
                __result_obj__296 = (struct sType*)come_increment_ref_count(self->items[it_595]);
                come_call_finalizer(sType_finalize, default_value_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__296, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__296;
            }
            it_595++;
            if(            it_595>=self->size            ) {
                it_595=0;
            }
            else if(            it_595==hash_594            ) {
                __result_obj__297 = (struct sType*)come_increment_ref_count(default_value_593);
                come_call_finalizer(sType_finalize, default_value_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__297, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__297;
            }
        }
        else {
            __result_obj__298 = (struct sType*)come_increment_ref_count(default_value_593);
            come_call_finalizer(sType_finalize, default_value_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__298;
        }
    }
    __result_obj__299 = (struct sType*)come_increment_ref_count(default_value_593);
    come_call_finalizer(sType_finalize, default_value_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__299;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_596;
unsigned int hash_597;
unsigned int it_598;
struct sType* __result_obj__300;
struct sType* __result_obj__301;
struct sType* __result_obj__302;
struct sType* __result_obj__303;
default_value_596 = (void*)0;
    memset(&default_value_596,0,sizeof(struct sType*));
    hash_597=string_get_hash_key(((char*)key))%self->size;
    it_598=hash_597;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_598]        ) {
            if(            string_equals(self->keys[it_598],key)            ) {
                __result_obj__300 = (struct sType*)come_increment_ref_count(self->items[it_598]);
                come_call_finalizer(sType_finalize, default_value_596, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__300;
            }
            it_598++;
            if(            it_598>=self->size            ) {
                it_598=0;
            }
            else if(            it_598==hash_597            ) {
                __result_obj__301 = (struct sType*)come_increment_ref_count(default_value_596);
                come_call_finalizer(sType_finalize, default_value_596, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__301;
            }
        }
        else {
            __result_obj__302 = (struct sType*)come_increment_ref_count(default_value_596);
            come_call_finalizer(sType_finalize, default_value_596, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__302;
        }
    }
    __result_obj__303 = (struct sType*)come_increment_ref_count(default_value_596);
    come_call_finalizer(sType_finalize, default_value_596, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__303;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value781 = (void*)0;
struct sNode* __result_obj__311;
    __result_obj__311 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value781=expression_node_v99(info))));
    ((__right_value781) ? __right_value781 = come_decrement_ref_count(__right_value781, ((struct sNode*)__right_value781)->finalize, ((struct sNode*)__right_value781)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__311) ? __result_obj__311 = come_decrement_ref_count(__result_obj__311, ((struct sNode*)__result_obj__311)->finalize, ((struct sNode*)__result_obj__311)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__311;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj233;
struct sNode* __result_obj__312;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* __dec_obj234;
struct sNode* __result_obj__313;
struct sNode* __result_obj__314;
    if(    parsecmp("or",info)    ) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj233=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__312 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__312;
    }
    else if(    parsecmp("and",info)    ) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj234=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__313 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__313;
    }
    __result_obj__314 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__314) ? __result_obj__314 = come_decrement_ref_count(__result_obj__314, ((struct sNode*)__result_obj__314)->finalize, ((struct sNode*)__result_obj__314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__314;
}

struct sNode* statment(struct sInfo* info){
void* __right_value786 = (void*)0;
struct sNode* node_609;
void* __right_value787 = (void*)0;
struct sNode* __dec_obj235;
struct sNode* __result_obj__315;
    node_609=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj235=node_609,
    node_609=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_609),info));
    (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__315 = (struct sNode*)come_increment_ref_count(node_609);
    ((node_609) ? node_609 = come_decrement_ref_count(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__315) ? __result_obj__315 = come_decrement_ref_count(__result_obj__315, ((struct sNode*)__result_obj__315)->finalize, ((struct sNode*)__result_obj__315)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__315;
}

char* get_none_generics_name(char* class_name){
char* p_610;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
char* __result_obj__316;
void* __right_value790 = (void*)0;
char* __result_obj__317;
    p_610=class_name;
    while(    *p_610    ) {
        if(        *p_610==36        ) {
            __result_obj__316 = (char*)come_increment_ref_count(((char*)(__right_value789=charp_substring(((char*)(__right_value788=__builtin_string(class_name))),0,p_610-class_name))));
            (__right_value788 = come_decrement_ref_count(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value789 = come_decrement_ref_count(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__316 = come_decrement_ref_count(__result_obj__316, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__316;
        }
        else {
            p_610++;
        }
    }
    __result_obj__317 = (char*)come_increment_ref_count(((char*)(__right_value790=__builtin_string(class_name))));
    (__right_value790 = come_decrement_ref_count(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__317 = come_decrement_ref_count(__result_obj__317, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__317;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct buffer* buf_611;
struct sClass* klass_612;
char* class_name_613;
int i_614;
void* __right_value793 = (void*)0;
struct sType* type_615;
void* __right_value794 = (void*)0;
char* type_name_616;
int i_617;
void* __right_value795 = (void*)0;
char* __result_obj__318;
    buf_611=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2572, "struct buffer*"))));
    klass_612=generics_type->mClass;
    class_name_613=klass_612->mName;
    buffer_append_str(buf_611,class_name_613);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0    ) {
        buffer_append_char(buf_611,36);
        buffer_append_char(buf_611,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_614=0        ;        i_614<list$1sType$ph_length(generics_type->mGenericsTypes)        ;        i_614++        ){
            type_615=((struct sType*)(__right_value793=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_614)));
            come_call_finalizer(sType_finalize, __right_value793, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type_name_616=(char*)come_increment_ref_count(create_generics_name(type_615,info));
            buffer_append_str(buf_611,type_name_616);
            buffer_append_char(buf_611,36);
            for(            i_617=0            ;            i_617<type_615->mPointerNum            ;            i_617++            ){
                buffer_append_char(buf_611,112);
            }
            if(            type_615->mHeap            ) {
                buffer_append_str(buf_611,"h");
            }
            (type_name_616 = come_decrement_ref_count(type_name_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__318 = (char*)come_increment_ref_count(((char*)(__right_value795=buffer_to_string(buf_611))));
    come_call_finalizer(buffer_finalize, buf_611, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value795 = come_decrement_ref_count(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__318 = come_decrement_ref_count(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__318;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_618;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct buffer* buf_619;
void* __right_value798 = (void*)0;
char* __dec_obj236;
void* __right_value799 = (void*)0;
char* __dec_obj237;
int i_620;
void* __right_value800 = (void*)0;
char* __dec_obj238;
void* __right_value801 = (void*)0;
char* __dec_obj239;
void* __right_value802 = (void*)0;
char* __dec_obj240;
int i_621;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
char* __result_obj__319;
struct_name_618 = (void*)0;
    buf_619=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2607, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __dec_obj236=struct_name_618,
        struct_name_618=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_618,"_Bool")        ) {
            __dec_obj237=struct_name_618,
            struct_name_618=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0            ) {
                buffer_append_str(buf_619,"$");
            }
            for(            i_620=0            ;            i_620<obj_type->mOriginalTypeNamePointerNum            ;            i_620++            ){
                buffer_append_str(buf_619,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj238=struct_name_618,
        struct_name_618=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_618,"_Bool")        ) {
            __dec_obj239=struct_name_618,
            struct_name_618=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj240=struct_name_618,
        struct_name_618=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_619,"$");
        }
        for(        i_621=0        ;        i_621<obj_type->mPointerNum        ;        i_621++        ){
            buffer_append_str(buf_619,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_619,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_619,"pa");
    }
    __result_obj__319 = (char*)come_increment_ref_count(((char*)(__right_value804=xsprintf("%s%s_%s",struct_name_618,((char*)(__right_value803=buffer_to_string(buf_619))),fun_name))));
    (struct_name_618 = come_decrement_ref_count(struct_name_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_619, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value803 = come_decrement_ref_count(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value804 = come_decrement_ref_count(__right_value804, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__319 = come_decrement_ref_count(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__319;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_622;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct buffer* buf_623;
void* __right_value807 = (void*)0;
char* __dec_obj241;
void* __right_value808 = (void*)0;
char* __dec_obj242;
void* __right_value809 = (void*)0;
char* __dec_obj243;
int i_624;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
char* __result_obj__320;
struct_name_622 = (void*)0;
    buf_623=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2654, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj241=struct_name_622,
        struct_name_622=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_622,"_Bool")        ) {
            __dec_obj242=struct_name_622,
            struct_name_622=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj243=struct_name_622,
        struct_name_622=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_623,"$");
        }
        for(        i_624=0        ;        i_624<obj_type->mPointerNum        ;        i_624++        ){
            buffer_append_str(buf_623,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_623,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_623,"pa");
    }
    __result_obj__320 = (char*)come_increment_ref_count(((char*)(__right_value811=xsprintf("%s%s_%s",struct_name_622,((char*)(__right_value810=buffer_to_string(buf_623))),fun_name))));
    (struct_name_622 = come_decrement_ref_count(struct_name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_623, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value810 = come_decrement_ref_count(__right_value810, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value811 = come_decrement_ref_count(__right_value811, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__320 = come_decrement_ref_count(__result_obj__320, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__320;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_625;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct buffer* buf_626;
void* __right_value814 = (void*)0;
char* __dec_obj244;
void* __right_value815 = (void*)0;
char* __dec_obj245;
int i_627;
void* __right_value816 = (void*)0;
char* __dec_obj246;
void* __right_value817 = (void*)0;
char* __dec_obj247;
void* __right_value818 = (void*)0;
char* __dec_obj248;
int i_628;
void* __right_value819 = (void*)0;
int len_630;
void* __right_value820 = (void*)0;
char* __result_obj__321;
struct_name_625 = (void*)0;
    buf_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2686, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __dec_obj244=struct_name_625,
        struct_name_625=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_625,"_Bool")        ) {
            __dec_obj245=struct_name_625,
            struct_name_625=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0            ) {
                buffer_append_str(buf_626,"$");
            }
            for(            i_627=0            ;            i_627<obj_type->mOriginalTypeNamePointerNum            ;            i_627++            ){
                buffer_append_str(buf_626,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj246=struct_name_625,
        struct_name_625=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_625,"_Bool")        ) {
            __dec_obj247=struct_name_625,
            struct_name_625=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj248=struct_name_625,
        struct_name_625=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_626,"$");
        }
        for(        i_628=0        ;        i_628<obj_type->mPointerNum        ;        i_628++        ){
            buffer_append_str(buf_626,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_626,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_626,"pa");
    }
    char none_method_name_629[charp_length(fun_name)+1];
    memset(&none_method_name_629, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_630=string_length(struct_name_625)+string_length(((char*)(__right_value819=buffer_to_string(buf_626))));
    (__right_value819 = come_decrement_ref_count(__right_value819, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    memcpy(none_method_name_629,fun_name+len_630+1,charp_length(fun_name)-len_630-1);
    none_method_name_629[charp_length(fun_name)-len_630-1]=0;
    __result_obj__321 = (char*)come_increment_ref_count(((char*)(__right_value820=__builtin_string(none_method_name_629))));
    (struct_name_625 = come_decrement_ref_count(struct_name_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_626, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value820 = come_decrement_ref_count(__right_value820, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__321 = come_decrement_ref_count(__result_obj__321, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__321;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value821 = (void*)0;
char* struct_name_631;
void* __right_value822 = (void*)0;
char* __dec_obj249;
void* __right_value823 = (void*)0;
char* __result_obj__322;
    struct_name_631=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name_631,"_Bool")    ) {
        __dec_obj249=struct_name_631,
        struct_name_631=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__322 = (char*)come_increment_ref_count(((char*)(__right_value823=xsprintf("%s_%s",struct_name_631,fun_name))));
    (struct_name_631 = come_decrement_ref_count(struct_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value823 = come_decrement_ref_count(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__322 = come_decrement_ref_count(__result_obj__322, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__322;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value824 = (void*)0;
struct sNode* __result_obj__323;
    ((struct tuple2$2int$bool$*)(__right_value824=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value824, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__323 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__323;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_632;
char* p_633;
int sline_634;
_Bool err_flag_635;
void* __right_value827 = (void*)0;
char* label_636;
void* __right_value828 = (void*)0;
char* __dec_obj250;
char* __dec_obj251;
_Bool no_comma_637;
_Bool in_fun_param_638;
void* __right_value829 = (void*)0;
struct sNode* node_639;
void* __right_value830 = (void*)0;
struct sNode* __dec_obj252;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value839 = (void*)0;
struct sNode* __result_obj__326;
struct sNode* __result_obj__327;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_632=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2764, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_633=info->p;
            sline_634=info->sline;
            err_flag_635=(_Bool)0;
            label_636=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj250=label_636,
                label_636=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                err_flag_635=(_Bool)1;
            }
            if(            err_flag_635==(_Bool)1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj251=label_636,
                label_636=((void*)0);
                __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->p=p_633;
                info->sline=sline_634;
            }
            no_comma_637=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_638=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_639=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj252=node_639,
            node_639=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_639),info));
            (__dec_obj252 ? __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            info->no_comma=no_comma_637;
            info->in_fun_param=in_fun_param_638;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_632,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2807, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_636),(struct sNode*)come_increment_ref_count(node_639))));
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_636 = come_decrement_ref_count(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_639) ? node_639 = come_decrement_ref_count(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            (label_636 = come_decrement_ref_count(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_639) ? node_639 = come_decrement_ref_count(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2825, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value834=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2825, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_632,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        __result_obj__326 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value839=_inf_value20)));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_632, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value834, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value839) ? __right_value839 = come_decrement_ref_count(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__326;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_632, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __result_obj__327 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__327;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__324;
void* __right_value835 = (void*)0;
struct sLambdaCall* result_640;
void* __right_value836 = (void*)0;
char* __dec_obj253;
void* __right_value837 = (void*)0;
struct sNode* __dec_obj254;
void* __right_value838 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj255;
struct sLambdaCall* __result_obj__325;
    if(    self==(void*)0    ) {
        __result_obj__324 = (void*)0;
        return __result_obj__324;
    }
    result_640=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)    ) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj253=result_640->sname,
        result_640->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj254=result_640->node,
        result_640->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj254 ? __dec_obj254 = come_decrement_ref_count(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj255=result_640->params,
        result_640->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj255,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__325 = result_640;
    come_call_finalizer(sLambdaCall_finalize, result_640, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__325;
}

