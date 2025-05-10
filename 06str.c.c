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

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
struct sStrNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__1 = (struct sStrNode*)come_increment_ref_count(self);
    come_call_finalizer(sStrNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStrNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sStrNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct CVALUE* come_value_0;
void* __right_value5 = (void*)0;
char* __dec_obj2;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
struct sType* __dec_obj3;
_Bool __result_obj__4;
    come_value_0=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*"))));
    __dec_obj2=come_value_0->c_value,
    come_value_0->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj3=come_value_0->type,
    come_value_0->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
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

static void sStrNode_finalize(struct sStrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value9 = (void*)0;
struct list_item$1CVALUE$ph* litem_7;
struct CVALUE* __dec_obj4;
void* __right_value10 = (void*)0;
struct list_item$1CVALUE$ph* litem_8;
struct CVALUE* __dec_obj5;
void* __right_value11 = (void*)0;
struct list_item$1CVALUE$ph* litem_9;
struct CVALUE* __dec_obj6;
struct list$1CVALUE$ph* __result_obj__3;
    if(    self->len==0    ) {
        litem_7=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value9=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1722, "struct list_item$1CVALUE$ph*"))));
        litem_7->prev=((void*)0);
        litem_7->next=((void*)0);
        __dec_obj4=litem_7->item,
        litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_7;
        self->head=litem_7;
    }
    else if(    self->len==1    ) {
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value10=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1732, "struct list_item$1CVALUE$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj5=litem_8->item,
        litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value11=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1742, "struct list_item$1CVALUE$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj6=litem_9->item,
        litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
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

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __right_value12 = (void*)0;
struct buffer* __dec_obj7;
struct sBufferNode* __result_obj__5;
    ((struct sNodeBase*)(__right_value12=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj7=self->value,
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer(buffer_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->size=size;
    __result_obj__5 = (struct sBufferNode*)come_increment_ref_count(self);
    come_call_finalizer(sBufferNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBufferNode_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value13 = (void*)0;
char* __result_obj__6;
    __result_obj__6 = (char*)come_increment_ref_count(((char*)(__right_value13=__builtin_string("sBufferNode"))));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__6 = come_decrement_ref_count(__result_obj__6, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__6;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_10;
unsigned long  int size_11;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
struct CVALUE* come_value_12;
void* __right_value16 = (void*)0;
void* __right_value17 = (void*)0;
struct buffer* buf_13;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct sType* type2_14;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct sType* any_type_15;
void* __right_value24 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct sType* type2_22;
void* __right_value30 = (void*)0;
char* __dec_obj8;
void* __right_value68 = (void*)0;
struct sType* __dec_obj32;
_Bool __result_obj__31;
    value_10=(struct buffer*)come_increment_ref_count(self->value);
    size_11=self->size;
    come_value_12=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*"))));
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*"))));
    type2_14=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    type2_14->mPointerNum++;
    any_type_15=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    any_type_15->mPointerNum=1;
    any_type_15->mHeap=(_Bool)1;
    if(    (_condtional_value_X1=(((struct sFun*)(__right_value24=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    come_call_finalizer(sFun_finalize, __right_value24, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X1    ) {
        buffer_append_format(buf_13,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value25=buffer_to_string(value_10))),size_11);
        (__right_value25 = come_decrement_ref_count(__right_value25, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        buffer_append_format(buf_13,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value26=buffer_to_string(value_10))),size_11);
        (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(sType_finalize, type2_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    type2_22=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 72, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info));
    type2_22->mHeap=(_Bool)1;
    __dec_obj8=come_value_12->c_value,
    come_value_12->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_13));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj32=come_value_12->type,
    come_value_12->type=(struct sType*)come_increment_ref_count(sType_clone(type2_22));
    come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_12->var=((void*)0);
    append_object_to_right_values(come_value_12,(struct sType*)come_increment_ref_count(type2_22),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_12));
    add_come_last_code(info,"%s",come_value_12->c_value);
    __result_obj__31 = (_Bool)1;
    come_call_finalizer(buffer_finalize, value_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, any_type_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__31;
}

static void sBufferNode_finalize(struct sBufferNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_16;
unsigned int hash_17;
unsigned int it_18;
struct sFun* __result_obj__7;
struct sFun* __result_obj__8;
struct sFun* __result_obj__9;
struct sFun* __result_obj__10;
default_value_16 = (void*)0;
    memset(&default_value_16,0,sizeof(struct sFun*));
    hash_17=string_get_hash_key(((char*)key))%self->size;
    it_18=hash_17;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_18]        ) {
            if(            string_equals(self->keys[it_18],key)            ) {
                __result_obj__7 = (struct sFun*)come_increment_ref_count(self->items[it_18]);
                come_call_finalizer(sFun_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__7;
            }
            it_18++;
            if(            it_18>=self->size            ) {
                it_18=0;
            }
            else if(            it_18==hash_17            ) {
                __result_obj__8 = (struct sFun*)come_increment_ref_count(default_value_16);
                come_call_finalizer(sFun_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct sFun*)come_increment_ref_count(default_value_16);
            come_call_finalizer(sFun_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct sFun*)come_increment_ref_count(default_value_16);
    come_call_finalizer(sFun_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__10;
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
struct sFun* default_value_19;
unsigned int hash_20;
unsigned int it_21;
struct sFun* __result_obj__11;
struct sFun* __result_obj__12;
struct sFun* __result_obj__13;
struct sFun* __result_obj__14;
default_value_19 = (void*)0;
    memset(&default_value_19,0,sizeof(struct sFun*));
    hash_20=string_get_hash_key(((char*)key))%self->size;
    it_21=hash_20;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_21]        ) {
            if(            string_equals(self->keys[it_21],key)            ) {
                __result_obj__11 = (struct sFun*)come_increment_ref_count(self->items[it_21]);
                come_call_finalizer(sFun_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__11;
            }
            it_21++;
            if(            it_21>=self->size            ) {
                it_21=0;
            }
            else if(            it_21==hash_20            ) {
                __result_obj__12 = (struct sFun*)come_increment_ref_count(default_value_19);
                come_call_finalizer(sFun_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct sFun*)come_increment_ref_count(default_value_19);
            come_call_finalizer(sFun_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct sFun*)come_increment_ref_count(default_value_19);
    come_call_finalizer(sFun_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__15;
void* __right_value31 = (void*)0;
struct sType* result_23;
void* __right_value32 = (void*)0;
struct sType* __dec_obj9;
void* __right_value33 = (void*)0;
struct sType* __dec_obj10;
void* __right_value41 = (void*)0;
struct list$1sType$ph* __dec_obj14;
void* __right_value42 = (void*)0;
struct sType* __dec_obj15;
void* __right_value44 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value45 = (void*)0;
struct sNode* __dec_obj17;
void* __right_value46 = (void*)0;
char* __dec_obj18;
void* __right_value47 = (void*)0;
char* __dec_obj19;
void* __right_value48 = (void*)0;
char* __dec_obj20;
void* __right_value56 = (void*)0;
struct list$1sNode$ph* __dec_obj24;
void* __right_value57 = (void*)0;
char* __dec_obj25;
void* __right_value58 = (void*)0;
struct list$1sType$ph* __dec_obj26;
void* __right_value66 = (void*)0;
struct list$1char$ph* __dec_obj30;
void* __right_value67 = (void*)0;
struct sType* __dec_obj31;
struct sType* __result_obj__30;
    if(    self==(void*)0    ) {
        __result_obj__15 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__15;
    }
    result_23=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_23->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj9=result_23->mOriginalLoadVarType,
        result_23->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj10=result_23->mChannelType,
        result_23->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj14=result_23->mGenericsTypes,
        result_23->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj15=result_23->mNoSolvedGenericsType,
        result_23->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj16=result_23->mSizeNum,
        result_23->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj17=result_23->mAlignas,
        result_23->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj18=result_23->mTupleName,
        result_23->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj19=result_23->mAttribute,
        result_23->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_23->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_23->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_23->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_23->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_23->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_23->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_23->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_23->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_23->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_23->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_23->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_23->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_23->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_23->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_23->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_23->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_23->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_23->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_23->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_23->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_23->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_23->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_23->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj20=result_23->mAsmName,
        result_23->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_23->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_23->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_23->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj24=result_23->mArrayNum,
        result_23->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_23->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_23->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_23->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_23->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_23->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj25=result_23->mOriginalTypeName,
        result_23->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_23->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_23->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_23->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_23->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj26=result_23->mParamTypes,
        result_23->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj30=result_23->mParamNames,
        result_23->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj31=result_23->mResultType,
        result_23->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_23->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_23->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__30 = (struct sType*)come_increment_ref_count(result_23);
    come_call_finalizer(sType_finalize, result_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__30;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__16;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1sType$ph* result_24;
struct list_item$1sType$ph* it_25;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct list$1sType$ph* __result_obj__19;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__16;
    }
    result_24=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1633, "struct list$1sType$ph*"))));
    it_25=self->head;
    while(    it_25!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_24,(struct sType*)come_increment_ref_count(sType_clone(it_25->item)));
        }
        else {
            list$1sType$ph_add(result_24,(struct sType*)come_increment_ref_count(sType_clone(it_25->item)));
        }
        it_25=it_25->next;
    }
    __result_obj__19 = (struct list$1sType$ph*)come_increment_ref_count(result_24);
    come_call_finalizer(list$1sType$ph$p_finalize, result_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value36 = (void*)0;
struct list_item$1sType$ph* litem_26;
struct sType* __dec_obj11;
void* __right_value37 = (void*)0;
struct list_item$1sType$ph* litem_27;
struct sType* __dec_obj12;
void* __right_value38 = (void*)0;
struct list_item$1sType$ph* litem_28;
struct sType* __dec_obj13;
struct list$1sType$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_26=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value36=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1652, "struct list_item$1sType$ph*"))));
        litem_26->prev=((void*)0);
        litem_26->next=((void*)0);
        __dec_obj11=litem_26->item,
        litem_26->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_26;
        self->head=litem_26;
    }
    else if(    self->len==1    ) {
        litem_27=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value37=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1662, "struct list_item$1sType$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj12=litem_27->item,
        litem_27->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value38=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1672, "struct list_item$1sType$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj13=litem_28->item,
        litem_28->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_29;
struct list_item$1sType$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)    ) {
        prev_it_30=it_29;
        it_29=it_29->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__20;
void* __right_value43 = (void*)0;
struct sNode* result_31;
struct sNode* __result_obj__21;
    if(    self==(void*)0    ) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__20) ? __result_obj__20 = come_decrement_ref_count(__result_obj__20, ((struct sNode*)__result_obj__20)->finalize, ((struct sNode*)__result_obj__20)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__20;
    }
    result_31=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_31->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_31->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_31->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_31->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_31->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_31->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_31->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_31->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_31->kind=self->kind;
    }
    __result_obj__21 = (struct sNode*)come_increment_ref_count(result_31);
    ((result_31) ? result_31 = come_decrement_ref_count(result_31, ((struct sNode*)result_31)->finalize, ((struct sNode*)result_31)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__21) ? __result_obj__21 = come_decrement_ref_count(__result_obj__21, ((struct sNode*)__result_obj__21)->finalize, ((struct sNode*)__result_obj__21)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__21;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__22;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1sNode$ph* result_32;
struct list_item$1sNode$ph* it_33;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1sNode$ph* __result_obj__25;
    if(    self==((void*)0)    ) {
        __result_obj__22 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__22;
    }
    result_32=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1633, "struct list$1sNode$ph*"))));
    it_33=self->head;
    while(    it_33!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_32,(struct sNode*)come_increment_ref_count(sNode_clone(it_33->item)));
        }
        else {
            list$1sNode$ph_add(result_32,(struct sNode*)come_increment_ref_count(sNode_clone(it_33->item)));
        }
        it_33=it_33->next;
    }
    __result_obj__25 = (struct list$1sNode$ph*)come_increment_ref_count(result_32);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__23;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value51 = (void*)0;
struct list_item$1sNode$ph* litem_34;
struct sNode* __dec_obj21;
void* __right_value52 = (void*)0;
struct list_item$1sNode$ph* litem_35;
struct sNode* __dec_obj22;
void* __right_value53 = (void*)0;
struct list_item$1sNode$ph* litem_36;
struct sNode* __dec_obj23;
struct list$1sNode$ph* __result_obj__24;
    if(    self->len==0    ) {
        litem_34=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value51=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1652, "struct list_item$1sNode$ph*"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        __dec_obj21=litem_34->item,
        litem_34->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1    ) {
        litem_35=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value52=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1662, "struct list_item$1sNode$ph*"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj22=litem_35->item,
        litem_35->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value53=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1672, "struct list_item$1sNode$ph*"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj23=litem_36->item,
        litem_36->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result_obj__24 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__24;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_37;
struct list_item$1sNode$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__26;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1char$ph* result_39;
struct list_item$1char$ph* it_40;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1char$ph* __result_obj__29;
    if(    self==((void*)0)    ) {
        __result_obj__26 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__26;
    }
    result_39=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1633, "struct list$1char$ph*"))));
    it_40=self->head;
    while(    it_40!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_39,(char*)come_increment_ref_count((char*)come_memdup(it_40->item, "./comelang.h", 1638, "char*")));
        }
        else {
            list$1char$ph_add(result_39,(char*)come_increment_ref_count((char*)come_memdup(it_40->item, "./comelang.h", 1641, "char*")));
        }
        it_40=it_40->next;
    }
    __result_obj__29 = (struct list$1char$ph*)come_increment_ref_count(result_39);
    come_call_finalizer(list$1char$ph$p_finalize, result_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__29;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__27;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__27 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value61 = (void*)0;
struct list_item$1char$ph* litem_41;
char* __dec_obj27;
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_42;
char* __dec_obj28;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_43;
char* __dec_obj29;
struct list$1char$ph* __result_obj__28;
    if(    self->len==0    ) {
        litem_41=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value61=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1652, "struct list_item$1char$ph*"))));
        litem_41->prev=((void*)0);
        litem_41->next=((void*)0);
        __dec_obj27=litem_41->item,
        litem_41->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_41;
        self->head=litem_41;
    }
    else if(    self->len==1    ) {
        litem_42=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1662, "struct list_item$1char$ph*"))));
        litem_42->prev=self->head;
        litem_42->next=((void*)0);
        __dec_obj28=litem_42->item,
        litem_42->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_42;
        self->head->next=litem_42;
    }
    else {
        litem_43=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1672, "struct list_item$1char$ph*"))));
        litem_43->prev=self->tail;
        litem_43->next=((void*)0);
        __dec_obj29=litem_43->item,
        litem_43->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_43;
        self->tail=litem_43;
    }
    self->len++;
    __result_obj__28 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__28;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_44;
