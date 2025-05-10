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

typedef unsigned long  int __nlink_t;

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

typedef long  int __blksize_t;

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
typedef float _Float32;

typedef double _Float64;

typedef double _Float32x;

typedef long  double _Float64x;

typedef int wchar_t;

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

typedef unsigned long  int nlink_t;

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

typedef long  int blksize_t;

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
    short __spins;
    short __elision;
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
    char __rwelision;
    unsigned char __pad1[7];
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
char __size[4];
int __align;
};

typedef union anonymous_typeZ13 pthread_mutexattr_t;

union anonymous_typeZ14
{
char __size[4];
int __align;
};

typedef union anonymous_typeZ14 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t
{
char __size[56];
long  int __align;
};

typedef union pthread_attr_t pthread_attr_t;

union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[40];
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
char __size[4];
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
int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int __isoc99_scanf(const char* __format, ...);
int __isoc99_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int vscanf(const char* __format, va_list __arg);
int vsscanf(const char* __s, const char* __format, va_list __arg);
int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int __isoc99_vscanf(const char* __format, va_list __arg);
int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);
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
double strtof32x(const char* __nptr, char** __endptr);
long  double strtof64x(const char* __nptr, char** __endptr);
long  int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoul(const char* __nptr, char** __endptr, int __base);
long long int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);
long long int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfroml(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfromf64(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf32x(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf64x(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
long  int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
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
int mbtowc(int* __pwc, const char* __s, unsigned long  int __n);
int wctomb(char* __s, int __wchar);
unsigned long  int mbstowcs(int* __pwcs, const char* __s, unsigned long  int __n);
unsigned long  int wcstombs(char* __s, const int* __pwcs, unsigned long  int __n);
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
int* wcscpy(int* __dest, const int* __src);
int* wcsncpy(int* __dest, const int* __src, unsigned long  int __n);
int* wcscat(int* __dest, const int* __src);
int* wcsncat(int* __dest, const int* __src, unsigned long  int __n);
int wcscmp(const int* __s1, const int* __s2);
int wcsncmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp(const int* __s1, const int* __s2);
int wcsncasecmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
int wcsncasecmp_l(const int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int wcscoll(const int* __s1, const int* __s2);
unsigned long  int wcsxfrm(int* __s1, const int* __s2, unsigned long  int __n);
int wcscoll_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
unsigned long  int wcsxfrm_l(int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int* wcsdup(const int* __s);
int* wcschr(const int* __wcs, int __wc);
int* wcsrchr(const int* __wcs, int __wc);
int* wcschrnul(const int* __s, int __wc);
unsigned long  int wcscspn(const int* __wcs, const int* __reject);
unsigned long  int wcsspn(const int* __wcs, const int* __accept);
int* wcspbrk(const int* __wcs, const int* __accept);
int* wcsstr(const int* __haystack, const int* __needle);
int* wcstok(int* __s, const int* __delim, int** __ptr);
unsigned long  int wcslen(const int* __s);
int* wcswcs(const int* __haystack, const int* __needle);
unsigned long  int wcsnlen(const int* __s, unsigned long  int __maxlen);
int* wmemchr(const int* __s, int __c, unsigned long  int __n);
int wmemcmp(const int* __s1, const int* __s2, unsigned long  int __n);
int* wmemcpy(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemmove(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemset(int* __s, int __c, unsigned long  int __n);
int* wmempcpy(int* __s1, const int* __s2, unsigned long  int __n);
unsigned int btowc(int __c);
int wctob(unsigned int __c);
int mbsinit(const struct anonymous_typeX2* __ps);
unsigned long  int mbrtowc(int* __pwc, const char* __s, unsigned long  int __n, struct anonymous_typeX2* __p);
unsigned long  int wcrtomb(char* __s, int __wc, struct anonymous_typeX2* __ps);
unsigned long  int __mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbsrtowcs(int* __dst, const char** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsrtombs(char* __dst, const int** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int mbsnrtowcs(int* __dst, const char** __src, unsigned long  int __nmc, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsnrtombs(char* __dst, const int** __src, unsigned long  int __nwc, unsigned long  int __len, struct anonymous_typeX2* __ps);
int wcwidth(int __c);
int wcswidth(const int* __s, unsigned long  int __n);
double wcstod(const int* __nptr, int** __endptr);
float wcstof(const int* __nptr, int** __endptr);
long  double wcstold(const int* __nptr, int** __endptr);
float wcstof32(const int* __nptr, int** __endptr);
double wcstof64(const int* __nptr, int** __endptr);
double wcstof32x(const int* __nptr, int** __endptr);
long  double wcstof64x(const int* __nptr, int** __endptr);
long  int wcstol(const int* __nptr, int** __endptr, int __base);
unsigned long  int wcstoul(const int* __nptr, int** __endptr, int __base);
long long int wcstoll(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstoull(const int* __nptr, int** __endptr, int __base);
long long int wcstoq(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstouq(const int* __nptr, int** __endptr, int __base);
long  int wcstol_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int wcstoul_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long long int wcstoll_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int wcstoull_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
double wcstod_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstold_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof32_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof64_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof32x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstof64x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
int* wcpcpy(int* __dest, const int* __src);
int* wcpncpy(int* __dest, const int* __src, unsigned long  int __n);
struct _IO_FILE* open_wmemstream(int** __bufloc, unsigned long  int* __sizeloc);
int fwide(struct _IO_FILE* __fp, int __mode);
int fwprintf(struct _IO_FILE* __stream, const int* __format, ...);
int wprintf(const int* __format, ...);
int swprintf(int* __s, unsigned long  int __n, const int* __format, ...);
int vfwprintf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int vwprintf(const int* __format, va_list __arg);
int vswprintf(int* __s, unsigned long  int __n, const int* __format, va_list __arg);
int fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int wscanf(const int* __format, ...);
int swscanf(const int* __s, const int* __format, ...);
int __isoc99_fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int __isoc99_wscanf(const int* __format, ...);
int __isoc99_swscanf(const int* __s, const int* __format, ...);
int vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int vwscanf(const int* __format, va_list __arg);
int vswscanf(const int* __s, const int* __format, va_list __arg);
int __isoc99_vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int __isoc99_vwscanf(const int* __format, va_list __arg);
int __isoc99_vswscanf(const int* __s, const int* __format, va_list __arg);
unsigned int fgetwc(struct _IO_FILE* __stream);
unsigned int getwc(struct _IO_FILE* __stream);
unsigned int getwchar();
unsigned int fputwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar(int __wc);
int* fgetws(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws(const int* __ws, struct _IO_FILE* __stream);
unsigned int ungetwc(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int getwc_unlocked(struct _IO_FILE* __stream);
unsigned int getwchar_unlocked();
unsigned int fgetwc_unlocked(struct _IO_FILE* __stream);
unsigned int fputwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar_unlocked(int __wc);
int* fgetws_unlocked(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws_unlocked(const int* __ws, struct _IO_FILE* __stream);
unsigned long  int wcsftime(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp);
unsigned long  int wcsftime_l(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp, struct __locale_struct* __loc);
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
int main(int argc, char** argv);
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
int come_get_ref_count(void* mem);
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
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
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
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sClass_finalize(struct sClass* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void sBlock_finalize(struct sBlock* self);
static void sFun_finalize(struct sFun* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
static void CVALUE_finalize(struct CVALUE* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static void sClassModule_finalize(struct sClassModule* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
static void sCurrentNode_finalize(struct sCurrentNode* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
// uniq global variable
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

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
int main(int argc, char** argv){
int __result_obj__1;
    come_heap_init(0, 0, 0);
    setlocale(6,"");
    __result_obj__1 = come_main(argc,argv);
    come_heap_final();
    return __result_obj__1;
}

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128    ) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0    ) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
int i_1;
void* __right_value2 = (void*)0;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 852, "struct buffer*"))));
    buffer_append_format(buf_0,"%s %d\n",sname,sline);
    for(    i_1=gNumComeStackFrame-2    ;    i_1>=0    ;    i_1--    ){
        buffer_append_format(buf_0,"%s %d #%d\n",gComeStackFrameSName[i_1],gComeStackFrameSLine[i_1],gComeStackFrameID[i_1]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_0))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_2;
    for(    i_2=gNumComeStackFrame-1    ;    i_2>=0    ;    i_2--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_2],gComeStackFrameSLine[i_2],gComeStackFrameID[i_2]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test    ) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe_v2();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_3;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_3=0    ;    i_3<gHeapPages.mSizePages    ;    i_3++    ){
        gHeapPages.mPages[i_3]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_4;
int n_5;
_Bool flag_6;
int i_7;
struct sMemHeaderTiny* it_8;
int n_9;
int i_10;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_4=gAllocMem;
        n_5=0;
        while(        it_4        ) {
            n_5++;
            flag_6=(_Bool)0;
            printf("#%d ",n_5);
            if(            it_4->class_name            ) {
                printf("%p (%s): ",(char*)it_4+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_4->class_name);
            }
            for(            i_7=0            ;            i_7<16            ;            i_7++            ){
                if(                it_4->sname[i_7]                ) {
                    printf("%s %d #%d, ",it_4->sname[i_7],it_4->sline[i_7],it_4->id[i_7]);
                    flag_6=(_Bool)1;
                }
            }
            if(            flag_6            ) {
                puts("");
            }
            it_4=it_4->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_5,gNumAlloc,gNumFree);
    }
    else {
        it_8=(struct sMemHeaderTiny*)gAllocMem;
        n_9=0;
        while(        it_8        ) {
            n_9++;
            if(            it_8->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_9,(char*)it_8+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_8->class_name,it_8->sname,it_8->sline);
            }
            it_8=it_8->next;
        }
        if(        n_9>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_9,gNumAlloc,gNumFree);
        }
    }
    for(    i_10=0    ;    i_10<gHeapPages.mSizePages    ;    i_10++    ){
        free(gHeapPages.mPages[i_10]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_11;
unsigned long  int free_area_12;
int new_size_pages_13;
char** new_pages_14;
int i_15;
void* __result_obj__3;
    result_11=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_11=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_11,0,size);
        }
        if(        result_11==((void*)0)        ) {
            free_area_12=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_12            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_13=gHeapPages.mSizePages*2;
                    new_pages_14=calloc(1,sizeof(char*)*new_size_pages_13);
                    i_15=0;
                    for(                    ;                    i_15<gHeapPages.mSizePages                    ;                    i_15++                    ){
                        new_pages_14[i_15]=gHeapPages.mPages[i_15];
                    }
                    for(                    ;                    i_15<new_size_pages_13                    ;                    i_15++                    ){
                        new_pages_14[i_15]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_14;
                    gHeapPages.mSizePages=new_size_pages_13;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_11=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_11=calloc(1,size);
    }
    __result_obj__3 = result_11;
    return __result_obj__3;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_16;
struct sMemHeader* it_17;
int i_18;
int i_19;
void* __result_obj__4;
void* result_20;
struct sMemHeaderTiny* it_21;
void* __result_obj__5;
memset(&i_18, 0, sizeof(int));
memset(&i_19, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_16=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_17=result_16;
        it_17->allocated=177783;
        it_17->size=size+sizeof(struct sMemHeader);
        it_17->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_18=0            ;            i_18<gNumComeStackFrame            ;            i_18++            ){
                it_17->sname[i_18]=gComeStackFrameSName[i_18];
                it_17->sline[i_18]=gComeStackFrameSLine[i_18];
                it_17->id[i_18]=gComeStackFrameID[i_18];
            }
        }
        else {
            for(            i_19=0            ;            i_19<16            ;            i_19++            ){
                it_17->sname[i_19]=gComeStackFrameSName[gNumComeStackFrame-1-i_19];
                it_17->sline[i_19]=gComeStackFrameSLine[gNumComeStackFrame-1-i_19];
                it_17->id[i_19]=gComeStackFrameID[gNumComeStackFrame-1-i_19];
            }
        }
        come_pop_stackframe_v2();
        it_17->next=gAllocMem;
        it_17->prev=((void*)0);
        it_17->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_17;
        }
        gAllocMem=it_17;
        gNumAlloc++;
        __result_obj__4 = (char*)result_16+sizeof(struct sMemHeader);
        return __result_obj__4;
    }
    else {
        result_20=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_21=result_20;
        it_21->allocated=177783;
        it_21->class_name=class_name;
        it_21->sname=sname;
        it_21->sline=sline;
        it_21->size=size+sizeof(struct sMemHeaderTiny);
        it_21->free_next=((void*)0);
        it_21->next=(struct sMemHeaderTiny*)gAllocMem;
        it_21->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_21;
        }
        gAllocMem=(struct sMemHeader*)it_21;
        gNumAlloc++;
        __result_obj__5 = (char*)result_20+sizeof(struct sMemHeaderTiny);
        return __result_obj__5;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_22;
struct sMemHeader* prev_it_23;
struct sMemHeader* next_it_24;
unsigned long  int size_25;
struct sMemHeaderTiny* it_26;
struct sMemHeaderTiny* prev_it_27;
struct sMemHeaderTiny* next_it_28;
unsigned long  int size_29;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_22=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_22->allocated!=177783            ) {
                return;
            }
            it_22->allocated=0;
            prev_it_23=it_22->prev;
            next_it_24=it_22->next;
            if(            gAllocMem==it_22            ) {
                gAllocMem=next_it_24;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_23                ) {
                    prev_it_23->next=next_it_24;
                }
                if(                next_it_24                ) {
                    next_it_24->prev=prev_it_23;
                }
            }
            size_25=it_22->size;
            if(            size_25<4096            ) {
                if(                gHeapPages.mFreeMem[size_25]==((void*)0)                ) {
                    it_22->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_25]=(struct sMemHeaderTiny*)it_22;
                }
                else {
                    it_22->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_25];
                    gHeapPages.mFreeMem[size_25]=(struct sMemHeaderTiny*)it_22;
                }
            }
            else {
                free(it_22);
            }
            gNumFree++;
        }
        else {
            it_26=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_26->allocated!=177783            ) {
                return;
            }
            it_26->allocated=0;
            prev_it_27=it_26->prev;
            next_it_28=it_26->next;
            if(            gAllocMem==it_26            ) {
                gAllocMem=(struct sMemHeader*)next_it_28;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_27                ) {
                    prev_it_27->next=next_it_28;
                }
                if(                next_it_28                ) {
                    next_it_28->prev=prev_it_27;
                }
            }
            size_29=it_26->size;
            if(            size_29<4096            ) {
                if(                gHeapPages.mFreeMem[size_29]==((void*)0)                ) {
                    it_26->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_29]=it_26;
                }
                else {
                    it_26->free_next=gHeapPages.mFreeMem[size_29];
                    gHeapPages.mFreeMem[size_29]=it_26;
                }
            }
            else {
                free(it_26);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_30;
char* __result_obj__6;
struct sMemHeaderTiny* it_31;
char* __result_obj__7;
    if(    gComeDebugLib    ) {
        it_30=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_30->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_30);
            exit(2);
        }
        __result_obj__6 = it_30->class_name;
        return __result_obj__6;
    }
    else {
        it_31=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_31->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_31);
            exit(2);
        }
        __result_obj__7 = it_31->class_name;
        return __result_obj__7;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_32;
