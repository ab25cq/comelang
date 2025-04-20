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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sRefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenBlockNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* paren_block;
};

struct sDerefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    _Bool mQuote;
};

struct sLogicalDenial
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sLogicalDenial2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sReverseNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sPlusPlusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sNormalBlock
{
    int sline;
    char* sname;
    int sline_real;
    struct sBlock* mBlock;
    _Bool clang;
    _Bool comma;
};

struct sComplement
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sCastNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* mType;
    struct sNode* mLeft;
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
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
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
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);
char* sRefferenceNode_kind(struct sRefferenceNode* self);
_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info);
char* sParenBlockNode_kind(struct sParenBlockNode* self);
_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info);
static void sParenBlockNode_finalize(struct sParenBlockNode* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);
char* sDerefferenceNode_kind(struct sDerefferenceNode* self);
_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial_kind(struct sLogicalDenial* self);
_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);
static void sLogicalDenial_finalize(struct sLogicalDenial* self);
struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial2_kind(struct sLogicalDenial2* self);
_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info);
static void sLogicalDenial2_finalize(struct sLogicalDenial2* self);
struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);
char* sReverseNode_kind(struct sReverseNode* self);
_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);
static void sReverseNode_finalize(struct sReverseNode* self);
struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusNode2_kind(struct sMinusNode2* self);
_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);
static void sMinusNode2_finalize(struct sMinusNode2* self);
struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);
char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);
_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self);
_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
_Bool sNormalBlock_terminated(struct sNormalBlock* self);
char* sNormalBlock_kind(struct sNormalBlock* self);
_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
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
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static void sNormalBlock_finalize(struct sNormalBlock* self);
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);
char* sComplement_kind(struct sComplement* self);
_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);
static void sComplement_finalize(struct sComplement* self);
struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);
char* sParenNode_kind(struct sParenNode* self);
_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);
static void sParenNode_finalize(struct sParenNode* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);
char* sCastNode_kind(struct sCastNode* self);
_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);
static void sCastNode_finalize(struct sCastNode* self);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
struct sNode* pre_position_operator(struct sInfo* info);
static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v98(struct sInfo* info);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info){
void* __right_value37 = (void*)0;
struct sType* generics_type_0;
struct sType* __dec_obj24;
struct sType* __dec_obj25;
struct sClass* klass_30;
char* class_name_31;
void* __right_value38 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1 = (void*)0;
char* fun_name2_32=0;
struct sFun* operator_fun_33=0;
struct sGenericsFun* generics_fun_34=0;
_Bool result_35;
struct sNode* obj_36;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_37;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct sNode* node_43;
_Bool Value_44;
_Bool __result_obj__20;
    generics_type_0=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_0->mNoSolvedGenericsType    ) {
        __dec_obj24=generics_type_0,
        generics_type_0=(struct sType*)come_increment_ref_count(generics_type_0->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj25=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value38=get_method(fun_name,(struct sType*)come_increment_ref_count(type),info)));
    fun_name2_32=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_33=multiple_assign_var1->v2;
    generics_fun_34=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value38, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    result_35=(_Bool)0;
    if(    operator_fun_33    ) {
        obj_36=(struct sNode*)come_increment_ref_count(node);
        params_37=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05pre_op.c", 22, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_37,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "05pre_op.c", 24, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(obj_36))));
        node_43=(struct sNode*)come_increment_ref_count(create_method_call(fun_name2_32,(struct sNode*)come_increment_ref_count(obj_36),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_37),((void*)0),0,((void*)0),info,(_Bool)0));
        Value_44=node_compile(node_43,info);
        if(        Value_44        ) {
            result_35=(_Bool)1;
        }
        else {
        }
        ((obj_36) ? obj_36 = come_decrement_ref_count(obj_36, ((struct sNode*)obj_36)->finalize, ((struct sNode*)obj_36)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_43) ? node_43 = come_decrement_ref_count(node_43, ((struct sNode*)node_43)->finalize, ((struct sNode*)node_43)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__20 = result_35;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, generics_type_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__20;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result_7;
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
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__1;
    }
    result_7=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_7->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_7->mOriginalLoadVarType,
        result_7->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_7->mChannelType,
        result_7->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_7->mGenericsTypes,
        result_7->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_7->mNoSolvedGenericsType,
        result_7->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_7->mSizeNum,
        result_7->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_7->mAlignas,
        result_7->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_7->mTupleName,
        result_7->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_7->mAttribute,
        result_7->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_7->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_7->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_7->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_7->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_7->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_7->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_7->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_7->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_7->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_7->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_7->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_7->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_7->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_7->mAsmName,
        result_7->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_7->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_7->mArrayNum,
        result_7->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_7->mOriginalTypeName,
        result_7->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_7->mParamTypes,
        result_7->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_7->mParamNames,
        result_7->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_7->mResultType,
        result_7->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_7->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result_7);
    come_call_finalizer(sType_finalize, result_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_38;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_39;
    it_38=self->head;
    while(    it_38!=((void*)0)    ) {
        prev_it_39=it_38;
        it_38=it_38->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value41 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_40;
struct tuple2$2char$phsNode$ph* __dec_obj26;
void* __right_value42 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_41;
struct tuple2$2char$phsNode$ph* __dec_obj27;
void* __right_value43 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_42;
struct tuple2$2char$phsNode$ph* __dec_obj28;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_40=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 976, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        __dec_obj26=litem_40->item,
        litem_40->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1    ) {
        litem_41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 986, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        __dec_obj27=litem_41->item,
        litem_41->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value43=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 996, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        __dec_obj28=litem_42->item,
        litem_42->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj29;
struct tuple2$2void$psNode$ph* __result_obj__19;
    self->v1=v1;
    __dec_obj29=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__19 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __right_value47 = (void*)0;
struct sNode* __dec_obj30;
struct sRefferenceNode* __result_obj__21;
    ((struct sNodeBase*)(__right_value47=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj30=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__21 = (struct sRefferenceNode*)come_increment_ref_count(self);
    come_call_finalizer(sRefferenceNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sRefferenceNode_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __right_value48 = (void*)0;
char* __result_obj__22;
    __result_obj__22 = (char*)come_increment_ref_count(((char*)(__right_value48=__builtin_string("sRefferenceNode"))));
    (__right_value48 = come_decrement_ref_count(__right_value48, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__22 = come_decrement_ref_count(__result_obj__22, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__22;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_45;
void* __right_value49 = (void*)0;
struct CVALUE* left_value_46;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct CVALUE* come_value_47;
void* __right_value52 = (void*)0;
char* __dec_obj31;
void* __right_value53 = (void*)0;
char* __dec_obj32;
void* __right_value54 = (void*)0;
struct sType* __dec_obj33;
_Bool __result_obj__24;
    value_45=self->value;
    if(    !node_compile(value_45,info)    ) {
        return (_Bool)0;
    }
    left_value_46=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_47=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 60, "struct CVALUE*"))));
    if(    left_value_46->c_value_without_cast_object_value    ) {
        __dec_obj31=come_value_47->c_value,
        come_value_47->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_46->c_value_without_cast_object_value));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj32=come_value_47->c_value,
        come_value_47->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_46->c_value));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj33=come_value_47->type,
    come_value_47->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_46->type));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_47->type->mPointerNum++;
    come_value_47->var=((void*)0);
    add_come_last_code(info,"%s",come_value_47->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    __result_obj__24 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__24;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value55 = (void*)0;
struct list_item$1CVALUE$ph* litem_48;
struct CVALUE* __dec_obj34;
void* __right_value56 = (void*)0;
struct list_item$1CVALUE$ph* litem_49;
struct CVALUE* __dec_obj35;
void* __right_value57 = (void*)0;
struct list_item$1CVALUE$ph* litem_50;
struct CVALUE* __dec_obj36;
struct list$1CVALUE$ph* __result_obj__23;
    if(    self->len==0    ) {
        litem_48=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value55=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1046, "struct list_item$1CVALUE$ph*"))));
        litem_48->prev=((void*)0);
        litem_48->next=((void*)0);
        __dec_obj34=litem_48->item,
        litem_48->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_48;
        self->head=litem_48;
    }
    else if(    self->len==1    ) {
        litem_49=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value56=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1056, "struct list_item$1CVALUE$ph*"))));
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        __dec_obj35=litem_49->item,
        litem_49->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value57=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1066, "struct list_item$1CVALUE$ph*"))));
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        __dec_obj36=litem_50->item,
        litem_50->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
    __result_obj__23 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__23;
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

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info){
void* __right_value58 = (void*)0;
struct list$1sNode$ph* __dec_obj37;
struct sParenBlockNode* __result_obj__25;
    ((struct sNodeBase*)(__right_value58=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj37=self->paren_block,
    self->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(paren_block);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__25 = (struct sParenBlockNode*)come_increment_ref_count(self);
    come_call_finalizer(sParenBlockNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sParenBlockNode_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

char* sParenBlockNode_kind(struct sParenBlockNode* self){
void* __right_value59 = (void*)0;
char* __result_obj__26;
    __result_obj__26 = (char*)come_increment_ref_count(((char*)(__right_value59=__builtin_string("sParenBlockNode"))));
    (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__26 = come_decrement_ref_count(__result_obj__26, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__26;
}

_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info){
struct list$1sNode$ph* paren_block_51;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct buffer* buf_52;
struct sType* come_type_53;
struct list$1sNode$ph* o2_saved_54;
struct sNode* it_57;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value71 = (void*)0;
struct buffer* __dec_obj38;
_Bool __result_obj__33;
void* __right_value72 = (void*)0;
struct CVALUE* come_value_60;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct sType* __dec_obj39;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
struct CVALUE* come_value_61;
void* __right_value80 = (void*)0;
char* __dec_obj40;
struct sType* __dec_obj41;
_Bool __result_obj__34;
    paren_block_51=(struct list$1sNode$ph*)come_increment_ref_count(self->paren_block);
    buf_52=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05pre_op.c", 99, "struct buffer*"))));
    buffer_append_str(buf_52,"({");
    come_type_53=((void*)0);
    for(    o2_saved_54=(struct list$1sNode$ph*)come_increment_ref_count((paren_block_51)),it_57=list$1sNode$ph_begin((o2_saved_54))    ;    !list$1sNode$ph_end((o2_saved_54))    ;    it_57=list$1sNode$ph_next((o2_saved_54))    ){
        if(        (_condtional_value_X1=(string_operator_equals(((char*)(__right_value63=it_57->kind(it_57->_protocol_obj))),"sIfNode")||string_operator_equals(((char*)(__right_value65=it_57->kind(it_57->_protocol_obj))),"sWhileNode")||string_operator_equals(((char*)(__right_value67=it_57->kind(it_57->_protocol_obj))),"sDoWhileNode")||string_operator_equals(((char*)(__right_value69=it_57->kind(it_57->_protocol_obj))),"sForNode")||((char*)(__right_value70=it_57->kind(it_57->_protocol_obj)))=="sSwitchNode")),        (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X1        ) {
            add_come_code(info,((char*)(__right_value71=buffer_to_string(buf_52))));
            (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj38=buf_52,
            buf_52=((void*)0);
            come_call_finalizer(buffer_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        !node_compile(it_57,info)        ) {
            __result_obj__33 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, buf_52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, come_type_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__33;
        }
        if(        list$1CVALUE$ph_length(info->stack)>0        ) {
            come_value_60=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            buf_52            ) {
                buffer_append_str(buf_52,((char*)(__right_value73=string_operator_add(come_value_60->c_value,"; "))));
                (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                add_come_code(info,((char*)(__right_value74=string_operator_add(come_value_60->c_value,"; "))));
                (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            __dec_obj39=come_type_53,
            come_type_53=(struct sType*)come_increment_ref_count(sType_clone(come_value_60->type));
            come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            if(            buf_52            ) {
                buffer_append_str(buf_52,((char*)(__right_value76=string_operator_add(info->module->mLastCode,"; "))));
                (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(buf_52,((char*)(__right_value77=string_operator_add(info->module->mLastCode2,"; "))));
                (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                transpiler_clear_last_code(info);
            }
            else {
                add_last_code_to_source(info);
            }
        }
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    buf_52    ) {
        buffer_append_str(buf_52,"})");
        come_value_61=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 144, "struct CVALUE*"))));
        __dec_obj40=come_value_61->c_value,
        come_value_61->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_52));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj41=come_value_61->type,
        come_value_61->type=(struct sType*)come_increment_ref_count(come_type_53);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_61->var=((void*)0);
        add_come_last_code(info,"%s",come_value_61->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_61));
        come_call_finalizer(CVALUE_finalize, come_value_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        add_come_code(info,"});");
    }
    __result_obj__34 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, come_type_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__34;
}

static void sParenBlockNode_finalize(struct sParenBlockNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->paren_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_55;
struct sNode* __result_obj__27;
struct sNode* __result_obj__28;
struct sNode* result_56;
struct sNode* __result_obj__29;
result_55 = (void*)0;
result_56 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_55,0,sizeof(struct sNode*));
        __result_obj__27 = result_55;
        return __result_obj__27;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_56,0,sizeof(struct sNode*));
    __result_obj__29 = result_56;
    return __result_obj__29;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_58;
struct sNode* __result_obj__30;
struct sNode* __result_obj__31;
struct sNode* result_59;
struct sNode* __result_obj__32;
result_58 = (void*)0;
result_59 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_58,0,sizeof(struct sNode*));
        __result_obj__30 = result_58;
        return __result_obj__30;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__31 = self->it->item;
        return __result_obj__31;
    }
    memset(&result_59,0,sizeof(struct sNode*));
    __result_obj__32 = result_59;
    return __result_obj__32;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __right_value81 = (void*)0;
struct sNode* __dec_obj42;
struct sDerefferenceNode* __result_obj__35;
    ((struct sNodeBase*)(__right_value81=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj42=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__35 = (struct sDerefferenceNode*)come_increment_ref_count(self);
    come_call_finalizer(sDerefferenceNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sDerefferenceNode_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__35;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __right_value82 = (void*)0;
char* __result_obj__36;
    __result_obj__36 = (char*)come_increment_ref_count(((char*)(__right_value82=__builtin_string("sDerefferenceNode"))));
    (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__36 = come_decrement_ref_count(__result_obj__36, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__36;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_62;
_Bool __result_obj__37;
void* __right_value83 = (void*)0;
struct CVALUE* left_value_63;
struct sType* type_64;
char* fun_name_65;
_Bool calling_fun_66;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value86 = (void*)0;
char* __dec_obj43;
void* __right_value87 = (void*)0;
struct sType* __dec_obj44;
_Bool __result_obj__38;
memset(&calling_fun_66, 0, sizeof(_Bool));
    value_62=(struct sNode*)come_increment_ref_count(self->value);
    if(    !node_compile(value_62,info)    ) {
        __result_obj__37 = (_Bool)0;
        ((value_62) ? value_62 = come_decrement_ref_count(value_62, ((struct sNode*)value_62)->finalize, ((struct sNode*)value_62)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__37;
    }
    left_value_63=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_64=(struct sType*)come_increment_ref_count(left_value_63->type);
    fun_name_65="operator_derefference";
    if(    self->mQuote    ) {
        calling_fun_66=(_Bool)0;
    }
    else {
        calling_fun_66=operator_overload_fun_self((struct sType*)come_increment_ref_count(type_64),fun_name_65,(struct sNode*)come_increment_ref_count(value_62),left_value_63,info);
    }
    if(    !calling_fun_66    ) {
        come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 201, "struct CVALUE*"))));
        __dec_obj43=come_value_67->c_value,
        come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("*%s",left_value_63->c_value));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj44=come_value_67->type,
        come_value_67->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_63->type));
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_67->type->mPointerNum--;
        come_value_67->var=((void*)0);
        add_come_last_code(info,"%s",come_value_67->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
        come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__38 = (_Bool)1;
    ((value_62) ? value_62 = come_decrement_ref_count(value_62, ((struct sNode*)value_62)->finalize, ((struct sNode*)value_62)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__38;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __right_value88 = (void*)0;
struct sNode* __dec_obj45;
struct sLogicalDenial* __result_obj__39;
    ((struct sNodeBase*)(__right_value88=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value88, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj45=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__39 = (struct sLogicalDenial*)come_increment_ref_count(self);
    come_call_finalizer(sLogicalDenial_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLogicalDenial_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__39;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __right_value89 = (void*)0;
char* __result_obj__40;
    __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string("sLogicalDenial"))));
    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__40 = come_decrement_ref_count(__result_obj__40, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__40;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __right_value90 = (void*)0;
struct CVALUE* come_value_68;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
struct CVALUE* come_value2_69;
void* __right_value93 = (void*)0;
char* __dec_obj46;
void* __right_value94 = (void*)0;
struct sType* __dec_obj47;
_Bool __result_obj__41;
    if(    !node_compile(self->value,info)    ) {
        return (_Bool)0;
    }
    come_value_68=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_69=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 239, "struct CVALUE*"))));
    __dec_obj46=come_value2_69->c_value,
    come_value2_69->c_value=(char*)come_increment_ref_count(xsprintf("!%s",come_value_68->c_value));
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj47=come_value2_69->type,
    come_value2_69->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_68->type));
    come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_69->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_69));
    add_come_last_code(info,"%s",come_value2_69->c_value);
    __result_obj__41 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info){
void* __right_value95 = (void*)0;
struct sNode* __dec_obj48;
struct sLogicalDenial2* __result_obj__42;
    ((struct sNodeBase*)(__right_value95=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value95, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj48=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__42 = (struct sLogicalDenial2*)come_increment_ref_count(self);
    come_call_finalizer(sLogicalDenial2_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLogicalDenial2_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__42;
}

char* sLogicalDenial2_kind(struct sLogicalDenial2* self){
void* __right_value96 = (void*)0;
char* __result_obj__43;
    __result_obj__43 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string("sLogicalDenial"))));
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__43;
}