struct list_item$1char$ph* prev_it_45;
    it_44=self->head;
    while(    it_44!=((void*)0)    ) {
        prev_it_45=it_44;
        it_44=it_44->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
char* __dec_obj33;
void* __right_value71 = (void*)0;
struct list$1sNode$ph* __dec_obj34;
struct sSStringNode* __result_obj__32;
    ((struct sNodeBase*)(__right_value69=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj33=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj34=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__32 = (struct sSStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sSStringNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sSStringNode_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value72 = (void*)0;
char* __result_obj__33;
    __result_obj__33 = (char*)come_increment_ref_count(((char*)(__right_value72=__builtin_string("sSStringNode"))));
    (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__33 = come_decrement_ref_count(__result_obj__33, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__33;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct CVALUE* come_value_46;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_47;
struct list$1sNode$ph* o2_saved_48;
struct sNode* it_51;
void* __right_value77 = (void*)0;
struct sNode* obj_54;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_55;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct sNode* node_61;
_Bool Value_62;
_Bool __result_obj__43;
void* __right_value88 = (void*)0;
struct CVALUE* come_value_63;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct sType* type2_64;
void* __right_value92 = (void*)0;
char* __dec_obj40;
void* __right_value93 = (void*)0;
struct sType* __dec_obj41;
_Bool __result_obj__44;
    come_value_46=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 106, "struct CVALUE*"))));
    buf_47=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 108, "struct buffer*"))));
    buffer_append_str(buf_47,"xsprintf(\"");
    buffer_append_str(buf_47,self->value);
    buffer_append_str(buf_47,"\"");
    if(    list$1sNode$ph_length(self->exps)>0    ) {
        for(        o2_saved_48=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_51=list$1sNode$ph_begin((o2_saved_48))        ;        !list$1sNode$ph_end((o2_saved_48))        ;        it_51=list$1sNode$ph_next((o2_saved_48))        ){
            obj_54=(struct sNode*)come_increment_ref_count(sNode_clone(it_51));
            params_55=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 118, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_55,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 119, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it_51)))));
            node_61=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_54),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_55),((void*)0),0,((void*)0),info,(_Bool)0));
            Value_62=node_compile(node_61,info);
            if(            !Value_62            ) {
                __result_obj__43 = (_Bool)0;
                ((obj_54) ? obj_54 = come_decrement_ref_count(obj_54, ((struct sNode*)obj_54)->finalize, ((struct sNode*)obj_54)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__43;
            }
            else {
            }
            come_value_63=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_47,",");
            buffer_append_str(buf_47,come_value_63->c_value);
            ((obj_54) ? obj_54 = come_decrement_ref_count(obj_54, ((struct sNode*)obj_54)->finalize, ((struct sNode*)obj_54)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buffer_append_str(buf_47,")");
    type2_64=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 136, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    type2_64->mHeap=(_Bool)1;
    __dec_obj40=come_value_46->c_value,
    come_value_46->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_47));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj41=come_value_46->type,
    come_value_46->type=(struct sType*)come_increment_ref_count(sType_clone(type2_64));
    come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_46->var=((void*)0);
    append_object_to_right_values(come_value_46,(struct sType*)come_increment_ref_count(type2_64),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_46));
    add_come_last_code(info,"%s",come_value_46->c_value);
    __result_obj__44 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__44;
}

static void sSStringNode_finalize(struct sSStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_49;
struct sNode* __result_obj__34;
struct sNode* __result_obj__35;
struct sNode* result_50;
struct sNode* __result_obj__36;
result_49 = (void*)0;
result_50 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_49,0,sizeof(struct sNode*));
        __result_obj__34 = result_49;
        return __result_obj__34;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_50,0,sizeof(struct sNode*));
    __result_obj__36 = result_50;
    return __result_obj__36;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_52;
struct sNode* __result_obj__37;
struct sNode* __result_obj__38;
struct sNode* result_53;
struct sNode* __result_obj__39;
result_52 = (void*)0;
result_53 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_52,0,sizeof(struct sNode*));
        __result_obj__37 = result_52;
        return __result_obj__37;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_53,0,sizeof(struct sNode*));
    __result_obj__39 = result_53;
    return __result_obj__39;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__40;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__40 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_56;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_57;
    it_56=self->head;
    while(    it_56!=((void*)0)    ) {
        prev_it_57=it_56;
        it_56=it_56->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value80 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_58;
struct tuple2$2char$phsNode$ph* __dec_obj35;
void* __right_value81 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_59;
struct tuple2$2char$phsNode$ph* __dec_obj36;
void* __right_value82 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_60;
struct tuple2$2char$phsNode$ph* __dec_obj37;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__41;
    if(    self->len==0    ) {
        litem_58=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value80=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1652, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_58->prev=((void*)0);
        litem_58->next=((void*)0);
        __dec_obj35=litem_58->item,
        litem_58->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_58;
        self->head=litem_58;
    }
    else if(    self->len==1    ) {
        litem_59=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value81=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1662, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_59->prev=self->head;
        litem_59->next=((void*)0);
        __dec_obj36=litem_59->item,
        litem_59->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_59;
        self->head->next=litem_59;
    }
    else {
        litem_60=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value82=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1672, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_60->prev=self->tail;
        litem_60->next=((void*)0);
        __dec_obj37=litem_60->item,
        litem_60->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_60;
        self->tail=litem_60;
    }
    self->len++;
    __result_obj__41 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj38;
struct sNode* __dec_obj39;
struct tuple2$2char$phsNode$ph* __result_obj__42;
    __dec_obj38=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj39=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__42 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__42;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value94 = (void*)0;
struct sCharNode* __result_obj__45;
    ((struct sNodeBase*)(__right_value94=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value94, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->value=value;
    __result_obj__45 = (struct sCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sCharNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCharNode_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value95 = (void*)0;
char* __result_obj__46;
    __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string("sCharNode"))));
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__46;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct CVALUE* come_value_65;
void* __right_value98 = (void*)0;
char* __dec_obj42;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct sType* __dec_obj43;
_Bool __result_obj__47;
    come_value_65=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 169, "struct CVALUE*"))));
    __dec_obj42=come_value_65->c_value,
    come_value_65->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj43=come_value_65->type,
    come_value_65->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 172, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_65->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    add_come_last_code(info,"%s",come_value_65->c_value);
    __result_obj__47 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__47;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __right_value102 = (void*)0;
struct sWCharNode* __result_obj__48;
    ((struct sNodeBase*)(__right_value102=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__48 = (struct sWCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sWCharNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sWCharNode_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value103 = (void*)0;
char* __result_obj__49;
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string("sWCharNode"))));
    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__49;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct CVALUE* come_value_66;
void* __right_value106 = (void*)0;
char* __dec_obj44;
void* __right_value107 = (void*)0;
char* __dec_obj45;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct sType* __dec_obj46;
_Bool __result_obj__50;
    come_value_66=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 200, "struct CVALUE*"))));
    if(    self->quote    ) {
        __dec_obj44=come_value_66->c_value,
        come_value_66->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj45=come_value_66->c_value,
        come_value_66->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj46=come_value_66->type,
    come_value_66->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 208, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_66->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_66));
    add_come_last_code(info,"%s",come_value_66->c_value);
    __result_obj__50 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__50;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __right_value111 = (void*)0;
int* __dec_obj47;
struct sWStringNode* __result_obj__51;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj47=self->value,
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__51 = (struct sWStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sWStringNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sWStringNode_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value112 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string("sWStringNode"))));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__52;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value115 = (void*)0;
char* __dec_obj48;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__53;
    come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 235, "struct CVALUE*"))));
    __dec_obj48=come_value_67->c_value,
    come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=come_value_67->type,
    come_value_67->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 238, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_67->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    add_come_last_code(info,"%s",come_value_67->c_value);
    __result_obj__53 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void sWStringNode_finalize(struct sWStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
char* __dec_obj50;
struct sRegexNode* __result_obj__54;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj50=self->str,
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__54 = (struct sRegexNode*)come_increment_ref_count(self);
    come_call_finalizer(sRegexNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sRegexNode_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value121 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string("sRegexNode"))));
    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value127 = (void*)0;
struct sNode* obj_node_68;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_70;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct sNode* node_71;
_Bool Value_72;
_Bool __result_obj__58;
_Bool __result_obj__59;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 267, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value123=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 267, "struct sStrNode*")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_68=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer(sStrNode_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    params_70=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 269, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 271, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_68))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 272, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 277, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 278, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_70,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 279, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_71=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_68),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_70),((void*)0),info->sline,((void*)0),info,(_Bool)0));
    Value_72=node_compile(node_71,info);
    if(    !Value_72    ) {
        __result_obj__58 = (_Bool)0;
        ((obj_node_68) ? obj_node_68 = come_decrement_ref_count(obj_node_68, ((struct sNode*)obj_node_68)->finalize, ((struct sNode*)obj_node_68)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__58;
    }
    else {
    }
    __result_obj__59 = (_Bool)1;
    ((obj_node_68) ? obj_node_68 = come_decrement_ref_count(obj_node_68, ((struct sNode*)obj_node_68)->finalize, ((struct sNode*)obj_node_68)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__59;
}

static void sRegexNode_finalize(struct sRegexNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)    ) {
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
struct sStrNode* __result_obj__56;
void* __right_value124 = (void*)0;
struct sStrNode* result_69;
void* __right_value125 = (void*)0;
char* __dec_obj51;
void* __right_value126 = (void*)0;
char* __dec_obj52;
struct sStrNode* __result_obj__57;
    if(    self==(void*)0    ) {
        __result_obj__56 = (void*)0;
        return __result_obj__56;
    }
    result_69=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*"));
    if(    self!=((void*)0)    ) {
        result_69->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj51=result_69->sname,
        result_69->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStrNode_clone", 5, "char*"));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_69->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj52=result_69->value,
        result_69->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sStrNode_clone", 7, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__57 = result_69;
    come_call_finalizer(sStrNode_finalize, result_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value166 = (void*)0;
struct list$1sNode$ph* __dec_obj53;
struct sListNode* __result_obj__60;
    ((struct sNodeBase*)(__right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value166, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj53=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__60 = (struct sListNode*)come_increment_ref_count(self);
    come_call_finalizer(sListNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sListNode_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value167 = (void*)0;
char* __result_obj__61;
    __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string("sListNode"))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__61;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_73;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct list$1CVALUE$ph* params_74;
struct sType* list_element_type_77;
int n_78;
struct list$1sNode$ph* o2_saved_79;
struct sNode* it_80;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct sNode* value_node_81;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_82;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sNode* exp_83;
_Bool Value_84;
_Bool __result_obj__63;
_Bool Value_85;
_Bool __result_obj__64;
void* __right_value185 = (void*)0;
struct CVALUE* come_value_86;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct sType* __dec_obj54;
void* __right_value188 = (void*)0;
struct sType* type_values_87;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
char* var_name_92;
void* __right_value194 = (void*)0;
struct sVar* var__93;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct buffer* source_94;
int i_95;
struct list$1CVALUE$ph* o2_saved_96;
struct CVALUE* it_99;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct sType* list_type_108;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sType* obj_type_112;
char* fun_name_113;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var1 = (void*)0;
char* name_114=0;
struct sGenericsFun* generics_fun_115=0;
char* generics_fun_name_116;
void* __right_value210 = (void*)0;
struct sFun* fun_117;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
char* __dec_obj61;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
_Bool __result_obj__81;
void* __right_value215 = (void*)0;
struct sType* result_type_120;
struct sType* type_121;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct CVALUE* obj_value_122;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct buffer* num_string_123;
void* __right_value220 = (void*)0;
struct sType* type2_124;
void* __right_value221 = (void*)0;
char* type_name_125;
struct sType* any_type_126;
void* __right_value222 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
char* __dec_obj62;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
char* __dec_obj63;
void* __right_value227 = (void*)0;
struct sType* type3_127;
void* __right_value228 = (void*)0;
struct sType* __dec_obj64;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1CVALUE$ph* come_params_128;
void* __right_value231 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct CVALUE* come_value2_135;
void* __right_value235 = (void*)0;
char* __dec_obj65;
struct sType* __dec_obj66;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct CVALUE* come_value3_136;
void* __right_value238 = (void*)0;
char* __dec_obj67;
struct sType* __dec_obj68;
int j_137;
struct list$1CVALUE$ph* o2_saved_138;
struct CVALUE* it_139;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value4_140;
void* __right_value241 = (void*)0;
char* __dec_obj69;
void* __right_value242 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__86;
    list_elements_73=self->list_elements;
    params_74=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 311, "struct list$1CVALUE$ph*"))));
    list_element_type_77=((void*)0);
    n_78=0;
    for(    o2_saved_79=(list_elements_73),it_80=list$1sNode$ph_begin((o2_saved_79))    ;    !list$1sNode$ph_end((o2_saved_79))    ;    it_80=list$1sNode$ph_next((o2_saved_79))    ){
        if(        (_condtional_value_X2=(string_operator_equals(((char*)(__right_value171=it_80->kind(it_80->_protocol_obj))),"sWildCard"))),        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X2        ) {
            value_node_81=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value172=xsprintf("Value"))),info));
            (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            params_82=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 319, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_82,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 320, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_81))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_82,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 321, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_78,info)))));
            exp_83=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value183=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_81),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_82),((void*)0),0,((void*)0),info,(_Bool)0));
            (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            Value_84=node_compile(exp_83,info);
            if(            !Value_84            ) {
                __result_obj__63 = (_Bool)0;
                ((value_node_81) ? value_node_81 = come_decrement_ref_count(value_node_81, ((struct sNode*)value_node_81)->finalize, ((struct sNode*)value_node_81)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((exp_83) ? exp_83 = come_decrement_ref_count(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, params_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, list_element_type_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__63;
            }
            else {
            }
            ((value_node_81) ? value_node_81 = come_decrement_ref_count(value_node_81, ((struct sNode*)value_node_81)->finalize, ((struct sNode*)value_node_81)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((exp_83) ? exp_83 = come_decrement_ref_count(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            Value_85=node_compile(it_80,info);
            if(            !Value_85            ) {
                __result_obj__64 = (_Bool)0;
                come_call_finalizer(list$1CVALUE$ph$p_finalize, params_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, list_element_type_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__64;
            }
            else {
            }
        }
        come_value_86=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        list_element_type_77        ) {
            check_assign_type(((char*)(__right_value186=xsprintf("invalid list element type"))),list_element_type_77,come_value_86->type,come_value_86,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(params_74,(struct CVALUE*)come_increment_ref_count(come_value_86));
        __dec_obj54=list_element_type_77,
        list_element_type_77=(struct sType*)come_increment_ref_count(sType_clone(come_value_86->type));
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        n_78++;
        come_call_finalizer(CVALUE_finalize, come_value_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_values_87=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_77));
    list$1sNode$ph_push_back(type_values_87->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(params_74),info)));
    type_values_87->mHeap=(_Bool)0;
    static int list_value_num_91=0;
    var_name_92=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_91));
    add_variable_to_table(var_name_92,(struct sType*)come_increment_ref_count(sType_clone(type_values_87)),info,(_Bool)0,(_Bool)0);
    var__93=get_variable_from_table(info->lv_table,var_name_92);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value195=make_define_var(type_values_87,var__93->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    source_94=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 360, "struct buffer*"))));
    buffer_append_str(source_94,"(");
    i_95=0;
    for(    o2_saved_96=(struct list$1CVALUE$ph*)come_increment_ref_count((params_74)),it_99=list$1CVALUE$ph_begin((o2_saved_96))    ;    !list$1CVALUE$ph_end((o2_saved_96))    ;    it_99=list$1CVALUE$ph_next((o2_saved_96))    ){
        if(        list_element_type_77->mHeap        ) {
            buffer_append_format(source_94,"%s[%d]=%s,\n",var__93->mCValueName,i_95,((struct CVALUE*)(__right_value198=list$1CVALUE$ph_operator_load_element(params_74,i_95)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            buffer_append_format(source_94,"%s[%d]=%s,\n",var__93->mCValueName,i_95,((struct CVALUE*)(__right_value199=list$1CVALUE$ph_operator_load_element(params_74,i_95)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value199, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        i_95++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list_type_108=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 380, "struct sType*")),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info));
    list$1sType$ph_push_back(list_type_108->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value206=sType_clone(list_element_type_77))))));
    come_call_finalizer(sType_finalize, __right_value206, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    obj_type_112=(struct sType*)come_increment_ref_count(sType_clone(list_type_108));
    fun_name_113="initialize_with_values";
    multiple_assign_var1=((struct tuple2$2char$phsGenericsFun$p*)(__right_value209=make_generics_function(obj_type_112,(char*)come_increment_ref_count(__builtin_string(fun_name_113)),info,(_Bool)1)));
    name_114=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    generics_fun_115=multiple_assign_var1->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value209, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_fun_name_116=(char*)come_increment_ref_count(name_114);
    fun_117=((struct sFun*)(__right_value210=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_116,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value210, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_117==((void*)0)    ) {
        __dec_obj61=generics_fun_name_116,
        generics_fun_name_116=(char*)come_increment_ref_count(create_method_name(obj_type_112,(_Bool)0,((char*)(__right_value211=__builtin_string(fun_name_113))),info,(_Bool)1));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        fun_117=((struct sFun*)(__right_value213=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_116,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value213, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_117==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value214=err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name_116,info->come_fun->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value214, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__81 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, list_element_type_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_values_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_92 = come_decrement_ref_count(var_name_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, source_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, list_type_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, obj_type_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_114 = come_decrement_ref_count(name_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_116 = come_decrement_ref_count(generics_fun_name_116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__81;
        }
    }
    result_type_120=(struct sType*)come_increment_ref_count(sType_clone(fun_117->mResultType));
    result_type_120->mStatic=(_Bool)0;
    type_121=(struct sType*)come_increment_ref_count(list_type_108);
    obj_value_122=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 407, "struct CVALUE*"))));
    num_string_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 409, "struct buffer*"))));
    buffer_append_str(num_string_123,"1");
    type2_124=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_121),(struct sType*)come_increment_ref_count(type_121),info));
    type_name_125=(char*)come_increment_ref_count(make_type_name_string(type2_124,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_126=(struct sType*)come_increment_ref_count(type2_124);
    any_type_126->mPointerNum=1;
    any_type_126->mHeap=(_Bool)1;
    if(    (_condtional_value_X3=(((struct sFun*)(__right_value222=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    come_call_finalizer(sFun_finalize, __right_value222, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X3    ) {
        __dec_obj62=obj_value_122->c_value,
        obj_value_122->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_125,type_name_125,((char*)(__right_value223=buffer_to_string(num_string_123))),info->sname,info->sline,type_name_125));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj63=obj_value_122->c_value,
        obj_value_122->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_125,type_name_125,((char*)(__right_value225=buffer_to_string(num_string_123))),info->sname,info->sline,type_name_125));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    type3_127=(struct sType*)come_increment_ref_count(sType_clone(type2_124));
    type3_127->mPointerNum++;
    type3_127->mHeap=(_Bool)1;
    type2_124->mHeap=(_Bool)1;
    __dec_obj64=obj_value_122->type,
    obj_value_122->type=(struct sType*)come_increment_ref_count(sType_clone(type2_124));
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    obj_value_122->type->mPointerNum++;
    obj_value_122->var=((void*)0);
    append_object_to_right_values(obj_value_122,(struct sType*)come_increment_ref_count(type3_127),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    come_params_128=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 438, "struct list$1CVALUE$ph*"))));
    if(    (_condtional_value_X4=(((struct sType*)(__right_value231=list$1sType$ph_operator_load_element(fun_117->mParamTypes,0)))->mHeap&&obj_value_122->type->mHeap)),    come_call_finalizer(sType_finalize, __right_value231, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X4    ) {
        std_move(((struct sType*)(__right_value232=list$1sType$ph_operator_load_element(fun_117->mParamTypes,0))),obj_value_122->type,obj_value_122,info,(_Bool)1);
        come_call_finalizer(sType_finalize, __right_value232, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_128,(struct CVALUE*)come_increment_ref_count(obj_value_122));
    come_value2_135=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 445, "struct CVALUE*"))));
    __dec_obj65=come_value2_135->c_value,
    come_value2_135->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params_74)));
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj66=come_value2_135->type,
    come_value2_135->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_135->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_128,(struct CVALUE*)come_increment_ref_count(come_value2_135));
    come_value3_136=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 453, "struct CVALUE*"))));
    __dec_obj67=come_value3_136->c_value,
    come_value3_136->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__93->mCValueName));
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj68=come_value3_136->type,
    come_value3_136->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value3_136->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_128,(struct CVALUE*)come_increment_ref_count(come_value3_136));
    buffer_append_str(source_94,generics_fun_name_116);
    buffer_append_str(source_94,"(");
    j_137=0;
    for(    o2_saved_138=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_128)),it_139=list$1CVALUE$ph_begin((o2_saved_138))    ;    !list$1CVALUE$ph_end((o2_saved_138))    ;    it_139=list$1CVALUE$ph_next((o2_saved_138))    ){
        buffer_append_str(source_94,it_139->c_value);
        if(        j_137!=list$1CVALUE$ph_length(come_params_128)-1        ) {
            buffer_append_str(source_94,",");
        }
        j_137++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(source_94,")");
    buffer_append_str(source_94,")");
    come_value4_140=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 479, "struct CVALUE*"))));
    __dec_obj69=come_value4_140->c_value,
    come_value4_140->c_value=(char*)come_increment_ref_count(buffer_to_string(source_94));
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj70=come_value4_140->type,
    come_value4_140->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_120));
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value4_140->type->mStatic=(_Bool)0;
    come_value4_140->var=((void*)0);
    if(    result_type_120->mHeap    ) {
        append_object_to_right_values(come_value4_140,(struct sType*)come_increment_ref_count(result_type_120),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_140));
    add_come_last_code(info,"%s",come_value4_140->c_value);
    __result_obj__86 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, list_element_type_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_values_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_92 = come_decrement_ref_count(var_name_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, list_type_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, obj_type_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_114 = come_decrement_ref_count(name_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (generics_fun_name_116 = come_decrement_ref_count(generics_fun_name_116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, num_string_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_125 = come_decrement_ref_count(type_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, any_type_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type3_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__86;
}

static void sListNode_finalize(struct sListNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->list_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__62 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_75;
struct list_item$1CVALUE$ph* prev_it_76;
    it_75=self->head;
    while(    it_75!=((void*)0)    ) {
        prev_it_76=it_75;
        it_75=it_75->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value189 = (void*)0;
struct list_item$1sNode$ph* litem_88;
struct sNode* __dec_obj55;
void* __right_value190 = (void*)0;
struct list_item$1sNode$ph* litem_89;
struct sNode* __dec_obj56;
void* __right_value191 = (void*)0;
struct list_item$1sNode$ph* litem_90;
struct sNode* __dec_obj57;
struct list$1sNode$ph* __result_obj__65;
    if(    self->len==0    ) {
        litem_88=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value189=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1722, "struct list_item$1sNode$ph*"))));
        litem_88->prev=((void*)0);
        litem_88->next=((void*)0);
        __dec_obj55=litem_88->item,
        litem_88->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_88;
        self->head=litem_88;
    }
    else if(    self->len==1    ) {
        litem_89=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value190=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1732, "struct list_item$1sNode$ph*"))));
        litem_89->prev=self->head;
        litem_89->next=((void*)0);
        __dec_obj56=litem_89->item,
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_89;
        self->head->next=litem_89;
    }
    else {
        litem_90=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value191=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1742, "struct list_item$1sNode$ph*"))));
        litem_90->prev=self->tail;
        litem_90->next=((void*)0);
        __dec_obj57=litem_90->item,
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_90;
        self->tail=litem_90;
    }
    self->len++;
    __result_obj__65 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__65;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_97;