int i_33;
struct sMemHeaderTiny* it_34;
    if(    gComeDebugLib    ) {
        it_32=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_32->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_32->class_name        ) {
            printf("(%s): ",it_32->class_name);
        }
        for(        i_33=0        ;        i_33<16        ;        i_33++        ){
            if(            it_32->sname[i_33]            ) {
                printf("%s %d #%d, ",it_32->sname[i_33],it_32->sline[i_33],it_32->id[i_33]);
            }
        }
        puts("");
    }
    else {
        it_34=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_34->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_34->class_name,it_34->sname,it_34->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_35;
unsigned long  int* ref_count_36;
unsigned long  int* size2_37;
void* __result_obj__8;
    mem_35=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_36=(unsigned long  int*)mem_35;
    *ref_count_36=0;
    size2_37=(unsigned long  int*)(mem_35+sizeof(unsigned long  int));
    *size2_37=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__8 = mem_35+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__8;
}

void come_free(void* mem){
unsigned long  int* ref_count_38;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_38=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_38);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__9;
char* mem_39;
unsigned long  int* size_p_40;
unsigned long  int size_41;
void* result_42;
void* __result_obj__10;
    if(    !block    ) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    mem_39=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_40=(unsigned long  int*)(mem_39+sizeof(unsigned long  int));
    size_41=*size_p_40-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_42=come_calloc_v2(1,size_41,sname,sline,class_name);
    memcpy(result_42,block,size_41);
    __result_obj__10 = result_42;
    return __result_obj__10;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__11;
unsigned long  int* ref_count_43;
void* __result_obj__12;
    if(    mem==((void*)0)    ) {
        __result_obj__11 = mem;
        return __result_obj__11;
    }
    ref_count_43=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_43)++;
    __result_obj__12 = mem;
    return __result_obj__12;
}

void* come_print_ref_count(void* mem){
void* __result_obj__13;
unsigned long  int* ref_count_44;
void* __result_obj__14;
    if(    mem==((void*)0)    ) {
        __result_obj__13 = mem;
        return __result_obj__13;
    }
    ref_count_44=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_44);
    __result_obj__14 = mem;
    return __result_obj__14;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_45;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_45=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_45;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__15;
void* __result_obj__16;
unsigned long  int* ref_count_46;
unsigned long  int count_47;
void (*finalizer_48)(void*);
void* __result_obj__17;
void* __result_obj__18;
memset(&finalizer_48, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__15 = mem;
            return __result_obj__15;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__16 = ((void*)0);
        return __result_obj__16;
    }
    ref_count_46=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_46)--;
    }
    count_47=*ref_count_46;
    if(    !no_free&&count_47<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_48=protocol_fun;
            finalizer_48(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    __result_obj__18 = mem;
    return __result_obj__18;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_49)(void*);
void (*finalizer_50)(void*);
void (*finalizer_51)(void*);
unsigned long  int* ref_count_52;
unsigned long  int count_53;
void (*finalizer_54)(void*);
void (*finalizer_55)(void*);
void (*finalizer_56)(void*);
memset(&finalizer_49, 0, sizeof(void (*)(void*)));
memset(&finalizer_50, 0, sizeof(void (*)(void*)));
memset(&finalizer_51, 0, sizeof(void (*)(void*)));
memset(&finalizer_54, 0, sizeof(void (*)(void*)));
memset(&finalizer_55, 0, sizeof(void (*)(void*)));
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            return;
        }
    }
    if(    mem==((void*)0)    ) {
        return;
    }
    if(    call_finalizer_only    ) {
        if(        fun        ) {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_49=protocol_fun;
                finalizer_49(protocol_obj);
            }
            finalizer_50=fun;
            finalizer_50(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_51=protocol_fun;
                finalizer_51(protocol_obj);
            }
        }
    }
    else {
        ref_count_52=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_52)--;
        }
        count_53=*ref_count_52;
        if(        !no_free&&count_53<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_54=protocol_fun;
                        finalizer_54(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_55=fun;
                        finalizer_55(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_56=protocol_fun;
                        finalizer_56(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__19;
int len_57;
void* __right_value4 = (void*)0;
char* result_58;
char* __result_obj__20;
    if(    str==((void*)0)    ) {
        __result_obj__19 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__19 = come_decrement_ref_count(__result_obj__19, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__19;
    }
    len_57=strlen(str)+1;
    result_58=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_57)), "./comelang.h", 1539, "char*"));
    strncpy(result_58,str,len_57);
    __result_obj__20 = (char*)come_increment_ref_count(result_58);
    (result_58 = come_decrement_ref_count(result_58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__20 = come_decrement_ref_count(__result_obj__20, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__20;
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2(){
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline){
    come_save_stackframe(sname,sline);
}

void stackframe_v2(){
    stackframe();
}

char* come_get_stackframe_v2(){
void* __right_value5 = (void*)0;
char* __result_obj__21;
    __result_obj__21 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__21 = come_decrement_ref_count(__result_obj__21, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__21;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__22;
    __result_obj__22 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__22;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__23;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3493, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__23 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__24;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3503, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__24 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__25;
void* __right_value8 = (void*)0;
struct buffer* result_59;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__26;
    if(    self==((void*)0)    ) {
        __result_obj__25 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__25;
    }
    result_59=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3523, "struct buffer*"));
    result_59->size=self->size;
    __dec_obj3=result_59->buf,
    result_59->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3526, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_59->len=self->len;
    memcpy(result_59->buf,self->buf,self->len);
    __result_obj__26 = (struct buffer*)come_increment_ref_count(result_59);
    come_call_finalizer(buffer_finalize, result_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__27;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__27 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__27;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)    ) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)    ) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
struct buffer* __result_obj__28;
void* __right_value12 = (void*)0;
char* old_buf_60;
int old_len_61;
int new_size_62;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__29;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__28 = self;
        return __result_obj__28;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_60=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3574, "char*"));
        memcpy(old_buf_60,self->buf,self->size);
        old_len_61=self->len;
        new_size_62=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_62)), "./comelang.h", 3578, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_60,old_len_61);
        self->buf[old_len_61]=0;
        self->size=new_size_62;
        (old_buf_60 = come_decrement_ref_count(old_buf_60, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__29 = self;
    return __result_obj__29;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__30;
void* __right_value14 = (void*)0;
char* old_buf_63;
int old_len_64;
int new_size_65;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__31;
    if(    self==((void*)0)    ) {
        __result_obj__30 = ((void*)0);
        return __result_obj__30;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_63=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang.h", 3597, "char*"));
        old_len_64=self->len;
        new_size_65=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_65)), "./comelang.h", 3601, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_63,old_len_64);
        self->buf[old_len_64]=0;
        self->size=new_size_65;
        (old_buf_63 = come_decrement_ref_count(old_buf_63, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__31 = self;
    return __result_obj__31;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__32;
int size_66;
void* __right_value16 = (void*)0;
char* old_buf_67;
int old_len_68;
int new_size_69;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__33;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__32 = self;
        return __result_obj__32;
    }
    size_66=strlen(mem);
    if(    self->len+size_66+1+1>=self->size    ) {
        old_buf_67=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3623, "char*"));
        memcpy(old_buf_67,self->buf,self->size);
        old_len_68=self->len;
        new_size_69=(self->size+size_66+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_69)), "./comelang.h", 3627, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_67,old_len_68);
        self->buf[old_len_68]=0;
        self->size=new_size_69;
        (old_buf_67 = come_decrement_ref_count(old_buf_67, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_66);
    self->len+=size_66;
    self->buf[self->len]=0;
    __result_obj__33 = self;
    return __result_obj__33;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__34;
va_list args_70;
char* result_71;
int len_72;
struct buffer* __result_obj__35;
void* __right_value18 = (void*)0;
char* mem_73;
int size_74;
void* __right_value19 = (void*)0;
char* old_buf_75;
int old_len_76;
int new_size_77;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__36;
memset(&args_70, 0, sizeof(va_list));
result_71 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__34 = self;
        return __result_obj__34;
    }
    __builtin_va_start(args_70,msg);
    len_72=vasprintf(&result_71,msg,args_70);
    __builtin_va_end(args_70);
    if(    len_72<0    ) {
        __result_obj__35 = self;
        return __result_obj__35;
    }
    mem_73=(char*)come_increment_ref_count(__builtin_string(result_71));
    size_74=strlen(mem_73);
    if(    self->len+size_74+1+1>=self->size    ) {
        old_buf_75=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3660, "char*"));
        memcpy(old_buf_75,self->buf,self->size);
        old_len_76=self->len;
        new_size_77=(self->size+size_74+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_77)), "./comelang.h", 3664, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_75,old_len_76);
        self->buf[old_len_76]=0;
        self->size=new_size_77;
        (old_buf_75 = come_decrement_ref_count(old_buf_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_73,size_74);
    self->len+=size_74;
    self->buf[self->len]=0;
    free(result_71);
    __result_obj__36 = self;
    (mem_73 = come_decrement_ref_count(mem_73, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__36;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__37;
int size_78;
void* __right_value21 = (void*)0;
char* old_buf_79;
int old_len_80;
int new_size_81;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__38;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__37 = self;
        return __result_obj__37;
    }
    size_78=strlen(mem)+1;
    if(    self->len+size_78+1+1+1>=self->size    ) {
        old_buf_79=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3686, "char*"));
        memcpy(old_buf_79,self->buf,self->size);
        old_len_80=self->len;
        new_size_81=(self->size+size_78+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_81)), "./comelang.h", 3690, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_79,old_len_80);
        self->buf[old_len_80]=0;
        self->size=new_size_81;
        (old_buf_79 = come_decrement_ref_count(old_buf_79, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_78);
    self->len+=size_78;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__38 = self;
    return __result_obj__38;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__39;
int* mem_82;
int size_83;
void* __right_value23 = (void*)0;
char* old_buf_84;
int old_len_85;
int new_size_86;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__40;
    if(    self==((void*)0)    ) {
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    mem_82=&value;
    size_83=sizeof(int);
    if(    self->len+size_83+1+1>=self->size    ) {
        old_buf_84=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3713, "char*"));
        memcpy(old_buf_84,self->buf,self->size);
        old_len_85=self->len;
        new_size_86=(self->size+size_83+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_86)), "./comelang.h", 3717, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_84,old_len_85);
        self->buf[old_len_85]=0;
        self->size=new_size_86;
        (old_buf_84 = come_decrement_ref_count(old_buf_84, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_82,size_83);
    self->len+=size_83;
    self->buf[self->len]=0;
    __result_obj__40 = self;
    return __result_obj__40;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_87;
int size_88;
void* __right_value25 = (void*)0;
char* old_buf_89;
int old_len_90;
int new_size_91;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__41;
    mem_87=&value;
    size_88=sizeof(long);
    if(    self->len+size_88+1+1>=self->size    ) {
        old_buf_89=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3736, "char*"));
        memcpy(old_buf_89,self->buf,self->size);
        old_len_90=self->len;
        new_size_91=(self->size+size_88+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_91)), "./comelang.h", 3740, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_89,old_len_90);
        self->buf[old_len_90]=0;
        self->size=new_size_91;
        (old_buf_89 = come_decrement_ref_count(old_buf_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_87,size_88);
    self->len+=size_88;
    self->buf[self->len]=0;
    __result_obj__41 = self;
    return __result_obj__41;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__42;
short* mem_92;
int size_93;
void* __right_value27 = (void*)0;
char* old_buf_94;
int old_len_95;
int new_size_96;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__43;
    if(    self==((void*)0)    ) {
        __result_obj__42 = ((void*)0);
        return __result_obj__42;
    }
    mem_92=&value;
    size_93=sizeof(short);
    if(    self->len+size_93+1+1>=self->size    ) {
        old_buf_94=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3763, "char*"));
        memcpy(old_buf_94,self->buf,self->size);
        old_len_95=self->len;
        new_size_96=(self->size+size_93+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_96)), "./comelang.h", 3767, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_94,old_len_95);
        self->buf[old_len_95]=0;
        self->size=new_size_96;
        (old_buf_94 = come_decrement_ref_count(old_buf_94, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_92,size_93);
    self->len+=size_93;
    self->buf[self->len]=0;
    __result_obj__43 = self;
    return __result_obj__43;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__44;
int len_97;
int new_size_98;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_99;
struct buffer* __result_obj__45;
    if(    self==((void*)0)    ) {
        __result_obj__44 = ((void*)0);
        return __result_obj__44;
    }
    len_97=self->len;
    len_97=(len_97+3)&~3;
    if(    len_97>=self->size    ) {
        new_size_98=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_98)), "./comelang.h", 3791, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_98;
    }
    for(    i_99=self->len    ;    i_99<len_97    ;    i_99++    ){
        self->buf[i_99]=0;
    }
    self->len=len_97;
    __result_obj__45 = self;
    return __result_obj__45;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct buffer* result_100;