_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info){
void* __right_value97 = (void*)0;
struct CVALUE* come_value_70;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct CVALUE* come_value2_71;
void* __right_value100 = (void*)0;
char* __dec_obj49;
void* __right_value101 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__44;
    if(    !node_compile(self->value,info)    ) {
        return (_Bool)0;
    }
    come_value_70=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_71=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 275, "struct CVALUE*"))));
    __dec_obj49=come_value2_71->c_value,
    come_value2_71->c_value=(char*)come_increment_ref_count(xsprintf("!!%s",come_value_70->c_value));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj50=come_value2_71->type,
    come_value2_71->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_70->type));
    come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_71->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_71));
    add_come_last_code(info,"%s",come_value2_71->c_value);
    __result_obj__44 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__44;
}

static void sLogicalDenial2_finalize(struct sLogicalDenial2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __right_value102 = (void*)0;
struct sNode* __dec_obj51;
struct sReverseNode* __result_obj__45;
    ((struct sNodeBase*)(__right_value102=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj51=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__45 = (struct sReverseNode*)come_increment_ref_count(self);
    come_call_finalizer(sReverseNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sReverseNode_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __right_value103 = (void*)0;
char* __result_obj__46;
    __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string("sReverseNode"))));
    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__46;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_72;
void* __right_value104 = (void*)0;
struct CVALUE* left_value_73;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct CVALUE* come_value_74;
void* __right_value107 = (void*)0;
char* __dec_obj52;
void* __right_value108 = (void*)0;
struct sType* __dec_obj53;
_Bool __result_obj__47;
    value_72=self->value;
    if(    !node_compile(value_72,info)    ) {
        return (_Bool)0;
    }
    left_value_73=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_74=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 313, "struct CVALUE*"))));
    __dec_obj52=come_value_74->c_value,
    come_value_74->c_value=(char*)come_increment_ref_count(xsprintf("!%s",left_value_73->c_value));
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj53=come_value_74->type,
    come_value_74->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_73->type));
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_74->type->mPointerNum--;
    come_value_74->var=((void*)0);
    add_come_last_code(info,"%s",come_value_74->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_74));
    __result_obj__47 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__47;
}