struct CVALUE* __result_obj__66;
struct CVALUE* __result_obj__67;
struct CVALUE* result_98;
struct CVALUE* __result_obj__68;
result_97 = (void*)0;
result_98 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_97,0,sizeof(struct CVALUE*));
        __result_obj__66 = result_97;
        return __result_obj__66;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__67 = self->it->item;
        return __result_obj__67;
    }
    memset(&result_98,0,sizeof(struct CVALUE*));
    __result_obj__68 = result_98;
    return __result_obj__68;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_100;
struct CVALUE* __result_obj__69;
struct CVALUE* __result_obj__70;
struct CVALUE* result_101;
struct CVALUE* __result_obj__71;
result_100 = (void*)0;
result_101 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_100,0,sizeof(struct CVALUE*));
        __result_obj__69 = result_100;
        return __result_obj__69;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__70 = self->it->item;
        return __result_obj__70;
    }
    memset(&result_101,0,sizeof(struct CVALUE*));
    __result_obj__71 = result_101;
    return __result_obj__71;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_102;
int i_103;
struct CVALUE* __result_obj__72;
struct CVALUE* default_value_104;
struct CVALUE* __result_obj__73;
default_value_104 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_102=self->head;
    i_103=0;
    while(    it_102!=((void*)0)    ) {
        if(        position==i_103        ) {
            __result_obj__72 = (struct CVALUE*)come_increment_ref_count(it_102->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__72;
        }
        it_102=it_102->next;
        i_103++;
    }
    memset(&default_value_104,0,sizeof(struct CVALUE*));
    __result_obj__73 = (struct CVALUE*)come_increment_ref_count(default_value_104);
    come_call_finalizer(CVALUE_finalize, default_value_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_105;
int i_106;
struct CVALUE* __result_obj__74;
struct CVALUE* default_value_107;
struct CVALUE* __result_obj__75;
default_value_107 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_105=self->head;
    i_106=0;
    while(    it_105!=((void*)0)    ) {
        if(        position==i_106        ) {
            __result_obj__74 = (struct CVALUE*)come_increment_ref_count(it_105->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__74;
        }
        it_105=it_105->next;
        i_106++;
    }
    memset(&default_value_107,0,sizeof(struct CVALUE*));
    __result_obj__75 = (struct CVALUE*)come_increment_ref_count(default_value_107);
    come_call_finalizer(CVALUE_finalize, default_value_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value203 = (void*)0;
struct list_item$1sType$ph* litem_109;
struct sType* __dec_obj58;
void* __right_value204 = (void*)0;
struct list_item$1sType$ph* litem_110;
struct sType* __dec_obj59;
void* __right_value205 = (void*)0;
struct list_item$1sType$ph* litem_111;
struct sType* __dec_obj60;
struct list$1sType$ph* __result_obj__76;
    if(    self->len==0    ) {
        litem_109=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value203=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1722, "struct list_item$1sType$ph*"))));
        litem_109->prev=((void*)0);
        litem_109->next=((void*)0);
        __dec_obj58=litem_109->item,
        litem_109->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_109;
        self->head=litem_109;
    }
    else if(    self->len==1    ) {
        litem_110=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value204=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1732, "struct list_item$1sType$ph*"))));
        litem_110->prev=self->head;
        litem_110->next=((void*)0);
        __dec_obj59=litem_110->item,
        litem_110->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_110;
        self->head->next=litem_110;
    }
    else {
        litem_111=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value205=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1742, "struct list_item$1sType$ph*"))));
        litem_111->prev=self->tail;
        litem_111->next=((void*)0);
        __dec_obj60=litem_111->item,
        litem_111->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_111;
        self->tail=litem_111;
    }
    self->len++;
    __result_obj__76 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__76;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_118;
unsigned int it_119;
struct sFun* __result_obj__77;
struct sFun* __result_obj__78;
struct sFun* __result_obj__79;
struct sFun* __result_obj__80;
    hash_118=string_get_hash_key(((char*)key))%self->size;
    it_119=hash_118;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_119]        ) {
            if(            string_equals(self->keys[it_119],key)            ) {
                __result_obj__77 = (struct sFun*)come_increment_ref_count(self->items[it_119]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__77;
            }
            it_119++;
            if(            it_119>=self->size            ) {
                it_119=0;
            }
            else if(            it_119==hash_118            ) {
                __result_obj__78 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__78;
            }
        }
        else {
            __result_obj__79 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__79;
        }
    }
    __result_obj__80 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_129;