struct buffer* __result_obj__46;
struct buffer* __result_obj__47;
    result_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3821, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__46 = (struct buffer*)come_increment_ref_count(result_100);
        come_call_finalizer(buffer_finalize, result_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__46;
    }
    buffer_append_str(result_100,self);
    __result_obj__47 = (struct buffer*)come_increment_ref_count(result_100);
    come_call_finalizer(buffer_finalize, result_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__48;
void* __right_value33 = (void*)0;
char* __result_obj__49;
    if(    self==((void*)0)    ) {
        __result_obj__48 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__48;
    }
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__49;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__50;
    __result_obj__50 = self->buf;
    return __result_obj__50;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_101;
struct buffer* __result_obj__51;
    result_101=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3848, "struct buffer*"))));
    buffer_append(result_101,self,sizeof(char)*len);
    __result_obj__51 = (struct buffer*)come_increment_ref_count(result_101);
    come_call_finalizer(buffer_finalize, result_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_102;
int i_103;
struct buffer* __result_obj__52;
    result_102=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3855, "struct buffer*"))));
    for(    i_103=0    ;    i_103<len    ;    i_103++    ){
        buffer_append(result_102,self[i_103],strlen(self[i_103]));
    }
    __result_obj__52 = (struct buffer*)come_increment_ref_count(result_102);
    come_call_finalizer(buffer_finalize, result_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_104;
struct buffer* __result_obj__53;
    result_104=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3864, "struct buffer*"))));
    buffer_append(result_104,(char*)self,sizeof(short)*len);
    __result_obj__53 = (struct buffer*)come_increment_ref_count(result_104);
    come_call_finalizer(buffer_finalize, result_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_105;
struct buffer* __result_obj__54;
    result_105=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3871, "struct buffer*"))));
    buffer_append(result_105,(char*)self,sizeof(int)*len);
    __result_obj__54 = (struct buffer*)come_increment_ref_count(result_105);
    come_call_finalizer(buffer_finalize, result_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_106;
struct buffer* __result_obj__55;
    result_106=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3878, "struct buffer*"))));
    buffer_append(result_106,(char*)self,sizeof(long)*len);
    __result_obj__55 = (struct buffer*)come_increment_ref_count(result_106);
    come_call_finalizer(buffer_finalize, result_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_107;
struct buffer* __result_obj__56;
    result_107=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3885, "struct buffer*"))));
    buffer_append(result_107,(char*)self,sizeof(float)*len);
    __result_obj__56 = (struct buffer*)come_increment_ref_count(result_107);
    come_call_finalizer(buffer_finalize, result_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__56;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_108;
struct buffer* __result_obj__57;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 3892, "struct buffer*"))));
    buffer_append(result_108,(char*)self,sizeof(double)*len);
    __result_obj__57 = (struct buffer*)come_increment_ref_count(result_108);
    come_call_finalizer(buffer_finalize, result_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

char* buffer_printable(struct buffer* self){
int len_109;
void* __right_value48 = (void*)0;
char* result_110;
int n_111;
int i_112;
unsigned char c_113;
char* __result_obj__58;
    len_109=self->len;
    result_110=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_109*2+1)), "./comelang.h", 3900, "char*"));
    n_111=0;
    for(    i_112=0    ;    i_112<len_109    ;    i_112++    ){
        c_113=self->buf[i_112];
        if(        (c_113>=0&&c_113<32)||c_113==127        ) {
            result_110[n_111++]=94;
            result_110[n_111++]=c_113+65-1;
        }
        else if(        c_113>127        ) {
            result_110[n_111++]=63;
        }
        else {
            result_110[n_111++]=c_113;
        }
    }
    result_110[n_111]=0;
    __result_obj__58 = (char*)come_increment_ref_count(result_110);
    (result_110 = come_decrement_ref_count(result_110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__58;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_114;
struct list$1char$* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_114=0    ;    i_114<num_value    ;    i_114++    ){
        list$1char$_push_back(self,values[i_114]);
    }
    __result_obj__60 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_115;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_116;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_117;
struct list$1char$* __result_obj__59;
    if(    self->len==0    ) {
        litem_115=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1722, "struct list_item$1char$*"))));
        litem_115->prev=((void*)0);
        litem_115->next=((void*)0);
        litem_115->item=item;
        self->tail=litem_115;
        self->head=litem_115;
    }
    else if(    self->len==1    ) {
        litem_116=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1732, "struct list_item$1char$*"))));
        litem_116->prev=self->head;
        litem_116->next=((void*)0);
        litem_116->item=item;
        self->tail=litem_116;
        self->head->next=litem_116;
    }
    else {
        litem_117=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1742, "struct list_item$1char$*"))));
        litem_117->prev=self->tail;
        litem_117->next=((void*)0);
        litem_117->item=item;
        self->tail->next=litem_117;
        self->tail=litem_117;
    }
    self->len++;
    __result_obj__59 = self;
    return __result_obj__59;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_118;
struct list_item$1char$* prev_it_119;
    it_118=self->head;
    while(    it_118!=((void*)0)    ) {
        prev_it_119=it_118;
        it_118=it_118->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__61;
    __result_obj__61 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "./comelang.h", 3941, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__61;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_120;
struct list$1char$p* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_120=0    ;    i_120<num_value    ;    i_120++    ){
        list$1char$p_push_back(self,values[i_120]);
    }
    __result_obj__63 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_121;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_122;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_123;
struct list$1char$p* __result_obj__62;
    if(    self->len==0    ) {
        litem_121=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1722, "struct list_item$1char$p*"))));
        litem_121->prev=((void*)0);
        litem_121->next=((void*)0);
        litem_121->item=item;
        self->tail=litem_121;
        self->head=litem_121;
    }
    else if(    self->len==1    ) {
        litem_122=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1732, "struct list_item$1char$p*"))));
        litem_122->prev=self->head;
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head->next=litem_122;
    }
    else {
        litem_123=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1742, "struct list_item$1char$p*"))));
        litem_123->prev=self->tail;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail->next=litem_123;
        self->tail=litem_123;
    }
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_124;
struct list_item$1char$p* prev_it_125;
    it_124=self->head;
    while(    it_124!=((void*)0)    ) {
        prev_it_125=it_124;
        it_124=it_124->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__64;
    __result_obj__64 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 3946, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_126;
struct list$1short$* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_126=0    ;    i_126<num_value    ;    i_126++    ){
        list$1short$_push_back(self,values[i_126]);
    }
    __result_obj__66 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_127;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_128;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_129;
struct list$1short$* __result_obj__65;
    if(    self->len==0    ) {
        litem_127=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1722, "struct list_item$1short$*"))));
        litem_127->prev=((void*)0);
        litem_127->next=((void*)0);
        litem_127->item=item;
        self->tail=litem_127;
        self->head=litem_127;
    }
    else if(    self->len==1    ) {
        litem_128=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1732, "struct list_item$1short$*"))));
        litem_128->prev=self->head;
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head->next=litem_128;
    }
    else {
        litem_129=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1742, "struct list_item$1short$*"))));
        litem_129->prev=self->tail;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail->next=litem_129;
        self->tail=litem_129;
    }
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_130;
struct list_item$1short$* prev_it_131;
    it_130=self->head;
    while(    it_130!=((void*)0)    ) {
        prev_it_131=it_130;
        it_130=it_130->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__67;
    __result_obj__67 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "./comelang.h", 3951, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__67;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_132;
struct list$1int$* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_132=0    ;    i_132<num_value    ;    i_132++    ){
        list$1int$_push_back(self,values[i_132]);
    }
    __result_obj__69 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_133;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_134;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_135;
struct list$1int$* __result_obj__68;
    if(    self->len==0    ) {
        litem_133=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1722, "struct list_item$1int$*"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        litem_133->item=item;
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1    ) {
        litem_134=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1732, "struct list_item$1int$*"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1742, "struct list_item$1int$*"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_136;
struct list_item$1int$* prev_it_137;
    it_136=self->head;
    while(    it_136!=((void*)0)    ) {
        prev_it_137=it_136;
        it_136=it_136->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__70;
    __result_obj__70 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "./comelang.h", 3956, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_138;
struct list$1long$* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_138=0    ;    i_138<num_value    ;    i_138++    ){
        list$1long$_push_back(self,values[i_138]);
    }
    __result_obj__72 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_139;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_140;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_141;
struct list$1long$* __result_obj__71;
    if(    self->len==0    ) {
        litem_139=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1722, "struct list_item$1long$*"))));
        litem_139->prev=((void*)0);
        litem_139->next=((void*)0);
        litem_139->item=item;
        self->tail=litem_139;
        self->head=litem_139;
    }
    else if(    self->len==1    ) {
        litem_140=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1732, "struct list_item$1long$*"))));
        litem_140->prev=self->head;
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head->next=litem_140;
    }
    else {
        litem_141=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1742, "struct list_item$1long$*"))));
        litem_141->prev=self->tail;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail->next=litem_141;
        self->tail=litem_141;
    }
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_142;
struct list_item$1long$* prev_it_143;
    it_142=self->head;
    while(    it_142!=((void*)0)    ) {
        prev_it_143=it_142;
        it_142=it_142->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__73;
    __result_obj__73 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "./comelang.h", 3961, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_144;
struct list$1float$* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_144=0    ;    i_144<num_value    ;    i_144++    ){
        list$1float$_push_back(self,values[i_144]);
    }
    __result_obj__75 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_145;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_146;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_147;
struct list$1float$* __result_obj__74;
    if(    self->len==0    ) {
        litem_145=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1722, "struct list_item$1float$*"))));
        litem_145->prev=((void*)0);
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail=litem_145;
        self->head=litem_145;
    }
    else if(    self->len==1    ) {
        litem_146=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1732, "struct list_item$1float$*"))));
        litem_146->prev=self->head;
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head->next=litem_146;
    }
    else {
        litem_147=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1742, "struct list_item$1float$*"))));
        litem_147->prev=self->tail;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail->next=litem_147;
        self->tail=litem_147;
    }
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_148;
struct list_item$1float$* prev_it_149;
    it_148=self->head;
    while(    it_148!=((void*)0)    ) {
        prev_it_149=it_148;
        it_148=it_148->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__76;
    __result_obj__76 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "./comelang.h", 3966, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_150;
struct list$1double$* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_150=0    ;    i_150<num_value    ;    i_150++    ){
        list$1double$_push_back(self,values[i_150]);
    }
    __result_obj__78 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_151;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_152;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_153;
struct list$1double$* __result_obj__77;
    if(    self->len==0    ) {
        litem_151=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1722, "struct list_item$1double$*"))));
        litem_151->prev=((void*)0);
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail=litem_151;
        self->head=litem_151;
    }
    else if(    self->len==1    ) {
        litem_152=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1732, "struct list_item$1double$*"))));
        litem_152->prev=self->head;
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head->next=litem_152;
    }
    else {
        litem_153=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1742, "struct list_item$1double$*"))));
        litem_153->prev=self->tail;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail->next=litem_153;
        self->tail=litem_153;
    }
    self->len++;
    __result_obj__77 = self;
    return __result_obj__77;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_154;