static void sReverseNode_finalize(struct sReverseNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value109 = (void*)0;
struct sNode* __dec_obj54;
struct sMinusNode2* __result_obj__48;
    ((struct sNodeBase*)(__right_value109=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value109, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj54=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__48 = (struct sMinusNode2*)come_increment_ref_count(self);
    come_call_finalizer(sMinusNode2_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sMinusNode2_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __right_value110 = (void*)0;
char* __result_obj__49;
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string("sMinusNode2"))));
    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__49;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __right_value111 = (void*)0;
struct CVALUE* come_value_75;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct CVALUE* come_value2_76;
void* __right_value114 = (void*)0;
char* __dec_obj55;
void* __right_value115 = (void*)0;
struct sType* __dec_obj56;
_Bool __result_obj__50;
    if(    !node_compile(self->value,info)    ) {
        return (_Bool)0;
    }
    come_value_75=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_76=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 350, "struct CVALUE*"))));
    __dec_obj55=come_value2_76->c_value,
    come_value2_76->c_value=(char*)come_increment_ref_count(xsprintf("-%s",come_value_75->c_value));
    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj56=come_value2_76->type,
    come_value2_76->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_75->type));
    come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_76->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_76));
    add_come_last_code(info,"%s",come_value2_76->c_value);
    __result_obj__50 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__50;
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value116 = (void*)0;
struct sNode* __dec_obj57;
struct sPlusPlusNode2* __result_obj__51;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value116, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj57=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__51 = (struct sPlusPlusNode2*)come_increment_ref_count(self);
    come_call_finalizer(sPlusPlusNode2_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sPlusPlusNode2_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __right_value117 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string("sPlusPlusNode2"))));
    (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__52;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __right_value118 = (void*)0;
struct CVALUE* come_value_77;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct CVALUE* come_value2_78;
void* __right_value121 = (void*)0;
char* __dec_obj58;
void* __right_value122 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__53;
    if(    !node_compile(self->value,info)    ) {
        return (_Bool)0;
    }
    come_value_77=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_78=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 386, "struct CVALUE*"))));
    __dec_obj58=come_value2_78->c_value,
    come_value2_78->c_value=(char*)come_increment_ref_count(xsprintf("++%s",come_value_77->c_value));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj59=come_value2_78->type,
    come_value2_78->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_77->type));
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_78->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_78));
    add_come_last_code(info,"%s",come_value2_78->c_value);
    __result_obj__53 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value123 = (void*)0;
struct sNode* __dec_obj60;
struct sMinusMinusNode2* __result_obj__54;
    ((struct sNodeBase*)(__right_value123=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj60=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__54 = (struct sMinusMinusNode2*)come_increment_ref_count(self);
    come_call_finalizer(sMinusMinusNode2_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sMinusMinusNode2_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __right_value124 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string("sMinusMinusNode2"))));
    (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __right_value125 = (void*)0;
struct CVALUE* come_value_79;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct CVALUE* come_value2_80;
void* __right_value128 = (void*)0;
char* __dec_obj61;
void* __right_value129 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__56;
    if(    !node_compile(self->value,info)    ) {
        return (_Bool)0;
    }
    come_value_79=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_80=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 422, "struct CVALUE*"))));
    __dec_obj61=come_value2_80->c_value,
    come_value2_80->c_value=(char*)come_increment_ref_count(xsprintf("--%s",come_value_79->c_value));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj62=come_value2_80->type,
    come_value2_80->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_79->type));
    come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_80->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_80));
    add_come_last_code(info,"%s",come_value2_80->c_value);
    __result_obj__56 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__56;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
void* __right_value130 = (void*)0;
void* __right_value165 = (void*)0;
struct sBlock* __dec_obj75;
struct sNormalBlock* __result_obj__89;
    ((struct sNodeBase*)(__right_value130=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value130, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj75=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(block));
    come_call_finalizer(sBlock_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->clang=clang;
    self->comma=comma;
    __result_obj__89 = (struct sNormalBlock*)come_increment_ref_count(self);
    come_call_finalizer(sNormalBlock_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNormalBlock_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
    return (_Bool)1;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __right_value166 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string("sNormalBlock"))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__90;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_139;
_Bool come_c_140;
    block_139=self->mBlock;
    if(    !self->comma    ) {
        add_come_code(info,"{\n");
    }
    come_c_140=gComeC;
    if(    self->clang    ) {
        gComeC=(_Bool)1;
    }
    transpile_block(block_139,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,self->comma,(_Bool)0);
    if(    !self->comma    ) {
        add_come_code(info,"}\n");
    }
    gComeC=come_c_140;
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__57;
void* __right_value131 = (void*)0;
struct sBlock* result_81;
void* __right_value132 = (void*)0;
struct list$1sNode$ph* __dec_obj63;
void* __right_value164 = (void*)0;
struct sVarTable* __dec_obj74;
struct sBlock* __result_obj__88;
    if(    self==(void*)0    ) {
        __result_obj__57 = (void*)0;
        return __result_obj__57;
    }
    result_81=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj63=result_81->mNodes,
        result_81->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj74=result_81->mVarTable,
        result_81->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_81->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__88 = result_81;
    come_call_finalizer(sBlock_finalize, result_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__58;
void* __right_value133 = (void*)0;
struct sVarTable* result_82;
void* __right_value163 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj73;
struct sVarTable* __result_obj__87;
    if(    self==(void*)0    ) {
        __result_obj__58 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__58;
    }
    result_82=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj73=result_82->mVars,
        result_82->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_82->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_82->mParent=self->mParent;
    }
    __result_obj__87 = (struct sVarTable*)come_increment_ref_count(result_82);
    come_call_finalizer(sVarTable_finalize, result_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__59;
void* __right_value134 = (void*)0;
void* __right_value140 = (void*)0;
struct map$2char$phsVar$ph* result_88;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct list$1char$ph* __dec_obj65;
char* it_91;
struct sVar* default_value_94;
void* __right_value143 = (void*)0;
struct sVar* it2_97;
void* __right_value152 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__86;
default_value_94 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    result_88=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1915, "struct map$2char$phsVar$ph*"))));
    __dec_obj65=result_88->key_list,
    result_88->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1917, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_91=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_91=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_94,0,sizeof(struct sVar*));
        it2_97=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_91,(struct sVar*)come_increment_ref_count(default_value_94)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_88,(char*)come_increment_ref_count((char*)come_memdup(it_91, "./comelang.h", 1926, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_97)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_88,(char*)come_increment_ref_count((char*)come_memdup(it_91, "./comelang.h", 1929, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_97)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_88,(char*)come_increment_ref_count(it_91),(struct sVar*)come_increment_ref_count(sVar_clone(it2_97)));
        }
        else {
            map$2char$phsVar$ph_put(result_88,(char*)come_increment_ref_count(it_91),(struct sVar*)come_increment_ref_count(sVar_clone(it2_97)));
        }
        come_call_finalizer(sVar_finalize, default_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__86 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_88);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_83;
int i_84;
    for(    i_83=0    ;    i_83<self->size    ;    i_83++    ){
        if(        self->item_existance[i_83]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_83], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_84=0    ;    i_84<self->size    ;    i_84++    ){
        if(        self->item_existance[i_84]        ) {
            if(            1            ) {
                (self->keys[i_84] = come_decrement_ref_count(self->keys[i_84], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
int i_85;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1char$ph* __dec_obj64;
struct map$2char$phsVar$ph* __result_obj__61;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value135=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1844, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value136=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1845, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value137=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1846, "_Bool*"))));
    for(    i_85=0    ;    i_85<128    ;    i_85++    ){
        self->item_existance[i_85]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj64=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1856, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__61 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__61;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_86;
struct list_item$1char$p* prev_it_87;
    it_86=self->head;
    while(    it_86!=((void*)0)    ) {
        prev_it_87=it_86;
        it_86=it_86->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_89;
char* __result_obj__62;
char* __result_obj__63;
char* result_90;
char* __result_obj__64;
result_89 = (void*)0;
result_90 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_89,0,sizeof(char*));
        __result_obj__62 = result_89;
        return __result_obj__62;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__63 = self->key_list->it->item;
        return __result_obj__63;
    }
    memset(&result_90,0,sizeof(char*));
    __result_obj__64 = result_90;
    return __result_obj__64;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_92;
char* __result_obj__65;
char* __result_obj__66;
char* result_93;
char* __result_obj__67;
result_92 = (void*)0;
result_93 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_92,0,sizeof(char*));
        __result_obj__65 = result_92;
        return __result_obj__65;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__66 = self->key_list->it->item;
        return __result_obj__66;
    }
    memset(&result_93,0,sizeof(char*));
    __result_obj__67 = result_93;
    return __result_obj__67;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_95;
unsigned int it_96;
struct sVar* __result_obj__68;
struct sVar* __result_obj__69;
struct sVar* __result_obj__70;
struct sVar* __result_obj__71;
    hash_95=string_get_hash_key(((char*)key))%self->size;
    it_96=hash_95;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_96]        ) {
            if(            string_equals(self->keys[it_96],key)            ) {
                __result_obj__68 = (struct sVar*)come_increment_ref_count(self->items[it_96]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__68;
            }
            it_96++;
            if(            it_96>=self->size            ) {
                it_96=0;
            }
            else if(            it_96==hash_95            ) {
                __result_obj__69 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__69;
            }
        }
        else {
            __result_obj__70 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__70;
        }
    }
    __result_obj__71 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_109;