int i_130;
struct sType* __result_obj__82;
struct sType* default_value_131;
struct sType* __result_obj__83;
default_value_131 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_129=self->head;
    i_130=0;
    while(    it_129!=((void*)0)    ) {
        if(        position==i_130        ) {
            __result_obj__82 = (struct sType*)come_increment_ref_count(it_129->item);
            come_call_finalizer(sType_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__82;
        }
        it_129=it_129->next;
        i_130++;
    }
    memset(&default_value_131,0,sizeof(struct sType*));
    __result_obj__83 = (struct sType*)come_increment_ref_count(default_value_131);
    come_call_finalizer(sType_finalize, default_value_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_132;
int i_133;
struct sType* __result_obj__84;
struct sType* default_value_134;
struct sType* __result_obj__85;
default_value_134 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_132=self->head;
    i_133=0;
    while(    it_132!=((void*)0)    ) {
        if(        position==i_133        ) {
            __result_obj__84 = (struct sType*)come_increment_ref_count(it_132->item);
            come_call_finalizer(sType_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__84;
        }
        it_132=it_132->next;
        i_133++;
    }
    memset(&default_value_134,0,sizeof(struct sType*));
    __result_obj__85 = (struct sType*)come_increment_ref_count(default_value_134);
    come_call_finalizer(sType_finalize, default_value_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value243 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj71;
struct sTupleNode* __result_obj__87;
    ((struct sNodeBase*)(__right_value243=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value243, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj71=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__87 = (struct sTupleNode*)come_increment_ref_count(self);
    come_call_finalizer(sTupleNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value244 = (void*)0;
char* __result_obj__88;
    __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value244=__builtin_string("sTupleNode"))));
    (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__88;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_143;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sType$ph* tuple_types_144;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct list$1CVALUE$ph* tuple_values_145;
int n_146;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_147;
struct tuple2$2char$phsNode$ph* it_150;
struct tuple2$2char$phsNode$ph* multiple_assign_var2 = (void*)0;
char* name_153=0;
struct sNode* node_154=0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sNode* value_node_155;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sNode* exp_156;
_Bool Value_157;
_Bool __result_obj__95;
_Bool Value_158;
_Bool __result_obj__96;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_159;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* type_161;
char* __dec_obj76;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* type_162;
struct list$1sType$ph* o2_saved_163;
struct sType* it_166;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct CVALUE* obj_value_169;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct buffer* num_string_170;
void* __right_value271 = (void*)0;
struct sType* type2_171;
void* __right_value272 = (void*)0;
char* type_name_172;
struct sType* any_type_173;
void* __right_value273 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* __dec_obj77;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
char* __dec_obj78;
void* __right_value278 = (void*)0;
struct sType* type3_174;
void* __right_value279 = (void*)0;
struct sType* __dec_obj79;
void* __right_value280 = (void*)0;
struct sType* obj_type_175;
char* fun_name_176;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_177=0;
struct sGenericsFun* generics_fun_178=0;
char* generics_fun_name_179;
void* __right_value283 = (void*)0;
struct sFun* fun_180;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* __dec_obj80;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
_Bool __result_obj__105;
void* __right_value288 = (void*)0;
struct sType* result_type_181;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1CVALUE$ph* come_params_182;
void* __right_value291 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value292 = (void*)0;
int i_183;
struct list$1CVALUE$ph* o2_saved_184;
struct CVALUE* it_185;
void* __right_value293 = (void*)0;
struct CVALUE* come_value_186;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
_Bool _condtional_value_X8;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct buffer* buf_187;
int j_188;
struct list$1CVALUE$ph* o2_saved_189;
struct CVALUE* it_190;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct CVALUE* come_value2_191;
void* __right_value301 = (void*)0;
char* __dec_obj81;
void* __right_value302 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__106;
    tuple_elements_143=self->tuple_elements;
    tuple_types_144=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 516, "struct list$1sType$ph*"))));
    tuple_values_145=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 517, "struct list$1CVALUE$ph*"))));
    n_146=0;
    for(    o2_saved_147=(tuple_elements_143),it_150=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_147))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_147))    ;    it_150=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_147))    ){
        multiple_assign_var2=it_150;
        name_153=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        node_154=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        (_condtional_value_X5=(string_operator_equals(((char*)(__right_value250=node_154->kind(node_154->_protocol_obj))),"sWildCard"))),        (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X5        ) {
            value_node_155=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value251=xsprintf("Value"))),info));
            (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            exp_156=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_155),(char*)come_increment_ref_count(xsprintf("v%d",n_146+1)),info));
            Value_157=node_compile(exp_156,info);
            if(            !Value_157            ) {
                __result_obj__95 = (_Bool)0;
                ((value_node_155) ? value_node_155 = come_decrement_ref_count(value_node_155, ((struct sNode*)value_node_155)->finalize, ((struct sNode*)value_node_155)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((exp_156) ? exp_156 = come_decrement_ref_count(exp_156, ((struct sNode*)exp_156)->finalize, ((struct sNode*)exp_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (name_153 = come_decrement_ref_count(name_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_154) ? node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, tuple_types_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__95;
            }
            else {
            }
            ((value_node_155) ? value_node_155 = come_decrement_ref_count(value_node_155, ((struct sNode*)value_node_155)->finalize, ((struct sNode*)value_node_155)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp_156) ? exp_156 = come_decrement_ref_count(exp_156, ((struct sNode*)exp_156)->finalize, ((struct sNode*)exp_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            Value_158=node_compile(node_154,info);
            if(            !Value_158            ) {
                __result_obj__96 = (_Bool)0;
                (name_153 = come_decrement_ref_count(name_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_154) ? node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, tuple_types_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__96;
            }
            else {
            }
        }
        come_value_159=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_145,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_159)));
        type_161=(struct sType*)come_increment_ref_count(sType_clone(come_value_159->type));
        __dec_obj76=type_161->mTupleName,
        type_161->mTupleName=(char*)come_increment_ref_count(name_153);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        list$1sType$ph_push_back(tuple_types_144,(struct sType*)come_increment_ref_count(type_161));
        n_146++;
        (name_153 = come_decrement_ref_count(name_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_154) ? node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_162=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 546, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_144))),(_Bool)0,info));
    for(    o2_saved_163=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_144)),it_166=list$1sType$ph_begin((o2_saved_163))    ;    !list$1sType$ph_end((o2_saved_163))    ;    it_166=list$1sType$ph_next((o2_saved_163))    ){
        list$1sType$ph_push_back(type_162->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value266=sType_clone(it_166))))));
        come_call_finalizer(sType_finalize, __right_value266, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    obj_value_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 552, "struct CVALUE*"))));
    num_string_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 554, "struct buffer*"))));
    buffer_append_str(num_string_170,"1");
    type2_171=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_162),(struct sType*)come_increment_ref_count(type_162),info));
    type_name_172=(char*)come_increment_ref_count(make_type_name_string(type2_171,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_173=(struct sType*)come_increment_ref_count(type2_171);
    any_type_173->mPointerNum=1;
    any_type_173->mHeap=(_Bool)1;
    if(    (_condtional_value_X6=(((struct sFun*)(__right_value273=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    come_call_finalizer(sFun_finalize, __right_value273, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X6    ) {
        __dec_obj77=obj_value_169->c_value,
        obj_value_169->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_172,type_name_172,((char*)(__right_value274=buffer_to_string(num_string_170))),info->sname,info->sline,type_name_172));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj78=obj_value_169->c_value,
        obj_value_169->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_172,type_name_172,((char*)(__right_value276=buffer_to_string(num_string_170))),info->sname,info->sline,type_name_172));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    type3_174=(struct sType*)come_increment_ref_count(sType_clone(type2_171));
    type3_174->mPointerNum++;
    type3_174->mHeap=(_Bool)1;
    type2_171->mHeap=(_Bool)1;
    __dec_obj79=obj_value_169->type,
    obj_value_169->type=(struct sType*)come_increment_ref_count(sType_clone(type2_171));
    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    obj_value_169->type->mPointerNum++;
    obj_value_169->var=((void*)0);
    append_object_to_right_values(obj_value_169,(struct sType*)come_increment_ref_count(type3_174),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    obj_type_175=(struct sType*)come_increment_ref_count(sType_clone(type2_171));
    fun_name_176="initialize";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value282=make_generics_function(obj_type_175,(char*)come_increment_ref_count(__builtin_string(fun_name_176)),info,(_Bool)1)));
    name_177=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_178=multiple_assign_var3->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value282, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_fun_name_179=(char*)come_increment_ref_count(name_177);
    fun_180=((struct sFun*)(__right_value283=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_179,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_180==((void*)0)    ) {
        __dec_obj80=generics_fun_name_179,
        generics_fun_name_179=(char*)come_increment_ref_count(create_method_name(obj_type_175,(_Bool)0,((char*)(__right_value284=__builtin_string(fun_name_176))),info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        fun_180=((struct sFun*)(__right_value286=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_179,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value286, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_180==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value287=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_179,info->come_fun->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value287, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__105 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, num_string_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (type_name_172 = come_decrement_ref_count(type_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, any_type_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type3_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, obj_type_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_177 = come_decrement_ref_count(name_177, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_179 = come_decrement_ref_count(generics_fun_name_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__105;
        }
    }
    result_type_181=(struct sType*)come_increment_ref_count(sType_clone(fun_180->mResultType));
    result_type_181->mStatic=(_Bool)0;
    come_params_182=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 605, "struct list$1CVALUE$ph*"))));
    if(    (_condtional_value_X7=(((struct sType*)(__right_value291=list$1sType$ph_operator_load_element(fun_180->mParamTypes,0)))->mHeap&&obj_value_169->type->mHeap)),    come_call_finalizer(sType_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X7    ) {
        std_move(((struct sType*)(__right_value292=list$1sType$ph_operator_load_element(fun_180->mParamTypes,0))),obj_value_169->type,obj_value_169,info,(_Bool)1);
        come_call_finalizer(sType_finalize, __right_value292, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_182,(struct CVALUE*)come_increment_ref_count(obj_value_169));
    i_183=1;
    for(    o2_saved_184=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_145)),it_185=list$1CVALUE$ph_begin((o2_saved_184))    ;    !list$1CVALUE$ph_end((o2_saved_184))    ;    it_185=list$1CVALUE$ph_next((o2_saved_184))    ){
        come_value_186=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_185));
        if(        (_condtional_value_X8=(((struct sType*)(__right_value294=list$1sType$ph_operator_load_element(fun_180->mParamTypes,i_183)))&&((struct sType*)(__right_value295=list$1sType$ph_operator_load_element(fun_180->mParamTypes,i_183)))->mHeap&&come_value_186->type->mHeap)),        come_call_finalizer(sType_finalize, __right_value294, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        come_call_finalizer(sType_finalize, __right_value295, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X8        ) {
            std_move(((struct sType*)(__right_value296=list$1sType$ph_operator_load_element(fun_180->mParamTypes,i_183))),come_value_186->type,come_value_186,info,(_Bool)1);
            come_call_finalizer(sType_finalize, __right_value296, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_182,(struct CVALUE*)come_increment_ref_count(come_value_186));
        i_183++;
        come_call_finalizer(CVALUE_finalize, come_value_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buf_187=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 624, "struct buffer*"))));
    buffer_append_str(buf_187,generics_fun_name_179);
    buffer_append_str(buf_187,"(");
    j_188=0;
    for(    o2_saved_189=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_182)),it_190=list$1CVALUE$ph_begin((o2_saved_189))    ;    !list$1CVALUE$ph_end((o2_saved_189))    ;    it_190=list$1CVALUE$ph_next((o2_saved_189))    ){
        buffer_append_str(buf_187,it_190->c_value);
        if(        j_188!=list$1CVALUE$ph_length(come_params_182)-1        ) {
            buffer_append_str(buf_187,",");
        }
        j_188++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_187,")");
    come_value2_191=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 641, "struct CVALUE*"))));
    __dec_obj81=come_value2_191->c_value,
    come_value2_191->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_187));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj82=come_value2_191->type,
    come_value2_191->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_181));
    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_191->type->mStatic=(_Bool)0;
    come_value2_191->var=((void*)0);
    if(    result_type_181->mHeap    ) {
        append_object_to_right_values(come_value2_191,(struct sType*)come_increment_ref_count(result_type_181),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_191->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_191));
    __result_obj__106 = (_Bool)1;
    come_call_finalizer(list$1sType$ph$p_finalize, tuple_types_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, num_string_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_172 = come_decrement_ref_count(type_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, any_type_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type3_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, obj_type_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_177 = come_decrement_ref_count(name_177, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (generics_fun_name_179 = come_decrement_ref_count(generics_fun_name_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__106;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_141;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_142;
    it_141=self->head;
    while(    it_141!=((void*)0)    ) {
        prev_it_142=it_141;
        it_141=it_141->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->tuple_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_148;
struct tuple2$2char$phsNode$ph* __result_obj__89;
struct tuple2$2char$phsNode$ph* __result_obj__90;
struct tuple2$2char$phsNode$ph* result_149;
struct tuple2$2char$phsNode$ph* __result_obj__91;
result_148 = (void*)0;
result_149 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_148,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__89 = result_148;
        return __result_obj__89;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__90 = self->it->item;
        return __result_obj__90;
    }
    memset(&result_149,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__91 = result_149;
    return __result_obj__91;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_151;
struct tuple2$2char$phsNode$ph* __result_obj__92;
struct tuple2$2char$phsNode$ph* __result_obj__93;
struct tuple2$2char$phsNode$ph* result_152;
struct tuple2$2char$phsNode$ph* __result_obj__94;
result_151 = (void*)0;
result_152 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_151,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__92 = result_151;
        return __result_obj__92;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__93 = self->it->item;
        return __result_obj__93;
    }
    memset(&result_152,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__94 = result_152;
    return __result_obj__94;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__97;
void* __right_value256 = (void*)0;
struct CVALUE* result_160;
void* __right_value257 = (void*)0;
char* __dec_obj72;
void* __right_value258 = (void*)0;
struct sType* __dec_obj73;
void* __right_value259 = (void*)0;
char* __dec_obj74;
void* __right_value260 = (void*)0;
char* __dec_obj75;
struct CVALUE* __result_obj__98;
    if(    self==(void*)0    ) {
        __result_obj__97 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__97;
    }
    result_160=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        __dec_obj72=result_160->c_value,
        result_160->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj73=result_160->type,
        result_160->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_160->var=self->var;
    }
    if(    self!=((void*)0)    ) {
        result_160->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        __dec_obj74=result_160->c_value_without_right_value_objects,
        result_160->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        __dec_obj75=result_160->c_value_without_cast_object_value,
        result_160->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__98 = (struct CVALUE*)come_increment_ref_count(result_160);
    come_call_finalizer(CVALUE_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_164;
struct sType* __result_obj__99;
struct sType* __result_obj__100;
struct sType* result_165;
struct sType* __result_obj__101;
result_164 = (void*)0;
result_165 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_164,0,sizeof(struct sType*));
        __result_obj__99 = result_164;
        return __result_obj__99;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__100 = self->it->item;
        return __result_obj__100;
    }
    memset(&result_165,0,sizeof(struct sType*));
    __result_obj__101 = result_165;
    return __result_obj__101;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_167;
struct sType* __result_obj__102;
struct sType* __result_obj__103;
struct sType* result_168;
struct sType* __result_obj__104;
result_167 = (void*)0;
result_168 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_167,0,sizeof(struct sType*));
        __result_obj__102 = result_167;
        return __result_obj__102;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__103 = self->it->item;
        return __result_obj__103;
    }
    memset(&result_168,0,sizeof(struct sType*));
    __result_obj__104 = result_168;
    return __result_obj__104;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info){
void* __right_value303 = (void*)0;
struct list$1sNode$ph* __dec_obj83;
struct list$1sNode$ph* __dec_obj84;
struct sMapNode* __result_obj__107;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj83=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj84=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__107 = (struct sMapNode*)come_increment_ref_count(self);
    come_call_finalizer(sMapNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sMapNode_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value304 = (void*)0;
char* __result_obj__108;
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value304=__builtin_string("sMapNode"))));
    (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_192;
struct list$1sNode$ph* map_elements_193;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1CVALUE$ph* key_params_194;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1CVALUE$ph* element_params_195;
struct sType* map_key_type_196;
struct sType* map_element_type_197;
int i_198;
void* __right_value309 = (void*)0;
struct sNode* key_elements_199;
void* __right_value310 = (void*)0;
struct sNode* elements_206;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sNode* value_node_207;
struct sNode* exp_208;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_209;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_210;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj86;
_Bool Value_211;
_Bool __result_obj__113;
void* __right_value333 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value334 = (void*)0;
struct sType* __dec_obj87;
_Bool Value_213;
_Bool __result_obj__114;
void* __right_value335 = (void*)0;
struct CVALUE* come_value_214;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sType* __dec_obj88;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sNode* value_node_215;
struct sNode* exp2_216;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_217;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_218;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj90;
_Bool Value_219;
_Bool __result_obj__115;
void* __right_value360 = (void*)0;
struct CVALUE* come_value2_220;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj91;
_Bool Value_221;
_Bool __result_obj__116;
void* __right_value363 = (void*)0;
struct CVALUE* come_value2_222;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* __dec_obj92;
void* __right_value366 = (void*)0;
struct sType* key_type_values_224;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* var_name_225;
void* __right_value369 = (void*)0;
struct sVar* var__226;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sType* element_type_values_227;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
char* var_name2_228;
void* __right_value374 = (void*)0;
struct sVar* var2__229;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct buffer* source_230;
int i_231;
void* __right_value378 = (void*)0;
struct CVALUE* key_param_232;
void* __right_value379 = (void*)0;
struct CVALUE* element_param_233;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sType* map_type_234;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sType* obj_type_235;
char* fun_name_236;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_237=0;
struct sGenericsFun* generics_fun_238=0;
char* generics_fun_name_239;
void* __right_value388 = (void*)0;
struct sFun* fun_240;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
char* __dec_obj93;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
_Bool __result_obj__117;
void* __right_value393 = (void*)0;
struct sType* result_type_241;
struct sType* type_242;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* obj_value_243;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct buffer* num_string_244;
void* __right_value398 = (void*)0;
struct sType* type2_245;
void* __right_value399 = (void*)0;
char* type_name_246;
struct sType* any_type_247;
void* __right_value400 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
char* __dec_obj94;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* __dec_obj95;
void* __right_value405 = (void*)0;
struct sType* type3_248;
void* __right_value406 = (void*)0;
struct sType* __dec_obj96;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1CVALUE$ph* come_params_249;
void* __right_value409 = (void*)0;
_Bool _condtional_value_X12;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value2_250;
void* __right_value413 = (void*)0;
char* __dec_obj97;
struct sType* __dec_obj98;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct CVALUE* come_value3_251;
void* __right_value416 = (void*)0;
char* __dec_obj99;
struct sType* __dec_obj100;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value4_252;
void* __right_value419 = (void*)0;
char* __dec_obj101;
struct sType* __dec_obj102;
int j_253;
struct list$1CVALUE$ph* o2_saved_254;
struct CVALUE* it_255;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct CVALUE* come_value5_256;
void* __right_value422 = (void*)0;
char* __dec_obj103;
void* __right_value423 = (void*)0;
struct sType* __dec_obj104;
_Bool __result_obj__118;
exp_208 = (void*)0;
exp2_216 = (void*)0;
    map_key_elements_192=self->map_key_elements;
    map_elements_193=self->map_elements;
    key_params_194=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 681, "struct list$1CVALUE$ph*"))));
    element_params_195=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 682, "struct list$1CVALUE$ph*"))));
    map_key_type_196=((void*)0);
    map_element_type_197=((void*)0);
    for(    i_198=0    ;    i_198<list$1sNode$ph_length(map_key_elements_192)    ;    i_198++    ){
        key_elements_199=((struct sNode*)(__right_value309=list$1sNode$ph_operator_load_element(map_key_elements_192,i_198)));
        ((__right_value309) ? __right_value309 = come_decrement_ref_count(__right_value309, ((struct sNode*)__right_value309)->finalize, ((struct sNode*)__right_value309)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        elements_206=((struct sNode*)(__right_value310=list$1sNode$ph_operator_load_element(map_elements_193,i_198)));
        ((__right_value310) ? __right_value310 = come_decrement_ref_count(__right_value310, ((struct sNode*)__right_value310)->finalize, ((struct sNode*)__right_value310)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        if(        (_condtional_value_X9=(string_operator_equals(((char*)(__right_value312=key_elements_199->kind(key_elements_199->_protocol_obj))),"sWildCard"))),        (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X9        ) {
            value_node_207=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value313=xsprintf("Value"))),info));
            (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            {
                params_209=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 695, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_209,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 696, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_207))));
                __dec_obj85=exp_208,
                exp_208=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value320=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_207),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_209),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            {
                params_210=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 701, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_210,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 702, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_208))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_210,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 703, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_198,info)))));
                __dec_obj86=exp_208,
                exp_208=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value331=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_208),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_210),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            Value_211=node_compile(exp_208,info);
            if(            !Value_211            ) {
                __result_obj__113 = (_Bool)0;
                ((value_node_207) ? value_node_207 = come_decrement_ref_count(value_node_207, ((struct sNode*)value_node_207)->finalize, ((struct sNode*)value_node_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((exp_208) ? exp_208 = come_decrement_ref_count(exp_208, ((struct sNode*)exp_208)->finalize, ((struct sNode*)exp_208)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__113;
            }
            else {
            }
            come_value_212=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(key_params_194,(struct CVALUE*)come_increment_ref_count(come_value_212));
            __dec_obj87=map_key_type_196,
            map_key_type_196=(struct sType*)come_increment_ref_count(sType_clone(come_value_212->type));
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            ((value_node_207) ? value_node_207 = come_decrement_ref_count(value_node_207, ((struct sNode*)value_node_207)->finalize, ((struct sNode*)value_node_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp_208) ? exp_208 = come_decrement_ref_count(exp_208, ((struct sNode*)exp_208)->finalize, ((struct sNode*)exp_208)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            Value_213=node_compile(key_elements_199,info);
            if(            !Value_213            ) {
                __result_obj__114 = (_Bool)0;
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__114;
            }
            else {
            }
            come_value_214=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_key_type_196            ) {
                check_assign_type(((char*)(__right_value336=xsprintf("invalid map key type"))),map_key_type_196,come_value_214->type,come_value_214,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(key_params_194,(struct CVALUE*)come_increment_ref_count(come_value_214));
            __dec_obj88=map_key_type_196,
            map_key_type_196=(struct sType*)come_increment_ref_count(sType_clone(come_value_214->type));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        (_condtional_value_X10=(string_operator_equals(((char*)(__right_value339=elements_206->kind(elements_206->_protocol_obj))),"sWildCard"))),        (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X10        ) {
            value_node_215=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value340=xsprintf("Value"))),info));
            (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            {
                params_217=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 736, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_217,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 737, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_215))));
                __dec_obj89=exp2_216,
                exp2_216=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value347=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_215),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_217),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            {
                params_218=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 742, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_218,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 743, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_216))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_218,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 744, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_198,info)))));
                __dec_obj90=exp2_216,
                exp2_216=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value358=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_216),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_218),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            Value_219=node_compile(exp2_216,info);
            if(            !Value_219            ) {
                __result_obj__115 = (_Bool)0;
                ((value_node_215) ? value_node_215 = come_decrement_ref_count(value_node_215, ((struct sNode*)value_node_215)->finalize, ((struct sNode*)value_node_215)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((exp2_216) ? exp2_216 = come_decrement_ref_count(exp2_216, ((struct sNode*)exp2_216)->finalize, ((struct sNode*)exp2_216)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__115;
            }
            else {
            }
            come_value2_220=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_197            ) {
                check_assign_type(((char*)(__right_value361=xsprintf("invalid map element type"))),map_element_type_197,come_value2_220->type,come_value2_220,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_195,(struct CVALUE*)come_increment_ref_count(come_value2_220));
            __dec_obj91=map_element_type_197,
            map_element_type_197=(struct sType*)come_increment_ref_count(sType_clone(come_value2_220->type));
            come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            ((value_node_215) ? value_node_215 = come_decrement_ref_count(value_node_215, ((struct sNode*)value_node_215)->finalize, ((struct sNode*)value_node_215)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2_216) ? exp2_216 = come_decrement_ref_count(exp2_216, ((struct sNode*)exp2_216)->finalize, ((struct sNode*)exp2_216)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            Value_221=node_compile(elements_206,info);
            if(            !Value_221            ) {
                __result_obj__116 = (_Bool)0;
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__116;
            }
            else {
            }
            come_value2_222=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_197            ) {
                check_assign_type(((char*)(__right_value364=xsprintf("invalid map element type"))),map_element_type_197,come_value2_222->type,come_value2_222,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_195,(struct CVALUE*)come_increment_ref_count(come_value2_222));
            __dec_obj92=map_element_type_197,
            map_element_type_197=(struct sType*)come_increment_ref_count(sType_clone(come_value2_222->type));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    static int map_value_num_223=0;
    key_type_values_224=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_196));
    list$1sNode$ph_push_back(key_type_values_224->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(key_params_194),info)));
    key_type_values_224->mHeap=(_Bool)0;
    var_name_225=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_223));
    add_variable_to_table(var_name_225,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_224)),info,(_Bool)0,(_Bool)0);
    var__226=get_variable_from_table(info->lv_table,var_name_225);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value370=make_define_var(key_type_values_224,var__226->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    element_type_values_227=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_197));
    list$1sNode$ph_push_back(element_type_values_227->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(element_params_195),info)));
    element_type_values_227->mHeap=(_Bool)0;
    var_name2_228=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_223));
    add_variable_to_table(var_name2_228,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_227)),info,(_Bool)0,(_Bool)0);
    var2__229=get_variable_from_table(info->lv_table,var_name2_228);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value375=make_define_var(element_type_values_227,var2__229->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    source_230=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 802, "struct buffer*"))));
    buffer_append_str(source_230,"(");
    for(    i_231=0    ;    i_231<list$1CVALUE$ph_length(key_params_194)    ;    i_231++    ){
        key_param_232=((struct CVALUE*)(__right_value378=list$1CVALUE$ph_operator_load_element(key_params_194,i_231)));
        come_call_finalizer(CVALUE_finalize, __right_value378, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        element_param_233=((struct CVALUE*)(__right_value379=list$1CVALUE$ph_operator_load_element(element_params_195,i_231)));
        come_call_finalizer(CVALUE_finalize, __right_value379, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        map_key_type_196->mHeap        ) {
            buffer_append_format(source_230,"%s[%d]=%s,\n",var__226->mCValueName,i_231,key_param_232->c_value);
        }
        else {
            buffer_append_format(source_230,"%s[%d]=%s,\n",var__226->mCValueName,i_231,key_param_232->c_value);
        }
        if(        map_element_type_197->mHeap        ) {
            buffer_append_format(source_230,"%s[%d]=%s,\n",var2__229->mCValueName,i_231,element_param_233->c_value);
        }
        else {
            buffer_append_format(source_230,"%s[%d]=%s,\n",var2__229->mCValueName,i_231,element_param_233->c_value);
        }
    }
    map_type_234=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 827, "struct sType*")),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info));
    list$1sType$ph_push_back(map_type_234->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value383=sType_clone(map_key_type_196))))));
    come_call_finalizer(sType_finalize, __right_value383, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    list$1sType$ph_push_back(map_type_234->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value384=sType_clone(map_element_type_197))))));
    come_call_finalizer(sType_finalize, __right_value384, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    obj_type_235=(struct sType*)come_increment_ref_count(sType_clone(map_type_234));
    fun_name_236="initialize_with_values";
    multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value387=make_generics_function(obj_type_235,(char*)come_increment_ref_count(__builtin_string(fun_name_236)),info,(_Bool)1)));
    name_237=(char*)come_increment_ref_count(multiple_assign_var4->v1);
    generics_fun_238=multiple_assign_var4->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value387, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_fun_name_239=(char*)come_increment_ref_count(name_237);
    fun_240=((struct sFun*)(__right_value388=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_239,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value388, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_240==((void*)0)    ) {
        __dec_obj93=generics_fun_name_239,
        generics_fun_name_239=(char*)come_increment_ref_count(create_method_name(obj_type_235,(_Bool)0,((char*)(__right_value389=__builtin_string(fun_name_236))),info,(_Bool)1));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        fun_240=((struct sFun*)(__right_value391=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_239,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value391, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_240==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value392=err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name_239,info->come_fun->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value392, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__117 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, key_type_values_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_225 = come_decrement_ref_count(var_name_225, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, element_type_values_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name2_228 = come_decrement_ref_count(var_name2_228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, source_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, map_type_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, obj_type_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_237 = come_decrement_ref_count(name_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_239 = come_decrement_ref_count(generics_fun_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__117;
        }
    }
    result_type_241=(struct sType*)come_increment_ref_count(sType_clone(fun_240->mResultType));
    result_type_241->mStatic=(_Bool)0;
    type_242=(struct sType*)come_increment_ref_count(map_type_234);
    obj_value_243=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 855, "struct CVALUE*"))));
    num_string_244=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 857, "struct buffer*"))));
    buffer_append_str(num_string_244,"1");
    type2_245=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_242),(struct sType*)come_increment_ref_count(type_242),info));
    type_name_246=(char*)come_increment_ref_count(make_type_name_string(type2_245,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_247=(struct sType*)come_increment_ref_count(type2_245);
    any_type_247->mPointerNum=1;
    any_type_247->mHeap=(_Bool)1;
    if(    (_condtional_value_X11=(((struct sFun*)(__right_value400=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    come_call_finalizer(sFun_finalize, __right_value400, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X11    ) {
        __dec_obj94=obj_value_243->c_value,
        obj_value_243->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_246,type_name_246,((char*)(__right_value401=buffer_to_string(num_string_244))),info->sname,info->sline,type_name_246));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj95=obj_value_243->c_value,
        obj_value_243->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_246,type_name_246,((char*)(__right_value403=buffer_to_string(num_string_244))),info->sname,info->sline,type_name_246));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    type3_248=(struct sType*)come_increment_ref_count(sType_clone(type2_245));
    type3_248->mPointerNum++;
    type3_248->mHeap=(_Bool)1;
    type2_245->mHeap=(_Bool)1;
    __dec_obj96=obj_value_243->type,
    obj_value_243->type=(struct sType*)come_increment_ref_count(sType_clone(type2_245));
    come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    obj_value_243->type->mPointerNum++;
    obj_value_243->var=((void*)0);
    append_object_to_right_values(obj_value_243,(struct sType*)come_increment_ref_count(type3_248),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    come_params_249=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 886, "struct list$1CVALUE$ph*"))));
    if(    (_condtional_value_X12=(((struct sType*)(__right_value409=list$1sType$ph_operator_load_element(fun_240->mParamTypes,0)))->mHeap&&obj_value_243->type->mHeap)),    come_call_finalizer(sType_finalize, __right_value409, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X12    ) {
        std_move(((struct sType*)(__right_value410=list$1sType$ph_operator_load_element(fun_240->mParamTypes,0))),obj_value_243->type,obj_value_243,info,(_Bool)1);
        come_call_finalizer(sType_finalize, __right_value410, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_249,(struct CVALUE*)come_increment_ref_count(obj_value_243));
    come_value2_250=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 893, "struct CVALUE*"))));
    __dec_obj97=come_value2_250->c_value,
    come_value2_250->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params_194)));
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj98=come_value2_250->type,
    come_value2_250->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_250->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_249,(struct CVALUE*)come_increment_ref_count(come_value2_250));
    come_value3_251=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 901, "struct CVALUE*"))));
    __dec_obj99=come_value3_251->c_value,
    come_value3_251->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__226->mCValueName));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj100=come_value3_251->type,
    come_value3_251->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value3_251->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_249,(struct CVALUE*)come_increment_ref_count(come_value3_251));
    come_value4_252=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 909, "struct CVALUE*"))));
    __dec_obj101=come_value4_252->c_value,
    come_value4_252->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__229->mCValueName));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj102=come_value4_252->type,
    come_value4_252->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value4_252->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_249,(struct CVALUE*)come_increment_ref_count(come_value4_252));
    buffer_append_str(source_230,generics_fun_name_239);
    buffer_append_str(source_230,"(");
    j_253=0;
    for(    o2_saved_254=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_249)),it_255=list$1CVALUE$ph_begin((o2_saved_254))    ;    !list$1CVALUE$ph_end((o2_saved_254))    ;    it_255=list$1CVALUE$ph_next((o2_saved_254))    ){
        buffer_append_str(source_230,it_255->c_value);
        if(        j_253!=list$1CVALUE$ph_length(come_params_249)-1        ) {
            buffer_append_str(source_230,",");
        }
        j_253++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(source_230,")");
    buffer_append_str(source_230,")");
    come_value5_256=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 935, "struct CVALUE*"))));
    __dec_obj103=come_value5_256->c_value,
    come_value5_256->c_value=(char*)come_increment_ref_count(buffer_to_string(source_230));
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj104=come_value5_256->type,
    come_value5_256->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_241));
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value5_256->type->mStatic=(_Bool)0;
    come_value5_256->var=((void*)0);
    if(    result_type_241->mHeap    ) {
        append_object_to_right_values(come_value5_256,(struct sType*)come_increment_ref_count(result_type_241),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value5_256->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_256));
    __result_obj__118 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, map_key_type_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, map_element_type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, key_type_values_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_225 = come_decrement_ref_count(var_name_225, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, element_type_values_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name2_228 = come_decrement_ref_count(var_name2_228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, map_type_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, obj_type_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_237 = come_decrement_ref_count(name_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (generics_fun_name_239 = come_decrement_ref_count(generics_fun_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, num_string_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_246 = come_decrement_ref_count(type_name_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, any_type_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type3_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3_251, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value5_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__118;
}

static void sMapNode_finalize(struct sMapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_key_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_elements, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_200;
int i_201;
struct sNode* __result_obj__109;
struct sNode* default_value_202;
struct sNode* __result_obj__110;
default_value_202 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_200=self->head;
    i_201=0;
    while(    it_200!=((void*)0)    ) {
        if(        position==i_201        ) {
            __result_obj__109 = (struct sNode*)come_increment_ref_count(it_200->item);
            ((__result_obj__109) ? __result_obj__109 = come_decrement_ref_count(__result_obj__109, ((struct sNode*)__result_obj__109)->finalize, ((struct sNode*)__result_obj__109)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__109;
        }
        it_200=it_200->next;
        i_201++;
    }
    memset(&default_value_202,0,sizeof(struct sNode*));
    __result_obj__110 = (struct sNode*)come_increment_ref_count(default_value_202);
    ((default_value_202) ? default_value_202 = come_decrement_ref_count(default_value_202, ((struct sNode*)default_value_202)->finalize, ((struct sNode*)default_value_202)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__110) ? __result_obj__110 = come_decrement_ref_count(__result_obj__110, ((struct sNode*)__result_obj__110)->finalize, ((struct sNode*)__result_obj__110)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__110;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_203;
int i_204;
struct sNode* __result_obj__111;
struct sNode* default_value_205;
struct sNode* __result_obj__112;
default_value_205 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_203=self->head;
    i_204=0;
    while(    it_203!=((void*)0)    ) {
        if(        position==i_204        ) {
            __result_obj__111 = (struct sNode*)come_increment_ref_count(it_203->item);
            ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__111;
        }
        it_203=it_203->next;
        i_204++;
    }
    memset(&default_value_205,0,sizeof(struct sNode*));
    __result_obj__112 = (struct sNode*)come_increment_ref_count(default_value_205);
    ((default_value_205) ? default_value_205 = come_decrement_ref_count(default_value_205, ((struct sNode*)default_value_205)->finalize, ((struct sNode*)default_value_205)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__112) ? __result_obj__112 = come_decrement_ref_count(__result_obj__112, ((struct sNode*)__result_obj__112)->finalize, ((struct sNode*)__result_obj__112)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__112;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_257;
int sline_258;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1sNode$ph* exps_259;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct buffer* value_260;
char* head_of_last_line_261;
int len_262;
void* __right_value428 = (void*)0;
struct sNode* exp_263;
int sline2_264;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value2;
struct sSStringNode* _inf_obj_value2;
void* __right_value437 = (void*)0;
struct sNode* __result_obj__121;
int sline_real_266;
int sline_267;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct buffer* value_268;
char* p_269;
int sline_270;
int sline2_271;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sNode* _inf_value3;
struct sStrNode* _inf_obj_value3;
void* __right_value444 = (void*)0;
struct sNode* __result_obj__122;
int sline_real_272;
int sline_273;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct buffer* value_274;
unsigned long  int size_275;
char* p_276;
int sline_277;
int len_278;
int sline2_279;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sNode* _inf_value4;
struct sBufferNode* _inf_obj_value4;
void* __right_value453 = (void*)0;
struct sNode* __result_obj__125;
int sline_real_281;
int sline_282;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct buffer* buf_283;
void* __right_value456 = (void*)0;
_Bool global_284;
_Bool ignore_case_285;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sNode* _inf_value5;
struct sStrNode* _inf_obj_value5;
void* __right_value460 = (void*)0;
struct sNode* obj_286;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_287;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct buffer* method_block_288;
int method_block_sline_289;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1sType$ph* method_generics_types_290;
void* __right_value502 = (void*)0;
struct sNode* node_291;
struct sNode* __result_obj__126;
int sline_real_292;
int sline_293;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct buffer* value_294;
char* p_295;
int sline_296;
int len_297;
int sline2_298;
void* __right_value505 = (void*)0;
_Bool global_299;
_Bool ignore_case_300;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value509 = (void*)0;
struct sNode* obj_301;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_302;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct buffer* method_block_303;
int method_block_sline_304;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1sType$ph* method_generics_types_305;
void* __right_value551 = (void*)0;
struct sNode* node_306;
struct sNode* __result_obj__127;
int sline_real_307;
int c_308;
int n_309;
int n_310;
unsigned long long int n_313;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sNode* _inf_value7;
struct sCharNode* _inf_obj_value7;
void* __right_value557 = (void*)0;
struct sNode* __result_obj__130;
int sline_real_315;
int c_316;
_Bool quote_317;
int n_318;
int n_319;
unsigned long long int n_322;
unsigned char p2_323;
int size_324;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sNode* _inf_value8;
struct sWCharNode* _inf_obj_value8;
void* __right_value565 = (void*)0;
struct sNode* __result_obj__133;
int sline_real_327;
int sline_328;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct buffer* value_329;
char* p_330;
int sline_331;
int sline2_332;
void* __right_value568 = (void*)0;
int len_333;
void* __right_value569 = (void*)0;
int* wstr_334;
char* str_335;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* _inf_value9;
struct sWStringNode* _inf_obj_value9;
void* __right_value575 = (void*)0;
struct sNode* __result_obj__136;
int sline_real_337;
int sline_338;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct list$1sNode$ph* exps_339;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct buffer* value_340;
char* p_341;
int sline_342;
int len_343;
void* __right_value580 = (void*)0;
struct sNode* exp_344;
int sline2_345;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sNode* _inf_value10;
struct sSStringNode* _inf_obj_value10;
void* __right_value585 = (void*)0;
struct sNode* __result_obj__137;
int sline_real_346;
char* p_347;
_Bool no_comma_348;
void* __right_value586 = (void*)0;
struct sNode* node_349;
char* p2_350;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct buffer* first_element_source_351;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1sNode$ph* list_elements_352;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct list$1sNode$ph* map_keys_353;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct list$1sNode$ph* map_elements_354;
_Bool no_comma_355;
void* __right_value595 = (void*)0;
struct sNode* node2_356;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* __right_value602 = (void*)0;
struct sNode* __result_obj__140;
_Bool no_comma_358;
void* __right_value603 = (void*)0;
struct sNode* node2_359;
void* __right_value604 = (void*)0;
struct sNode* node3_360;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* _inf_value12;
struct sMapNode* _inf_obj_value12;
void* __right_value609 = (void*)0;
struct sNode* __result_obj__141;
_Bool no_comma_361;
void* __right_value610 = (void*)0;
struct sNode* node2_362;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* _inf_value13;
struct sListNode* _inf_obj_value13;
void* __right_value619 = (void*)0;
struct sNode* __result_obj__144;
void* __right_value620 = (void*)0;
struct sNode* node_364;
struct sNode* __result_obj__145;
struct sNode* __result_obj__146;
memset(&c_308, 0, sizeof(int));
memset(&c_316, 0, sizeof(int));
memset(&quote_317, 0, sizeof(_Bool));
memset(&size_324, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10    ) {
        sline_real_257=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_258=info->sline;
        exps_259=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 965, "struct list$1sNode$ph*"))));
        value_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 966, "struct buffer*"))));
        head_of_last_line_261=((void*)0);
        while(        1        ) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34            ) {
                if(                head_of_last_line_261                ) {
                    buffer_trim(value_260,info->p-head_of_last_line_261);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37            ) {
                buffer_append_char(value_260,37);
                buffer_append_char(value_260,37);
                info->p++;
            }
            else if(            *info->p==34            ) {
                buffer_append_char(value_260,92);
                buffer_append_char(value_260,34);
                info->p++;
            }
            else if(            *info->p==92            ) {
                buffer_append_char(value_260,92);
                info->p++;
                if(                xisdigit(*info->p)                ) {
                    len_262=0;
                    while(                    xisdigit(*info->p)&&len_262<3                    ) {
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        len_262++;
                    }
                }
                else if(                *info->p==120||*info->p==88                ) {
                    buffer_append_char(value_260,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70                    ) {
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123                ) {
                    info->p++;
                    exp_263=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_259,(struct sNode*)come_increment_ref_count(exp_263));
                    if(                    *info->p==125                    ) {
                        info->p++;
                    }
                    buffer_append_str(value_260,"%s");
                    ((exp_263) ? exp_263 = come_decrement_ref_count(exp_263, ((struct sNode*)exp_263)->finalize, ((struct sNode*)exp_263)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_260,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0            ) {
                sline2_264=info->sline;
                info->sline=sline_258;
                ((struct tuple2$2int$bool$*)(__right_value429=err_msg(info,"close \" to make embbeded string value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value429, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10                ) {
                    buffer_append_char(value_260,92);
                    buffer_append_char(value_260,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_261=info->p;
                }
                else {
                    buffer_append_char(value_260,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_257;
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1105, "struct sNode");
        _inf_obj_value2=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value432=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 1105, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_260)),(struct list$1sNode$ph*)come_increment_ref_count(exps_259),sline_258,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sSStringNode_finalize;
        _inf_value2->clone=(void*)sSStringNode_clone;
        _inf_value2->compile=(void*)sSStringNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sSStringNode_kind;
        __result_obj__121 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value437=_inf_value2)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, value_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value432, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value437) ? __right_value437 = come_decrement_ref_count(__right_value437, ((struct sNode*)__right_value437)->finalize, ((struct sNode*)__right_value437)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__121) ? __result_obj__121 = come_decrement_ref_count(__result_obj__121, ((struct sNode*)__result_obj__121)->finalize, ((struct sNode*)__result_obj__121)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__121;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, value_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    *info->p==34    ) {
        sline_real_266=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_267=info->sline;
        value_268=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1115, "struct buffer*"))));
        while(        1        ) {
            if(            *info->p==34            ) {
                info->p++;
                p_269=info->p;
                sline_270=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34                ) {
                    info->p++;
                }
                else {
                    info->p=p_269;
                    info->sline=sline_270;
                    break;
                }
            }
            else if(            *info->p==92            ) {
                buffer_append_char(value_268,92);
                info->p++;
                if(                *info->p==34                ) {
                    buffer_append_char(value_268,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_268,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0            ) {
                sline2_271=info->sline;
                info->sline=sline_267;
                ((struct tuple2$2int$bool$*)(__right_value440=err_msg(info,"close \" to make c string value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value440, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                info->sline=sline2_271;
                exit(2);
            }
            else {
                if(                *info->p==10                ) {
                    info->sline++;
                }
                buffer_append_char(value_268,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_266;
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1168, "struct sNode");
        _inf_obj_value3=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value443=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1168, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_268)),sline_267,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sStrNode_finalize;
        _inf_value3->clone=(void*)sStrNode_clone;
        _inf_value3->compile=(void*)sStrNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sStrNode_kind;
        __result_obj__122 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value444=_inf_value3)));
        come_call_finalizer(buffer_finalize, value_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sStrNode_finalize, __right_value443, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value444) ? __right_value444 = come_decrement_ref_count(__right_value444, ((struct sNode*)__right_value444)->finalize, ((struct sNode*)__right_value444)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__122) ? __result_obj__122 = come_decrement_ref_count(__result_obj__122, ((struct sNode*)__result_obj__122)->finalize, ((struct sNode*)__result_obj__122)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__122;
        come_call_finalizer(buffer_finalize, value_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34    ) {
        sline_real_272=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_273=info->sline;
        value_274=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1178, "struct buffer*"))));
        size_275=0;
        while(        1        ) {
            if(            *info->p==34            ) {
                buffer_append_char(value_274,*info->p);
                info->p++;
                p_276=info->p;
                sline_277=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34                ) {
                    info->p++;
                }
                else {
                    info->p=p_276;
                    info->sline=sline_277;
                    break;
                }
            }
            else if(            *info->p==92            ) {
                buffer_append_char(value_274,92);
                info->p++;
                if(                xisdigit(*info->p)                ) {
                    len_278=0;
                    while(                    xisdigit(*info->p)&&len_278<3                    ) {
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        len_278++;
                    }
                    size_275++;
                }
                else if(                *info->p==120||*info->p==88                ) {
                    buffer_append_char(value_274,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70                    ) {
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                    }
                    size_275++;
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 110:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 116:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 114:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 118:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 102:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 97:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 98:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        case 92:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                        default:
                        buffer_append_char(value_274,*info->p);
                        info->p++;
                        size_275++;
                        break;
                    }
                }
            }
            else if(            *info->p==0            ) {
                sline2_279=info->sline;
                info->sline=sline_273;
                ((struct tuple2$2int$bool$*)(__right_value447=err_msg(info,"close \" to make embbeded string value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value447, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10                ) {
                    info->sline++;
                }
                buffer_append_char(value_274,*info->p);
                info->p++;
                size_275++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_272;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1305, "struct sNode");
        _inf_obj_value4=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value449=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "06str.c", 1305, "struct sBufferNode*")),(struct buffer*)come_increment_ref_count(value_274),size_275,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sBufferNode_finalize;
        _inf_value4->clone=(void*)sBufferNode_clone;
        _inf_value4->compile=(void*)sBufferNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sBufferNode_kind;
        __result_obj__125 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value453=_inf_value4)));
        come_call_finalizer(buffer_finalize, value_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBufferNode_finalize, __right_value449, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value453) ? __right_value453 = come_decrement_ref_count(__right_value453, ((struct sNode*)__right_value453)->finalize, ((struct sNode*)__right_value453)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__125) ? __result_obj__125 = come_decrement_ref_count(__result_obj__125, ((struct sNode*)__result_obj__125)->finalize, ((struct sNode*)__result_obj__125)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__125;
        come_call_finalizer(buffer_finalize, value_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42    ) {
        sline_real_281=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_282=info->sline;
        buf_283=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1314, "struct buffer*"))));
        while(        (_Bool)1        ) {
            if(            *info->p==92&&*(info->p+1)==47            ) {
                info->p++;
                buffer_append_char(buf_283,*info->p);
                info->p++;
            }
            else if(            *info->p==47            ) {
                info->p++;
                break;
            }
            else if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value456=err_msg(info,"require closing / for regex")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value456, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(5);
            }
            else {
                buffer_append_char(buf_283,*info->p);
                info->p++;
            }
        }
        global_284=(_Bool)0;
        ignore_case_285=(_Bool)0;
        while(        *info->p==103||*info->p==105        ) {
            if(            *info->p==103            ) {
                info->p++;
                global_284=(_Bool)1;
            }
            else if(            *info->p==105            ) {
                info->p++;
                ignore_case_285=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1353, "struct sNode");
        _inf_obj_value5=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value459=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1353, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(buf_283)),sline_282,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStrNode_finalize;
        _inf_value5->clone=(void*)sStrNode_clone;
        _inf_value5->compile=(void*)sStrNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStrNode_kind;
        obj_286=(struct sNode*)come_increment_ref_count(_inf_value5);
        come_call_finalizer(sStrNode_finalize, __right_value459, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        params_287=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1355, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1357, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_286))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1358, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_285)?(((struct sNode*)(__right_value467=create_int_node(1,info)))):(((struct sNode*)(__right_value468=create_int_node(0,info)))))))));
        ((__right_value467) ? __right_value467 = come_decrement_ref_count(__right_value467, ((struct sNode*)__right_value467)->finalize, ((struct sNode*)__right_value467)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__right_value468) ? __right_value468 = come_decrement_ref_count(__right_value468, ((struct sNode*)__right_value468)->finalize, ((struct sNode*)__right_value468)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1359, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1360, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_284)?(((struct sNode*)(__right_value476=create_int_node(1,info)))):(((struct sNode*)(__right_value477=create_int_node(0,info)))))))));
        ((__right_value476) ? __right_value476 = come_decrement_ref_count(__right_value476, ((struct sNode*)__right_value476)->finalize, ((struct sNode*)__right_value476)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__right_value477) ? __right_value477 = come_decrement_ref_count(__right_value477, ((struct sNode*)__right_value477)->finalize, ((struct sNode*)__right_value477)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1361, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1362, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1363, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1364, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_287,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1365, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_288=((void*)0);
        method_block_sline_289=info->sline;
        method_generics_types_290=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1371, "struct list$1sType$ph*"))));
        node_291=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_286),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_287),method_block_288,method_block_sline_289,method_generics_types_290,info,(_Bool)0));
        info->sline_real=sline_real_281;
        __result_obj__126 = (struct sNode*)come_increment_ref_count(node_291);
        come_call_finalizer(buffer_finalize, buf_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((obj_286) ? obj_286 = come_decrement_ref_count(obj_286, ((struct sNode*)obj_286)->finalize, ((struct sNode*)obj_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_291) ? node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__126;
        come_call_finalizer(buffer_finalize, buf_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((obj_286) ? obj_286 = come_decrement_ref_count(obj_286, ((struct sNode*)obj_286)->finalize, ((struct sNode*)obj_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_291) ? node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34    ) {
        sline_real_292=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_293=info->sline;
        value_294=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1385, "struct buffer*"))));
        while(        1        ) {
            if(            *info->p==34            ) {
                info->p++;
                p_295=info->p;
                sline_296=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34                ) {
                    info->p++;
                }
                else {
                    info->p=p_295;
                    info->sline=sline_296;
                    break;
                }
            }
            else if(            *info->p==92            ) {
                buffer_append_char(value_294,92);
                info->p++;
                if(                xisdigit(*info->p)                ) {
                    len_297=0;
                    while(                    xisdigit(*info->p)&&len_297<3                    ) {
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        len_297++;
                    }
                }
                else if(                *info->p==120||*info->p==88                ) {
                    buffer_append_char(value_294,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70                    ) {
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_294,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0            ) {
                sline2_298=info->sline;
                info->sline=sline_293;
                ((struct tuple2$2int$bool$*)(__right_value505=err_msg(info,"close \" to make embbeded string value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value505, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10                ) {
                    info->sline++;
                }
                buffer_append_char(value_294,*info->p);
                info->p++;
            }
        }
        global_299=(_Bool)0;
        ignore_case_300=(_Bool)0;
        while(        *info->p==103||*info->p==105        ) {
            if(            *info->p==103            ) {
                info->p++;
                global_299=(_Bool)1;
            }
            else if(            *info->p==105            ) {
                info->p++;
                ignore_case_300=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1511, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value508=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1511, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_294)),sline_293,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        obj_301=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer(sStrNode_finalize, __right_value508, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        params_302=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1513, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1515, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_301))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1516, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_300)?(((struct sNode*)(__right_value516=create_int_node(1,info)))):(((struct sNode*)(__right_value517=create_int_node(0,info)))))))));
        ((__right_value516) ? __right_value516 = come_decrement_ref_count(__right_value516, ((struct sNode*)__right_value516)->finalize, ((struct sNode*)__right_value516)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__right_value517) ? __right_value517 = come_decrement_ref_count(__right_value517, ((struct sNode*)__right_value517)->finalize, ((struct sNode*)__right_value517)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1517, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1518, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_299)?(((struct sNode*)(__right_value525=create_int_node(1,info)))):(((struct sNode*)(__right_value526=create_int_node(0,info)))))))));
        ((__right_value525) ? __right_value525 = come_decrement_ref_count(__right_value525, ((struct sNode*)__right_value525)->finalize, ((struct sNode*)__right_value525)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__right_value526) ? __right_value526 = come_decrement_ref_count(__right_value526, ((struct sNode*)__right_value526)->finalize, ((struct sNode*)__right_value526)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1519, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1520, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1521, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1522, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_302,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1523, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_303=((void*)0);
        method_block_sline_304=info->sline;
        method_generics_types_305=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1529, "struct list$1sType$ph*"))));
        node_306=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_301),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_302),method_block_303,method_block_sline_304,method_generics_types_305,info,(_Bool)0));
        info->sline_real=sline_real_292;
        __result_obj__127 = (struct sNode*)come_increment_ref_count(node_306);
        come_call_finalizer(buffer_finalize, value_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((obj_301) ? obj_301 = come_decrement_ref_count(obj_301, ((struct sNode*)obj_301)->finalize, ((struct sNode*)obj_301)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_306) ? node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__127) ? __result_obj__127 = come_decrement_ref_count(__result_obj__127, ((struct sNode*)__result_obj__127)->finalize, ((struct sNode*)__result_obj__127)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__127;
        come_call_finalizer(buffer_finalize, value_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((obj_301) ? obj_301 = come_decrement_ref_count(obj_301, ((struct sNode*)obj_301)->finalize, ((struct sNode*)obj_301)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_306) ? node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    *info->p==39    ) {
        sline_real_307=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92        ) {
            info->p++;
            if(            xisdigit(*info->p)            ) {
                n_309=0;
                while(                xisdigit(*info->p)                ) {
                    n_309=n_309*8+*info->p-48;
                    info->p++;
                }
                c_308=n_309;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_308=10;
                    info->p++;
                    break;
                    case 116:
                    c_308=9;
                    info->p++;
                    break;
                    case 114:
                    c_308=13;
                    info->p++;
                    break;
                    case 97:
                    c_308=7;
                    info->p++;
                    break;
                    case 102:
                    c_308=12;
                    info->p++;
                    break;
                    case 118:
                    c_308=11;
                    info->p++;
                    break;
                    case 98:
                    c_308=8;
                    info->p++;
                    break;
                    case 92:
                    c_308=92;
                    info->p++;
                    break;
                    case 48:
                    c_308=0;
                    info->p++;
                    if(                    xisdigit(*info->p)                    ) {
                        n_310=0;
                        while(                        xisdigit(*info->p)                        ) {
                            n_310=n_310*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_308=n_310;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_311[128];
                        memset(&buf_311, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_311,"0x",128);
                        while(                        *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70                        ) {
                            char buf2_312[2];
                            memset(&buf2_312, 0, sizeof(char)                            *(2)                            );
                            buf2_312[0]=*info->p;
                            buf2_312[1]=0;
                            info->p++;
                            strncat(buf_311,buf2_312,128);
                        }
                        n_313=strtoll(buf_311,((void*)0),0);
                        c_308=n_313;
                    }
                    break;
                    default:
                    c_308=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_308=*info->p;
            info->p++;
        }
        if(        *info->p!=39        ) {
            ((struct tuple2$2int$bool$*)(__right_value552=err_msg(info,"close \' to make character value")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value552, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(1);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_307;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1655, "struct sNode");
            _inf_obj_value7=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value554=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "06str.c", 1655, "struct sCharNode*")),c_308,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sCharNode_finalize;
            _inf_value7->clone=(void*)sCharNode_clone;
            _inf_value7->compile=(void*)sCharNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sCharNode_kind;
            __result_obj__130 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value557=_inf_value7)));
            come_call_finalizer(sCharNode_finalize, __right_value554, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value557) ? __right_value557 = come_decrement_ref_count(__right_value557, ((struct sNode*)__right_value557)->finalize, ((struct sNode*)__right_value557)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__130) ? __result_obj__130 = come_decrement_ref_count(__result_obj__130, ((struct sNode*)__result_obj__130)->finalize, ((struct sNode*)__result_obj__130)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__130;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39    ) {
        sline_real_315=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92        ) {
            quote_317=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)            ) {
                n_318=0;
                while(                xisdigit(*info->p)                ) {
                    n_318=n_318*8+*info->p-48;
                    info->p++;
                }
                c_316=n_318;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_316=10;
                    info->p++;
                    break;
                    case 116:
                    c_316=9;
                    info->p++;
                    break;
                    case 114:
                    c_316=13;
                    info->p++;
                    break;
                    case 97:
                    c_316=7;
                    info->p++;
                    break;
                    case 92:
                    c_316=92;
                    info->p++;
                    break;
                    case 48:
                    c_316=0;
                    info->p++;
                    if(                    xisdigit(*info->p)                    ) {
                        n_319=0;
                        while(                        xisdigit(*info->p)                        ) {
                            n_319=n_319*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_316=n_319;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_320[128];
                        memset(&buf_320, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_320,"0x",128);
                        while(                        *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70                        ) {
                            char buf2_321[2];
                            memset(&buf2_321, 0, sizeof(char)                            *(2)                            );
                            buf2_321[0]=*info->p;
                            buf2_321[1]=0;
                            info->p++;
                            strncat(buf_320,buf2_321,128);
                        }
                        n_322=strtoll(buf_320,((void*)0),0);
                        c_316=n_322;
                    }
                    break;
                    default:
                    c_316=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_317=(_Bool)0;
            p2_323=*(unsigned char*)info->p;
            if(            p2_323>127            ) {
                char str_325[16+1];
                memset(&str_325, 0, sizeof(char)                *(16+1)                );
                size_324=((p2_323&128)>>7)+((p2_323&64)>>6)+((p2_323&32)>>5)+((p2_323&16)>>4);
                if(                size_324>16                ) {
                    ((struct tuple2$2int$bool$*)(__right_value558=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value558, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    info->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str_325,info->p,size_324);
                    str_325[size_324]=0;
                    if(                    mbtowc(&c_316,str_325,size_324)<0                    ) {
                        perror("mbtowc");
                        ((struct tuple2$2int$bool$*)(__right_value559=err_msg(info,"invalid utf-8 character. mbtowc")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value559, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        info->err_num++;
                        exit(2);
                    }
                    else {
                        info->p+=size_324;
                    }
                }
            }
            else {
                c_316=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39        ) {
            ((struct tuple2$2int$bool$*)(__right_value560=err_msg(info,"close \' to make character value")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value560, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->err_num++;
            exit(2);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_315;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1800, "struct sNode");
            _inf_obj_value8=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value562=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "06str.c", 1800, "struct sWCharNode*")),c_316,quote_317,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sWCharNode_finalize;
            _inf_value8->clone=(void*)sWCharNode_clone;
            _inf_value8->compile=(void*)sWCharNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sWCharNode_kind;
            __result_obj__133 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value565=_inf_value8)));
            come_call_finalizer(sWCharNode_finalize, __right_value562, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value565) ? __right_value565 = come_decrement_ref_count(__right_value565, ((struct sNode*)__right_value565)->finalize, ((struct sNode*)__right_value565)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__133;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34    ) {
        sline_real_327=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_328=info->sline;
        value_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1811, "struct buffer*"))));
        while(        1        ) {
            if(            *info->p==34            ) {
                info->p++;
                p_330=info->p;
                sline_331=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34                ) {
                    info->p++;
                }
                else {
                    info->p=p_330;
                    info->sline=sline_331;
                    break;
                }
            }
            else if(            *info->p==92            ) {
                buffer_append_char(value_329,92);
                info->p++;
                if(                *info->p==34                ) {
                    buffer_append_char(value_329,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_329,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0            ) {
                sline2_332=info->sline;
                info->sline=sline_328;
                ((struct tuple2$2int$bool$*)(__right_value568=err_msg(info,"close \" to make c string value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value568, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10                ) {
                    info->sline++;
                }
                buffer_append_char(value_329,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_333=value_329->len;
        wstr_334=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len_333+1)), "06str.c", 1862, "int*"));
        str_335=value_329->buf;
        if(        mbstowcs(wstr_334,str_335,len_333+1)<0        ) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_334[len_333]=0;
        info->sline_real=sline_real_327;
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1874, "struct sNode");
        _inf_obj_value9=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value571=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "06str.c", 1874, "struct sWStringNode*")),(int*)come_increment_ref_count(wstr_334),sline_328,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sWStringNode_finalize;
        _inf_value9->clone=(void*)sWStringNode_clone;
        _inf_value9->compile=(void*)sWStringNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sWStringNode_kind;
        __result_obj__136 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value575=_inf_value9)));
        come_call_finalizer(buffer_finalize, value_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (wstr_334 = come_decrement_ref_count(wstr_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sWStringNode_finalize, __right_value571, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value575) ? __right_value575 = come_decrement_ref_count(__right_value575, ((struct sNode*)__right_value575)->finalize, ((struct sNode*)__right_value575)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__136) ? __result_obj__136 = come_decrement_ref_count(__result_obj__136, ((struct sNode*)__result_obj__136)->finalize, ((struct sNode*)__result_obj__136)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__136;
        come_call_finalizer(buffer_finalize, value_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (wstr_334 = come_decrement_ref_count(wstr_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34    ) {
        sline_real_337=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_338=info->sline;
        exps_339=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1884, "struct list$1sNode$ph*"))));
        value_340=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1885, "struct buffer*"))));
        while(        1        ) {
            if(            *info->p==34            ) {
                info->p++;
                p_341=info->p;
                sline_342=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34                ) {
                    info->p++;
                }
                else {
                    info->p=p_341;
                    info->sline=sline_342;
                    break;
                }
            }
            else if(            *info->p==37            ) {
                buffer_append_char(value_340,37);
                buffer_append_char(value_340,37);
                info->p++;
            }
            else if(            *info->p==92            ) {
                buffer_append_char(value_340,92);
                info->p++;
                if(                xisdigit(*info->p)                ) {
                    len_343=0;
                    while(                    xisdigit(*info->p)&&len_343<3                    ) {
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        len_343++;
                    }
                }
                else if(                *info->p==120||*info->p==88                ) {
                    buffer_append_char(value_340,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70                    ) {
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123                ) {
                    info->p++;
                    exp_344=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_339,(struct sNode*)come_increment_ref_count(exp_344));
                    if(                    *info->p==125                    ) {
                        info->p++;
                    }
                    buffer_append_str(value_340,"%s");
                    ((exp_344) ? exp_344 = come_decrement_ref_count(exp_344, ((struct sNode*)exp_344)->finalize, ((struct sNode*)exp_344)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_340,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0            ) {
                sline2_345=info->sline;
                info->sline=sline_338;
                ((struct tuple2$2int$bool$*)(__right_value581=err_msg(info,"close \" to make embbeded string value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value581, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10                ) {
                    info->sline++;
                }
                buffer_append_char(value_340,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_337;
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2033, "struct sNode");
        _inf_obj_value10=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value584=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 2033, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_340)),(struct list$1sNode$ph*)come_increment_ref_count(exps_339),sline_338,info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sSStringNode_finalize;
        _inf_value10->clone=(void*)sSStringNode_clone;
        _inf_value10->compile=(void*)sSStringNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sSStringNode_kind;
        __result_obj__137 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value585=_inf_value10)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_339, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value584, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value585) ? __right_value585 = come_decrement_ref_count(__right_value585, ((struct sNode*)__right_value585)->finalize, ((struct sNode*)__right_value585)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__137) ? __result_obj__137 = come_decrement_ref_count(__result_obj__137, ((struct sNode*)__result_obj__137)->finalize, ((struct sNode*)__result_obj__137)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__137;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_339, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    *info->p==91    ) {
        sline_real_346=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_347=info->p;
        no_comma_348=info->no_comma;
        info->no_comma=(_Bool)1;
        node_349=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_348;
        p2_350=info->p;
        first_element_source_351=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2052, "struct buffer*"))));
        buffer_append(first_element_source_351,p_347,p2_350-p_347);
        buffer_append_char(first_element_source_351,0);
        list_elements_352=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2057, "struct list$1sNode$ph*"))));
        map_keys_353=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2059, "struct list$1sNode$ph*"))));
        map_elements_354=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2060, "struct list$1sNode$ph*"))));
        if(        *info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys_353,(struct sNode*)come_increment_ref_count(node_349));
            no_comma_355=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_356=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_355;
            list$1sNode$ph_push_back(map_elements_354,(struct sNode*)come_increment_ref_count(node2_356));
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2083, "struct sNode");
                _inf_obj_value11=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value597=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2083, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_353),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_354),info))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sMapNode_finalize;
                _inf_value11->clone=(void*)sMapNode_clone;
                _inf_value11->compile=(void*)sMapNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sMapNode_kind;
                __result_obj__140 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value602=_inf_value11)));
                ((node2_356) ? node2_356 = come_decrement_ref_count(node2_356, ((struct sNode*)node2_356)->finalize, ((struct sNode*)node2_356)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((node_349) ? node_349 = come_decrement_ref_count(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value597, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value602) ? __right_value602 = come_decrement_ref_count(__right_value602, ((struct sNode*)__right_value602)->finalize, ((struct sNode*)__right_value602)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__140;
            }
            else {
                expected_next_character(44,info);
                while(                (_Bool)1                ) {
                    no_comma_358=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_359=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_358;
                    list$1sNode$ph_push_back(map_keys_353,(struct sNode*)come_increment_ref_count(node2_359));
                    expected_next_character(58,info);
                    no_comma_358=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_360=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_358;
                    list$1sNode$ph_push_back(map_elements_354,(struct sNode*)come_increment_ref_count(node3_360));
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value605=err_msg(info,"invalid source end")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value605, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    else if(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_359) ? node2_359 = come_decrement_ref_count(node2_359, ((struct sNode*)node2_359)->finalize, ((struct sNode*)node2_359)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        ((node3_360) ? node3_360 = come_decrement_ref_count(node3_360, ((struct sNode*)node3_360)->finalize, ((struct sNode*)node3_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        break;
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value606=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value606, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    ((node2_359) ? node2_359 = come_decrement_ref_count(node2_359, ((struct sNode*)node2_359)->finalize, ((struct sNode*)node2_359)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node3_360) ? node3_360 = come_decrement_ref_count(node3_360, ((struct sNode*)node3_360)->finalize, ((struct sNode*)node3_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2128, "struct sNode");
                _inf_obj_value12=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value608=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2128, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_353),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_354),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sMapNode_finalize;
                _inf_value12->clone=(void*)sMapNode_clone;
                _inf_value12->compile=(void*)sMapNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sMapNode_kind;
                __result_obj__141 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value609=_inf_value12)));
                ((node2_356) ? node2_356 = come_decrement_ref_count(node2_356, ((struct sNode*)node2_356)->finalize, ((struct sNode*)node2_356)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((node_349) ? node_349 = come_decrement_ref_count(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value608, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((__right_value609) ? __right_value609 = come_decrement_ref_count(__right_value609, ((struct sNode*)__right_value609)->finalize, ((struct sNode*)__right_value609)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__141;
            }
            ((node2_356) ? node2_356 = come_decrement_ref_count(node2_356, ((struct sNode*)node2_356)->finalize, ((struct sNode*)node2_356)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_352,(struct sNode*)come_increment_ref_count(node_349));
        }
        else if(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_352,(struct sNode*)come_increment_ref_count(node_349));
            while(            (_Bool)1            ) {
                no_comma_361=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_362=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_361;
                list$1sNode$ph_push_back(list_elements_352,(struct sNode*)come_increment_ref_count(node2_362));
                if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value611=err_msg(info,"invalid source end")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value611, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                else if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_362) ? node2_362 = come_decrement_ref_count(node2_362, ((struct sNode*)node2_362)->finalize, ((struct sNode*)node2_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value612=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value612, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                ((node2_362) ? node2_362 = come_decrement_ref_count(node2_362, ((struct sNode*)node2_362)->finalize, ((struct sNode*)node2_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value613=err_msg(info,"invalid character(5)(%c)",*info->p)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value613, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        if(        list$1sNode$ph_length(list_elements_352)>0        ) {
            info->sline_real=sline_real_346;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2180, "struct sNode");
            _inf_obj_value13=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value615=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "06str.c", 2180, "struct sListNode*")),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_352),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sListNode_finalize;
            _inf_value13->clone=(void*)sListNode_clone;
            _inf_value13->compile=(void*)sListNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sListNode_kind;
            __result_obj__144 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value619=_inf_value13)));
            ((node_349) ? node_349 = come_decrement_ref_count(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sListNode_finalize, __right_value615, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value619) ? __right_value619 = come_decrement_ref_count(__right_value619, ((struct sNode*)__right_value619)->finalize, ((struct sNode*)__right_value619)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__144;
        }
        else {
        }
        ((node_349) ? node_349 = come_decrement_ref_count(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        node_364=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__145 = (struct sNode*)come_increment_ref_count(node_364);
        ((node_364) ? node_364 = come_decrement_ref_count(node_364, ((struct sNode*)node_364)->finalize, ((struct sNode*)node_364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__145) ? __result_obj__145 = come_decrement_ref_count(__result_obj__145, ((struct sNode*)__result_obj__145)->finalize, ((struct sNode*)__result_obj__145)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__145;
        ((node_364) ? node_364 = come_decrement_ref_count(node_364, ((struct sNode*)node_364)->finalize, ((struct sNode*)node_364)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__146 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__146) ? __result_obj__146 = come_decrement_ref_count(__result_obj__146, ((struct sNode*)__result_obj__146)->finalize, ((struct sNode*)__result_obj__146)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__146;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__119;
void* __right_value433 = (void*)0;
struct sSStringNode* result_265;
void* __right_value434 = (void*)0;
char* __dec_obj105;
void* __right_value435 = (void*)0;
char* __dec_obj106;
void* __right_value436 = (void*)0;
struct list$1sNode$ph* __dec_obj107;
struct sSStringNode* __result_obj__120;
    if(    self==(void*)0    ) {
        __result_obj__119 = (void*)0;
        return __result_obj__119;
    }
    result_265=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*"));
    if(    self!=((void*)0)    ) {
        result_265->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj105=result_265->sname,
        result_265->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSStringNode_clone", 5, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_265->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj106=result_265->value,
        result_265->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sSStringNode_clone", 7, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        __dec_obj107=result_265->exps,
        result_265->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__120 = result_265;
    come_call_finalizer(sSStringNode_finalize, result_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__123;
void* __right_value450 = (void*)0;
struct sBufferNode* result_280;
void* __right_value451 = (void*)0;
char* __dec_obj108;
void* __right_value452 = (void*)0;
struct buffer* __dec_obj109;
struct sBufferNode* __result_obj__124;
    if(    self==(void*)0    ) {
        __result_obj__123 = (void*)0;
        return __result_obj__123;
    }
    result_280=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*"));
    if(    self!=((void*)0)    ) {
        result_280->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj108=result_280->sname,
        result_280->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBufferNode_clone", 5, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_280->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj109=result_280->value,
        result_280->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        come_call_finalizer(buffer_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_280->size=self->size;
    }
    __result_obj__124 = result_280;
    come_call_finalizer(sBufferNode_finalize, result_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__128;
void* __right_value555 = (void*)0;
struct sCharNode* result_314;
void* __right_value556 = (void*)0;
char* __dec_obj110;
struct sCharNode* __result_obj__129;
    if(    self==(void*)0    ) {
        __result_obj__128 = (void*)0;
        return __result_obj__128;
    }
    result_314=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*"));
    if(    self!=((void*)0)    ) {
        result_314->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj110=result_314->sname,
        result_314->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCharNode_clone", 5, "char*"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_314->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_314->value=self->value;
    }
    __result_obj__129 = result_314;
    come_call_finalizer(sCharNode_finalize, result_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__131;
void* __right_value563 = (void*)0;
struct sWCharNode* result_326;
void* __right_value564 = (void*)0;
char* __dec_obj111;
struct sWCharNode* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__131 = (void*)0;
        return __result_obj__131;
    }
    result_326=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*"));
    if(    self!=((void*)0)    ) {
        result_326->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj111=result_326->sname,
        result_326->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWCharNode_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_326->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_326->value=self->value;
    }
    if(    self!=((void*)0)    ) {
        result_326->quote=self->quote;
    }
    __result_obj__132 = result_326;
    come_call_finalizer(sWCharNode_finalize, result_326, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__134;
void* __right_value572 = (void*)0;
struct sWStringNode* result_336;
void* __right_value573 = (void*)0;
char* __dec_obj112;
void* __right_value574 = (void*)0;
int* __dec_obj113;
struct sWStringNode* __result_obj__135;
    if(    self==(void*)0    ) {
        __result_obj__134 = (void*)0;
        return __result_obj__134;
    }
    result_336=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*"));
    if(    self!=((void*)0)    ) {
        result_336->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj112=result_336->sname,
        result_336->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWStringNode_clone", 5, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_336->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj113=result_336->value,
        result_336->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__135 = result_336;
    come_call_finalizer(sWStringNode_finalize, result_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__138;
void* __right_value598 = (void*)0;
struct sMapNode* result_357;
void* __right_value599 = (void*)0;
char* __dec_obj114;
void* __right_value600 = (void*)0;
struct list$1sNode$ph* __dec_obj115;
void* __right_value601 = (void*)0;
struct list$1sNode$ph* __dec_obj116;
struct sMapNode* __result_obj__139;
    if(    self==(void*)0    ) {
        __result_obj__138 = (void*)0;
        return __result_obj__138;
    }
    result_357=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*"));
    if(    self!=((void*)0)    ) {
        result_357->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj114=result_357->sname,
        result_357->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMapNode_clone", 5, "char*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_357->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)    ) {
        __dec_obj115=result_357->map_key_elements,
        result_357->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)    ) {
        __dec_obj116=result_357->map_elements,
        result_357->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__139 = result_357;
    come_call_finalizer(sMapNode_finalize, result_357, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__142;
void* __right_value616 = (void*)0;
struct sListNode* result_363;
void* __right_value617 = (void*)0;
char* __dec_obj117;
void* __right_value618 = (void*)0;
struct list$1sNode$ph* __dec_obj118;
struct sListNode* __result_obj__143;
    if(    self==(void*)0    ) {
        __result_obj__142 = (void*)0;
        return __result_obj__142;
    }
    result_363=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*"));
    if(    self!=((void*)0)    ) {
        result_363->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj117=result_363->sname,
        result_363->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sListNode_clone", 5, "char*"));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_363->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)    ) {
        __dec_obj118=result_363->list_elements,
        result_363->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__143 = result_363;
    come_call_finalizer(sListNode_finalize, result_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_365;
char* p_366;
char* name_367;
void* __right_value623 = (void*)0;
char* __dec_obj119;
_Bool no_comma_368;
void* __right_value624 = (void*)0;
struct sNode* node_369;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* _inf_value14;
struct sTupleNode* _inf_obj_value14;
void* __right_value645 = (void*)0;
struct sNode* __result_obj__154;
name_367 = (void*)0;
    tuple_elements_365=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2195, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    while(    (_Bool)1    ) {
        p_366=info->p;
        if(        named_tuple        ) {
            __dec_obj119=name_367,
            name_367=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_368=info->no_comma;
        info->no_comma=(_Bool)1;
        node_369=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj120=node_369,
        node_369=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_369),info));
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->no_comma=no_comma_368;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements_365,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2214, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_367, "06str.c", 2214, "char*")),(struct sNode*)come_increment_ref_count(node_369))));
        if(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_367 = come_decrement_ref_count(name_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_369) ? node_369 = come_decrement_ref_count(node_369, ((struct sNode*)node_369)->finalize, ((struct sNode*)node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value632=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value632, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        (name_367 = come_decrement_ref_count(name_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_369) ? node_369 = come_decrement_ref_count(node_369, ((struct sNode*)node_369)->finalize, ((struct sNode*)node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2231, "struct sNode");
    _inf_obj_value14=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value634=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "06str.c", 2231, "struct sTupleNode*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_365),info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sTupleNode_finalize;
    _inf_value14->clone=(void*)sTupleNode_clone;
    _inf_value14->compile=(void*)sTupleNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sNodeBase_terminated;
    _inf_value14->kind=(void*)sTupleNode_kind;
    __result_obj__154 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value645=_inf_value14)));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements_365, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __right_value634, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value645) ? __right_value645 = come_decrement_ref_count(__right_value645, ((struct sNode*)__right_value645)->finalize, ((struct sNode*)__right_value645)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__154) ? __result_obj__154 = come_decrement_ref_count(__result_obj__154, ((struct sNode*)__result_obj__154)->finalize, ((struct sNode*)__result_obj__154)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__154;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value626 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_370;
struct tuple2$2char$phsNode$ph* __dec_obj121;
void* __right_value627 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_371;
struct tuple2$2char$phsNode$ph* __dec_obj122;
void* __right_value628 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_372;
struct tuple2$2char$phsNode$ph* __dec_obj123;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__147;
    if(    self->len==0    ) {
        litem_370=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value626=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1722, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj121=litem_370->item,
        litem_370->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj121,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1    ) {
        litem_371=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value627=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1732, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj122=litem_371->item,
        litem_371->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj122,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value628=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1742, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj123=litem_372->item,
        litem_372->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj123,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result_obj__147 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__147;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__148;
void* __right_value635 = (void*)0;
struct sTupleNode* result_373;
void* __right_value636 = (void*)0;
char* __dec_obj124;
void* __right_value644 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj127;
struct sTupleNode* __result_obj__153;
    if(    self==(void*)0    ) {
        __result_obj__148 = (void*)0;
        return __result_obj__148;
    }
    result_373=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*"));
    if(    self!=((void*)0)    ) {
        result_373->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj124=result_373->sname,
        result_373->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTupleNode_clone", 5, "char*"));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_373->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)    ) {
        __dec_obj127=result_373->tuple_elements,
        result_373->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj127,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__153 = result_373;
    come_call_finalizer(sTupleNode_finalize, result_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__149;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_374;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_375;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__152;
    if(    self==((void*)0)    ) {
        __result_obj__149 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__149;
    }
    result_374=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1633, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_375=self->head;
    while(    it_375!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_374,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_375->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_374,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_375->item)));
        }
        it_375=it_375->next;
    }
    __result_obj__152 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_374);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_374, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__150;
void* __right_value639 = (void*)0;
struct tuple2$2char$phsNode$ph* result_376;
void* __right_value640 = (void*)0;
char* __dec_obj125;
void* __right_value641 = (void*)0;
struct sNode* __dec_obj126;
struct tuple2$2char$phsNode$ph* __result_obj__151;
    if(    self==(void*)0    ) {
        __result_obj__150 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__150;
    }
    result_376=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj125=result_376->v1,
        result_376->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj126=result_376->v2,
        result_376->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__151 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_376);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