struct list_item$1double$* prev_it_155;
    it_154=self->head;
    while(    it_154!=((void*)0)    ) {
        prev_it_155=it_154;
        it_154=it_154->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__79;
    __result_obj__79 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "./comelang.h", 3971, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __right_value84 = (void*)0;
char* __result_obj__80;
int len_156;
void* __right_value85 = (void*)0;
char* result_157;
char* __result_obj__81;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__80 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__80;
    }
    len_156=strlen(self)+strlen(right);
    result_157=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_156+1)), "./comelang.h", 4200, "char*"));
    strncpy(result_157,self,len_156+1);
    strncat(result_157,right,len_156+1);
    __result_obj__81 = (char*)come_increment_ref_count(result_157);
    (result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__82;
int len_158;
void* __right_value87 = (void*)0;
char* result_159;
char* __result_obj__83;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__82 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__82;
    }
    len_158=strlen(self)+strlen(right);
    result_159=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_158+1)), "./comelang.h", 4215, "char*"));
    strncpy(result_159,self,len_158+1);
    strncat(result_159,right,len_158+1);
    __result_obj__83 = (char*)come_increment_ref_count(result_159);
    (result_159 = come_decrement_ref_count(result_159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__83;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__84;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_160;
int i_161;
void* __right_value91 = (void*)0;
char* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__84;
    }
    buf_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 4228, "struct buffer*"))));
    for(    i_161=0    ;    i_161<right    ;    i_161++    ){
        buffer_append_str(buf_160,self);
    }
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_160))));
    come_call_finalizer(buffer_finalize, buf_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__86;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_162;
int i_163;
void* __right_value95 = (void*)0;
char* __result_obj__87;
    if(    self==((void*)0)    ) {
        __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__86;
    }
    buf_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 4242, "struct buffer*"))));
    for(    i_163=0    ;    i_163<right    ;    i_163++    ){
        buffer_append_str(buf_162,self);
    }
    __result_obj__87 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_162))));
    come_call_finalizer(buffer_finalize, buf_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__87 = come_decrement_ref_count(__result_obj__87, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__87;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_164;
int i_165;
    result_164=(_Bool)0;
    for(    i_165=0    ;    i_165<len    ;    i_165++    ){
        if(        strncmp(self[i_165],str,strlen(self[i_165]))==0        ) {
            result_164=(_Bool)1;
            break;
        }
    }
    return result_164;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_166;
char* p_167;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_166=0;
    p_167=value;
    while(    *p_167    ) {
        result_166+=(*p_167);
        p_167++;
    }
    return result_166;
}

unsigned int string_get_hash_key(char* value){
int result_168;
char* p_169;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_168=0;
    p_169=value;
    while(    *p_169    ) {
        result_168+=(*p_169);
        p_169++;
    }
    return result_168;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xiswalpha(int c){
_Bool result_170;
    result_170=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_170;
}

_Bool xiswblank(int c){
    return c==32||c==9;
}

_Bool xiswdigit(int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xiswascii(int c){
_Bool result_171;
    result_171=(c>=32&&c<=126);
    return result_171;
}

_Bool xisalpha(char c){
_Bool result_172;
    result_172=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_172;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_173;
    result_173=(c>=32&&c<=126);
    return result_173;
}

_Bool xispunct(char c){
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __right_value96 = (void*)0;
char* __result_obj__88;
int len_174;
void* __right_value97 = (void*)0;
char* result_175;
int i_176;
char* __result_obj__89;
    if(    str==((void*)0)    ) {
        __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__88;
    }
    len_174=strlen(str);
    result_175=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_174+1)), "./comelang.h", 4510, "char*"));
    for(    i_176=0    ;    i_176<len_174    ;    i_176++    ){
        result_175[i_176]=str[len_174-i_176-1];
    }
    result_175[len_174]=0;
    __result_obj__89 = (char*)come_increment_ref_count(result_175);
    (result_175 = come_decrement_ref_count(result_175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__89;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__90;
int len_177;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__91;
void* __right_value101 = (void*)0;
char* __result_obj__92;
void* __right_value102 = (void*)0;
char* __result_obj__93;
void* __right_value103 = (void*)0;
char* result_178;
char* __result_obj__94;
    if(    str==((void*)0)    ) {
        __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__90;
    }
    len_177=strlen(str);
    if(    head<0    ) {
        head+=len_177;
    }
    if(    tail<0    ) {
        tail+=len_177+1;
    }
    if(    head>tail    ) {
        __result_obj__91 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__91 = come_decrement_ref_count(__result_obj__91, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__91;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_177    ) {
        tail=len_177;
    }
    if(    head==tail    ) {
        __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__92;
    }
    if(    tail-head+1<1    ) {
        __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__93;
    }
    result_178=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4556, "char*"));
    memcpy(result_178,str+head,tail-head);
    result_178[tail-head]=0;
    __result_obj__94 = (char*)come_increment_ref_count(result_178);
    (result_178 = come_decrement_ref_count(result_178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__95;
int len_179;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__96;
void* __right_value107 = (void*)0;
char* __result_obj__97;
void* __right_value108 = (void*)0;
char* __result_obj__98;
void* __right_value109 = (void*)0;
char* result_180;
char* __result_obj__99;
    if(    str==((void*)0)    ) {
        __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__95;
    }
    len_179=strlen(str);
    if(    head<0    ) {
        head+=len_179;
    }
    if(    tail<0    ) {
        tail+=len_179+1;
    }
    if(    head>tail    ) {
        __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__96;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_179    ) {
        tail=len_179;
    }
    if(    head==tail    ) {
        __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__97;
    }
    if(    tail-head+1<1    ) {
        __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__98;
    }
    result_180=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4599, "char*"));
    memcpy(result_180,str+head,tail-head);
    result_180[tail-head]=0;
    __result_obj__99 = (char*)come_increment_ref_count(result_180);
    (result_180 = come_decrement_ref_count(result_180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__99 = come_decrement_ref_count(__result_obj__99, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__99;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__100;
int len_181;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__101;
void* __right_value113 = (void*)0;
char* __result_obj__102;
void* __right_value114 = (void*)0;
char* __result_obj__103;
void* __right_value115 = (void*)0;
char* result_182;
char* __result_obj__104;
    if(    str==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    len_181=strlen(str);
    if(    head<0    ) {
        head+=len_181;
    }
    if(    tail<0    ) {
        tail+=len_181+1;
    }
    if(    head>tail    ) {
        __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__101;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_181    ) {
        tail=len_181;
    }
    if(    head==tail    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    if(    tail-head+1<1    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    result_182=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4642, "char*"));
    memcpy(result_182,str+head,tail-head);
    result_182[tail-head]=0;
    __result_obj__104 = (char*)come_increment_ref_count(result_182);
    (result_182 = come_decrement_ref_count(result_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__105;
va_list args_183;
char* result_184;
int len_185;
void* __right_value117 = (void*)0;
char* __result_obj__106;
void* __right_value118 = (void*)0;
char* result2_186;
char* __result_obj__107;
memset(&args_183, 0, sizeof(va_list));
result_184 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    __builtin_va_start(args_183,msg);
    len_185=vasprintf(&result_184,msg,args_183);
    __builtin_va_end(args_183);
    if(    len_185<0    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    result2_186=(char*)come_increment_ref_count(__builtin_string(result_184));
    free(result_184);
    __result_obj__107 = (char*)come_increment_ref_count(result2_186);
    (result2_186 = come_decrement_ref_count(result2_186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__108;
int len_187;
void* __right_value120 = (void*)0;
char* __result_obj__109;
void* __right_value121 = (void*)0;
char* __result_obj__110;
void* __right_value122 = (void*)0;
char* result_188;
char* __result_obj__111;
    if(    str==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    len_187=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    if(    head<0    ) {
        head+=len_187;
    }
    if(    tail<0    ) {
        tail+=len_187+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    if(    tail>=len_187    ) {
        tail=len_187;
    }
    result_188=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_187-(tail-head)+1)), "./comelang.h", 4704, "char*"));
    memcpy(result_188,str,head);
    memcpy(result_188+head,str+tail,len_187-tail);
    result_188[len_187-(tail-head)]=0;
    __result_obj__111 = (char*)come_increment_ref_count(result_188);
    (result_188 = come_decrement_ref_count(result_188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__112 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_189;
struct list_item$1char$ph* prev_it_190;
    it_189=self->head;
    while(    it_189!=((void*)0)    ) {
        prev_it_190=it_189;
        it_189=it_189->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_194;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_195;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_196;
char* __dec_obj15;
struct list$1char$ph* __result_obj__114;
    if(    self->len==0    ) {
        litem_194=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1722, "struct list_item$1char$ph*"))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        __dec_obj13=litem_194->item,
        litem_194->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1    ) {
        litem_195=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1732, "struct list_item$1char$ph*"))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        __dec_obj14=litem_195->item,
        litem_195->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1742, "struct list_item$1char$ph*"))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        __dec_obj15=litem_196->item,
        litem_196->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__114 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__114;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__113;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_191;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_192;
int i_193;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__115;
    if(    self==((void*)0)    ) {
        __result_obj__113 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 4717, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__113;
    }
    result_191=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 4720, "struct list$1char$ph*"))));
    str_192=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 4722, "struct buffer*"))));
    for(    i_193=0    ;    i_193<charp_length(self)    ;    i_193++    ){
        if(        self[i_193]==c        ) {
            list$1char$ph_push_back(result_191,(char*)come_increment_ref_count(__builtin_string(str_192->buf)));
            buffer_reset(str_192);
        }
        else {
            buffer_append_char(str_192,self[i_193]);
        }
    }
    if(    buffer_length(str_192)!=0    ) {
        list$1char$ph_push_back(result_191,(char*)come_increment_ref_count(__builtin_string(str_192->buf)));
    }
    __result_obj__115 = (struct list$1char$ph*)come_increment_ref_count(result_191);
    come_call_finalizer(list$1char$ph$p_finalize, result_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__116;
    __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__117;
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* charp_printable(char* str){
int len_197;
void* __right_value136 = (void*)0;
char* result_198;
int n_199;
int i_200;
char c_201;
char* __result_obj__118;
    len_197=charp_length(str);
    result_198=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_197*2+1)), "./comelang.h", 4754, "char*"));
    n_199=0;
    for(    i_200=0    ;    i_200<len_197    ;    i_200++    ){
        c_201=str[i_200];
        if(        (c_201>=0&&c_201<32)||c_201==127        ) {
            result_198[n_199++]=94;
            result_198[n_199++]=c_201+65-1;
        }
        else {
            result_198[n_199++]=c_201;
        }
    }
    result_198[n_199]=0;
    __result_obj__118 = (char*)come_increment_ref_count(result_198);
    (result_198 = come_decrement_ref_count(result_198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__119;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_202;
char* p_203;
char* p2_204;
void* __right_value140 = (void*)0;
char* __result_obj__120;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    result_202=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 4782, "struct buffer*"))));
    p_203=self;
    while(    (_Bool)1    ) {
        p2_204=strstr(p_203,str);
        if(        p2_204==((void*)0)        ) {
            p2_204=p_203;
            while(            *p2_204            ) {
                p2_204++;
            }
            buffer_append(result_202,p_203,p2_204-p_203);
            break;
        }
        buffer_append(result_202,p_203,p2_204-p_203);
        buffer_append_str(result_202,replace);
        p_203=p2_204+strlen(str);
    }
    __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_202))));
    come_call_finalizer(buffer_finalize, result_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__120;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__121;
char* p_205;
void* __right_value142 = (void*)0;
char* __result_obj__122;
void* __right_value143 = (void*)0;
char* __result_obj__123;
void* __right_value144 = (void*)0;
char* __result_obj__124;
    if(    path==((void*)0)    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    p_205=path+strlen(path);
    while(    p_205>=path    ) {
        if(        *p_205==47        ) {
            break;
        }
        else {
            p_205--;
        }
    }
    if(    p_205<path    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    else {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_205+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__125;
void* __right_value146 = (void*)0;
char* path2_206;
char* p_207;
void* __right_value147 = (void*)0;
char* __result_obj__126;
void* __right_value148 = (void*)0;
char* __result_obj__127;
void* __right_value149 = (void*)0;
char* __result_obj__128;
    if(    path==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    path2_206=(char*)come_increment_ref_count(xbasename(path));
    p_207=path2_206+strlen(path2_206);
    while(    p_207>=path2_206    ) {
        if(        *p_207==46        ) {
            break;
        }
        else {
            p_207--;
        }
    }
    if(    p_207<path2_206    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_206))));
        (path2_206 = come_decrement_ref_count(path2_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    else {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_206,0,p_207-path2_206))));
        (path2_206 = come_decrement_ref_count(path2_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_206 = come_decrement_ref_count(path2_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__129;
char* p_208;
void* __right_value151 = (void*)0;
char* __result_obj__130;
void* __right_value152 = (void*)0;
char* __result_obj__131;
void* __right_value153 = (void*)0;
char* __result_obj__132;
    if(    path==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    p_208=path+strlen(path);
    while(    p_208>=path    ) {
        if(        *p_208==46        ) {
            break;
        }
        else {
            p_208--;
        }
    }
    if(    p_208<path    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    else {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_208+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__133;
void* __right_value155 = (void*)0;
char* __result_obj__134;
    if(    self    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    else {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__135;
void* __right_value157 = (void*)0;
char* __result_obj__136;
    if(    self    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    else {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__137;
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__142;
    __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__144;
void* __right_value166 = (void*)0;
char* __result_obj__145;
    if(    self==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__146;
void* __right_value168 = (void*)0;
char* __result_obj__147;
    if(    self==((void*)0)    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct _IO_FILE* f){
void* __right_value169 = (void*)0;
char* __result_obj__148;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct buffer* buf_209;
int size_211;
void* __right_value172 = (void*)0;
char* __result_obj__149;
    if(    f==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    buf_209=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 5147, "struct buffer*"))));
    while(    1    ) {
        char buf2_210[8192];
        memset(&buf2_210, 0, sizeof(char)        *(8192)        );
        size_211=fread(buf2_210,1,8192,f);
        buffer_append(buf_209,buf2_210,size_211);
        if(        size_211<8192        ) {
            break;
        }
    }
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value172=buffer_to_string(buf_209))));
    come_call_finalizer(buffer_finalize, buf_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)    ) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_212;
    if(    f==((void*)0)    ) {
        return -1;
    }
    result_212=fclose(f);
    if(    result_212<0    ) {
        return result_212;
    }
    return result_212;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
struct _IO_FILE* __result_obj__150;
va_list args_214;
int result_215;
struct _IO_FILE* __result_obj__151;
struct _IO_FILE* __result_obj__152;
memset(&args_214, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)    ) {
        __result_obj__150 = f;
        return __result_obj__150;
    }
    char msg2_213[1024*2*2*2];
    memset(&msg2_213, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_214,msg);
    vsnprintf(msg2_213,1024*2*2*2,msg,args_214);
    __builtin_va_end(args_214);
    result_215=fprintf(f,"%s",msg2_213);
    if(    result_215<0    ) {
        __result_obj__151 = f;
        return __result_obj__151;
    }
    __result_obj__152 = f;
    return __result_obj__152;
}

void FILE_on_drop(struct _IO_FILE* self){
    if(    self    ) {
        fclose(self);
    }
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_216;
int result_217;
int result2_218;
f_216 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)    ) {
        return -1;
    }
    if(    append    ) {
        f_216=fopen(file_name,"a");
    }
    else {
        f_216=fopen(file_name,"w");
    }
    if(    f_216==((void*)0)    ) {
        return -1;
    }
    result_217=fwrite(self,strlen(self),1,f_216);
    if(    result_217<0    ) {
        return result_217;
    }
    result2_218=fclose(f_216);
    if(    result2_218<0    ) {
        return result2_218;
    }
    return result_217;
}

char* charp_read(char* file_name){
void* __right_value173 = (void*)0;
char* __result_obj__153;
struct _IO_FILE* f_219;
void* __right_value174 = (void*)0;
char* __result_obj__154;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct buffer* buf_220;
int size_222;
void* __right_value177 = (void*)0;
char* result_223;
int result2_224;
void* __right_value178 = (void*)0;
char* __result_obj__155;
char* __result_obj__156;
    if(    file_name==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    f_219=fopen(file_name,"r");
    if(    f_219==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    buf_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 5259, "struct buffer*"))));
    while(    1    ) {
        char buf2_221[8192];
        memset(&buf2_221, 0, sizeof(char)        *(8192)        );
        size_222=fread(buf2_221,1,8192,f_219);
        buffer_append(buf_220,buf2_221,size_222);
        if(        size_222<8192        ) {
            break;
        }
    }
    result_223=(char*)come_increment_ref_count(buffer_to_string(buf_220));
    result2_224=fclose(f_219);
    if(    result2_224<0    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (result_223 = come_decrement_ref_count(result_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    __result_obj__156 = (char*)come_increment_ref_count(result_223);
    come_call_finalizer(buffer_finalize, buf_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_223 = come_decrement_ref_count(result_223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE* f){
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct list$1char$ph* result_225;
struct list$1char$ph* __result_obj__157;
void* __right_value181 = (void*)0;
struct list$1char$ph* __result_obj__158;
    result_225=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 5286, "struct list$1char$ph*"))));
    if(    f==((void*)0)    ) {
        __result_obj__157 = (struct list$1char$ph*)come_increment_ref_count(result_225);
        come_call_finalizer(list$1char$ph$p_finalize, result_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__157;
    }
    while(    1    ) {
        char buf_226[8192];
        memset(&buf_226, 0, sizeof(char)        *(8192)        );
        if(        fgets(buf_226,8192,f)==((void*)0)        ) {
            break;
        }
        list$1char$ph_push_back(result_225,(char*)come_increment_ref_count(__builtin_string(buf_226)));
    }
    __result_obj__158 = (struct list$1char$ph*)come_increment_ref_count(result_225);
    come_call_finalizer(list$1char$ph$p_finalize, result_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

char* charp_puts(char* self){
void* __right_value182 = (void*)0;
char* __result_obj__159;
void* __right_value183 = (void*)0;
char* __result_obj__160;
    if(    self==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string(""))));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    puts(self);
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value183=__builtin_string(self))));
    (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* charp_print(char* self){
void* __right_value184 = (void*)0;
char* __result_obj__161;
void* __right_value185 = (void*)0;
char* __result_obj__162;
    if(    self==((void*)0)    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value184=__builtin_string(""))));
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    printf("%s",self);
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value185=__builtin_string(self))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* charp_printf(char* self, ...){
void* __right_value186 = (void*)0;
char* __result_obj__163;
char* msg2_227;
va_list args_228;
void* __right_value187 = (void*)0;
char* __result_obj__164;
msg2_227 = (void*)0;
memset(&args_228, 0, sizeof(va_list));
    if(    self==((void*)0)    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value186=__builtin_string(""))));
        (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    __builtin_va_start(args_228,self);
    vasprintf(&msg2_227,self,args_228);
    __builtin_va_end(args_228);
    printf("%s",msg2_227);
    free(msg2_227);
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string(self))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