int it_110;
_Bool same_key_exist_127;
char* it2_130;
struct map$2char$phsVar$ph* __result_obj__83;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_109=string_get_hash_key(((char*)key))%self->size;
    it_110=hash_109;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_110]        ) {
            if(            string_equals(self->keys[it_110],key)            ) {
                if(                1                ) {
                    (self->keys[it_110] = come_decrement_ref_count(self->keys[it_110], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_110]);
                    self->keys[it_110]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_110]);
                    self->keys[it_110]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_110], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_110]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_110]=item;
                }
                break;
            }
            it_110++;
            if(            it_110>=self->size            ) {
                it_110=0;
            }
            else if(            it_110==hash_109            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_110]=(_Bool)1;
            if(            1            ) {
                self->keys[it_110]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_110]=key;
            }
            if(            1            ) {
                self->items[it_110]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_110]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_127=(_Bool)0;
    for(    it2_130=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_130=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_130,key)        ) {
            same_key_exist_127=(_Bool)1;
        }
    }
    if(    !same_key_exist_127    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__83 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__83;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_98;
void* __right_value144 = (void*)0;
char** keys_99;
void* __right_value145 = (void*)0;
struct sVar** items_100;
void* __right_value146 = (void*)0;
_Bool* item_existance_101;
int len_102;
char* it_103;
struct sVar* default_value_104;
void* __right_value147 = (void*)0;
struct sVar* it2_105;
unsigned int hash_106;
int n_107;
struct sVar* default_value_108;
void* __right_value148 = (void*)0;
default_value_104 = (void*)0;
default_value_108 = (void*)0;
    size_98=self->size*10;
    keys_99=(char**)come_increment_ref_count(((char**)(__right_value144=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_98)), "./comelang.h", 2083, "char**"))));
    items_100=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value145=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_98)), "./comelang.h", 2084, "struct sVar**"))));
    item_existance_101=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value146=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_98)), "./comelang.h", 2085, "_Bool*"))));
    len_102=0;
    for(    it_103=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_103=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_104,0,sizeof(struct sVar*));
        it2_105=((struct sVar*)(__right_value147=map$2char$phsVar$ph_at(self,it_103,(struct sVar*)come_increment_ref_count(default_value_104))));
        come_call_finalizer(sVar_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_106=string_get_hash_key(((char*)it_103))%size_98;
        n_107=hash_106;
        while(        (_Bool)1        ) {
            if(            item_existance_101[n_107]            ) {
                n_107++;
                if(                n_107>=size_98                ) {
                    n_107=0;
                }
                else if(                n_107==hash_106                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_101[n_107]=(_Bool)1;
                keys_99[n_107]=it_103;
                items_100[n_107]=((struct sVar*)(__right_value148=map$2char$phsVar$ph_at(self,it_103,(struct sVar*)come_increment_ref_count(default_value_108))));
                come_call_finalizer(sVar_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_102++;
                come_call_finalizer(sVar_finalize, default_value_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_99;
    self->items=items_100;
    self->item_existance=item_existance_101;
    self->size=size_98;
    self->len=len_102;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_111;
struct list_item$1char$ph* it_112;
struct list$1char$ph* __result_obj__75;
    it2_111=0;
    it_112=self->head;
    while(    it_112!=((void*)0)    ) {
        if(        string_equals(it_112->item,item)        ) {
            list$1char$ph_delete(self,it2_111,it2_111+1);
            break;
        }
        it2_111++;
        it_112=it_112->next;
    }
    __result_obj__75 = self;
    return __result_obj__75;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_113;
struct list$1char$ph* __result_obj__72;
struct list_item$1char$ph* it_116;
int i_117;
struct list_item$1char$ph* prev_it_118;
struct list_item$1char$ph* it_119;
int i_120;
struct list_item$1char$ph* prev_it_121;
struct list_item$1char$ph* it_122;
struct list_item$1char$ph* head_prev_it_123;
struct list_item$1char$ph* tail_it_124;
int i_125;
struct list_item$1char$ph* prev_it_126;
struct list$1char$ph* __result_obj__74;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_113=tail;
        tail=head;
        head=tmp_113;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__72 = self;
        return __result_obj__72;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_116=self->head;
        i_117=0;
        while(        it_116!=((void*)0)        ) {
            if(            i_117<tail            ) {
                prev_it_118=it_116;
                it_116=it_116->next;
                i_117++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_117==tail            ) {
                self->head=it_116;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_116=it_116->next;
                i_117++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_119=self->head;
        i_120=0;
        while(        it_119!=((void*)0)        ) {
            if(            i_120==head            ) {
                self->tail=it_119->prev;
                self->tail->next=((void*)0);
            }
            if(            i_120>=head            ) {
                prev_it_121=it_119;
                it_119=it_119->next;
                i_120++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_119=it_119->next;
                i_120++;
            }
        }
    }
    else {
        it_122=self->head;
        head_prev_it_123=((void*)0);
        tail_it_124=((void*)0);
        i_125=0;
        while(        it_122!=((void*)0)        ) {
            if(            i_125==head            ) {
                head_prev_it_123=it_122->prev;
            }
            if(            i_125==tail            ) {
                tail_it_124=it_122;
            }
            if(            i_125>=head&&i_125<tail            ) {
                prev_it_126=it_122;
                it_122=it_122->next;
                i_125++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_122=it_122->next;
                i_125++;
            }
        }
        if(        head_prev_it_123!=((void*)0)        ) {
            head_prev_it_123->next=tail_it_124;
        }
        if(        tail_it_124!=((void*)0)        ) {
            tail_it_124->prev=head_prev_it_123;
        }
    }
    __result_obj__74 = self;
    return __result_obj__74;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_114;
struct list_item$1char$ph* prev_it_115;
struct list$1char$ph* __result_obj__73;
    it_114=self->head;
    while(    it_114!=((void*)0)    ) {
        prev_it_115=it_114;
        it_114=it_114->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__73 = self;
    return __result_obj__73;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_128;
char* __result_obj__76;
char* __result_obj__77;
char* result_129;
char* __result_obj__78;
result_128 = (void*)0;
result_129 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_128,0,sizeof(char*));
        __result_obj__76 = result_128;
        return __result_obj__76;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__77 = self->it->item;
        return __result_obj__77;
    }
    memset(&result_129,0,sizeof(char*));
    __result_obj__78 = result_129;
    return __result_obj__78;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_131;
char* __result_obj__79;
char* __result_obj__80;
char* result_132;
char* __result_obj__81;
result_131 = (void*)0;
result_132 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_131,0,sizeof(char*));
        __result_obj__79 = result_131;
        return __result_obj__79;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__80 = self->it->item;
        return __result_obj__80;
    }
    memset(&result_132,0,sizeof(char*));
    __result_obj__81 = result_132;
    return __result_obj__81;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value149 = (void*)0;
struct list_item$1char$ph* litem_133;
char* __dec_obj66;
void* __right_value150 = (void*)0;
struct list_item$1char$ph* litem_134;
char* __dec_obj67;
void* __right_value151 = (void*)0;
struct list_item$1char$ph* litem_135;
char* __dec_obj68;
struct list$1char$ph* __result_obj__82;
    if(    self->len==0    ) {
        litem_133=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value149=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        __dec_obj66=litem_133->item,
        litem_133->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1    ) {
        litem_134=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value150=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        __dec_obj67=litem_134->item,
        litem_134->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value151=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1066, "struct list_item$1char$ph*"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        __dec_obj68=litem_135->item,
        litem_135->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result_obj__82 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__82;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__84;
void* __right_value153 = (void*)0;
struct sVar* result_136;
void* __right_value154 = (void*)0;
char* __dec_obj69;
void* __right_value155 = (void*)0;
char* __dec_obj70;
void* __right_value156 = (void*)0;
struct sType* __dec_obj71;
void* __right_value157 = (void*)0;
char* __dec_obj72;
struct sVar* __result_obj__85;
    if(    self==(void*)0    ) {
        __result_obj__84 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__84;
    }
    result_136=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj69=result_136->mName,
        result_136->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj70=result_136->mCValueName,
        result_136->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj71=result_136->mType,
        result_136->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_136->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_136->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_136->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_136->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj72=result_136->mFunName,
        result_136->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__85 = (struct sVar*)come_increment_ref_count(result_136);
    come_call_finalizer(sVar_finalize, result_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_137;
int i_138;
    for(    i_137=0    ;    i_137<self->size    ;    i_137++    ){
        if(        self->item_existance[i_137]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_137], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_138=0    ;    i_138<self->size    ;    i_138++    ){
        if(        self->item_existance[i_138]        ) {
            if(            1            ) {
                (self->keys[i_138] = come_decrement_ref_count(self->keys[i_138], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __right_value167 = (void*)0;
struct sNode* __dec_obj76;
struct sComplement* __result_obj__91;
    ((struct sNodeBase*)(__right_value167=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value167, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj76=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__91 = (struct sComplement*)come_increment_ref_count(self);
    come_call_finalizer(sComplement_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sComplement_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

char* sComplement_kind(struct sComplement* self){
void* __right_value168 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string("sComplement"))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __right_value169 = (void*)0;
struct CVALUE* come_value_141;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct CVALUE* come_value2_142;
void* __right_value172 = (void*)0;
char* __dec_obj77;
void* __right_value173 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__93;
    if(    !node_compile(self->value,info)    ) {
        return (_Bool)0;
    }
    come_value_141=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_142=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 505, "struct CVALUE*"))));
    __dec_obj77=come_value2_142->c_value,
    come_value2_142->c_value=(char*)come_increment_ref_count(xsprintf("~%s",come_value_141->c_value));
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj78=come_value2_142->type,
    come_value2_142->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_141->type));
    come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_142->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_142));
    add_come_last_code(info,"%s",come_value2_142->c_value);
    __result_obj__93 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__93;
}

static void sComplement_finalize(struct sComplement* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct sNode* __dec_obj79;
struct sParenNode* __result_obj__94;
    ((struct sNodeBase*)(__right_value174=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj79=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__94 = (struct sParenNode*)come_increment_ref_count(self);
    come_call_finalizer(sParenNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sParenNode_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

char* sParenNode_kind(struct sParenNode* self){
void* __right_value176 = (void*)0;
char* __result_obj__95;
    __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string("sParenNode"))));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__95;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_143;
void* __right_value177 = (void*)0;
struct CVALUE* left_value_144;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct CVALUE* come_value_145;
void* __right_value180 = (void*)0;
char* __dec_obj80;
void* __right_value181 = (void*)0;
struct sType* __dec_obj81;
_Bool __result_obj__96;
    left_143=self->mLeft;
    if(    !node_compile(left_143,info)    ) {
        return (_Bool)0;
    }
    left_value_144=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_145=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 543, "struct CVALUE*"))));
    __dec_obj80=come_value_145->c_value,
    come_value_145->c_value=(char*)come_increment_ref_count(xsprintf("(%s)",left_value_144->c_value));
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj81=come_value_145->type,
    come_value_145->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_144->type));
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_145->var=((void*)0);
    add_come_last_code(info,"%s",come_value_145->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_145));
    __result_obj__96 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__96;
}