int assert_v2(int exp){
    if(    exp    ) {
    }
    else {
        puts("assert failure");
        stackframe_v2();
        exit(2);
    }
}

_Bool wchar_t_equals(int left, int right){
    return left==right;
}

_Bool wchar_tp_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(int left, int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(int left, int right){
    return left!=right;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

unsigned int wchar_t_get_hash_key(int value){
    return value;
}

unsigned int wchar_tp_get_hash_key(int* value){
unsigned int result_229;
int* p_230;
    result_229=0;
    p_230=value;
    while(    *p_230    ) {
        result_229+=*p_230;
        p_230++;
    }
    return result_229;
}

char* wchar_t_to_string(int wc){
void* __right_value188 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value188=xsprintf("%ls",wc))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_231;
    for(    i_231=0    ;    i_231<self    ;    i_231++    ){
        block(parent,i_231);
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__166;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__166 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_232;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_233;
    it_232=self->head;
    while(    it_232!=((void*)0)    ) {
        prev_it_233=it_232;
        it_232=it_232->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_234;
struct list_item$1sType$ph* prev_it_235;
    it_234=self->head;
    while(    it_234!=((void*)0)    ) {
        prev_it_235=it_234;
        it_234=it_234->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_236;
struct list_item$1sNode$ph* prev_it_237;
    it_236=self->head;
    while(    it_236!=((void*)0)    ) {
        prev_it_237=it_236;
        it_236=it_236->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_238;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_239;
    it_238=self->head;
    while(    it_238!=((void*)0)    ) {
        prev_it_239=it_238;
        it_238=it_238->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info){
void* __right_value189 = (void*)0;
char* __dec_obj16;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj17;
struct sClass* __result_obj__167;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    self->mUniq=uniq_;
    __dec_obj16=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj17=self->mFields,
    self->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "common.h", 79, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__167 = (struct sClass*)come_increment_ref_count(self);
    come_call_finalizer(sClass_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_244;
unsigned int hash_245;
unsigned int it_246;
struct sClass* __result_obj__168;
struct sClass* __result_obj__169;
struct sClass* __result_obj__170;
struct sClass* __result_obj__171;
default_value_244 = (void*)0;
    memset(&default_value_244,0,sizeof(struct sClass*));
    hash_245=string_get_hash_key(((char*)key))%self->size;
    it_246=hash_245;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_246]        ) {
            if(            string_equals(self->keys[it_246],key)            ) {
                __result_obj__168 = (struct sClass*)come_increment_ref_count(self->items[it_246]);
                come_call_finalizer(sClass_finalize, default_value_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__168;
            }
            it_246++;
            if(            it_246>=self->size            ) {
                it_246=0;
            }
            else if(            it_246==hash_245            ) {
                __result_obj__169 = (struct sClass*)come_increment_ref_count(default_value_244);
                come_call_finalizer(sClass_finalize, default_value_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__169;
            }
        }
        else {
            __result_obj__170 = (struct sClass*)come_increment_ref_count(default_value_244);
            come_call_finalizer(sClass_finalize, default_value_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__170;
        }
    }
    __result_obj__171 = (struct sClass*)come_increment_ref_count(default_value_244);
    come_call_finalizer(sClass_finalize, default_value_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_247;
unsigned int hash_248;
unsigned int it_249;
struct sClass* __result_obj__172;
struct sClass* __result_obj__173;
struct sClass* __result_obj__174;
struct sClass* __result_obj__175;
default_value_247 = (void*)0;
    memset(&default_value_247,0,sizeof(struct sClass*));
    hash_248=string_get_hash_key(((char*)key))%self->size;
    it_249=hash_248;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_249]        ) {
            if(            string_equals(self->keys[it_249],key)            ) {
                __result_obj__172 = (struct sClass*)come_increment_ref_count(self->items[it_249]);
                come_call_finalizer(sClass_finalize, default_value_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__172;
            }
            it_249++;
            if(            it_249>=self->size            ) {
                it_249=0;
            }
            else if(            it_249==hash_248            ) {
                __result_obj__173 = (struct sClass*)come_increment_ref_count(default_value_247);
                come_call_finalizer(sClass_finalize, default_value_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__173;
            }
        }
        else {
            __result_obj__174 = (struct sClass*)come_increment_ref_count(default_value_247);
            come_call_finalizer(sClass_finalize, default_value_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__174;
        }
    }
    __result_obj__175 = (struct sClass*)come_increment_ref_count(default_value_247);
    come_call_finalizer(sClass_finalize, default_value_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__175;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_269;
unsigned int it_270;
_Bool same_key_exist_287;
char* it2_290;
struct map$2char$phsClass$ph* __result_obj__196;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_269=string_get_hash_key(((char*)key))%self->size;
    it_270=hash_269;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_270]        ) {
            if(            string_equals(self->keys[it_270],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_270]);
                    (self->keys[it_270] = come_decrement_ref_count(self->keys[it_270], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_270]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_270]);
                    self->keys[it_270]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it_270], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_270]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_270]=item;
                }
                break;
            }
            it_270++;
            if(            it_270>=self->size            ) {
                it_270=0;
            }
            else if(            it_270==hash_269            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_270]=(_Bool)1;
            if(            1            ) {
                self->keys[it_270]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_270]=key;
            }
            if(            1            ) {
                self->items[it_270]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_270]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_287=(_Bool)0;
    for(    it2_290=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_290=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_290,key)        ) {
            same_key_exist_287=(_Bool)1;
        }
    }
    if(    !same_key_exist_287    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__196 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__196;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_252;
void* __right_value200 = (void*)0;
char** keys_253;
void* __right_value201 = (void*)0;
struct sClass** items_254;
void* __right_value202 = (void*)0;
_Bool* item_existance_255;
int len_256;
char* it_259;
struct sClass* default_value_262;
void* __right_value203 = (void*)0;
struct sClass* it2_263;
unsigned int hash_266;
int n_267;
struct sClass* default_value_268;
void* __right_value204 = (void*)0;
default_value_262 = (void*)0;
default_value_268 = (void*)0;
    size_252=self->size*10;
    keys_253=(char**)come_increment_ref_count(((char**)(__right_value200=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_252)), "./comelang.h", 2759, "char**"))));
    items_254=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value201=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_252)), "./comelang.h", 2760, "struct sClass**"))));
    item_existance_255=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value202=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_252)), "./comelang.h", 2761, "_Bool*"))));
    len_256=0;
    for(    it_259=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it_259=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_262,0,sizeof(struct sClass*));
        it2_263=((struct sClass*)(__right_value203=map$2char$phsClass$ph_at(self,it_259,(struct sClass*)come_increment_ref_count(default_value_262))));
        come_call_finalizer(sClass_finalize, __right_value203, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_266=string_get_hash_key(((char*)it_259))%size_252;
        n_267=hash_266;
        while(        (_Bool)1        ) {
            if(            item_existance_255[n_267]            ) {
                n_267++;
                if(                n_267>=size_252                ) {
                    n_267=0;
                }
                else if(                n_267==hash_266                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_255[n_267]=(_Bool)1;
                keys_253[n_267]=it_259;
                items_254[n_267]=((struct sClass*)(__right_value204=map$2char$phsClass$ph_at(self,it_259,(struct sClass*)come_increment_ref_count(default_value_268))));
                come_call_finalizer(sClass_finalize, __right_value204, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_256++;
                come_call_finalizer(sClass_finalize, default_value_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_253;
    self->items=items_254;
    self->item_existance=item_existance_255;
    self->size=size_252;
    self->len=len_256;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_257;
char* __result_obj__176;
char* __result_obj__177;
char* result_258;
char* __result_obj__178;
result_257 = (void*)0;
result_258 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_257,0,sizeof(char*));
        __result_obj__176 = result_257;
        return __result_obj__176;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__177 = self->key_list->it->item;
        return __result_obj__177;
    }
    memset(&result_258,0,sizeof(char*));
    __result_obj__178 = result_258;
    return __result_obj__178;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_260;
char* __result_obj__179;
char* __result_obj__180;
char* result_261;
char* __result_obj__181;
result_260 = (void*)0;
result_261 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_260,0,sizeof(char*));
        __result_obj__179 = result_260;
        return __result_obj__179;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__180 = self->key_list->it->item;
        return __result_obj__180;
    }
    memset(&result_261,0,sizeof(char*));
    __result_obj__181 = result_261;
    return __result_obj__181;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_264;
unsigned int it_265;
struct sClass* __result_obj__182;
struct sClass* __result_obj__183;
struct sClass* __result_obj__184;
struct sClass* __result_obj__185;
    hash_264=string_get_hash_key(((char*)key))%self->size;
    it_265=hash_264;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_265]        ) {
            if(            string_equals(self->keys[it_265],key)            ) {
                __result_obj__182 = (struct sClass*)come_increment_ref_count(self->items[it_265]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__182;
            }
            it_265++;
            if(            it_265>=self->size            ) {
                it_265=0;
            }
            else if(            it_265==hash_264            ) {
                __result_obj__183 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__183;
            }
        }
        else {
            __result_obj__184 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__184;
        }
    }
    __result_obj__185 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__185;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_271;
struct list_item$1char$ph* it_272;
struct list$1char$ph* __result_obj__189;
    it2_271=0;
    it_272=self->head;
    while(    it_272!=((void*)0)    ) {
        if(        string_equals(it_272->item,item)        ) {
            list$1char$ph_delete(self,it2_271,it2_271+1);
            break;
        }
        it2_271++;
        it_272=it_272->next;
    }
    __result_obj__189 = self;
    return __result_obj__189;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_273;
struct list$1char$ph* __result_obj__186;
struct list_item$1char$ph* it_276;
int i_277;
struct list_item$1char$ph* prev_it_278;
struct list_item$1char$ph* it_279;
int i_280;
struct list_item$1char$ph* prev_it_281;
struct list_item$1char$ph* it_282;
struct list_item$1char$ph* head_prev_it_283;
struct list_item$1char$ph* tail_it_284;
int i_285;
struct list_item$1char$ph* prev_it_286;
struct list$1char$ph* __result_obj__188;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_273=tail;
        tail=head;
        head=tmp_273;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__186 = self;
        return __result_obj__186;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_276=self->head;
        i_277=0;
        while(        it_276!=((void*)0)        ) {
            if(            i_277<tail            ) {
                prev_it_278=it_276;
                it_276=it_276->next;
                i_277++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_277==tail            ) {
                self->head=it_276;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_276=it_276->next;
                i_277++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_279=self->head;
        i_280=0;
        while(        it_279!=((void*)0)        ) {
            if(            i_280==head            ) {
                self->tail=it_279->prev;
                self->tail->next=((void*)0);
            }
            if(            i_280>=head            ) {
                prev_it_281=it_279;
                it_279=it_279->next;
                i_280++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_279=it_279->next;
                i_280++;
            }
        }
    }
    else {
        it_282=self->head;
        head_prev_it_283=((void*)0);
        tail_it_284=((void*)0);
        i_285=0;
        while(        it_282!=((void*)0)        ) {
            if(            i_285==head            ) {
                head_prev_it_283=it_282->prev;
            }
            if(            i_285==tail            ) {
                tail_it_284=it_282;
            }
            if(            i_285>=head&&i_285<tail            ) {
                prev_it_286=it_282;
                it_282=it_282->next;
                i_285++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_282=it_282->next;
                i_285++;
            }
        }
        if(        head_prev_it_283!=((void*)0)        ) {
            head_prev_it_283->next=tail_it_284;
        }
        if(        tail_it_284!=((void*)0)        ) {
            tail_it_284->prev=head_prev_it_283;
        }
    }
    __result_obj__188 = self;
    return __result_obj__188;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_274;
struct list_item$1char$ph* prev_it_275;
struct list$1char$ph* __result_obj__187;
    it_274=self->head;
    while(    it_274!=((void*)0)    ) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__187 = self;
    return __result_obj__187;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_288;
char* __result_obj__190;
char* __result_obj__191;
char* result_289;
char* __result_obj__192;
result_288 = (void*)0;
result_289 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_288,0,sizeof(char*));
        __result_obj__190 = result_288;
        return __result_obj__190;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__191 = self->it->item;
        return __result_obj__191;
    }
    memset(&result_289,0,sizeof(char*));
    __result_obj__192 = result_289;
    return __result_obj__192;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_291;
char* __result_obj__193;
char* __result_obj__194;
char* result_292;
char* __result_obj__195;
result_291 = (void*)0;
result_292 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_291,0,sizeof(char*));
        __result_obj__193 = result_291;
        return __result_obj__193;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__194 = self->it->item;
        return __result_obj__194;
    }
    memset(&result_292,0,sizeof(char*));
    __result_obj__195 = result_292;
    return __result_obj__195;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__197;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__197 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__197;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_293;
struct list_item$1sType$ph* prev_it_294;
    it_293=self->head;
    while(    it_293!=((void*)0)    ) {
        prev_it_294=it_293;
        it_293=it_293->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__198;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__198 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__198;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_295;
struct list_item$1sNode$ph* prev_it_296;
    it_295=self->head;
    while(    it_295!=((void*)0)    ) {
        prev_it_296=it_295;
        it_295=it_295->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_296, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_297;
struct list_item$1char$ph* prev_it_298;
    it_297=self->head;
    while(    it_297!=((void*)0)    ) {
        prev_it_298=it_297;
        it_297=it_297->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
int pointer_num_240;
char* p_241;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
char* name2_242;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sClass* klass_243;
void* __right_value197 = (void*)0;
struct sClass* generics_class_250;
void* __right_value198 = (void*)0;
struct sClass* klass2_251;
void* __right_value199 = (void*)0;
char* __dec_obj18;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct sType* __dec_obj19;
struct sType* __dec_obj20;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct list$1sNode$ph* __dec_obj22;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sType$ph* __dec_obj23;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct list$1char$ph* __dec_obj24;
struct sType* __dec_obj25;
struct sNode* __dec_obj26;
void* __right_value217 = (void*)0;
char* __dec_obj27;
struct sType* __result_obj__199;
    pointer_num_240=0;
    p_241=name;
    while(    *p_241    ) {
        if(        xisalpha(*p_241)||*p_241==95        ) {
            p_241++;
        }
        else {
            break;
        }
    }
    while(    *p_241==42    ) {
        pointer_num_240++;
        p_241++;
    }
    name2_242=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value192=__builtin_string(name))),0,-pointer_num_240-1));
    (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    klass_243=((struct sClass*)(__right_value196=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value195=__builtin_string(name2_242))))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value196, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_class_250=((struct sClass*)(__right_value197=map$2char$phsClass$ph_operator_load_element(info->generics_classes,name2_242)));
    come_call_finalizer(sClass_finalize, __right_value197, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass_243==((void*)0)&&generics_class_250==((void*)0)    ) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_242);
    }
    if(    klass_243    ) {
        self->mClass=klass_243;
    }
    else {
        klass2_251=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 185, "struct sClass*"));
        __dec_obj18=klass2_251->mName,
        klass2_251->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2_251));
        self->mClass=((struct sClass*)(__right_value208=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value207=__builtin_string(name))))));
        (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value208, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass2_251, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj19=self->mNoSolvedGenericsType,
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj20=self->mOriginalLoadVarType,
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj21=self->mGenericsTypes,
    self->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "common.h", 195, "struct list$1sType$ph*"))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj22=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "common.h", 196, "struct list$1sNode$ph*"))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj23=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "common.h", 197, "struct list$1sType$ph*"))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj24=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "common.h", 198, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj25=self->mResultType,
    self->mResultType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num_240;
    __dec_obj26=self->mSizeNum,
    self->mSizeNum=((void*)0);
    (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj27=self->mOriginalTypeName,
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->mOriginalPointerNum=0;
    __result_obj__199 = (struct sType*)come_increment_ref_count(self);
    come_call_finalizer(sType_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (name2_242 = come_decrement_ref_count(name2_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __result_obj__199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__199;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_300;
struct sType* __result_obj__200;
struct sType* __result_obj__201;
struct sType* result_301;
struct sType* __result_obj__202;
result_300 = (void*)0;
result_301 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_300,0,sizeof(struct sType*));
        __result_obj__200 = result_300;
        return __result_obj__200;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_301,0,sizeof(struct sType*));
    __result_obj__202 = result_301;
    return __result_obj__202;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_303;
struct sType* __result_obj__203;
struct sType* __result_obj__204;
struct sType* result_304;
struct sType* __result_obj__205;
result_303 = (void*)0;
result_304 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_303,0,sizeof(struct sType*));
        __result_obj__203 = result_303;
        return __result_obj__203;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__204 = self->it->item;
        return __result_obj__204;
    }
    memset(&result_304,0,sizeof(struct sType*));
    __result_obj__205 = result_304;
    return __result_obj__205;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value221 = (void*)0;
struct list_item$1sType$ph* litem_305;
struct sType* __dec_obj34;
void* __right_value222 = (void*)0;
struct list_item$1sType$ph* litem_306;
struct sType* __dec_obj35;
void* __right_value223 = (void*)0;
struct list_item$1sType$ph* litem_307;
struct sType* __dec_obj36;
struct list$1sType$ph* __result_obj__206;
    if(    self->len==0    ) {
        litem_305=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value221=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1722, "struct list_item$1sType$ph*"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj34=litem_305->item,
        litem_305->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1    ) {
        litem_306=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value222=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1732, "struct list_item$1sType$ph*"))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj35=litem_306->item,
        litem_306->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value223=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1742, "struct list_item$1sType$ph*"))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj36=litem_307->item,
        litem_307->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result_obj__206 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__206;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__207;
void* __right_value224 = (void*)0;
struct sType* result_308;
void* __right_value225 = (void*)0;
struct sType* __dec_obj37;
void* __right_value226 = (void*)0;
struct sType* __dec_obj38;
void* __right_value234 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value235 = (void*)0;
struct sType* __dec_obj43;
void* __right_value237 = (void*)0;
struct sNode* __dec_obj44;
void* __right_value238 = (void*)0;
struct sNode* __dec_obj45;
void* __right_value239 = (void*)0;
char* __dec_obj46;
void* __right_value240 = (void*)0;
char* __dec_obj47;
void* __right_value241 = (void*)0;
char* __dec_obj48;
void* __right_value249 = (void*)0;
struct list$1sNode$ph* __dec_obj52;
void* __right_value250 = (void*)0;
char* __dec_obj53;
void* __right_value251 = (void*)0;
struct list$1sType$ph* __dec_obj54;
void* __right_value259 = (void*)0;
struct list$1char$ph* __dec_obj58;
void* __right_value260 = (void*)0;
struct sType* __dec_obj59;
struct sType* __result_obj__219;
    if(    self==(void*)0    ) {
        __result_obj__207 = (void*)0;
        return __result_obj__207;
    }
    result_308=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_308->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj37=result_308->mOriginalLoadVarType,
        result_308->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj38=result_308->mChannelType,
        result_308->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj42=result_308->mGenericsTypes,
        result_308->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj43=result_308->mNoSolvedGenericsType,
        result_308->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj44=result_308->mSizeNum,
        result_308->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj45=result_308->mAlignas,
        result_308->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj46=result_308->mTupleName,
        result_308->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj47=result_308->mAttribute,
        result_308->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_308->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_308->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_308->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_308->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_308->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_308->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_308->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_308->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_308->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_308->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_308->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_308->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_308->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_308->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_308->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_308->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_308->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_308->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_308->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_308->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_308->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_308->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_308->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj48=result_308->mAsmName,
        result_308->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_308->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_308->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_308->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj52=result_308->mArrayNum,
        result_308->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_308->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_308->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_308->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_308->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_308->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj53=result_308->mOriginalTypeName,
        result_308->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_308->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_308->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_308->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_308->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj54=result_308->mParamTypes,
        result_308->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj58=result_308->mParamNames,
        result_308->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj59=result_308->mResultType,
        result_308->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_308->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_308->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__219 = result_308;
    come_call_finalizer(sType_finalize, result_308, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__219;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__208;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1sType$ph* result_309;
struct list_item$1sType$ph* it_310;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct list$1sType$ph* __result_obj__210;
    if(    self==((void*)0)    ) {
        __result_obj__208 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__208;
    }
    result_309=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1633, "struct list$1sType$ph*"))));
    it_310=self->head;
    while(    it_310!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_309,(struct sType*)come_increment_ref_count(sType_clone(it_310->item)));
        }
        else {
            list$1sType$ph_add(result_309,(struct sType*)come_increment_ref_count(sType_clone(it_310->item)));
        }
        it_310=it_310->next;
    }
    __result_obj__210 = (struct list$1sType$ph*)come_increment_ref_count(result_309);
    come_call_finalizer(list$1sType$ph$p_finalize, result_309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__210;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value229 = (void*)0;
struct list_item$1sType$ph* litem_311;
struct sType* __dec_obj39;
void* __right_value230 = (void*)0;
struct list_item$1sType$ph* litem_312;
struct sType* __dec_obj40;
void* __right_value231 = (void*)0;
struct list_item$1sType$ph* litem_313;
struct sType* __dec_obj41;
struct list$1sType$ph* __result_obj__209;
    if(    self->len==0    ) {
        litem_311=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value229=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1652, "struct list_item$1sType$ph*"))));
        litem_311->prev=((void*)0);
        litem_311->next=((void*)0);
        __dec_obj39=litem_311->item,
        litem_311->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_311;
        self->head=litem_311;
    }
    else if(    self->len==1    ) {
        litem_312=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value230=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1662, "struct list_item$1sType$ph*"))));
        litem_312->prev=self->head;
        litem_312->next=((void*)0);
        __dec_obj40=litem_312->item,
        litem_312->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_312;
        self->head->next=litem_312;
    }
    else {
        litem_313=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value231=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1672, "struct list_item$1sType$ph*"))));
        litem_313->prev=self->tail;
        litem_313->next=((void*)0);
        __dec_obj41=litem_313->item,
        litem_313->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_313;
        self->tail=litem_313;
    }
    self->len++;
    __result_obj__209 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__209;
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__211;
void* __right_value236 = (void*)0;
struct sNode* result_314;
struct sNode* __result_obj__212;
    if(    self==(void*)0    ) {
        __result_obj__211 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__211) ? __result_obj__211 = come_decrement_ref_count(__result_obj__211, ((struct sNode*)__result_obj__211)->finalize, ((struct sNode*)__result_obj__211)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__211;
    }
    result_314=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_314->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_314->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_314->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_314->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_314->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_314->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_314->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_314->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_314->kind=self->kind;
    }
    __result_obj__212 = (struct sNode*)come_increment_ref_count(result_314);
    ((result_314) ? result_314 = come_decrement_ref_count(result_314, ((struct sNode*)result_314)->finalize, ((struct sNode*)result_314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__212) ? __result_obj__212 = come_decrement_ref_count(__result_obj__212, ((struct sNode*)__result_obj__212)->finalize, ((struct sNode*)__result_obj__212)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__212;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__213;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1sNode$ph* result_315;
struct list_item$1sNode$ph* it_316;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct list$1sNode$ph* __result_obj__215;
    if(    self==((void*)0)    ) {
        __result_obj__213 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__213;
    }
    result_315=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1633, "struct list$1sNode$ph*"))));
    it_316=self->head;
    while(    it_316!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_315,(struct sNode*)come_increment_ref_count(sNode_clone(it_316->item)));
        }
        else {
            list$1sNode$ph_add(result_315,(struct sNode*)come_increment_ref_count(sNode_clone(it_316->item)));
        }
        it_316=it_316->next;
    }
    __result_obj__215 = (struct list$1sNode$ph*)come_increment_ref_count(result_315);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__215;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value244 = (void*)0;