static void sParenNode_finalize(struct sParenNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct sType* __dec_obj82;
void* __right_value184 = (void*)0;
struct sNode* __dec_obj83;
struct sCastNode* __result_obj__97;
    ((struct sNodeBase*)(__right_value182=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value182, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj82=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj83=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__97 = (struct sCastNode*)come_increment_ref_count(self);
    come_call_finalizer(sCastNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCastNode_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

char* sCastNode_kind(struct sCastNode* self){
void* __right_value185 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value185=__builtin_string("sCastNode"))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__98;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_146;
struct sNode* left_147;
void* __right_value186 = (void*)0;
struct CVALUE* left_value_148;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sType* type2_149;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct CVALUE* come_value_150;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
char* __dec_obj84;
void* __right_value193 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__99;
    type_146=self->mType;
    left_147=self->mLeft;
    if(    !node_compile(left_147,info)    ) {
        return (_Bool)0;
    }
    left_value_148=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type2_149=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(type_146)),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_value_150=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 585, "struct CVALUE*"))));
    cast_type(type2_149,left_value_148->type,left_value_148,info);
    __dec_obj84=come_value_150->c_value,
    come_value_150->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",((char*)(__right_value191=make_type_name_string(type2_149,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_148->c_value));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj85=come_value_150->type,
    come_value_150->type=(struct sType*)come_increment_ref_count(sType_clone(type2_149));
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_150->var=((void*)0);
    add_come_last_code(info,"%s",come_value_150->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
    __result_obj__99 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__99;
}