struct list_item$1sNode$ph* litem_317;
struct sNode* __dec_obj49;
void* __right_value245 = (void*)0;
struct list_item$1sNode$ph* litem_318;
struct sNode* __dec_obj50;
void* __right_value246 = (void*)0;
struct list_item$1sNode$ph* litem_319;
struct sNode* __dec_obj51;
struct list$1sNode$ph* __result_obj__214;
    if(    self->len==0    ) {
        litem_317=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value244=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1652, "struct list_item$1sNode$ph*"))));
        litem_317->prev=((void*)0);
        litem_317->next=((void*)0);
        __dec_obj49=litem_317->item,
        litem_317->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_317;
        self->head=litem_317;
    }
    else if(    self->len==1    ) {
        litem_318=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value245=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1662, "struct list_item$1sNode$ph*"))));
        litem_318->prev=self->head;
        litem_318->next=((void*)0);
        __dec_obj50=litem_318->item,
        litem_318->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_318;
        self->head->next=litem_318;
    }
    else {
        litem_319=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value246=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1672, "struct list_item$1sNode$ph*"))));
        litem_319->prev=self->tail;
        litem_319->next=((void*)0);
        __dec_obj51=litem_319->item,
        litem_319->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_319;
        self->tail=litem_319;
    }
    self->len++;
    __result_obj__214 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__214;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__216;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1char$ph* result_320;
struct list_item$1char$ph* it_321;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1char$ph* __result_obj__218;
    if(    self==((void*)0)    ) {
        __result_obj__216 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__216;
    }
    result_320=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1633, "struct list$1char$ph*"))));
    it_321=self->head;
    while(    it_321!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_320,(char*)come_increment_ref_count((char*)come_memdup(it_321->item, "./comelang.h", 1638, "char*")));
        }
        else {
            list$1char$ph_add(result_320,(char*)come_increment_ref_count((char*)come_memdup(it_321->item, "./comelang.h", 1641, "char*")));
        }
        it_321=it_321->next;
    }
    __result_obj__218 = (struct list$1char$ph*)come_increment_ref_count(result_320);
    come_call_finalizer(list$1char$ph$p_finalize, result_320, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__218;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value254 = (void*)0;
struct list_item$1char$ph* litem_322;
char* __dec_obj55;
void* __right_value255 = (void*)0;
struct list_item$1char$ph* litem_323;
char* __dec_obj56;
void* __right_value256 = (void*)0;
struct list_item$1char$ph* litem_324;
char* __dec_obj57;
struct list$1char$ph* __result_obj__217;
    if(    self->len==0    ) {
        litem_322=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value254=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1652, "struct list_item$1char$ph*"))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj55=litem_322->item,
        litem_322->item=(char*)come_increment_ref_count(item);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1    ) {
        litem_323=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value255=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1662, "struct list_item$1char$ph*"))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj56=litem_323->item,
        litem_323->item=(char*)come_increment_ref_count(item);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value256=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1672, "struct list_item$1char$ph*"))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj57=litem_324->item,
        litem_324->item=(char*)come_increment_ref_count(item);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result_obj__217 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__217;
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_){
char* __dec_obj28;
struct sType* __dec_obj29;
struct list$1sType$ph* __dec_obj30;
struct list$1char$ph* __dec_obj31;
struct list$1char$ph* __dec_obj32;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __dec_obj33;
struct list$1sType$ph* o2_saved_299;
struct sType* it_302;
void* __right_value261 = (void*)0;
struct list$1char$ph* o2_saved_325;
char* it_326;
void* __right_value262 = (void*)0;
struct sType* __dec_obj60;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct buffer* __dec_obj61;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct buffer* __dec_obj62;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct buffer* __dec_obj63;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct buffer* __dec_obj64;
struct sBlock* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
char* __dec_obj68;
char* __dec_obj69;
struct sFun* __result_obj__220;
    __dec_obj28=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj29=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj30=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj31=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj32=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mConstFun=const_fun;
    self->mGenerate=generate_;
    __dec_obj33=self->mLambdaType,
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 288, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_299=(struct list$1sType$ph*)come_increment_ref_count((param_types)),it_302=list$1sType$ph_begin((o2_saved_299))    ;    !list$1sType$ph_end((o2_saved_299))    ;    it_302=list$1sType$ph_next((o2_saved_299))    ){
        list$1sType$ph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(sType_clone(it_302)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_325=(struct list$1char$ph*)come_increment_ref_count((param_names)),it_326=list$1char$ph_begin((o2_saved_325))    ;    !list$1char$ph_end((o2_saved_325))    ;    it_326=list$1char$ph_next((o2_saved_325))    ){
        list$1char$ph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count((char*)come_memdup(it_326, "common.h", 295, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj60=self->mLambdaType->mResultType,
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj61=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "common.h", 301, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj62=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "common.h", 302, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj63=self->mSourceHead2,
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "common.h", 303, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj64=self->mSourceDefer,
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "common.h", 304, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj65=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer(sBlock_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj66=self->mTextBlock,
    self->mTextBlock=(char*)come_increment_ref_count(text_block);
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj67=self->mTextBlockSName,
    self->mTextBlockSName=(char*)come_increment_ref_count(generics_sname);
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->mTextBlockSline=generics_sline;
    if(    (result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0    ) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj68=self->mAttribute,
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj69=self->mFunAttribute,
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->mImmutable=immutable_;
    __result_obj__220 = (struct sFun*)come_increment_ref_count(self);
    come_call_finalizer(sFun_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (text_block = come_decrement_ref_count(text_block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__220;
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

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun){
void* __right_value271 = (void*)0;
struct list$1char$ph* __dec_obj70;
void* __right_value272 = (void*)0;
struct list$1char$ph* __dec_obj71;
char* __dec_obj72;
struct sType* __dec_obj73;
struct list$1sType$ph* __dec_obj74;
struct list$1char$ph* __dec_obj75;
struct list$1char$ph* __dec_obj76;
char* __dec_obj77;
void* __right_value273 = (void*)0;
char* __dec_obj78;
struct sGenericsFun* __result_obj__221;
    __dec_obj70=self->mGenericsTypeNames,
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj71=self->mMethodGenericsTypeNames,
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(method_generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj72=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj73=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj74=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj75=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj76=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj77=self->mBlock,
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->mSLine=info->sline;
    __dec_obj78=self->mGenericsSName,
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->mGenericsSLine=generics_sline;
    self->mConstFun=const_fun;
    __result_obj__221 = (struct sGenericsFun*)come_increment_ref_count(self);
    come_call_finalizer(sGenericsFun_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __result_obj__221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__221;
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

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
struct CVALUE* __result_obj__222;
    __result_obj__222 = (struct CVALUE*)come_increment_ref_count(self);
    come_call_finalizer(CVALUE_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__222;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
int i_327;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1char$ph* __dec_obj83;
struct map$2char$phchar$ph* __result_obj__224;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value279=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 2520, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value280=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 2521, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value281=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2522, "_Bool*"))));
    for(    i_327=0    ;    i_327<128    ;    i_327++    ){
        self->item_existance[i_327]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj83=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2532, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__224 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__224;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__223;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__223 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__223;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_328;
int i_329;
    for(    i_328=0    ;    i_328<self->size    ;    i_328++    ){
        if(        self->item_existance[i_328]        ) {
            if(            1            ) {
                (self->items[i_328] = come_decrement_ref_count(self->items[i_328], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_329=0    ;    i_329<self->size    ;    i_329++    ){
        if(        self->item_existance[i_329]        ) {
            if(            1            ) {
                (self->keys[i_329] = come_decrement_ref_count(self->keys[i_329], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_330;
int i_331;
    for(    i_330=0    ;    i_330<self->size    ;    i_330++    ){
        if(        self->item_existance[i_330]        ) {
            if(            1            ) {
                (self->items[i_330] = come_decrement_ref_count(self->items[i_330], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_331=0    ;    i_331<self->size    ;    i_331++    ){
        if(        self->item_existance[i_331]        ) {
            if(            1            ) {
                (self->keys[i_331] = come_decrement_ref_count(self->keys[i_331], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)    ) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)    ) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)    ) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)    ) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeaderStructs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct buffer* __dec_obj79;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct buffer* __dec_obj80;
char* __dec_obj81;
char* __dec_obj82;
void* __right_value278 = (void*)0;
void* __right_value284 = (void*)0;
struct map$2char$phchar$ph* __dec_obj84;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct map$2char$phchar$ph* __dec_obj85;
struct sModule* __result_obj__225;
    __dec_obj79=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "common.h", 390, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj80=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "common.h", 391, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj81=self->mLastCode,
    self->mLastCode=((void*)0);
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj82=self->mLastCode2,
    self->mLastCode2=((void*)0);
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj84=self->mHeader,
    self->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "common.h", 394, "struct map$2char$phchar$ph*"))));
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj85=self->mHeaderStructs,
    self->mHeaderStructs=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "common.h", 395, "struct map$2char$phchar$ph*"))));
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__225 = (struct sModule*)come_increment_ref_count(self);
    come_call_finalizer(sModule_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sModule_finalize, __result_obj__225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__225;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
int i_332;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1char$ph* __dec_obj86;
struct map$2char$phsVar$ph* __result_obj__226;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value288=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 2520, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value289=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2521, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value290=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2522, "_Bool*"))));
    for(    i_332=0    ;    i_332<128    ;    i_332++    ){
        self->item_existance[i_332]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj86=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2532, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__226 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__226;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_333;
int i_334;
    for(    i_333=0    ;    i_333<self->size    ;    i_333++    ){
        if(        self->item_existance[i_333]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_333], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_334=0    ;    i_334<self->size    ;    i_334++    ){
        if(        self->item_existance[i_334]        ) {
            if(            1            ) {
                (self->keys[i_334] = come_decrement_ref_count(self->keys[i_334], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_335;
int i_336;
    for(    i_335=0    ;    i_335<self->size    ;    i_335++    ){
        if(        self->item_existance[i_335]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_335], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_336=0    ;    i_336<self->size    ;    i_336++    ){
        if(        self->item_existance[i_336]        ) {
            if(            1            ) {
                (self->keys[i_336] = come_decrement_ref_count(self->keys[i_336], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __right_value287 = (void*)0;
void* __right_value293 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj87;
struct sVarTable* __result_obj__227;
    __dec_obj87=self->mVars,
    self->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "common.h", 407, "struct map$2char$phsVar$ph*"))));
    come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    __result_obj__227 = (struct sVarTable*)come_increment_ref_count(self);
    come_call_finalizer(sVarTable_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__227;
}

void sVarTable_finalize(struct sVarTable* self){
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self->mVars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self){
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sNode$ph* __dec_obj88;
struct sBlock* __result_obj__228;
    __dec_obj88=self->mNodes,
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "common.h", 425, "struct list$1sNode$ph*"))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__228 = (struct sBlock*)come_increment_ref_count(self);
    come_call_finalizer(sBlock_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__228;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)    ) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)    ) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline){
void* __right_value296 = (void*)0;
char* __dec_obj89;
void* __right_value297 = (void*)0;
char* __dec_obj90;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1char$ph* __dec_obj91;
void* __right_value300 = (void*)0;
char* __dec_obj92;
struct sClassModule* __result_obj__229;
    __dec_obj89=self->mName,
    self->mName=(char*)come_increment_ref_count((char*)come_memdup(name, "common.h", 456, "char*"));
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj90=self->mText,
    self->mText=(char*)come_increment_ref_count((char*)come_memdup(text, "common.h", 457, "char*"));
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj91=self->mParams,
    self->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "common.h", 458, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj92=self->mSName,
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->mSLine=sline;
    __result_obj__229 = (struct sClassModule*)come_increment_ref_count(self);
    come_call_finalizer(sClassModule_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClassModule_finalize, __result_obj__229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__229;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __right_value301 = (void*)0;
char* __dec_obj93;
struct sNodeBase* __result_obj__230;
    self->sline=info->sline;
    __dec_obj93=self->sname,
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->sline_real=info->sline_real;
    __result_obj__230 = (struct sNodeBase*)come_increment_ref_count(self);
    come_call_finalizer(sNodeBase_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNodeBase_finalize, __result_obj__230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__230;
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
    return self->sline;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info){
    return self->sline_real;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
    return (_Bool)0;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __right_value302 = (void*)0;
char* __result_obj__231;
    __result_obj__231 = (char*)come_increment_ref_count(((char*)(__right_value302=__builtin_string(self->sname))));
    (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__231;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value303 = (void*)0;
struct sCurrentNode* __result_obj__232;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__232 = (struct sCurrentNode*)come_increment_ref_count(self);
    come_call_finalizer(sCurrentNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCurrentNode_finalize, __result_obj__232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__232;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value304 = (void*)0;
char* __result_obj__233;
    __result_obj__233 = (char*)come_increment_ref_count(((char*)(__right_value304=__builtin_string(self->sname))));
    (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__233;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value305 = (void*)0;
char* __result_obj__234;
    __result_obj__234 = (char*)come_increment_ref_count(((char*)(__right_value305=__builtin_string("sCurrentNode"))));
    (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__234;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_341;
char* __result_obj__235;
char* __result_obj__236;
char* result_342;
char* __result_obj__237;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_341,0,sizeof(char*));
        __result_obj__235 = result_341;
        return __result_obj__235;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__236 = self->key_list->it->item;
        return __result_obj__236;
    }
    memset(&result_342,0,sizeof(char*));
    __result_obj__237 = result_342;
    return __result_obj__237;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_344;
char* __result_obj__238;
char* __result_obj__239;
char* result_345;
char* __result_obj__240;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_344,0,sizeof(char*));
        __result_obj__238 = result_344;
        return __result_obj__238;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__239 = self->key_list->it->item;
        return __result_obj__239;
    }
    memset(&result_345,0,sizeof(char*));
    __result_obj__240 = result_345;
    return __result_obj__240;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_348;
unsigned int hash_349;
unsigned int it_350;
struct sVar* __result_obj__241;
struct sVar* __result_obj__242;
struct sVar* __result_obj__243;
struct sVar* __result_obj__244;
default_value_348 = (void*)0;
    memset(&default_value_348,0,sizeof(struct sVar*));
    hash_349=string_get_hash_key(((char*)key))%self->size;
    it_350=hash_349;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_350]        ) {
            if(            string_equals(self->keys[it_350],key)            ) {
                __result_obj__241 = (struct sVar*)come_increment_ref_count(self->items[it_350]);
                come_call_finalizer(sVar_finalize, default_value_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__241;
            }
            it_350++;
            if(            it_350>=self->size            ) {
                it_350=0;
            }
            else if(            it_350==hash_349            ) {
                __result_obj__242 = (struct sVar*)come_increment_ref_count(default_value_348);
                come_call_finalizer(sVar_finalize, default_value_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = (struct sVar*)come_increment_ref_count(default_value_348);
            come_call_finalizer(sVar_finalize, default_value_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__243;
        }
    }
    __result_obj__244 = (struct sVar*)come_increment_ref_count(default_value_348);
    come_call_finalizer(sVar_finalize, default_value_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__244;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_351;
unsigned int hash_352;
unsigned int it_353;
struct sVar* __result_obj__245;
struct sVar* __result_obj__246;
struct sVar* __result_obj__247;
struct sVar* __result_obj__248;
default_value_351 = (void*)0;
    memset(&default_value_351,0,sizeof(struct sVar*));
    hash_352=string_get_hash_key(((char*)key))%self->size;
    it_353=hash_352;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_353]        ) {
            if(            string_equals(self->keys[it_353],key)            ) {
                __result_obj__245 = (struct sVar*)come_increment_ref_count(self->items[it_353]);
                come_call_finalizer(sVar_finalize, default_value_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__245;
            }
            it_353++;
            if(            it_353>=self->size            ) {
                it_353=0;
            }
            else if(            it_353==hash_352            ) {
                __result_obj__246 = (struct sVar*)come_increment_ref_count(default_value_351);
                come_call_finalizer(sVar_finalize, default_value_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__246;
            }
        }
        else {
            __result_obj__247 = (struct sVar*)come_increment_ref_count(default_value_351);
            come_call_finalizer(sVar_finalize, default_value_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__247;
        }
    }
    __result_obj__248 = (struct sVar*)come_increment_ref_count(default_value_351);
    come_call_finalizer(sVar_finalize, default_value_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__248;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj94;
struct sType* __dec_obj95;
struct tuple2$2char$phsType$ph* __result_obj__249;
    __dec_obj94=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj95=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__249 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__249;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_357;
struct list_item$1sNode$ph* prev_it_358;
struct list$1sNode$ph* __result_obj__250;
    it_357=self->head;
    while(    it_357!=((void*)0)    ) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__250 = self;
    return __result_obj__250;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value320 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_360;
struct tuple2$2char$phsType$ph* __dec_obj96;
void* __right_value321 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_361;
struct tuple2$2char$phsType$ph* __dec_obj97;
void* __right_value322 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_362;
struct tuple2$2char$phsType$ph* __dec_obj98;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__251;
    if(    self->len==0    ) {
        litem_360=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value320=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1722, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj96=litem_360->item,
        litem_360->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1    ) {
        litem_361=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value321=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1732, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj97=litem_361->item,
        litem_361->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value322=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1742, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj98=litem_362->item,
        litem_362->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result_obj__251 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__251;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__252;
void* __right_value323 = (void*)0;
struct tuple2$2char$phsType$ph* result_363;
void* __right_value324 = (void*)0;
char* __dec_obj99;
void* __right_value325 = (void*)0;
struct sType* __dec_obj100;
struct tuple2$2char$phsType$ph* __result_obj__253;
    if(    self==(void*)0    ) {
        __result_obj__252 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__252;
    }
    result_363=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj99=result_363->v1,
        result_363->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj100=result_363->v2,
        result_363->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__253 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_363);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__253;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value337 = (void*)0;
struct list_item$1CVALUE$ph* litem_371;
struct CVALUE* __dec_obj103;
void* __right_value338 = (void*)0;
struct list_item$1CVALUE$ph* litem_372;
struct CVALUE* __dec_obj104;
void* __right_value339 = (void*)0;
struct list_item$1CVALUE$ph* litem_373;
struct CVALUE* __dec_obj105;
struct list$1CVALUE$ph* __result_obj__254;
    if(    self->len==0    ) {
        litem_371=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value337=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1722, "struct list_item$1CVALUE$ph*"))));
        litem_371->prev=((void*)0);
        litem_371->next=((void*)0);
        __dec_obj103=litem_371->item,
        litem_371->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_371;
        self->head=litem_371;
    }
    else if(    self->len==1    ) {
        litem_372=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value338=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1732, "struct list_item$1CVALUE$ph*"))));
        litem_372->prev=self->head;
        litem_372->next=((void*)0);
        __dec_obj104=litem_372->item,
        litem_372->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_372;
        self->head->next=litem_372;
    }
    else {
        litem_373=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value339=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1742, "struct list_item$1CVALUE$ph*"))));
        litem_373->prev=self->tail;
        litem_373->next=((void*)0);
        __dec_obj105=litem_373->item,
        litem_373->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_373;
        self->tail=litem_373;
    }
    self->len++;
    __result_obj__254 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__254;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value306 = (void*)0;
char* class_name_337;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sClass* current_stack_338;
struct sVarTable* vtable_339;
struct map$2char$phsVar$ph* o2_saved_340;
char* it_343;
char* key_346;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sVar* value_347;
void* __right_value312 = (void*)0;
struct sType* type2_354;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct tuple2$2char$phsType$ph* item_355;
void* __right_value316 = (void*)0;
struct sType* type3_356;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple2$2char$phsType$ph* item2_359;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_364;
char* it_365;
char* key_366;
void* __right_value328 = (void*)0;
struct sVar* value_367;
void* __right_value329 = (void*)0;
struct sType* type2_368;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct tuple2$2char$phsType$ph* item_369;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct CVALUE* come_value_370;
void* __right_value334 = (void*)0;
char* __dec_obj101;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* __dec_obj102;
_Bool __result_obj__255;
    info->current_stack_num++;
    class_name_337=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_338=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 642, "struct sClass*")),(char*)come_increment_ref_count(class_name_337),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
    vtable_339=info->lv_table;
    while(    vtable_339    ) {
        for(        o2_saved_340=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_339->mVars)),it_343=map$2char$phsVar$ph_begin((o2_saved_340))        ;        !map$2char$phsVar$ph_end((o2_saved_340))        ;        it_343=map$2char$phsVar$ph_next((o2_saved_340))        ){
            key_346=it_343;
            value_347=((struct sVar*)(__right_value311=map$2char$phsVar$ph_operator_load_element(vtable_339->mVars,((char*)(__right_value310=__builtin_string(key_346))))));
            (__right_value309 = come_decrement_ref_count(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value311, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type2_354=(struct sType*)come_increment_ref_count(sType_clone(value_347->mType));
            type2_354->mPointerNum++;
            item_355=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 655, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_347->mCValueName)),(struct sType*)come_increment_ref_count(type2_354)));
            if(            value_347->mCValueName!=((void*)0)            ) {
                if(                strcmp(value_347->mCValueName,"__list_values")==0                ) {
                }
                else if(                strcmp(value_347->mCValueName,"__map_keys")==0                ) {
                }
                else if(                strcmp(value_347->mCValueName,"__map_element")==0                ) {
                }
                else if(                string_operator_equals(value_347->mType->mClass->mName,"va_list")||string_operator_equals(value_347->mType->mClass->mName,"__builtin_va_list")                ) {
                }
                else if(                list$1sNode$ph_length(type2_354->mArrayNum)==1                ) {
                    type3_356=(struct sType*)come_increment_ref_count(sType_clone(type2_354));
                    list$1sNode$ph_reset(type3_356->mArrayNum);
                    type3_356->mPointerNum=1;
                    type3_356->mOriginIsArray=(_Bool)1;
                    item2_359=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 675, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_347->mCValueName)),(struct sType*)come_increment_ref_count(type3_356)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_338->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_359)));
                    value_347->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer(sType_finalize, type3_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2_359, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_338->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_355)));
                }
            }
            come_call_finalizer(sType_finalize, type2_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_355, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        vtable_339=vtable_339->mParent;
    }
    output_struct(current_stack_338,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_337),(struct sClass*)come_increment_ref_count(current_stack_338));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_337,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_337);
    vtable_339=info->lv_table;
    while(    vtable_339    ) {
        for(        o2_saved_364=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_339->mVars)),it_365=map$2char$phsVar$ph_begin((o2_saved_364))        ;        !map$2char$phsVar$ph_end((o2_saved_364))        ;        it_365=map$2char$phsVar$ph_next((o2_saved_364))        ){
            key_366=it_365;
            value_367=((struct sVar*)(__right_value328=map$2char$phsVar$ph_operator_load_element(vtable_339->mVars,key_366)));
            come_call_finalizer(sVar_finalize, __right_value328, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type2_368=(struct sType*)come_increment_ref_count(sType_clone(value_367->mType));
            item_369=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 704, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_367->mCValueName),(struct sType*)come_increment_ref_count(type2_368)));
            if(            value_367->mCValueName!=((void*)0)            ) {
                if(                strcmp(value_367->mCValueName,"__list_values")==0                ) {
                }
                else if(                strcmp(value_367->mCValueName,"__map_keys")==0                ) {
                }
                else if(                strcmp(value_367->mCValueName,"__map_element")==0                ) {
                }
                else if(                string_operator_equals(value_367->mType->mClass->mName,"va_list")||string_operator_equals(value_367->mType->mClass->mName,"__builtin_va_list")                ) {
                }
                else {
                    if(                    string_operator_equals(value_367->mFunName,info->come_fun->mName)                    ) {
                        if(                        string_operator_equals(type2_368->mClass->mName,"lambda")                        ) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_367->mCValueName,value_367->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_367->mCValueName,value_367->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_368->mClass->mName,"lambda")                        ) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_367->mCValueName,value_367->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_367->mCValueName,value_367->mCValueName);
                        }
                    }
                }
            }
            come_call_finalizer(sType_finalize, type2_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_369, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_364, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        vtable_339=vtable_339->mParent;
    }
    come_value_370=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 743, "struct CVALUE*"))));
    __dec_obj101=come_value_370->c_value,
    come_value_370->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj102=come_value_370->type,
    come_value_370->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 746, "struct sType*")),(char*)come_increment_ref_count(class_name_337),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_370->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_370->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_370));
    __result_obj__255 = (_Bool)1;
    (class_name_337 = come_decrement_ref_count(class_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, current_stack_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_370, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__255;
}