static void sCastNode_finalize(struct sCastNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
int sline_real_151;
void* __right_value194 = (void*)0;
struct sBlock* block_152;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* __right_value200 = (void*)0;
struct sNode* __result_obj__102;
    sline_real_151=info->sline_real;
    info->sline_real=info->sline;
    block_152=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    info->sline_real=sline_real_151;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 609, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value196=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 609, "struct sNormalBlock*")),block_152,clang,comma,info,if_result))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result_obj__102 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value200=_inf_value1)));
    come_call_finalizer(sBlock_finalize, block_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sNormalBlock_finalize, __right_value196, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value200) ? __right_value200 = come_decrement_ref_count(__right_value200, ((struct sNode*)__right_value200)->finalize, ((struct sNode*)__right_value200)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__102) ? __result_obj__102 = come_decrement_ref_count(__result_obj__102, ((struct sNode*)__result_obj__102)->finalize, ((struct sNode*)__result_obj__102)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__102;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
struct sNormalBlock* __result_obj__100;
void* __right_value197 = (void*)0;
struct sNormalBlock* result_153;
void* __right_value198 = (void*)0;
char* __dec_obj86;
void* __right_value199 = (void*)0;
struct sBlock* __dec_obj87;
struct sNormalBlock* __result_obj__101;
    if(    self==(void*)0    ) {
        __result_obj__100 = (void*)0;
        return __result_obj__100;
    }
    result_153=(struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "struct sNormalBlock*"));
    if(    self!=((void*)0)    ) {
        result_153->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj86=result_153->sname,
        result_153->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNormalBlock_clone", 5, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_153->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        __dec_obj87=result_153->mBlock,
        result_153->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_153->clang=self->clang;
    }
    if(    self!=((void*)0)    ) {
        result_153->comma=self->comma;
    }
    __result_obj__101 = result_153;
    come_call_finalizer(sNormalBlock_finalize, result_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* __right_value207 = (void*)0;
struct sNode* __result_obj__105;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 614, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value203=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 614, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(sNode_clone(node)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result_obj__105 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value207=_inf_value2)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLogicalDenial_finalize, __right_value203, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value207) ? __right_value207 = come_decrement_ref_count(__right_value207, ((struct sNode*)__right_value207)->finalize, ((struct sNode*)__right_value207)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__105) ? __result_obj__105 = come_decrement_ref_count(__result_obj__105, ((struct sNode*)__result_obj__105)->finalize, ((struct sNode*)__result_obj__105)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__105;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
struct sLogicalDenial* __result_obj__103;
void* __right_value204 = (void*)0;
struct sLogicalDenial* result_154;
void* __right_value205 = (void*)0;
char* __dec_obj88;
void* __right_value206 = (void*)0;
struct sNode* __dec_obj89;
struct sLogicalDenial* __result_obj__104;
    if(    self==(void*)0    ) {
        __result_obj__103 = (void*)0;
        return __result_obj__103;
    }
    result_154=(struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "struct sLogicalDenial*"));
    if(    self!=((void*)0)    ) {
        result_154->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj88=result_154->sname,
        result_154->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial_clone", 5, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_154->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj89=result_154->value,
        result_154->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__104 = result_154;
    come_call_finalizer(sLogicalDenial_finalize, result_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info){
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sNode* _inf_value3;
struct sCastNode* _inf_obj_value3;
void* __right_value214 = (void*)0;
struct sNode* __result_obj__108;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 619, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value209=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 619, "struct sCastNode*")),type,node,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    __result_obj__108 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value214=_inf_value3)));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sCastNode_finalize, __right_value209, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value214) ? __right_value214 = come_decrement_ref_count(__right_value214, ((struct sNode*)__right_value214)->finalize, ((struct sNode*)__right_value214)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__108) ? __result_obj__108 = come_decrement_ref_count(__result_obj__108, ((struct sNode*)__result_obj__108)->finalize, ((struct sNode*)__result_obj__108)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__108;
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
struct sCastNode* __result_obj__106;
void* __right_value210 = (void*)0;
struct sCastNode* result_155;
void* __right_value211 = (void*)0;
char* __dec_obj90;
void* __right_value212 = (void*)0;
struct sType* __dec_obj91;
void* __right_value213 = (void*)0;
struct sNode* __dec_obj92;
struct sCastNode* __result_obj__107;
    if(    self==(void*)0    ) {
        __result_obj__106 = (void*)0;
        return __result_obj__106;
    }
    result_155=(struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "struct sCastNode*"));
    if(    self!=((void*)0)    ) {
        result_155->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj90=result_155->sname,
        result_155->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCastNode_clone", 5, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_155->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj91=result_155->mType,
        result_155->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj92=result_155->mLeft,
        result_155->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__107 = result_155;
    come_call_finalizer(sCastNode_finalize, result_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo* info){
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sNode* _inf_value4;
struct sRefferenceNode* _inf_obj_value4;
void* __right_value220 = (void*)0;
struct sNode* __result_obj__111;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 624, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value216=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 624, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    __result_obj__111 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value220=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sRefferenceNode_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value220) ? __right_value220 = come_decrement_ref_count(__right_value220, ((struct sNode*)__right_value220)->finalize, ((struct sNode*)__right_value220)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__111;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
struct sRefferenceNode* __result_obj__109;
void* __right_value217 = (void*)0;
struct sRefferenceNode* result_156;
void* __right_value218 = (void*)0;
char* __dec_obj93;
void* __right_value219 = (void*)0;
struct sNode* __dec_obj94;
struct sRefferenceNode* __result_obj__110;
    if(    self==(void*)0    ) {
        __result_obj__109 = (void*)0;
        return __result_obj__109;
    }
    result_156=(struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "struct sRefferenceNode*"));
    if(    self!=((void*)0)    ) {
        result_156->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj93=result_156->sname,
        result_156->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRefferenceNode_clone", 5, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_156->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj94=result_156->value,
        result_156->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__110 = result_156;
    come_call_finalizer(sRefferenceNode_finalize, result_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct sNode* reverse_node(struct sNode* value, struct sInfo* info){
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct sNode* _inf_value5;
struct sReverseNode* _inf_obj_value5;
void* __right_value226 = (void*)0;
struct sNode* __result_obj__114;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 629, "struct sNode");
    _inf_obj_value5=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value222=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 629, "struct sReverseNode*")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReverseNode_finalize;
    _inf_value5->clone=(void*)sReverseNode_clone;
    _inf_value5->compile=(void*)sReverseNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReverseNode_kind;
    __result_obj__114 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value226=_inf_value5)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sReverseNode_finalize, __right_value222, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value226) ? __right_value226 = come_decrement_ref_count(__right_value226, ((struct sNode*)__right_value226)->finalize, ((struct sNode*)__right_value226)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__114) ? __result_obj__114 = come_decrement_ref_count(__result_obj__114, ((struct sNode*)__result_obj__114)->finalize, ((struct sNode*)__result_obj__114)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__114;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
struct sReverseNode* __result_obj__112;
void* __right_value223 = (void*)0;
struct sReverseNode* result_157;
void* __right_value224 = (void*)0;
char* __dec_obj95;
void* __right_value225 = (void*)0;
struct sNode* __dec_obj96;
struct sReverseNode* __result_obj__113;
    if(    self==(void*)0    ) {
        __result_obj__112 = (void*)0;
        return __result_obj__112;
    }
    result_157=(struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "struct sReverseNode*"));
    if(    self!=((void*)0)    ) {
        result_157->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj95=result_157->sname,
        result_157->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReverseNode_clone", 5, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_157->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj96=result_157->value,
        result_157->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__113 = result_157;
    come_call_finalizer(sReverseNode_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

struct sNode* pre_position_operator(struct sInfo* info){
_Bool refference_158;
char* p_159;
int sline_160;
void* __right_value227 = (void*)0;
struct sNode* __result_obj__115;
void* __right_value228 = (void*)0;
struct sNode* __result_obj__116;
void* __right_value229 = (void*)0;
struct sNode* __result_obj__117;
void* __right_value230 = (void*)0;
struct sNode* node_161;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sNode* _inf_value6;
struct sLogicalDenial* _inf_obj_value6;
void* __right_value233 = (void*)0;
struct sNode* __result_obj__118;
void* __right_value234 = (void*)0;
struct sNode* node_162;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sNode* _inf_value7;
struct sLogicalDenial2* _inf_obj_value7;
void* __right_value240 = (void*)0;
struct sNode* __result_obj__121;
void* __right_value241 = (void*)0;
struct sNode* node_164;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sNode* _inf_value8;
struct sMinusMinusNode2* _inf_obj_value8;
void* __right_value247 = (void*)0;
struct sNode* __result_obj__124;
void* __right_value248 = (void*)0;
struct sNode* node_166;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sNode* _inf_value9;
struct sMinusNode2* _inf_obj_value9;
void* __right_value254 = (void*)0;
struct sNode* __result_obj__127;
void* __right_value255 = (void*)0;
struct sNode* node_168;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sNode* _inf_value10;
struct sPlusPlusNode2* _inf_obj_value10;
void* __right_value261 = (void*)0;
struct sNode* __result_obj__130;
void* __right_value262 = (void*)0;
struct sNode* node_170;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sNode* _inf_value11;
struct sComplement* _inf_obj_value11;
void* __right_value268 = (void*)0;
struct sNode* __result_obj__133;
_Bool quote_172;
_Bool no_assign_173;
void* __right_value269 = (void*)0;
struct sNode* value_174;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sNode* _inf_value12;
struct sDerefferenceNode* _inf_obj_value12;
void* __right_value275 = (void*)0;
struct sNode* __result_obj__136;
void* __right_value276 = (void*)0;
struct sNode* value_176;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sNode* _inf_value13;
struct sRefferenceNode* _inf_obj_value13;
void* __right_value279 = (void*)0;
struct sNode* __result_obj__137;
void* __right_value280 = (void*)0;
struct sNode* value_177;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* _inf_value14;
struct sReverseNode* _inf_obj_value14;
void* __right_value283 = (void*)0;
struct sNode* __result_obj__138;
_Bool cast_expression_flag_178;
char* p_179;
int sline_180;
void* __right_value284 = (void*)0;
char* word_181;
void* __right_value285 = (void*)0;
char* __dec_obj109;
_Bool tuple_expression_flag_182;
_Bool named_tuple_expression_flag_183;
char* p_184;
int sline_185;
char* p_186;
int sline_187;
void* __right_value286 = (void*)0;
_Bool no_comma_188;
_Bool no_output_err_189;
_Bool no_output_come_code_190;
void* __right_value287 = (void*)0;
struct sNode* node_191;
struct sNode* node2_192;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1sNode$ph* paren_block_193;
void* __right_value290 = (void*)0;
struct sNode* node2_194;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sNode* _inf_value15;
struct sParenBlockNode* _inf_obj_value15;
void* __right_value297 = (void*)0;
struct sNode* node_195;
struct sNode* __result_obj__141;
void* __right_value298 = (void*)0;
struct sNode* node_197;
struct sNode* __result_obj__142;
void* __right_value299 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type_198=0;
char* name_199=0;
_Bool err_200=0;
void* __right_value300 = (void*)0;
struct sNode* node_201;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sNode* _inf_value16;
struct sCastNode* _inf_obj_value16;
void* __right_value303 = (void*)0;
struct sNode* __result_obj__143;
struct sNode* node_202;
_Bool no_assign_203;
_Bool no_comma_204;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj112;
void* __right_value305 = (void*)0;
struct sNode* __dec_obj113;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sNode* _inf_value17;
struct sParenNode* _inf_obj_value17;
void* __right_value311 = (void*)0;
struct sNode* __dec_obj116;
struct sNode* __result_obj__146;
struct sNode* __result_obj__147;
memset(&quote_172, 0, sizeof(_Bool));
node_202 = (void*)0;
    skip_spaces_and_lf(info);
    refference_158=(_Bool)0;
    {
        p_159=info->p;
        sline_160=info->sline;
        if(        *info->p==38&&*(info->p+1)!=38        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==34            ) {
                refference_158=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95            ) {
                refference_158=(_Bool)1;
            }
            else if(            *info->p==40||*info->p==42            ) {
                while(                *info->p==40||*info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                xisalpha(*info->p)||*info->p==95                ) {
                    refference_158=(_Bool)1;
                }
            }
        }
        info->p=p_159;
        info->sline=sline_160;
    }
    parse_sharp_v5(info);
    if(    *info->p==123    ) {
        if(        info->array_initializer        ) {
            __result_obj__115 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value227=parse_array_initializer(info))));
            ((__right_value227) ? __right_value227 = come_decrement_ref_count(__right_value227, ((struct sNode*)__right_value227)->finalize, ((struct sNode*)__right_value227)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__115) ? __result_obj__115 = come_decrement_ref_count(__result_obj__115, ((struct sNode*)__result_obj__115)->finalize, ((struct sNode*)__result_obj__115)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__115;
        }
        else if(        info->struct_initializer        ) {
            __result_obj__116 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value228=parse_struct_initializer(info))));
            ((__right_value228) ? __right_value228 = come_decrement_ref_count(__right_value228, ((struct sNode*)__right_value228)->finalize, ((struct sNode*)__right_value228)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__116) ? __result_obj__116 = come_decrement_ref_count(__result_obj__116, ((struct sNode*)__result_obj__116)->finalize, ((struct sNode*)__result_obj__116)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__116;
        }
        else {
            __result_obj__117 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value229=parse_normal_block((_Bool)0,(_Bool)0,info,(_Bool)0))));
            ((__right_value229) ? __right_value229 = come_decrement_ref_count(__right_value229, ((struct sNode*)__right_value229)->finalize, ((struct sNode*)__right_value229)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__117) ? __result_obj__117 = come_decrement_ref_count(__result_obj__117, ((struct sNode*)__result_obj__117)->finalize, ((struct sNode*)__result_obj__117)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__117;
        }
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_161=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 687, "struct sNode");
        _inf_obj_value6=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value232=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 687, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(node_161),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sLogicalDenial_finalize;
        _inf_value6->clone=(void*)sLogicalDenial_clone;
        _inf_value6->compile=(void*)sLogicalDenial_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sLogicalDenial_kind;
        __result_obj__118 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value233=_inf_value6)));
        ((node_161) ? node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sLogicalDenial_finalize, __right_value232, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value233) ? __right_value233 = come_decrement_ref_count(__right_value233, ((struct sNode*)__right_value233)->finalize, ((struct sNode*)__right_value233)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__118) ? __result_obj__118 = come_decrement_ref_count(__result_obj__118, ((struct sNode*)__result_obj__118)->finalize, ((struct sNode*)__result_obj__118)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__118;
        ((node_161) ? node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)==33    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_162=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 695, "struct sNode");
        _inf_obj_value7=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value236=sLogicalDenial2_initialize((struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "05pre_op.c", 695, "struct sLogicalDenial2*")),(struct sNode*)come_increment_ref_count(node_162),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value7->clone=(void*)sLogicalDenial2_clone;
        _inf_value7->compile=(void*)sLogicalDenial2_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sLogicalDenial2_kind;
        __result_obj__121 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value240=_inf_value7)));
        ((node_162) ? node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sLogicalDenial2_finalize, __right_value236, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value240) ? __right_value240 = come_decrement_ref_count(__right_value240, ((struct sNode*)__right_value240)->finalize, ((struct sNode*)__right_value240)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__121) ? __result_obj__121 = come_decrement_ref_count(__result_obj__121, ((struct sNode*)__result_obj__121)->finalize, ((struct sNode*)__result_obj__121)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__121;
        ((node_162) ? node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==45&&*(info->p+1)==45    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_164=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 703, "struct sNode");
        _inf_obj_value8=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value243=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 703, "struct sMinusMinusNode2*")),(struct sNode*)come_increment_ref_count(node_164),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value8->clone=(void*)sMinusMinusNode2_clone;
        _inf_value8->compile=(void*)sMinusMinusNode2_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sMinusMinusNode2_kind;
        __result_obj__124 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value247=_inf_value8)));
        ((node_164) ? node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sMinusMinusNode2_finalize, __right_value243, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value247) ? __right_value247 = come_decrement_ref_count(__right_value247, ((struct sNode*)__right_value247)->finalize, ((struct sNode*)__right_value247)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__124) ? __result_obj__124 = come_decrement_ref_count(__result_obj__124, ((struct sNode*)__result_obj__124)->finalize, ((struct sNode*)__result_obj__124)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__124;
        ((node_164) ? node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==45&&!xisdigit(*(info->p+1))    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_166=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 711, "struct sNode");
        _inf_obj_value9=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value250=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 711, "struct sMinusNode2*")),(struct sNode*)come_increment_ref_count(node_166),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sMinusNode2_finalize;
        _inf_value9->clone=(void*)sMinusNode2_clone;
        _inf_value9->compile=(void*)sMinusNode2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sMinusNode2_kind;
        __result_obj__127 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value254=_inf_value9)));
        ((node_166) ? node_166 = come_decrement_ref_count(node_166, ((struct sNode*)node_166)->finalize, ((struct sNode*)node_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sMinusNode2_finalize, __right_value250, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value254) ? __right_value254 = come_decrement_ref_count(__right_value254, ((struct sNode*)__right_value254)->finalize, ((struct sNode*)__right_value254)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__127) ? __result_obj__127 = come_decrement_ref_count(__result_obj__127, ((struct sNode*)__result_obj__127)->finalize, ((struct sNode*)__result_obj__127)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__127;
        ((node_166) ? node_166 = come_decrement_ref_count(node_166, ((struct sNode*)node_166)->finalize, ((struct sNode*)node_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==43&&*(info->p+1)==43    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_168=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 719, "struct sNode");
        _inf_obj_value10=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value257=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 719, "struct sPlusPlusNode2*")),(struct sNode*)come_increment_ref_count(node_168),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value10->clone=(void*)sPlusPlusNode2_clone;
        _inf_value10->compile=(void*)sPlusPlusNode2_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sPlusPlusNode2_kind;
        __result_obj__130 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value261=_inf_value10)));
        ((node_168) ? node_168 = come_decrement_ref_count(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sPlusPlusNode2_finalize, __right_value257, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value261) ? __right_value261 = come_decrement_ref_count(__right_value261, ((struct sNode*)__right_value261)->finalize, ((struct sNode*)__right_value261)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__130) ? __result_obj__130 = come_decrement_ref_count(__result_obj__130, ((struct sNode*)__result_obj__130)->finalize, ((struct sNode*)__result_obj__130)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__130;
        ((node_168) ? node_168 = come_decrement_ref_count(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==126    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_170=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 727, "struct sNode");
        _inf_obj_value11=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value264=sComplement_initialize((struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "05pre_op.c", 727, "struct sComplement*")),(struct sNode*)come_increment_ref_count(node_170),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sComplement_finalize;
        _inf_value11->clone=(void*)sComplement_clone;
        _inf_value11->compile=(void*)sComplement_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sComplement_kind;
        __result_obj__133 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value268=_inf_value11)));
        ((node_170) ? node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sComplement_finalize, __right_value264, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value268) ? __right_value268 = come_decrement_ref_count(__right_value268, ((struct sNode*)__right_value268)->finalize, ((struct sNode*)__right_value268)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__133;
        ((node_170) ? node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    (*info->p==92&&*(info->p+1)==42)||*info->p==42    ) {
        if(        *info->p==92        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_172=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote_172=(_Bool)0;
        }
        no_assign_173=info->no_assign;
        info->no_assign=(_Bool)1;
        value_174=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        info->no_assign=no_assign_173;
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 747, "struct sNode");
        _inf_obj_value12=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value271=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 747, "struct sDerefferenceNode*")),(struct sNode*)come_increment_ref_count(value_174),quote_172,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value12->clone=(void*)sDerefferenceNode_clone;
        _inf_value12->compile=(void*)sDerefferenceNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDerefferenceNode_kind;
        __result_obj__136 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value275=_inf_value12)));
        ((value_174) ? value_174 = come_decrement_ref_count(value_174, ((struct sNode*)value_174)->finalize, ((struct sNode*)value_174)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sDerefferenceNode_finalize, __right_value271, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value275) ? __right_value275 = come_decrement_ref_count(__right_value275, ((struct sNode*)__right_value275)->finalize, ((struct sNode*)__right_value275)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__136) ? __result_obj__136 = come_decrement_ref_count(__result_obj__136, ((struct sNode*)__result_obj__136)->finalize, ((struct sNode*)__result_obj__136)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__136;
        ((value_174) ? value_174 = come_decrement_ref_count(value_174, ((struct sNode*)value_174)->finalize, ((struct sNode*)value_174)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==38&&refference_158    ) {
        info->p++;
        skip_spaces_and_lf(info);
        value_176=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 755, "struct sNode");
        _inf_obj_value13=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value278=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 755, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value_176),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sRefferenceNode_finalize;
        _inf_value13->clone=(void*)sRefferenceNode_clone;
        _inf_value13->compile=(void*)sRefferenceNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sRefferenceNode_kind;
        __result_obj__137 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value279=_inf_value13)));
        ((value_176) ? value_176 = come_decrement_ref_count(value_176, ((struct sNode*)value_176)->finalize, ((struct sNode*)value_176)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sRefferenceNode_finalize, __right_value278, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value279) ? __right_value279 = come_decrement_ref_count(__right_value279, ((struct sNode*)__right_value279)->finalize, ((struct sNode*)__right_value279)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__137) ? __result_obj__137 = come_decrement_ref_count(__result_obj__137, ((struct sNode*)__result_obj__137)->finalize, ((struct sNode*)__result_obj__137)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__137;
        ((value_176) ? value_176 = come_decrement_ref_count(value_176, ((struct sNode*)value_176)->finalize, ((struct sNode*)value_176)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123    ) {
        info->p++;
        skip_spaces_and_lf(info);
        value_177=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 763, "struct sNode");
        _inf_obj_value14=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value282=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 763, "struct sReverseNode*")),(struct sNode*)come_increment_ref_count(value_177),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sReverseNode_finalize;
        _inf_value14->clone=(void*)sReverseNode_clone;
        _inf_value14->compile=(void*)sReverseNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sReverseNode_kind;
        __result_obj__138 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value283=_inf_value14)));
        ((value_177) ? value_177 = come_decrement_ref_count(value_177, ((struct sNode*)value_177)->finalize, ((struct sNode*)value_177)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sReverseNode_finalize, __right_value282, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value283) ? __right_value283 = come_decrement_ref_count(__right_value283, ((struct sNode*)__right_value283)->finalize, ((struct sNode*)__right_value283)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__138) ? __result_obj__138 = come_decrement_ref_count(__result_obj__138, ((struct sNode*)__result_obj__138)->finalize, ((struct sNode*)__result_obj__138)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__138;
        ((value_177) ? value_177 = come_decrement_ref_count(value_177, ((struct sNode*)value_177)->finalize, ((struct sNode*)value_177)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag_178=(_Bool)0;
        {
            p_179=info->p;
            sline_180=info->sline;
            parse_sharp_v5(info);
            word_181=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj109=word_181,
                word_181=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            parse_sharp_v5(info);
            if(            is_type_name(word_181,info)            ) {
                cast_expression_flag_178=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_179;
            info->sline=sline_180;
            (word_181 = come_decrement_ref_count(word_181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        tuple_expression_flag_182=(_Bool)0;
        named_tuple_expression_flag_183=(_Bool)0;
        if(        !gComeC        ) {
            p_184=info->p;
            sline_185=info->sline;
            parse_sharp_v5(info);
            {
                p_186=info->p;
                sline_187=info->sline;
                if(                *info->p==95||xisalpha(*info->p)                ) {
                    ((char*)(__right_value286=parse_word(info)));
                    (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                if(                *info->p==58                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    named_tuple_expression_flag_183=(_Bool)1;
                }
                else {
                    info->p=p_186;
                    info->sline=sline_187;
                }
            }
            no_comma_188=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err_189=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code_190=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_191=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node2_192=(struct sNode*)come_increment_ref_count(node_191);
            parse_sharp_v5(info);
            info->no_comma=no_comma_188;
            info->no_output_err=no_output_err_189;
            info->no_output_come_code=no_output_come_code_190;
            if(            *info->p==44            ) {
                tuple_expression_flag_182=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_184;
            info->sline=sline_185;
            ((node_191) ? node_191 = come_decrement_ref_count(node_191, ((struct sNode*)node_191)->finalize, ((struct sNode*)node_191)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node2_192) ? node2_192 = come_decrement_ref_count(node2_192, ((struct sNode*)node2_192)->finalize, ((struct sNode*)node2_192)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        if(        *info->p==123        ) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_block_193=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05pre_op.c", 852, "struct list$1sNode$ph*"))));
            while(            (_Bool)1            ) {
                parse_sharp_v5(info);
                node2_194=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                list$1sNode$ph_add(paren_block_193,(struct sNode*)come_increment_ref_count(node2_194));
                while(                *info->p==59                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_194) ? node2_194 = come_decrement_ref_count(node2_194, ((struct sNode*)node2_194)->finalize, ((struct sNode*)node2_194)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                }
                else if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value291=err_msg(info,"invalid source end in paren block")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(0);
                }
                ((node2_194) ? node2_194 = come_decrement_ref_count(node2_194, ((struct sNode*)node2_194)->finalize, ((struct sNode*)node2_194)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            expected_next_character(41,info);
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 881, "struct sNode");
            _inf_obj_value15=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value293=sParenBlockNode_initialize((struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "05pre_op.c", 881, "struct sParenBlockNode*")),(struct list$1sNode$ph*)come_increment_ref_count(paren_block_193),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sParenBlockNode_finalize;
            _inf_value15->clone=(void*)sParenBlockNode_clone;
            _inf_value15->compile=(void*)sParenBlockNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sParenBlockNode_kind;
            node_195=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer(sParenBlockNode_finalize, __right_value293, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            __result_obj__141 = (struct sNode*)come_increment_ref_count(node_195);
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_195) ? node_195 = come_decrement_ref_count(node_195, ((struct sNode*)node_195)->finalize, ((struct sNode*)node_195)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__141;
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_195) ? node_195 = come_decrement_ref_count(node_195, ((struct sNode*)node_195)->finalize, ((struct sNode*)node_195)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !gComeC&&tuple_expression_flag_182        ) {
            parse_sharp_v5(info);
            node_197=(struct sNode*)come_increment_ref_count(parse_tuple(info,named_tuple_expression_flag_183));
            parse_sharp_v5(info);
            __result_obj__142 = (struct sNode*)come_increment_ref_count(node_197);
            ((node_197) ? node_197 = come_decrement_ref_count(node_197, ((struct sNode*)node_197)->finalize, ((struct sNode*)node_197)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__142;
            ((node_197) ? node_197 = come_decrement_ref_count(node_197, ((struct sNode*)node_197)->finalize, ((struct sNode*)node_197)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        cast_expression_flag_178        ) {
            parse_sharp_v5(info);
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value299=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_198=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_199=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_200=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value299, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_200            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            node_201=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 911, "struct sNode");
            _inf_obj_value16=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value302=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 911, "struct sCastNode*")),type_198,node_201,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCastNode_finalize;
            _inf_value16->clone=(void*)sCastNode_clone;
            _inf_value16->compile=(void*)sCastNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCastNode_kind;
            __result_obj__143 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value303=_inf_value16)));
            come_call_finalizer(sType_finalize, type_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_199 = come_decrement_ref_count(name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_201) ? node_201 = come_decrement_ref_count(node_201, ((struct sNode*)node_201)->finalize, ((struct sNode*)node_201)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sCastNode_finalize, __right_value302, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value303) ? __right_value303 = come_decrement_ref_count(__right_value303, ((struct sNode*)__right_value303)->finalize, ((struct sNode*)__right_value303)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__143) ? __result_obj__143 = come_decrement_ref_count(__result_obj__143, ((struct sNode*)__result_obj__143)->finalize, ((struct sNode*)__result_obj__143)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__143;
            come_call_finalizer(sType_finalize, type_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_199 = come_decrement_ref_count(name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_201) ? node_201 = come_decrement_ref_count(node_201, ((struct sNode*)node_201)->finalize, ((struct sNode*)node_201)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            no_assign_203=info->no_assign;
            info->no_assign=(_Bool)0;
            if(            gComeC&&info->in_fun_param            ) {
                no_comma_204=info->no_comma;
                info->no_comma=(_Bool)0;
                parse_sharp_v5(info);
                __dec_obj112=node_202,
                node_202=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                parse_sharp_v5(info);
                info->no_comma=no_comma_204;
            }
            else {
                parse_sharp_v5(info);
                __dec_obj113=node_202,
                node_202=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                parse_sharp_v5(info);
            }
            info->no_assign=no_assign_203;
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 937, "struct sNode");
            _inf_obj_value17=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value307=sParenNode_initialize((struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 937, "struct sParenNode*")),node_202,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sParenNode_finalize;
            _inf_value17->clone=(void*)sParenNode_clone;
            _inf_value17->compile=(void*)sParenNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sParenNode_kind;
            __dec_obj116=node_202,
            node_202=(struct sNode*)come_increment_ref_count(_inf_value17);
            (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sParenNode_finalize, __right_value307, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__146 = (struct sNode*)come_increment_ref_count(node_202);
            ((node_202) ? node_202 = come_decrement_ref_count(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__146) ? __result_obj__146 = come_decrement_ref_count(__result_obj__146, ((struct sNode*)__result_obj__146)->finalize, ((struct sNode*)__result_obj__146)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__146;
            ((node_202) ? node_202 = come_decrement_ref_count(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else {
        __result_obj__147 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((__result_obj__147) ? __result_obj__147 = come_decrement_ref_count(__result_obj__147, ((struct sNode*)__result_obj__147)->finalize, ((struct sNode*)__result_obj__147)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__147;
    }
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self){
struct sLogicalDenial2* __result_obj__119;
void* __right_value237 = (void*)0;
struct sLogicalDenial2* result_163;
void* __right_value238 = (void*)0;
char* __dec_obj97;
void* __right_value239 = (void*)0;
struct sNode* __dec_obj98;
struct sLogicalDenial2* __result_obj__120;
    if(    self==(void*)0    ) {
        __result_obj__119 = (void*)0;
        return __result_obj__119;
    }
    result_163=(struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "sLogicalDenial2_clone", 3, "struct sLogicalDenial2*"));
    if(    self!=((void*)0)    ) {
        result_163->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj97=result_163->sname,
        result_163->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial2_clone", 5, "char*"));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_163->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj98=result_163->value,
        result_163->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__120 = result_163;
    come_call_finalizer(sLogicalDenial2_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
struct sMinusMinusNode2* __result_obj__122;
void* __right_value244 = (void*)0;
struct sMinusMinusNode2* result_165;
void* __right_value245 = (void*)0;
char* __dec_obj99;
void* __right_value246 = (void*)0;
struct sNode* __dec_obj100;
struct sMinusMinusNode2* __result_obj__123;
    if(    self==(void*)0    ) {
        __result_obj__122 = (void*)0;
        return __result_obj__122;
    }
    result_165=(struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "struct sMinusMinusNode2*"));
    if(    self!=((void*)0)    ) {
        result_165->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj99=result_165->sname,
        result_165->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusMinusNode2_clone", 5, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_165->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj100=result_165->value,
        result_165->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__123 = result_165;
    come_call_finalizer(sMinusMinusNode2_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__123;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
struct sMinusNode2* __result_obj__125;
void* __right_value251 = (void*)0;
struct sMinusNode2* result_167;
void* __right_value252 = (void*)0;
char* __dec_obj101;
void* __right_value253 = (void*)0;
struct sNode* __dec_obj102;
struct sMinusNode2* __result_obj__126;
    if(    self==(void*)0    ) {
        __result_obj__125 = (void*)0;
        return __result_obj__125;
    }
    result_167=(struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "struct sMinusNode2*"));
    if(    self!=((void*)0)    ) {
        result_167->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj101=result_167->sname,
        result_167->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusNode2_clone", 5, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_167->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj102=result_167->value,
        result_167->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__126 = result_167;
    come_call_finalizer(sMinusNode2_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
struct sPlusPlusNode2* __result_obj__128;
void* __right_value258 = (void*)0;
struct sPlusPlusNode2* result_169;
void* __right_value259 = (void*)0;
char* __dec_obj103;
void* __right_value260 = (void*)0;
struct sNode* __dec_obj104;
struct sPlusPlusNode2* __result_obj__129;
    if(    self==(void*)0    ) {
        __result_obj__128 = (void*)0;
        return __result_obj__128;
    }
    result_169=(struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "struct sPlusPlusNode2*"));
    if(    self!=((void*)0)    ) {
        result_169->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj103=result_169->sname,
        result_169->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sPlusPlusNode2_clone", 5, "char*"));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_169->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj104=result_169->value,
        result_169->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__129 = result_169;
    come_call_finalizer(sPlusPlusNode2_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct sComplement* sComplement_clone(struct sComplement* self){
struct sComplement* __result_obj__131;
void* __right_value265 = (void*)0;
struct sComplement* result_171;
void* __right_value266 = (void*)0;
char* __dec_obj105;
void* __right_value267 = (void*)0;
struct sNode* __dec_obj106;
struct sComplement* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__131 = (void*)0;
        return __result_obj__131;
    }
    result_171=(struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "struct sComplement*"));
    if(    self!=((void*)0)    ) {
        result_171->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj105=result_171->sname,
        result_171->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComplement_clone", 5, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_171->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj106=result_171->value,
        result_171->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__132 = result_171;
    come_call_finalizer(sComplement_finalize, result_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
struct sDerefferenceNode* __result_obj__134;
void* __right_value272 = (void*)0;
struct sDerefferenceNode* result_175;
void* __right_value273 = (void*)0;
char* __dec_obj107;
void* __right_value274 = (void*)0;
struct sNode* __dec_obj108;
struct sDerefferenceNode* __result_obj__135;
    if(    self==(void*)0    ) {
        __result_obj__134 = (void*)0;
        return __result_obj__134;
    }
    result_175=(struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "struct sDerefferenceNode*"));
    if(    self!=((void*)0)    ) {
        result_175->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj107=result_175->sname,
        result_175->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDerefferenceNode_clone", 5, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_175->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj108=result_175->value,
        result_175->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_175->mQuote=self->mQuote;
    }
    __result_obj__135 = result_175;
    come_call_finalizer(sDerefferenceNode_finalize, result_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self){
struct sParenBlockNode* __result_obj__139;
void* __right_value294 = (void*)0;
struct sParenBlockNode* result_196;
void* __right_value295 = (void*)0;
char* __dec_obj110;
void* __right_value296 = (void*)0;
struct list$1sNode$ph* __dec_obj111;
struct sParenBlockNode* __result_obj__140;
    if(    self==(void*)0    ) {
        __result_obj__139 = (void*)0;
        return __result_obj__139;
    }
    result_196=(struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "sParenBlockNode_clone", 3, "struct sParenBlockNode*"));
    if(    self!=((void*)0)    ) {
        result_196->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj110=result_196->sname,
        result_196->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenBlockNode_clone", 5, "char*"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_196->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)    ) {
        __dec_obj111=result_196->paren_block,
        result_196->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->paren_block));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__140 = result_196;
    come_call_finalizer(sParenBlockNode_finalize, result_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
struct sParenNode* __result_obj__144;
void* __right_value308 = (void*)0;
struct sParenNode* result_205;
void* __right_value309 = (void*)0;
char* __dec_obj114;
void* __right_value310 = (void*)0;
struct sNode* __dec_obj115;
struct sParenNode* __result_obj__145;
    if(    self==(void*)0    ) {
        __result_obj__144 = (void*)0;
        return __result_obj__144;
    }
    result_205=(struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "struct sParenNode*"));
    if(    self!=((void*)0)    ) {
        result_205->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj114=result_205->sname,
        result_205->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenNode_clone", 5, "char*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_205->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj115=result_205->mLeft,
        result_205->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__145 = result_205;
    come_call_finalizer(sParenNode_finalize, result_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__145;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __right_value312 = (void*)0;
struct sNode* node_206;
void* __right_value313 = (void*)0;
struct sNode* __result_obj__148;
struct sNode* __result_obj__149;
    node_206=(struct sNode*)come_increment_ref_count(pre_position_operator(info));
    if(    node_206==((void*)0)    ) {
        __result_obj__148 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value313=expression_node_v97(info))));
        ((node_206) ? node_206 = come_decrement_ref_count(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__right_value313) ? __right_value313 = come_decrement_ref_count(__right_value313, ((struct sNode*)__right_value313)->finalize, ((struct sNode*)__right_value313)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__148) ? __result_obj__148 = come_decrement_ref_count(__result_obj__148, ((struct sNode*)__result_obj__148)->finalize, ((struct sNode*)__result_obj__148)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__148;
    }
    else {
        __result_obj__149 = (struct sNode*)come_increment_ref_count(node_206);
        ((node_206) ? node_206 = come_decrement_ref_count(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__149) ? __result_obj__149 = come_decrement_ref_count(__result_obj__149, ((struct sNode*)__result_obj__149)->finalize, ((struct sNode*)__result_obj__149)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__149;
    }
    ((node_206) ? node_206 = come_decrement_ref_count(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
}

