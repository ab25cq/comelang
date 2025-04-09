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

_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
char* CC="clang";
static char* RM="rm -rf";
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
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files);
static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
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
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
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
void create_pico_version_header();
int come_main(int argc, char** argv);
static char* list$1char$ph_join(struct list$1char$ph* self, char* sep);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self);
static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void sInfo_finalize(struct sInfo* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
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
static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
    if(    gComeOriginalSourcePosition) {
        if(        info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value2=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value0=int_to_string(info->sline))),((char*)(__right_value1=string_to_string(info->sname)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value3 = (void*)0;
char* sname_0;
int sline_1;
int sline_real_2;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj1;
_Bool result_3;
void* __right_value6 = (void*)0;
char* __dec_obj2;
_Bool __result_obj__1;
    sname_0=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_1=info->sline;
    sline_real_2=info->sline_real;
    __dec_obj1=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value4=node->sname(node->_protocol_obj)))));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_3=node->compile(node->_protocol_obj,info);
    __dec_obj2=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_0));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_1;
    info->sline_real=sline_real_2;
    __result_obj__1 = result_3;
    (sname_0 = come_decrement_ref_count(sname_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__1;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_4;
void* __right_value7 = (void*)0;
    input_file_name_4=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_4!=((void*)0)&&string_operator_not_equals(input_file_name_4,"")) {
        (void)system(((char*)(__right_value7=xsprintf("%s %s.*",RM,input_file_name_4))));
        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_4 = come_decrement_ref_count(input_file_name_4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_5;
void* __right_value8 = (void*)0;
    input_file_name_5=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_5!=((void*)0)&&string_operator_not_equals(input_file_name_5,"")) {
        (void)system(((char*)(__right_value8=xsprintf("%s %s.i* %s.c*",RM,input_file_name_5,input_file_name_5))));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_5 = come_decrement_ref_count(input_file_name_5, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_6;
void* __right_value9 = (void*)0;
    input_file_name_6=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_6!=((void*)0)&&string_operator_not_equals(input_file_name_6,"")) {
        (void)system(((char*)(__right_value9=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_6,input_file_name_6))));
        (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_6 = come_decrement_ref_count(input_file_name_6, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_7;
char* output_file_name_8;
void* __right_value10 = (void*)0;
char* __dec_obj3;
void* __right_value11 = (void*)0;
char* __dec_obj4;
_Bool exist_common_h_9;
struct _IO_FILE* Value_10;
int is_mac_11;
int is_android_12;
int is_debian_13;
int is_linux_14;
int is_m5stack_15;
int is_pico_16;
int is_emb_17;
_Bool _32bit_18;
struct _IO_FILE* f_19;
int is_raspi_20;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
char* __dec_obj5;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
char* cmd3_21;
int rc_22;
void* __right_value17 = (void*)0;
char* command2_23;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
char* cmd2_24;
int rc_25;
void* __right_value20 = (void*)0;
char* command2_26;
void* __right_value21 = (void*)0;
char* command2_27;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
char* cmd2_28;
void* __right_value24 = (void*)0;
char* command2_29;
int rc_30;
void* __right_value25 = (void*)0;
char* command2_31;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
char* cmd2_32;
void* __right_value28 = (void*)0;
char* command2_33;
int rc_34;
void* __right_value29 = (void*)0;
char* command2_35;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
char* cmd3_36;
int rc_37;
void* __right_value32 = (void*)0;
char* command2_38;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
char* cmd4_39;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
char* __dec_obj6;
void* __right_value37 = (void*)0;
char* command2_40;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
char* cmd3_41;
int rc_42;
void* __right_value40 = (void*)0;
char* command2_43;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
char* cmd4_44;
void* __right_value43 = (void*)0;
char* command2_45;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
char* cmd3_46;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
char* __dec_obj7;
int rc_47;
void* __right_value48 = (void*)0;
char* command2_48;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
char* cmd4_49;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
char* __dec_obj8;
void* __right_value53 = (void*)0;
char* command2_50;
_Bool __result_obj__2;
output_file_name_8 = (void*)0;
memset(&is_raspi_20, 0, sizeof(int));
    input_file_name_7=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj3=output_file_name_8,
        output_file_name_8=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj4=output_file_name_8,
        output_file_name_8=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    exist_common_h_9=(_Bool)0;
    {
        Value_10=fopen("common.h","r");
        if(        Value_10) {
            exist_common_h_9=(_Bool)1;
            fclose(Value_10);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_9=(_Bool)0;
        }
        if(        !gCommonHeader) {
            exist_common_h_9=(_Bool)0;
        }
    }
    is_mac_11=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    is_android_12=system("uname -a | grep Android 1> /dev/null 2>/dev/null")==0;
    is_debian_13=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
    is_linux_14=1;
    is_m5stack_15=info->m5stack_cpp;
    is_pico_16=info->pico_cpp;
    is_emb_17=info->emb_cpp;
    _32bit_18=(_Bool)0;
    f_19=fopen("/proc/cpuinfo","r");
    if(    f_19) {
        fclose(f_19);
        is_raspi_20=system("cat /proc/cpuinfo | grep 'Model' | grep 'Raspberry Pi' > /dev/null 2> /dev/null ")==0;
        if(        is_raspi_20) {
            _32bit_18=system(" lscpu | grep armv7l > /dev/null 2> /dev/null ")==0;
        }
    }
    else {
        is_raspi_20=0;
    }
    if(    is_pico_16||is_m5stack_15) {
        _32bit_18=(_Bool)1;
    }
    if(    _32bit_18) {
        __dec_obj5=info->cpp_option,
        info->cpp_option=(char*)come_increment_ref_count(string_operator_add(info->cpp_option,((char*)(__right_value13=xsprintf(" -D__32BIT_CPU__ ")))));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    is_android_12) {
        cmd3_21=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value15=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
        (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd3_21);
        }
        rc_22=system(cmd3_21);
        command2_23=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_23);
        }
        (void)system(command2_23);
        if(        rc_22!=0) {
            printf("cpp failed(%s)\n",command2_23);
            exit(2);
        }
        (cmd3_21 = come_decrement_ref_count(cmd3_21, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_23 = come_decrement_ref_count(command2_23, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_m5stack_15) {
        cmd2_24=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value18=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
        (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_24);
        }
        rc_25=system(cmd2_24);
        command2_26=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_26);
        }
        (void)system(command2_26);
        if(        rc_25!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_24);
            exit(5);
        }
        (command2_26 = come_decrement_ref_count(command2_26, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        command2_27=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_27);
        }
        (void)system(command2_27);
        (cmd2_24 = come_decrement_ref_count(cmd2_24, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_27 = come_decrement_ref_count(command2_27, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_pico_16) {
        cmd2_28=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value22=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
        (__right_value22 = come_decrement_ref_count(__right_value22, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_28);
        }
        command2_29=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_29);
        }
        (void)system(command2_29);
        rc_30=system(cmd2_28);
        if(        rc_30!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_28);
            exit(5);
        }
        (command2_29 = come_decrement_ref_count(command2_29, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        command2_31=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_31);
        }
        (void)system(command2_31);
        (cmd2_28 = come_decrement_ref_count(cmd2_28, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_31 = come_decrement_ref_count(command2_31, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_mac_11) {
        cmd2_32=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value26=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
        (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_32);
        }
        command2_33=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_33);
        }
        (void)system(command2_33);
        rc_34=system(cmd2_32);
        if(        rc_34!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_32);
            exit(5);
        }
        (command2_33 = come_decrement_ref_count(command2_33, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        command2_35=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_35);
        }
        (void)system(command2_35);
        (cmd2_32 = come_decrement_ref_count(cmd2_32, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_35 = come_decrement_ref_count(command2_35, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_emb_17) {
        cmd3_36=(char*)come_increment_ref_count(xsprintf("clang -E %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value30=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
        (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd3_36);
        }
        rc_37=system(cmd3_36);
        command2_38=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_38);
        }
        (void)system(command2_38);
        if(        rc_37!=0) {
            cmd4_39=(char*)come_increment_ref_count(xsprintf("clang -E %s -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value33=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
            (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            is_debian_13) {
                __dec_obj6=cmd4_39,
                cmd4_39=(char*)come_increment_ref_count(xsprintf("clang -E %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value35=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
                __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            command2_40=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
            if(            info->verbose) {
                puts(command2_40);
            }
            (void)system(command2_40);
            if(            rc_37!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_39);
                exit(5);
            }
            (cmd4_39 = come_decrement_ref_count(cmd4_39, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command2_40 = come_decrement_ref_count(command2_40, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (cmd3_36 = come_decrement_ref_count(cmd3_36, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_38 = come_decrement_ref_count(command2_38, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_raspi_20) {
        cmd3_41=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value38=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
        (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd3_41);
        }
        rc_42=system(cmd3_41);
        command2_43=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_43);
        }
        (void)system(command2_43);
        if(        rc_42!=0) {
            cmd4_44=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value41=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
            (__right_value41 = come_decrement_ref_count(__right_value41, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            command2_45=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
            if(            info->verbose) {
                puts(command2_45);
            }
            (void)system(command2_45);
            if(            rc_42!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_44);
                exit(5);
            }
            (cmd4_44 = come_decrement_ref_count(cmd4_44, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command2_45 = come_decrement_ref_count(command2_45, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (cmd3_41 = come_decrement_ref_count(cmd3_41, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_43 = come_decrement_ref_count(command2_43, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_linux_14) {
        cmd3_46=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value44=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
        (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        is_debian_13) {
            __dec_obj7=cmd3_46,
            cmd3_46=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value46=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
            __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->verbose) {
            puts(cmd3_46);
        }
        rc_47=system(cmd3_46);
        command2_48=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
        if(        info->verbose) {
            puts(command2_48);
        }
        (void)system(command2_48);
        if(        rc_47!=0) {
            cmd4_49=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value49=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
            (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            is_debian_13) {
                __dec_obj8=cmd4_49,
                cmd4_49=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_9)?(((char*)(__right_value51=__builtin_string(" -include common.h ")))):("")),input_file_name_7,output_file_name_8,output_file_name_8));
                __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            command2_50=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_8));
            if(            info->verbose) {
                puts(command2_50);
            }
            (void)system(command2_50);
            if(            rc_47!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_49);
                exit(5);
            }
            (cmd4_49 = come_decrement_ref_count(cmd4_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command2_50 = come_decrement_ref_count(command2_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (cmd3_46 = come_decrement_ref_count(cmd3_46, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_48 = come_decrement_ref_count(command2_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__2 = (_Bool)1;
    (input_file_name_7 = come_decrement_ref_count(input_file_name_7, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_8 = come_decrement_ref_count(output_file_name_8, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__2;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files){
void* __right_value54 = (void*)0;
char* input_file_name_51;
char* output_file_name_52;
void* __right_value55 = (void*)0;
char* __dec_obj9;
void* __right_value56 = (void*)0;
char* __dec_obj10;
int is_mac_53;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
char* __dec_obj11;
void* __if_result__0_54 = (void*)0;
void* __right_value60 = (void*)0;
char* __dec_obj12;
void* __right_value61 = (void*)0;
char* command_55;
int rc_56;
void* __right_value62 = (void*)0;
char* __dec_obj13;
int rc_57;
void* __right_value63 = (void*)0;
char* command2_58;
void* __right_value70 = (void*)0;
_Bool __result_obj__6;
output_file_name_52 = (void*)0;
    input_file_name_51=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file) {
        __dec_obj9=output_file_name_52,
        output_file_name_52=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj10=output_file_name_52,
        output_file_name_52=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    is_mac_53=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    gComeDebug&&charp_operator_equals(CC,"clang")) {
        __dec_obj11=info->clang_option,
        info->clang_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option,((char*)(__right_value58=xsprintf(" -fsanitize=address,undefined -g ")))));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    is_mac_53) {
        __dec_obj12=info->clang_option,
        __if_result__0_54=(void*)((char*)come_increment_ref_count(info->clang_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option," -std=gnu17 "))));
;
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    command_55=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_52,input_file_name_51,info->clang_option,input_file_name_51));
    if(    info->verbose) {
        puts(command_55);
    }
    rc_56=system(command_55);
    if(    rc_56!=0) {
        __dec_obj13=command_55,
        command_55=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_52,input_file_name_51,info->clang_option,input_file_name_51));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        info->verbose) {
            puts(command_55);
        }
        rc_57=system(command_55);
        if(        rc_57!=0) {
            printf("%s is faild\n",CC);
            command2_58=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out 2>/dev/null",input_file_name_51));
            if(            info->verbose) {
                puts(command2_58);
            }
            (void)system(command2_58);
            exit(2);
            (command2_58 = come_decrement_ref_count(command2_58, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    !output_object_file) {
        list$1char$ph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_52)));
    }
    __result_obj__6 = (_Bool)1;
    (input_file_name_51 = come_decrement_ref_count(input_file_name_51, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_52 = come_decrement_ref_count(output_file_name_52, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__if_result__0_54 = come_decrement_ref_count(__if_result__0_54, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (command_55 = come_decrement_ref_count(command_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__6;
}

static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item){
int len_59;
int i_60;
char* default_value_61;
struct list$1char$ph* __result_obj__4;
void* __right_value67 = (void*)0;
struct list_item$1char$ph* litem_65;
char* __dec_obj17;
void* __right_value68 = (void*)0;
struct list_item$1char$ph* litem_66;
char* __dec_obj18;
struct list_item$1char$ph* it_67;
int i_68;
void* __right_value69 = (void*)0;
struct list_item$1char$ph* litem_69;
char* __dec_obj19;
struct list$1char$ph* __result_obj__5;
default_value_61 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_59=self->len;
        for(        i_60=0;        i_60<position-len_59;        i_60++        ){
            memset(&default_value_61,0,sizeof(char*));
            list$1char$ph_push_back(self,(char*)come_increment_ref_count(default_value_61));
            (default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(item));
        __result_obj__4 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__4;
    }
    if(    position==0) {
        litem_65=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value67=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1273, "struct list_item$1char$ph*"))));
        litem_65->prev=((void*)0);
        litem_65->next=self->head;
        __dec_obj17=litem_65->item,
        litem_65->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->head->prev=litem_65;
        self->head=litem_65;
        self->len++;
    }
    else if(    self->len==1) {
        litem_66=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value68=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1285, "struct list_item$1char$ph*"))));
        litem_66->prev=self->head;
        litem_66->next=self->tail;
        __dec_obj18=litem_66->item,
        litem_66->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->prev=litem_66;
        self->head->next=litem_66;
        self->len++;
    }
    else {
        it_67=self->head;
        i_68=0;
        while(        it_67!=((void*)0)) {
            if(            position==i_68) {
                litem_69=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value69=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1301, "struct list_item$1char$ph*"))));
                litem_69->prev=it_67->prev;
                litem_69->next=it_67;
                __dec_obj19=litem_69->item,
                litem_69->item=(char*)come_increment_ref_count(item);
                __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                it_67->prev->next=litem_69;
                it_67->prev=litem_69;
                self->len++;
            }
            it_67=it_67->next;
            i_68++;
        }
    }
    __result_obj__5 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__5;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_62;
char* __dec_obj14;
void* __right_value65 = (void*)0;
struct list_item$1char$ph* litem_63;
char* __dec_obj15;
void* __right_value66 = (void*)0;
struct list_item$1char$ph* litem_64;
char* __dec_obj16;
struct list$1char$ph* __result_obj__3;
    if(    self->len==0) {
        litem_62=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_62->prev=((void*)0);
        litem_62->next=((void*)0);
        __dec_obj14=litem_62->item,
        litem_62->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_62;
        self->head=litem_62;
    }
    else if(    self->len==1) {
        litem_63=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value65=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_63->prev=self->head;
        litem_63->next=((void*)0);
        __dec_obj15=litem_63->item,
        litem_63->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_63;
        self->head->next=litem_63;
    }
    else {
        litem_64=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value66=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_64->prev=self->tail;
        litem_64->next=((void*)0);
        __dec_obj16=litem_64->item,
        litem_64->item=(char*)come_increment_ref_count(item);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_64;
        self->tail=litem_64;
    }
    self->len++;
    __result_obj__3 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__3;
}

static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files){
char* output_file_name_70;
void* __right_value71 = (void*)0;
char* __dec_obj20;
void* __right_value72 = (void*)0;
char* __dec_obj21;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* command_71;
int is_mac_72;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
char* __dec_obj22;
void* __if_result__1_73 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
char* __dec_obj23;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1char$ph* o2_saved_74;
char* it_77;
int is_mac_80;
void* __right_value84 = (void*)0;
char* cmd_81;
int rc_82;
void* __right_value85 = (void*)0;
char* cmd_83;
int rc_84;
void* __right_value86 = (void*)0;
char* cmd_85;
int rc_86;
int is_apline_87;
int is_debian_88;
int is_android_89;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
int Value_90;
_Bool _if_conditional1;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
char* str_91;
int Value_92;
_Bool __result_obj__13;
_Bool __result_obj__14;
    output_file_name_70=((void*)0);
    if(    info->output_file_name) {
        __dec_obj20=output_file_name_70,
        output_file_name_70=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj21=output_file_name_70,
        output_file_name_70=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    command_71=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 379, "struct buffer*"))));
    buffer_append_format(command_71,"%s -o %s ",CC,output_file_name_70);
    is_mac_72=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    gComeDebug&&charp_operator_equals(CC,"clang")) {
        __dec_obj22=info->linker_option,
        info->linker_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option,((char*)(__right_value76=xsprintf(" -fsanitize=address,undefined -g ")))));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    is_mac_72) {
        __dec_obj23=info->linker_option,
        __if_result__1_73=(void*)((char*)come_increment_ref_count(info->linker_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option,((char*)(__right_value79=xsprintf(" -std=gnu17 ")))))));
;
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value78 = come_decrement_ref_count(__right_value78, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buffer_append_str(command_71,((char*)(__right_value83=string_operator_add(((char*)(__right_value82=charp_operator_add(" ",info->linker_option)))," "))));
    (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_74=(object_files),it_77=list$1char$ph_begin((o2_saved_74));    !list$1char$ph_end((o2_saved_74));    it_77=list$1char$ph_next((o2_saved_74))    ){
        buffer_append_format(command_71,"%s ",it_77);
    }
    is_mac_80=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_80) {
        buffer_append_str(command_71," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_81=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_82=system(cmd_81);
    if(    rc_82==0) {
        buffer_append_str(command_71," -L. -L/usr/local/lib ");
    }
    (cmd_81 = come_decrement_ref_count(cmd_81, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_83=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_84=system(cmd_83);
    if(    rc_84==0) {
        buffer_append_format(command_71," -L%s/lib ",getenv("HOME"));
    }
    (cmd_83 = come_decrement_ref_count(cmd_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_85=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_86=system(cmd_85);
    if(    rc_86==0) {
        buffer_append_format(command_71," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_71," %s ",info->clang_option);
    if(    gComeStr) {
        buffer_append_format(command_71," -lpcre ");
    }
    if(    gComeGC) {
        buffer_append_str(command_71," -lgc ");
    }
    if(    gComePthread) {
        buffer_append_str(command_71," -lpthread ");
    }
    if(    gComeNet) {
        is_apline_87=system("which apk 1> /dev/null 2>/dev/null")==0;
        is_debian_88=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
        is_android_89=system("uname -a | grep Android 1>/dev/null 2>/dev/null")==0;
        if(        is_android_89) {
            buffer_append_str(command_71," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(        is_apline_87||is_debian_88) {
            buffer_append_str(command_71," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(        is_mac_80) {
            buffer_append_format(command_71," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command_71," -lssl `mysql_config --cflags --libs`");
        }
    }
    if(    info->verbose) {
        puts(((char*)(__right_value87=buffer_to_string(command_71))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    Value_90=system(((char*)(__right_value88=buffer_to_string(command_71))));
    if(    (_if_conditional1=(Value_90)),    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional1) {
        str_91=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value92=xsprintf("gcc"))),((char*)(__right_value94=charp_substring(((char*)(__right_value93=buffer_to_string(command_71))),strlen(CC),-1)))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        Value_92=system(str_91);
        if(        Value_92) {
            printf("%s is failed\n",CC);
            __result_obj__13 = (_Bool)0;
            (str_91 = come_decrement_ref_count(str_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (output_file_name_70 = come_decrement_ref_count(output_file_name_70, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(command_71,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__if_result__1_73 = come_decrement_ref_count(__if_result__1_73, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cmd_85 = come_decrement_ref_count(cmd_85, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__13;
        }
        else {
        }
        (str_91 = come_decrement_ref_count(str_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
    }
    __result_obj__14 = (_Bool)1;
    (output_file_name_70 = come_decrement_ref_count(output_file_name_70, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(command_71,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__if_result__1_73 = come_decrement_ref_count(__if_result__1_73, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cmd_85 = come_decrement_ref_count(cmd_85, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__14;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_75;
char* __result_obj__7;
char* __result_obj__8;
char* result_76;
char* __result_obj__9;
result_75 = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_75,0,sizeof(char*));
        __result_obj__7 = result_75;
        return __result_obj__7;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__8 = self->it->item;
        return __result_obj__8;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__9 = result_76;
    return __result_obj__9;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_78;
char* __result_obj__10;
char* __result_obj__11;
char* result_79;
char* __result_obj__12;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_78,0,sizeof(char*));
        __result_obj__10 = result_78;
        return __result_obj__10;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__11 = self->it->item;
        return __result_obj__11;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__12 = result_79;
    return __result_obj__12;
}

_Bool new_project(int argc, char** argv){
void* __right_value96 = (void*)0;
char* project_name_93;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* project_name_debug_94;
void* __right_value102 = (void*)0;
char* cc_95;
void* __right_value103 = (void*)0;
char* install_96;
void* __right_value104 = (void*)0;
char* libs_97;
void* __right_value105 = (void*)0;
char* os_98;
void* __right_value106 = (void*)0;
char* prefix_99;
void* __right_value107 = (void*)0;
char* cflags_100;
void* __right_value108 = (void*)0;
char* cflags_debug_101;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
int Value_102;
_Bool _if_conditional2;
_Bool __exception_result_var_b1;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
_Bool __result_obj__15;
    project_name_93=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_94=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value99=__builtin_string(argv[2]))),((char*)(__right_value100=__builtin_string("-debug")))));
    (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cc_95=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_96=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_97=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_98=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_99=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_100=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_101=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg -g "));
    Value_102=system(((char*)(__right_value110=xsprintf("mkdir \%s",((char*)(__right_value109=string_to_string(project_name_93)))))));
    if(    (_if_conditional2=(Value_102<0)),    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional2) {
        (come_push_stackframe("02transpile.c", 482, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value136=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c tmp-common-header.*\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value111=string_to_string(project_name_93))),((char*)(__right_value112=string_to_string(project_name_93))),((char*)(__right_value113=string_to_string(project_name_93))),((char*)(__right_value114=string_to_string(project_name_93))),((char*)(__right_value115=string_to_string(cc_95))),((char*)(__right_value116=string_to_string(install_96))),((char*)(__right_value117=string_to_string(cflags_100))),((char*)(__right_value118=string_to_string(cflags_debug_101))),((char*)(__right_value119=string_to_string(libs_97))),((char*)(__right_value120=string_to_string(os_98))),((char*)(__right_value121=string_to_string(prefix_99))),((char*)(__right_value122=string_to_string(project_name_93))),((char*)(__right_value123=string_to_string(project_name_debug_94))),((char*)(__right_value124=string_to_string(project_name_93))),((char*)(__right_value125=string_to_string(project_name_93))),((char*)(__right_value126=string_to_string(project_name_93))),((char*)(__right_value127=string_to_string(project_name_93))),((char*)(__right_value128=string_to_string(project_name_debug_94))),((char*)(__right_value129=string_to_string(project_name_93))),((char*)(__right_value130=string_to_string(project_name_93))),((char*)(__right_value131=string_to_string(project_name_93))),((char*)(__right_value132=string_to_string(project_name_93))),((char*)(__right_value133=string_to_string(project_name_93))),((char*)(__right_value134=string_to_string(project_name_debug_94))),((char*)(__right_value135=string_to_string(project_name_debug_94)))))),((char*)(__right_value138=xsprintf("\%s/Makefile",((char*)(__right_value137=string_to_string(project_name_93)))))),(_Bool)0);
    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result_obj__15 = (_Bool)1;
    (project_name_93 = come_decrement_ref_count(project_name_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (project_name_debug_94 = come_decrement_ref_count(project_name_debug_94, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cc_95 = come_decrement_ref_count(cc_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (install_96 = come_decrement_ref_count(install_96, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (libs_97 = come_decrement_ref_count(libs_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (os_98 = come_decrement_ref_count(os_98, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (prefix_99 = come_decrement_ref_count(prefix_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_100 = come_decrement_ref_count(cflags_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_debug_101 = come_decrement_ref_count(cflags_debug_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__15;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* Value_103;
int Value_104;
_Bool __exception_result_var_b2;
int Value_105;
_Bool __exception_result_var_b3;
int Value_106;
_Bool __exception_result_var_b4;
    Value_103=fopen("common.h","r");
    if(    Value_103) {
        fclose(Value_103);
    }
    else {
        Value_104=system("make header");
        if(        Value_104<0) {
            (come_push_stackframe("02transpile.c", 588, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_105=system("make compile -j$(($(nproc)/2))");
    if(    Value_105<0) {
        (come_push_stackframe("02transpile.c", 598, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    Value_106=system("make run");
    if(    Value_106<0) {
        (come_push_stackframe("02transpile.c", 603, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_107;
_Bool __exception_result_var_b5;
    Value_107=system("make header");
    if(    Value_107<0) {
        (come_push_stackframe("02transpile.c", 612, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* Value_108;
int Value_109;
_Bool __exception_result_var_b6;
int Value_110;
_Bool __exception_result_var_b7;
    Value_108=fopen("common.h","r");
    if(    Value_108) {
        fclose(Value_108);
    }
    else {
        Value_109=system("make header");
        if(        Value_109<0) {
            (come_push_stackframe("02transpile.c", 625, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
        }
        else {
        }
    }
    Value_110=system("make compile -j$(($(nproc)/2))");
    if(    Value_110<0) {
        (come_push_stackframe("02transpile.c", 635, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* Value_111;
int Value_112;
_Bool __exception_result_var_b8;
int Value_113;
_Bool __exception_result_var_b9;
    Value_111=fopen("common.h","r");
    if(    Value_111) {
        fclose(Value_111);
    }
    else {
        Value_112=system("make header");
        if(        Value_112<0) {
            (come_push_stackframe("02transpile.c", 649, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
        }
        else {
        }
    }
    Value_113=system("make debug -j$(($(nproc)/2))");
    if(    Value_113<0) {
        (come_push_stackframe("02transpile.c", 659, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_114;
_Bool __exception_result_var_b10;
    Value_114=system("make clean");
    if(    Value_114<0) {
        (come_push_stackframe("02transpile.c", 669, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
int Value_115;
_Bool _if_conditional3;
_Bool __exception_result_var_b11;
    Value_115=system(((char*)(__right_value140=xsprintf("make install DESTDIR=\%s",((char*)(__right_value139=charp_to_string(prefix)))))));
    if(    (_if_conditional3=(Value_115<0)),    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional3) {
        (come_push_stackframe("02transpile.c", 678, 10),__exception_result_var_b11=die("system"), come_pop_stackframe(), __exception_result_var_b11);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
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
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
int i_161;
void* __right_value198 = (void*)0;
char* generics_type_162;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
int i_163;
void* __right_value201 = (void*)0;
char* generics_type_164;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
int is_mac_165;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
char* type_name_166;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sType* type_167;
void* __right_value212 = (void*)0;
char* __dec_obj24;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct sClass* klass_189;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 686, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 687, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 688, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 689, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 690, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 691, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 692, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 693, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 694, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 695, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("_Float16")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 696, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 697, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__uint128_t")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 698, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__int128")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    for(    i_161=0;    i_161<12;    i_161++    ){
        generics_type_162=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_161));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type_162),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 701, "struct sClass*")),(char*)come_increment_ref_count(generics_type_162),(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_161,-1,(_Bool)0,(_Bool)0,info)));
        (generics_type_162 = come_decrement_ref_count(generics_type_162, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    i_163=0;    i_163<7;    i_163++    ){
        generics_type_164=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_163));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type_164),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 705, "struct sClass*")),(char*)come_increment_ref_count(generics_type_164),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_163,(_Bool)0,(_Bool)0,info)));
        (generics_type_164 = come_decrement_ref_count(generics_type_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    is_mac_165=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_165) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 710, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        type_name_166=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_167=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 714, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,info));
        __dec_obj24=type_167->mOriginalTypeName,
        type_167->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_166)),(struct sType*)come_increment_ref_count(type_167));
        (type_name_166 = come_decrement_ref_count(type_name_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_167,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        klass_189=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 720, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_189->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 722, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 722, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_189->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 723, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 723, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_189->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 724, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 724, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_189->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 725, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 725, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_189->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 726, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 726, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_189));
        /*c*/ come_call_finalizer3(klass_189,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_141;
unsigned int it_142;
_Bool same_key_exist_159;
char* it2_160;
struct map$2char$phsClass$ph* __result_obj__30;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_141=string_get_hash_key(((char*)key))%self->size;
    it_142=hash_141;
    while(    (_Bool)1) {
        if(        self->item_existance[it_142]) {
            if(            string_equals(self->keys[it_142],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_142]);
                    (self->keys[it_142] = come_decrement_ref_count(self->keys[it_142], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_142]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_142]);
                    self->keys[it_142]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_142],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_142]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_142]=item;
                }
                break;
            }
            it_142++;
            if(            it_142>=self->size) {
                it_142=0;
            }
            else if(            it_142==hash_141) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_142]=(_Bool)1;
            if(            1) {
                self->keys[it_142]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_142]=key;
            }
            if(            1) {
                self->items[it_142]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_142]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_159=(_Bool)0;
    for(    it2_160=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_160=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_160,key)) {
            same_key_exist_159=(_Bool)1;
        }
    }
    if(    !same_key_exist_159) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__30 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__30;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_116;
void* __right_value141 = (void*)0;
char** keys_117;
void* __right_value142 = (void*)0;
struct sClass** items_118;
void* __right_value143 = (void*)0;
_Bool* item_existance_119;
int len_120;
char* it_123;
struct sClass* default_value_126;
void* __right_value144 = (void*)0;
struct sClass* it2_127;
unsigned int hash_138;
int n_139;
struct sClass* default_value_140;
void* __right_value145 = (void*)0;
default_value_126 = (void*)0;
default_value_140 = (void*)0;
    size_116=self->size*10;
    keys_117=(char**)come_increment_ref_count(((char**)(__right_value141=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_116)), "./comelang.h", 2153, "char**"))));
    items_118=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value142=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_116)), "./comelang.h", 2154, "struct sClass**"))));
    item_existance_119=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value143=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_116)), "./comelang.h", 2155, "_Bool*"))));
    len_120=0;
    for(    it_123=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_123=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_126,0,sizeof(struct sClass*));
        it2_127=((struct sClass*)(__right_value144=map$2char$phsClass$ph_at(self,it_123,(struct sClass*)come_increment_ref_count(default_value_126))));
        /*c*/ come_call_finalizer3(__right_value144,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_138=string_get_hash_key(((char*)it_123))%size_116;
        n_139=hash_138;
        while(        (_Bool)1) {
            if(            item_existance_119[n_139]) {
                n_139++;
                if(                n_139>=size_116) {
                    n_139=0;
                }
                else if(                n_139==hash_138) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_119[n_139]=(_Bool)1;
                keys_117[n_139]=it_123;
                items_118[n_139]=((struct sClass*)(__right_value145=map$2char$phsClass$ph_at(self,it_123,(struct sClass*)come_increment_ref_count(default_value_140))));
                /*c*/ come_call_finalizer3(__right_value145,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_120++;
                /*c*/ come_call_finalizer3(default_value_140,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_140,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_126,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_117;
    self->items=items_118;
    self->item_existance=item_existance_119;
    self->size=size_116;
    self->len=len_120;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_121;
char* __result_obj__16;
char* __result_obj__17;
char* result_122;
char* __result_obj__18;
result_121 = (void*)0;
result_122 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_121,0,sizeof(char*));
        __result_obj__16 = result_121;
        return __result_obj__16;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__17 = self->key_list->it->item;
        return __result_obj__17;
    }
    memset(&result_122,0,sizeof(char*));
    __result_obj__18 = result_122;
    return __result_obj__18;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_124;
char* __result_obj__19;
char* __result_obj__20;
char* result_125;
char* __result_obj__21;
result_124 = (void*)0;
result_125 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_124,0,sizeof(char*));
        __result_obj__19 = result_124;
        return __result_obj__19;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__20 = self->key_list->it->item;
        return __result_obj__20;
    }
    memset(&result_125,0,sizeof(char*));
    __result_obj__21 = result_125;
    return __result_obj__21;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_128;
unsigned int it_129;
struct sClass* __result_obj__22;
struct sClass* __result_obj__23;
struct sClass* __result_obj__24;
struct sClass* __result_obj__25;
    hash_128=string_get_hash_key(((char*)key))%self->size;
    it_129=hash_128;
    while(    (_Bool)1) {
        if(        self->item_existance[it_129]) {
            if(            string_equals(self->keys[it_129],key)) {
                __result_obj__22 = (struct sClass*)come_increment_ref_count(self->items[it_129]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__22,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__22;
            }
            it_129++;
            if(            it_129>=self->size) {
                it_129=0;
            }
            else if(            it_129==hash_128) {
                __result_obj__23 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__23,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__23;
            }
        }
        else {
            __result_obj__24 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__24,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__24;
        }
    }
    __result_obj__25 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__25,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__25;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_130;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_131;
    it_130=self->head;
    while(    it_130!=((void*)0)) {
        prev_it_131=it_130;
        it_130=it_130->next;
        /*c*/ come_call_finalizer3(prev_it_131,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sType$ph* it_132;
struct list_item$1sType$ph* prev_it_133;
    it_132=self->head;
    while(    it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        /*c*/ come_call_finalizer3(prev_it_133,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_134;
struct list_item$1sNode$ph* prev_it_135;
    it_134=self->head;
    while(    it_134!=((void*)0)) {
        prev_it_135=it_134;
        it_134=it_134->next;
        /*c*/ come_call_finalizer3(prev_it_135,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_136;
struct list_item$1char$ph* prev_it_137;
    it_136=self->head;
    while(    it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*c*/ come_call_finalizer3(prev_it_137,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_143;
struct list_item$1char$ph* it_144;
struct list$1char$ph* __result_obj__29;
    it2_143=0;
    it_144=self->head;
    while(    it_144!=((void*)0)) {
        if(        string_equals(it_144->item,item)) {
            list$1char$ph_delete(self,it2_143,it2_143+1);
            break;
        }
        it2_143++;
        it_144=it_144->next;
    }
    __result_obj__29 = self;
    return __result_obj__29;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_145;
struct list$1char$ph* __result_obj__26;
struct list_item$1char$ph* it_148;
int i_149;
struct list_item$1char$ph* prev_it_150;
struct list_item$1char$ph* it_151;
int i_152;
struct list_item$1char$ph* prev_it_153;
struct list_item$1char$ph* it_154;
struct list_item$1char$ph* head_prev_it_155;
struct list_item$1char$ph* tail_it_156;
int i_157;
struct list_item$1char$ph* prev_it_158;
struct list$1char$ph* __result_obj__28;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_145=tail;
        tail=head;
        head=tmp_145;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__26 = self;
        return __result_obj__26;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_148=self->head;
        i_149=0;
        while(        it_148!=((void*)0)) {
            if(            i_149<tail) {
                prev_it_150=it_148;
                it_148=it_148->next;
                i_149++;
                /*c*/ come_call_finalizer3(prev_it_150,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_149==tail) {
                self->head=it_148;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_148=it_148->next;
                i_149++;
            }
        }
    }
    else if(    tail==self->len) {
        it_151=self->head;
        i_152=0;
        while(        it_151!=((void*)0)) {
            if(            i_152==head) {
                self->tail=it_151->prev;
                self->tail->next=((void*)0);
            }
            if(            i_152>=head) {
                prev_it_153=it_151;
                it_151=it_151->next;
                i_152++;
                /*c*/ come_call_finalizer3(prev_it_153,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_151=it_151->next;
                i_152++;
            }
        }
    }
    else {
        it_154=self->head;
        head_prev_it_155=((void*)0);
        tail_it_156=((void*)0);
        i_157=0;
        while(        it_154!=((void*)0)) {
            if(            i_157==head) {
                head_prev_it_155=it_154->prev;
            }
            if(            i_157==tail) {
                tail_it_156=it_154;
            }
            if(            i_157>=head&&i_157<tail) {
                prev_it_158=it_154;
                it_154=it_154->next;
                i_157++;
                /*c*/ come_call_finalizer3(prev_it_158,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_154=it_154->next;
                i_157++;
            }
        }
        if(        head_prev_it_155!=((void*)0)) {
            head_prev_it_155->next=tail_it_156;
        }
        if(        tail_it_156!=((void*)0)) {
            tail_it_156->prev=head_prev_it_155;
        }
    }
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_146;
struct list_item$1char$ph* prev_it_147;
struct list$1char$ph* __result_obj__27;
    it_146=self->head;
    while(    it_146!=((void*)0)) {
        prev_it_147=it_146;
        it_146=it_146->next;
        /*c*/ come_call_finalizer3(prev_it_147,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_185;
unsigned int it_186;
_Bool same_key_exist_187;
char* it2_188;
struct map$2char$phsType$ph* __result_obj__41;
    if(    self->len*10>=self->size) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_185=string_get_hash_key(((char*)key))%self->size;
    it_186=hash_185;
    while(    (_Bool)1) {
        if(        self->item_existance[it_186]) {
            if(            string_equals(self->keys[it_186],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_186]);
                    (self->keys[it_186] = come_decrement_ref_count(self->keys[it_186], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_186]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_186]);
                    self->keys[it_186]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_186],sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_186]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_186]=item;
                }
                break;
            }
            it_186++;
            if(            it_186>=self->size) {
                it_186=0;
            }
            else if(            it_186==hash_185) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_186]=(_Bool)1;
            if(            1) {
                self->keys[it_186]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_186]=key;
            }
            if(            1) {
                self->items[it_186]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_186]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_187=(_Bool)0;
    for(    it2_188=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_188=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_188,key)) {
            same_key_exist_187=(_Bool)1;
        }
    }
    if(    !same_key_exist_187) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__41 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__41;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_168;
void* __right_value213 = (void*)0;
char** keys_169;
void* __right_value214 = (void*)0;
struct sType** items_170;
void* __right_value215 = (void*)0;
_Bool* item_existance_171;
int len_172;
char* it_175;
struct sType* default_value_178;
void* __right_value216 = (void*)0;
struct sType* it2_179;
unsigned int hash_182;
int n_183;
struct sType* default_value_184;
void* __right_value217 = (void*)0;
default_value_178 = (void*)0;
default_value_184 = (void*)0;
    size_168=self->size*10;
    keys_169=(char**)come_increment_ref_count(((char**)(__right_value213=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_168)), "./comelang.h", 2153, "char**"))));
    items_170=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value214=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size_168)), "./comelang.h", 2154, "struct sType**"))));
    item_existance_171=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value215=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_168)), "./comelang.h", 2155, "_Bool*"))));
    len_172=0;
    for(    it_175=map$2char$phsType$ph_begin(self);    !map$2char$phsType$ph_end(self);    it_175=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_178,0,sizeof(struct sType*));
        it2_179=((struct sType*)(__right_value216=map$2char$phsType$ph_at(self,it_175,(struct sType*)come_increment_ref_count(default_value_178))));
        /*c*/ come_call_finalizer3(__right_value216,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_182=string_get_hash_key(((char*)it_175))%size_168;
        n_183=hash_182;
        while(        (_Bool)1) {
            if(            item_existance_171[n_183]) {
                n_183++;
                if(                n_183>=size_168) {
                    n_183=0;
                }
                else if(                n_183==hash_182) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_171[n_183]=(_Bool)1;
                keys_169[n_183]=it_175;
                items_170[n_183]=((struct sType*)(__right_value217=map$2char$phsType$ph_at(self,it_175,(struct sType*)come_increment_ref_count(default_value_184))));
                /*c*/ come_call_finalizer3(__right_value217,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_172++;
                /*c*/ come_call_finalizer3(default_value_184,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_184,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_178,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_169;
    self->items=items_170;
    self->item_existance=item_existance_171;
    self->size=size_168;
    self->len=len_172;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_173;
char* __result_obj__31;
char* __result_obj__32;
char* result_174;
char* __result_obj__33;
result_173 = (void*)0;
result_174 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_173,0,sizeof(char*));
        __result_obj__31 = result_173;
        return __result_obj__31;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__32 = self->key_list->it->item;
        return __result_obj__32;
    }
    memset(&result_174,0,sizeof(char*));
    __result_obj__33 = result_174;
    return __result_obj__33;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_176;
char* __result_obj__34;
char* __result_obj__35;
char* result_177;
char* __result_obj__36;
result_176 = (void*)0;
result_177 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_176,0,sizeof(char*));
        __result_obj__34 = result_176;
        return __result_obj__34;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__35 = self->key_list->it->item;
        return __result_obj__35;
    }
    memset(&result_177,0,sizeof(char*));
    __result_obj__36 = result_177;
    return __result_obj__36;
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_180;
unsigned int it_181;
struct sType* __result_obj__37;
struct sType* __result_obj__38;
struct sType* __result_obj__39;
struct sType* __result_obj__40;
    hash_180=string_get_hash_key(((char*)key))%self->size;
    it_181=hash_180;
    while(    (_Bool)1) {
        if(        self->item_existance[it_181]) {
            if(            string_equals(self->keys[it_181],key)) {
                __result_obj__37 = (struct sType*)come_increment_ref_count(self->items[it_181]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__37,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__37;
            }
            it_181++;
            if(            it_181>=self->size) {
                it_181=0;
            }
            else if(            it_181==hash_180) {
                __result_obj__38 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__38,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__39,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__40,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__40;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value222 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_190;
struct tuple2$2char$phsType$ph* __dec_obj25;
void* __right_value223 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_191;
struct tuple2$2char$phsType$ph* __dec_obj26;
void* __right_value224 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_192;
struct tuple2$2char$phsType$ph* __dec_obj27;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__42;
    if(    self->len==0) {
        litem_190=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value222=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        __dec_obj25=litem_190->item,
        litem_190->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj25,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1) {
        litem_191=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value223=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        __dec_obj26=litem_191->item,
        litem_191->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value224=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        __dec_obj27=litem_192->item,
        litem_192->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__42 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__42;
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
struct tuple2$2char$phsType$ph* __result_obj__43;
void* __right_value229 = (void*)0;
struct tuple2$2char$phsType$ph* result_193;
void* __right_value230 = (void*)0;
char* __dec_obj28;
void* __right_value268 = (void*)0;
struct sType* __dec_obj52;
struct tuple2$2char$phsType$ph* __result_obj__60;
    if(    self==(void*)0) {
        __result_obj__43 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__43,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__43;
    }
    result_193=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj28=result_193->v1,
        result_193->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj52=result_193->v2,
        result_193->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__60 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_193);
    /*c*/ come_call_finalizer3(result_193,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__60,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__44;
void* __right_value231 = (void*)0;
struct sType* result_194;
void* __right_value232 = (void*)0;
struct sType* __dec_obj29;
void* __right_value233 = (void*)0;
struct sType* __dec_obj30;
void* __right_value241 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value242 = (void*)0;
struct sType* __dec_obj35;
void* __right_value244 = (void*)0;
struct sNode* __dec_obj36;
void* __right_value245 = (void*)0;
struct sNode* __dec_obj37;
void* __right_value246 = (void*)0;
char* __dec_obj38;
void* __right_value247 = (void*)0;
char* __dec_obj39;
void* __right_value248 = (void*)0;
char* __dec_obj40;
void* __right_value256 = (void*)0;
struct list$1sNode$ph* __dec_obj44;
void* __right_value257 = (void*)0;
char* __dec_obj45;
void* __right_value258 = (void*)0;
struct list$1sType$ph* __dec_obj46;
void* __right_value266 = (void*)0;
struct list$1char$ph* __dec_obj50;
void* __right_value267 = (void*)0;
struct sType* __dec_obj51;
struct sType* __result_obj__59;
    if(    self==(void*)0) {
        __result_obj__44 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__44,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__44;
    }
    result_194=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_194->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj29=result_194->mOriginalLoadVarType,
        result_194->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj30=result_194->mChannelType,
        result_194->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj34=result_194->mGenericsTypes,
        result_194->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj35=result_194->mNoSolvedGenericsType,
        result_194->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj36=result_194->mSizeNum,
        result_194->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj37=result_194->mAlignas,
        result_194->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj38=result_194->mTupleName,
        result_194->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj39=result_194->mAttribute,
        result_194->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_194->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_194->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_194->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_194->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_194->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_194->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_194->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_194->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_194->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_194->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_194->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_194->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_194->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_194->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_194->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_194->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_194->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_194->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_194->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_194->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_194->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_194->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_194->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj40=result_194->mAsmName,
        result_194->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_194->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_194->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_194->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj44=result_194->mArrayNum,
        result_194->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj44,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_194->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_194->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_194->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_194->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_194->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj45=result_194->mOriginalTypeName,
        result_194->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_194->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_194->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_194->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_194->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj46=result_194->mParamTypes,
        result_194->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj50=result_194->mParamNames,
        result_194->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj50,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj51=result_194->mResultType,
        result_194->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_194->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_194->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)) {
        result_194->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__59 = (struct sType*)come_increment_ref_count(result_194);
    /*c*/ come_call_finalizer3(result_194,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__45;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct list$1sType$ph* result_195;
struct list_item$1sType$ph* it_196;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct list$1sType$ph* __result_obj__48;
    if(    self==((void*)0)) {
        __result_obj__45 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__45,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__45;
    }
    result_195=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_196=self->head;
    while(    it_196!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_195,(struct sType*)come_increment_ref_count(sType_clone(it_196->item)));
        }
        else {
            list$1sType$ph_add(result_195,(struct sType*)come_increment_ref_count(sType_clone(it_196->item)));
        }
        it_196=it_196->next;
    }
    __result_obj__48 = (struct list$1sType$ph*)come_increment_ref_count(result_195);
    /*c*/ come_call_finalizer3(result_195,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__48,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__46;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__46 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__46,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__46;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value236 = (void*)0;
struct list_item$1sType$ph* litem_197;
struct sType* __dec_obj31;
void* __right_value237 = (void*)0;
struct list_item$1sType$ph* litem_198;
struct sType* __dec_obj32;
void* __right_value238 = (void*)0;
struct list_item$1sType$ph* litem_199;
struct sType* __dec_obj33;
struct list$1sType$ph* __result_obj__47;
    if(    self->len==0) {
        litem_197=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value236=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        __dec_obj31=litem_197->item,
        litem_197->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1) {
        litem_198=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value237=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        __dec_obj32=litem_198->item,
        litem_198->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value238=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        __dec_obj33=litem_199->item,
        litem_199->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result_obj__47 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__47;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_200;
struct list_item$1sType$ph* prev_it_201;
    it_200=self->head;
    while(    it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        /*c*/ come_call_finalizer3(prev_it_201,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__49;
void* __right_value243 = (void*)0;
struct sNode* result_202;
struct sNode* __result_obj__50;
    if(    self==(void*)0) {
        __result_obj__49 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__49) ? __result_obj__49 = come_decrement_ref_count(__result_obj__49, ((struct sNode*)__result_obj__49)->finalize, ((struct sNode*)__result_obj__49)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__49;
    }
    result_202=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_202->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_202->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_202->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_202->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_202->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_202->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_202->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_202->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_202->kind=self->kind;
    }
    __result_obj__50 = (struct sNode*)come_increment_ref_count(result_202);
    ((result_202) ? result_202 = come_decrement_ref_count(result_202, ((struct sNode*)result_202)->finalize, ((struct sNode*)result_202)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__50) ? __result_obj__50 = come_decrement_ref_count(__result_obj__50, ((struct sNode*)__result_obj__50)->finalize, ((struct sNode*)__result_obj__50)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__50;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__51;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sNode$ph* result_203;
struct list_item$1sNode$ph* it_204;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1sNode$ph* __result_obj__54;
    if(    self==((void*)0)) {
        __result_obj__51 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__51,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__51;
    }
    result_203=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_204=self->head;
    while(    it_204!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_203,(struct sNode*)come_increment_ref_count(sNode_clone(it_204->item)));
        }
        else {
            list$1sNode$ph_add(result_203,(struct sNode*)come_increment_ref_count(sNode_clone(it_204->item)));
        }
        it_204=it_204->next;
    }
    __result_obj__54 = (struct list$1sNode$ph*)come_increment_ref_count(result_203);
    /*c*/ come_call_finalizer3(result_203,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__54,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__54;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__52;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__52 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__52,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__52;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value251 = (void*)0;
struct list_item$1sNode$ph* litem_205;
struct sNode* __dec_obj41;
void* __right_value252 = (void*)0;
struct list_item$1sNode$ph* litem_206;
struct sNode* __dec_obj42;
void* __right_value253 = (void*)0;
struct list_item$1sNode$ph* litem_207;
struct sNode* __dec_obj43;
struct list$1sNode$ph* __result_obj__53;
    if(    self->len==0) {
        litem_205=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value251=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        __dec_obj41=litem_205->item,
        litem_205->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value252=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        __dec_obj42=litem_206->item,
        litem_206->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value253=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        __dec_obj43=litem_207->item,
        litem_207->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__53 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__53;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_208;
struct list_item$1sNode$ph* prev_it_209;
    it_208=self->head;
    while(    it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*c*/ come_call_finalizer3(prev_it_209,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__55;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1char$ph* result_210;
struct list_item$1char$ph* it_211;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1char$ph* __result_obj__58;
    if(    self==((void*)0)) {
        __result_obj__55 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__55,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__55;
    }
    result_210=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_211=self->head;
    while(    it_211!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_210,(char*)come_increment_ref_count((char*)come_memdup(it_211->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_210,(char*)come_increment_ref_count((char*)come_memdup(it_211->item, "./comelang.h", 1032, "char*")));
        }
        it_211=it_211->next;
    }
    __result_obj__58 = (struct list$1char$ph*)come_increment_ref_count(result_210);
    /*c*/ come_call_finalizer3(result_210,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__58,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__58;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__56;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__56 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__56,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__56;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value261 = (void*)0;
struct list_item$1char$ph* litem_212;
char* __dec_obj47;
void* __right_value262 = (void*)0;
struct list_item$1char$ph* litem_213;
char* __dec_obj48;
void* __right_value263 = (void*)0;
struct list_item$1char$ph* litem_214;
char* __dec_obj49;
struct list$1char$ph* __result_obj__57;
    if(    self->len==0) {
        litem_212=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value261=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        __dec_obj47=litem_212->item,
        litem_212->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value262=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        __dec_obj48=litem_213->item,
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value263=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        __dec_obj49=litem_214->item,
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__57 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__57;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_215;
struct list_item$1char$ph* prev_it_216;
    it_215=self->head;
    while(    it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        /*c*/ come_call_finalizer3(prev_it_216,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_217;
    result_217=0;
    result_217+=int_get_hash_key(((int)self->v1));
    result_217+=int_get_hash_key(((int)self->v2));
    return result_217;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_218;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_219;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_218=left->head;
    it2_219=right->head;
    while(    it_218!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_218->item,it2_219->item)) {
            return (_Bool)0;
        }
        it_218=it_218->next;
        it2_219=it2_219->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_220;
struct list_item$1sType$ph* it2_221;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_220=left->head;
    it2_221=right->head;
    while(    it_220!=((void*)0)) {
        if(        !sType_equals(it_220->item,it2_221->item)) {
            return (_Bool)0;
        }
        it_220=it_220->next;
        it2_221=it2_221->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_222;
struct list_item$1sNode$ph* it2_223;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_222=left->head;
    it2_223=right->head;
    while(    it_222!=((void*)0)) {
        if(        !sNode_equals(it_222->item,it2_223->item)) {
            return (_Bool)0;
        }
        it_222=it_222->next;
        it2_223=it2_223->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_224;
struct list_item$1char$ph* it2_225;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_224=left->head;
    it2_225=right->head;
    while(    it_224!=((void*)0)) {
        if(        !string_equals(it_224->item,it2_225->item)) {
            return (_Bool)0;
        }
        it_224=it_224->next;
        it2_225=it2_225->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj53;
struct sType* __dec_obj54;
struct tuple2$2char$phsType$ph* __result_obj__61;
    __dec_obj53=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj54=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__61 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__61,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__61;
}

void create_pico_version_header(){
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* Value_226;
_Bool _if_conditional4;
int version_major_227;
char* p_228;
int version_miner_229;
char* p_230;
int version_revision_231;
char* p_232;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
char* version_string_233;
int Value_234;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
    if(    getenv("PICO_SDK_PATH")) {
        Value_226=(char*)come_increment_ref_count(charp_read((((char*)(__right_value296=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_if_conditional4=(Value_226)),        (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional4) {
            version_major_227=0;
            p_228=strstr(Value_226,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_228) {
                p_228+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(                *p_228==32||*p_228==9) {
                    p_228++;
                }
                while(                xisdigit(*p_228)) {
                    version_major_227=version_major_227*10+(*p_228-48);
                    p_228++;
                }
            }
            version_miner_229=0;
            p_230=strstr(Value_226,"set(PICO_SDK_VERSION_MINOR");
            if(            p_230) {
                p_230+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(                *p_230==32||*p_230==9) {
                    p_230++;
                }
                while(                xisdigit(*p_230)) {
                    version_miner_229=version_miner_229*10+*p_230-48;
                    p_230++;
                }
            }
            version_revision_231=0;
            p_232=strstr(Value_226,"set(PICO_SDK_VERSION_REVISION");
            if(            p_232) {
                p_232+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(                *p_232==32||*p_232==9) {
                    p_232++;
                }
                while(                xisdigit(*p_232)) {
                    version_revision_231=version_revision_231*10+*p_232-48;
                    p_232++;
                }
            }
            version_string_233=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value298=int_to_string(version_major_227))),((char*)(__right_value299=int_to_string(version_miner_229))),((char*)(__right_value300=int_to_string(version_revision_231)))));
            (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value300 = come_decrement_ref_count(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            Value_234=system("mkdir -p pico");
            if(            !Value_234) {
                charp_write(((char*)(__right_value306=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value302=int_to_string(version_major_227))),((char*)(__right_value303=int_to_string(version_miner_229))),((char*)(__right_value304=int_to_string(version_revision_231))),((char*)(__right_value305=string_to_string(version_string_233)))))),"pico/version.h",(_Bool)0);
                (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            (version_string_233 = come_decrement_ref_count(version_string_233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        (Value_226 = come_decrement_ref_count(Value_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main(int argc, char** argv){
int start_num_235;
void* __right_value307 = (void*)0;
char* output_file_name_str_236;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct buffer* clang_option_237;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct buffer* linker_option_238;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct buffer* cpp_option_239;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1char$ph* files_240;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct list$1char$ph* object_files_241;
_Bool output_object_file_242;
_Bool output_cpp_file_243;
_Bool output_source_file_flag_244;
_Bool output_object_file_flag_245;
char* output_file_name_246;
_Bool verbose_247;
_Bool come_debug_248;
_Bool come_malloc_249;
_Bool m5stack_cpp_250;
_Bool pico_cpp_251;
_Bool emb_cpp_252;
_Bool gcc_compiler_253;
int i_254;
void* __right_value318 = (void*)0;
char* ext_name_255;
void* __right_value319 = (void*)0;
char* __dec_obj55;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* env_256;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct buffer* __dec_obj56;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
char* env_257;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct buffer* __dec_obj57;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
_Bool _elif_conditional1;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
_Bool _elif_conditional2;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
_Bool _elif_conditional3;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
int Value_258;
_Bool _if_conditional5;
_Bool __exception_result_var_b12;
struct _IO_FILE* Value_259;
_Bool __exception_result_var_b13;
void* __right_value409 = (void*)0;
char* tmp_file_260;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
int Value_264;
_Bool _if_conditional6;
_Bool __exception_result_var_b14;
struct sInfo info_265;
void* __right_value417 = (void*)0;
char* __dec_obj58;
void* __right_value418 = (void*)0;
char* __dec_obj59;
void* __right_value419 = (void*)0;
char* __dec_obj60;
void* __right_value420 = (void*)0;
char* __dec_obj61;
void* __right_value421 = (void*)0;
char* __dec_obj62;
void* __right_value422 = (void*)0;
void* __right_value428 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj64;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj65;
void* __right_value431 = (void*)0;
void* __right_value437 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj67;
void* __right_value438 = (void*)0;
void* __right_value444 = (void*)0;
struct map$2char$phchar$ph* __dec_obj69;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj70;
void* __right_value447 = (void*)0;
void* __right_value453 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj72;
void* __right_value454 = (void*)0;
void* __right_value460 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj74;
void* __right_value461 = (void*)0;
void* __right_value467 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj76;
void* __right_value468 = (void*)0;
void* __right_value474 = (void*)0;
struct map$2char$phsType$ph* __dec_obj78;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sModule* __dec_obj79;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj80;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct list$1CVALUE$ph* __dec_obj81;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sVarTable* __dec_obj82;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sVarTable* lv_table_311;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1char$ph* __dec_obj83;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1char$ph* __dec_obj84;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj85;
void* __right_value491 = (void*)0;
char* __dec_obj86;
_Bool Value_313;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct buffer* __dec_obj87;
_Bool Value_314;
_Bool Value_315;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
_Bool Value_318;
_Bool Value_319;
_Bool Value_320;
_Bool Value_321;
_Bool Value_322;
_Bool Value_323;
_Bool Value_324;
_Bool Value_325;
int start_num_326;
char* output_file_name_str_327;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct buffer* clang_option_328;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct buffer* linker_option_329;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct buffer* cpp_option_330;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1char$ph* files_331;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1char$ph* object_files_332;
_Bool output_object_file_333;
_Bool output_cpp_file_334;
_Bool output_source_file_flag_335;
_Bool output_object_file_flag_336;
char* output_file_name_337;
_Bool verbose_338;
_Bool come_debug_339;
_Bool come_malloc_340;
_Bool m5stack_cpp_341;
_Bool pico_cpp_342;
_Bool emb_cpp_343;
_Bool gcc_compiler_344;
int i_345;
void* __right_value508 = (void*)0;
char* ext_name_346;
void* __right_value509 = (void*)0;
char* __dec_obj88;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* env_347;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct buffer* __dec_obj89;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* env_348;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct buffer* __dec_obj90;
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
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
_Bool _elif_conditional4;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
_Bool _elif_conditional5;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
_Bool _elif_conditional6;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1char$ph* o2_saved_349;
char* it_350;
struct sInfo info_351;
struct _IO_FILE* Value_352;
void* __right_value598 = (void*)0;
char* __dec_obj91;
void* __right_value599 = (void*)0;
char* __dec_obj92;
void* __right_value600 = (void*)0;
char* __dec_obj93;
void* __right_value601 = (void*)0;
char* __dec_obj94;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj95;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj96;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj97;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct map$2char$phchar$ph* __dec_obj98;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj99;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj100;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj101;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj102;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct map$2char$phsType$ph* __dec_obj103;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sModule* __dec_obj104;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj105;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct list$1CVALUE$ph* __dec_obj106;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sVarTable* __dec_obj107;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sVarTable* lv_table_353;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct list$1char$ph* __dec_obj108;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1char$ph* __dec_obj109;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj110;
_Bool Value_354;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct buffer* __dec_obj111;
void* __right_value639 = (void*)0;
char* __dec_obj112;
char* __dec_obj113;
_Bool Value_355;
_Bool Value_356;
_Bool Value_357;
_Bool Value_358;
struct sInfo info_359;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* __dec_obj114;
void* __right_value642 = (void*)0;
char* __dec_obj115;
void* __right_value643 = (void*)0;
char* __dec_obj116;
void* __right_value644 = (void*)0;
char* __dec_obj117;
char* __dec_obj118;
_Bool Value_366;
memset(&info_265, 0, sizeof(struct sInfo));
memset(&info_351, 0, sizeof(struct sInfo));
memset(&info_359, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        start_num_235=2;
        output_file_name_str_236=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_237=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 795, "struct buffer*"))));
        linker_option_238=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 796, "struct buffer*"))));
        cpp_option_239=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 797, "struct buffer*"))));
        buffer_append_str(cpp_option_239,"-U__GNUC__");
        files_240=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 799, "struct list$1char$ph*"))));
        object_files_241=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 800, "struct list$1char$ph*"))));
        output_object_file_242=(_Bool)0;
        output_cpp_file_243=(_Bool)0;
        output_source_file_flag_244=(_Bool)0;
        output_object_file_flag_245=(_Bool)1;
        output_file_name_246=(char*)come_increment_ref_count(output_file_name_str_236);
        verbose_247=(_Bool)0;
        come_debug_248=(_Bool)0;
        come_malloc_249=(_Bool)0;
        m5stack_cpp_250=(_Bool)0;
        pico_cpp_251=(_Bool)0;
        emb_cpp_252=(_Bool)0;
        gcc_compiler_253=(_Bool)0;
        for(        i_254=start_num_235;        i_254<argc;        i_254++        ){
            ext_name_255=(char*)come_increment_ref_count(xextname(argv[i_254]));
            if(            charp_operator_equals(argv[i_254],"-o")&&i_254+1<argc) {
                __dec_obj55=output_file_name_246,
                output_file_name_246=(char*)come_increment_ref_count(__builtin_string(argv[i_254+1]));
                __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                i_254++;
            }
            else if(            charp_operator_equals(argv[i_254],"-e")&&i_254+1<argc) {
                buffer_append_str(linker_option_238,((char*)(__right_value321=xsprintf("-e \%s",((char*)(__right_value320=charp_to_string(argv[i_254+1])))))));
                (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_254++;
            }
            else if(            charp_operator_equals(argv[i_254],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_254],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_254],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_239,((char*)(__right_value322=xsprintf(" -DENABLE_GC "))));
                (__right_value322 = come_decrement_ref_count(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-gcc")) {
                gcc_compiler_253=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_254],"-pico")) {
                output_source_file_flag_244=(_Bool)1;
                output_object_file_flag_245=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_256=getenv("PICO_SDK_PATH");
                __dec_obj56=cpp_option_239,
                cpp_option_239=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 843, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj56,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_239,((char*)(__right_value327=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value325=charp_to_string(env_256))),((char*)(__right_value326=charp_to_string(env_256)))))));
                (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_251=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_254],"-emb")) {
                output_source_file_flag_244=(_Bool)1;
                output_object_file_flag_245=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                emb_cpp_252=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_254],"-m5stack")) {
                m5stack_cpp_250=(_Bool)1;
                output_source_file_flag_244=(_Bool)1;
                output_object_file_flag_245=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_257=getenv("IDF_PATH");
                __dec_obj57=cpp_option_239,
                cpp_option_239=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 860, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj57,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_239,((char*)(__right_value351=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value330=charp_to_string(getenv("HOME")))),((char*)(__right_value331=charp_to_string(env_257))),((char*)(__right_value332=charp_to_string(env_257))),((char*)(__right_value333=charp_to_string(env_257))),((char*)(__right_value334=charp_to_string(env_257))),((char*)(__right_value335=charp_to_string(env_257))),((char*)(__right_value336=charp_to_string(env_257))),((char*)(__right_value337=charp_to_string(env_257))),((char*)(__right_value338=charp_to_string(env_257))),((char*)(__right_value339=charp_to_string(env_257))),((char*)(__right_value340=charp_to_string(env_257))),((char*)(__right_value341=charp_to_string(env_257))),((char*)(__right_value342=charp_to_string(env_257))),((char*)(__right_value343=charp_to_string(env_257))),((char*)(__right_value344=charp_to_string(env_257))),((char*)(__right_value345=charp_to_string(env_257))),((char*)(__right_value346=charp_to_string(env_257))),((char*)(__right_value347=charp_to_string(env_257))),((char*)(__right_value348=charp_to_string(env_257))),((char*)(__right_value349=charp_to_string(env_257))),((char*)(__right_value350=charp_to_string(env_257)))))),"/usr/local/");
                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_254+1<argc&&charp_operator_equals(argv[i_254],"-target")) {
                buffer_append_str(clang_option_237,((char*)(__right_value353=xsprintf("-target \%s",((char*)(__right_value352=charp_to_string(argv[i_254+1])))))));
                (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value353 = come_decrement_ref_count(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_254++;
            }
            else if(            i_254+1<argc&&charp_operator_equals(argv[i_254],"-T")) {
                buffer_append_str(clang_option_237,((char*)(__right_value355=xsprintf(" -T \%s ",((char*)(__right_value354=charp_to_string(argv[i_254+1])))))));
                (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_254++;
            }
            else if(            charp_operator_equals(argv[i_254],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_254],"-cg")) {
                come_debug_248=(_Bool)1;
                buffer_append_str(clang_option_237,"-g ");
            }
            else if(            charp_operator_equals(argv[i_254],"-C")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value357=xsprintf("\%s ",((char*)(__right_value356=charp_to_string(argv[i_254])))))));
                (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-M")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value359=xsprintf("\%s ",((char*)(__right_value358=charp_to_string(argv[i_254])))))));
                (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-MM")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value361=xsprintf("\%s ",((char*)(__right_value360=charp_to_string(argv[i_254])))))));
                (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-dM")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value363=xsprintf("\%s ",((char*)(__right_value362=charp_to_string(argv[i_254])))))));
                (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-dD")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value365=xsprintf("\%s ",((char*)(__right_value364=charp_to_string(argv[i_254])))))));
                (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-H")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value367=xsprintf("\%s ",((char*)(__right_value366=charp_to_string(argv[i_254])))))));
                (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-P")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value369=xsprintf("\%s ",((char*)(__right_value368=charp_to_string(argv[i_254])))))));
                (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-nostdinc")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value371=xsprintf("\%s ",((char*)(__right_value370=charp_to_string(argv[i_254])))))));
                (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-CC")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value373=xsprintf("\%s ",((char*)(__right_value372=charp_to_string(argv[i_254])))))));
                (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_254+1<argc&&charp_operator_equals(argv[i_254],"-target")) {
                buffer_append_str(clang_option_237,((char*)(__right_value375=xsprintf("-target \%s",((char*)(__right_value374=charp_to_string(argv[i_254+1])))))));
                (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_254++;
            }
            else if(            i_254+1<argc&&charp_operator_equals(argv[i_254],"-include")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value377=xsprintf("-iclude \%s",((char*)(__right_value376=charp_to_string(argv[i_254+1])))))));
                (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_254++;
            }
            else if(            i_254+1<argc&&charp_operator_equals(argv[i_254],"-isystem")) {
                buffer_append_str(cpp_option_239,((char*)(__right_value379=xsprintf("-isystem \%s",((char*)(__right_value378=charp_to_string(argv[i_254+1])))))));
                (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_237,((char*)(__right_value381=xsprintf("-isystem \%s",((char*)(__right_value380=charp_to_string(argv[i_254+1])))))));
                (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_254++;
            }
            else if(            i_254+1<argc&&charp_operator_equals(argv[i_254],"-T")) {
                buffer_append_str(clang_option_237,((char*)(__right_value383=xsprintf(" -T \%s ",((char*)(__right_value382=charp_to_string(argv[i_254+1])))))));
                (__right_value382 = come_decrement_ref_count(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value383 = come_decrement_ref_count(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_254++;
            }
            else if(            charp_operator_equals(argv[i_254],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_254],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value385=charp_operator_load_range_element(argv[i_254],0,2))),"-O"))),            (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_237,((char*)(__right_value387=xsprintf(" \%s ",((char*)(__right_value386=charp_to_string(argv[i_254])))))));
                (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_248=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value389=charp_operator_load_range_element(argv[i_254],0,2))),"-D"))),            (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_239,((char*)(__right_value391=xsprintf(" \%s ",((char*)(__right_value390=charp_to_string(argv[i_254])))))));
                (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_237,((char*)(__right_value393=xsprintf(" \%s ",((char*)(__right_value392=charp_to_string(argv[i_254])))))));
                (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value393 = come_decrement_ref_count(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value395=charp_operator_load_range_element(argv[i_254],0,2))),"-U"))),            (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(cpp_option_239,((char*)(__right_value397=xsprintf(" \%s ",((char*)(__right_value396=charp_to_string(argv[i_254])))))));
                (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_237,((char*)(__right_value399=xsprintf(" \%s ",((char*)(__right_value398=charp_to_string(argv[i_254])))))));
                (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value399 = come_decrement_ref_count(__right_value399, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-g")) {
                buffer_append_str(clang_option_237,"-g ");
            }
            else if(            charp_operator_equals(argv[i_254],"-v")) {
                buffer_append_str(clang_option_237,"-v ");
                buffer_append_str(cpp_option_239,"-v ");
                verbose_247=(_Bool)1;
            }
            else if(            strlen(argv[i_254])>=2&&memcmp(argv[i_254],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_239,((char*)(__right_value402=string_operator_add(((char*)(__right_value401=charp_operator_add(" ",argv[i_254])))," "))));
                (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_254],"-gdwarf-4")) {
                buffer_append_str(clang_option_237,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_254],"-s")||charp_operator_equals(argv[i_254],"-S")) {
                output_source_file_flag_244=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_254],"-c")) {
                output_object_file_242=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_254],"-E")) {
                output_cpp_file_243=(_Bool)1;
            }
            else if(            argv[i_254][0]==45) {
                buffer_append_str(clang_option_237,((char*)(__right_value403=charp_operator_add(argv[i_254]," "))));
                (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_254])>2&&memcmp(argv[i_254]+strlen(argv[i_254])-2,".o",2)==0) {
                list$1char$ph_push_back(object_files_241,(char*)come_increment_ref_count(__builtin_string(argv[i_254])));
            }
            else if(            strlen(argv[i_254])>2&&memcmp(argv[i_254]+strlen(argv[i_254])-2,".a",2)==0) {
                list$1char$ph_push_back(object_files_241,(char*)come_increment_ref_count(__builtin_string(argv[i_254])));
            }
            else if(            string_operator_equals(ext_name_255,"c")) {
                list$1char$ph_push_back(files_240,(char*)come_increment_ref_count(__builtin_string(argv[i_254])));
            }
            else {
                buffer_append_str(clang_option_237,((char*)(__right_value407=charp_operator_add(argv[i_254]," "))));
                (__right_value407 = come_decrement_ref_count(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_255 = come_decrement_ref_count(ext_name_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_248;
        gComeMalloc=come_malloc_249;
        Value_258=system(((char*)(__right_value408=xsprintf("%s %s",RM,output_file_name_246))));
        if(        (_if_conditional5=(Value_258<0)),        (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            (come_push_stackframe("02transpile.c", 999, 11),__exception_result_var_b12=die("rm"), come_pop_stackframe(), __exception_result_var_b12);
        }
        else {
        }
        Value_259=fopen(output_file_name_246,"w");
        if(        Value_259) {
            fclose(Value_259);
        }
        else {
            (come_push_stackframe("02transpile.c", 1006, 12),__exception_result_var_b13=die("fopen"), come_pop_stackframe(), __exception_result_var_b13);
        }
        tmp_file_260=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_264=system(((char*)(__right_value416=xsprintf("cat \%s > \%s",((char*)(__right_value414=string_to_string(((char*)(__right_value413=list$1char$ph_join(files_240," ")))))),((char*)(__right_value415=string_to_string(tmp_file_260)))))));
        if(        (_if_conditional6=(Value_264<0)),        (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value415 = come_decrement_ref_count(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value416 = come_decrement_ref_count(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 1012, 13),__exception_result_var_b14=die("cat"), come_pop_stackframe(), __exception_result_var_b14);
        }
        else {
        }
        memset(&info_265,0,sizeof(struct sInfo));
        __dec_obj58=info_265.base_sname,
        info_265.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_260));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj59=info_265.sname,
        info_265.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_260));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info_265.sline=1;
        info_265.err_num=0;
        __dec_obj60=info_265.clang_option,
        info_265.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_237));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj61=info_265.cpp_option,
        info_265.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_239));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj62=info_265.linker_option,
        info_265.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_238));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info_265.no_output_err=(_Bool)0;
        __dec_obj64=info_265.funcs,
        info_265.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1027, "struct map$2char$phsFun$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj64,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj65=info_265.uniq_funcs,
        info_265.uniq_funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1028, "struct map$2char$phsFun$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj65,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj67=info_265.struct_definition,
        info_265.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1029, "struct map$2char$phbuffer$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj67,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj69=info_265.uniq_definition,
        info_265.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1030, "struct map$2char$phchar$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj69,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj70=info_265.previous_struct_definition,
        info_265.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1031, "struct map$2char$phbuffer$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj70,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj72=info_265.generics_funcs,
        info_265.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1032, "struct map$2char$phsGenericsFun$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj72,map$2char$phsGenericsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj74=info_265.classes,
        info_265.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1033, "struct map$2char$phsClass$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj74,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj76=info_265.modules,
        info_265.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1034, "struct map$2char$phsClassModule$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj76,map$2char$phsClassModule$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj78=info_265.types,
        info_265.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1035, "struct map$2char$phsType$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj78,map$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj79=info_265.module,
        info_265.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc_v2(1, sizeof(struct sModule)*(1), "02transpile.c", 1036, "struct sModule*"))));
        /*b*/ come_call_finalizer3(__dec_obj79,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj80=info_265.right_value_objects,
        info_265.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1037, "struct list$1sRightValueObject$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj80,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj81=info_265.stack,
        info_265.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1038, "struct list$1CVALUE$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj81,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj82=info_265.gv_table,
        info_265.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1039, "struct sVarTable*")),(_Bool)1,((void*)0)));
        /*b*/ come_call_finalizer3(__dec_obj82,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        lv_table_311=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1040, "struct sVarTable*")),(_Bool)0,((void*)0)));
        info_265.lv_table=lv_table_311;
        __dec_obj83=info_265.generics_type_names,
        info_265.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1042, "struct list$1char$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj83,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj84=info_265.method_generics_type_names,
        info_265.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1043, "struct list$1char$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj84,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj85=info_265.generics_classes,
        info_265.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1044, "struct map$2char$phsClass$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj85,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info_265.verbose=verbose_247;
        info_265.output_header_file=(_Bool)1;
        static int n_312=0;
        info_265.num_source_files=n_312++;
        info_265.max_source_files=list$1char$ph_length(files_240);
        __dec_obj86=info_265.output_file_name,
        info_265.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_246));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        init_classes(&info_265);
        clear_tmp_file(&info_265);
        Value_313=cpp(&info_265);
        if(        !Value_313) {
            printf("transpile failed\n");
            system(((char*)(__right_value492=xsprintf("%s %s*",RM,tmp_file_260))));
            (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exit(2);
        }
        else {
        }
        __dec_obj87=info_265.source,
        info_265.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value494=charp_read(((char*)(__right_value493=xsprintf("%s.i",tmp_file_260))))))));
        /*b*/ come_call_finalizer3(__dec_obj87,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        info_265.p=info_265.source->buf;
        info_265.head=info_265.source->buf;
        Value_314=output_cpp_file_243;
        if(        !Value_314) {
            transpile(&info_265);
            Value_315=output_header_file(&info_265);
            if(            !Value_315) {
                printf("output source file failed\n");
                system(((char*)(__right_value496=xsprintf("%s %s*",RM,tmp_file_260))));
                (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value497=xsprintf("%s %s*",RM,tmp_file_260))));
        (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (output_file_name_str_236 = come_decrement_ref_count(output_file_name_str_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(clang_option_237,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(linker_option_238,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(cpp_option_239,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(files_240,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(object_files_241,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (output_file_name_246 = come_decrement_ref_count(output_file_name_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tmp_file_260 = come_decrement_ref_count(tmp_file_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3((&info_265),sInfo_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(lv_table_311,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        Value_318=new_project(argc,argv);
        if(        !Value_318) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        Value_319=run_project(argc,argv);
        if(        !Value_319) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        Value_320=make_header_project(argc,argv);
        if(        !Value_320) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        Value_321=compile_project(argc,argv);
        if(        !Value_321) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        Value_322=debug_run_project(argc,argv);
        if(        !Value_322) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        Value_323=clean_project(argc,argv);
        if(        !Value_323) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            Value_324=install_project(argc,argv,"/usr/local");
            if(            !Value_324) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3) {
            Value_325=install_project(argc,argv,argv[2]);
            if(            !Value_325) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        start_num_326=1;
        output_file_name_str_327=((void*)0);
        clang_option_328=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 795, "struct buffer*"))));
        linker_option_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 796, "struct buffer*"))));
        cpp_option_330=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 797, "struct buffer*"))));
        buffer_append_str(cpp_option_330,"-U__GNUC__");
        files_331=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 799, "struct list$1char$ph*"))));
        object_files_332=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 800, "struct list$1char$ph*"))));
        output_object_file_333=(_Bool)0;
        output_cpp_file_334=(_Bool)0;
        output_source_file_flag_335=(_Bool)0;
        output_object_file_flag_336=(_Bool)1;
        output_file_name_337=(char*)come_increment_ref_count(output_file_name_str_327);
        verbose_338=(_Bool)0;
        come_debug_339=(_Bool)0;
        come_malloc_340=(_Bool)0;
        m5stack_cpp_341=(_Bool)0;
        pico_cpp_342=(_Bool)0;
        emb_cpp_343=(_Bool)0;
        gcc_compiler_344=(_Bool)0;
        for(        i_345=start_num_326;        i_345<argc;        i_345++        ){
            ext_name_346=(char*)come_increment_ref_count(xextname(argv[i_345]));
            if(            charp_operator_equals(argv[i_345],"-o")&&i_345+1<argc) {
                __dec_obj88=output_file_name_337,
                output_file_name_337=(char*)come_increment_ref_count(__builtin_string(argv[i_345+1]));
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                i_345++;
            }
            else if(            charp_operator_equals(argv[i_345],"-e")&&i_345+1<argc) {
                buffer_append_str(linker_option_329,((char*)(__right_value511=xsprintf("-e \%s",((char*)(__right_value510=charp_to_string(argv[i_345+1])))))));
                (__right_value510 = come_decrement_ref_count(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_345++;
            }
            else if(            charp_operator_equals(argv[i_345],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_345],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_345],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_330,((char*)(__right_value512=xsprintf(" -DENABLE_GC "))));
                (__right_value512 = come_decrement_ref_count(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-gcc")) {
                gcc_compiler_344=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_345],"-pico")) {
                output_source_file_flag_335=(_Bool)1;
                output_object_file_flag_336=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_347=getenv("PICO_SDK_PATH");
                __dec_obj89=cpp_option_330,
                cpp_option_330=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 843, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj89,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_330,((char*)(__right_value517=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value515=charp_to_string(env_347))),((char*)(__right_value516=charp_to_string(env_347)))))));
                (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value517 = come_decrement_ref_count(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_342=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_345],"-emb")) {
                output_source_file_flag_335=(_Bool)1;
                output_object_file_flag_336=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                emb_cpp_343=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_345],"-m5stack")) {
                m5stack_cpp_341=(_Bool)1;
                output_source_file_flag_335=(_Bool)1;
                output_object_file_flag_336=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_348=getenv("IDF_PATH");
                __dec_obj90=cpp_option_330,
                cpp_option_330=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 860, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj90,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_330,((char*)(__right_value541=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value520=charp_to_string(getenv("HOME")))),((char*)(__right_value521=charp_to_string(env_348))),((char*)(__right_value522=charp_to_string(env_348))),((char*)(__right_value523=charp_to_string(env_348))),((char*)(__right_value524=charp_to_string(env_348))),((char*)(__right_value525=charp_to_string(env_348))),((char*)(__right_value526=charp_to_string(env_348))),((char*)(__right_value527=charp_to_string(env_348))),((char*)(__right_value528=charp_to_string(env_348))),((char*)(__right_value529=charp_to_string(env_348))),((char*)(__right_value530=charp_to_string(env_348))),((char*)(__right_value531=charp_to_string(env_348))),((char*)(__right_value532=charp_to_string(env_348))),((char*)(__right_value533=charp_to_string(env_348))),((char*)(__right_value534=charp_to_string(env_348))),((char*)(__right_value535=charp_to_string(env_348))),((char*)(__right_value536=charp_to_string(env_348))),((char*)(__right_value537=charp_to_string(env_348))),((char*)(__right_value538=charp_to_string(env_348))),((char*)(__right_value539=charp_to_string(env_348))),((char*)(__right_value540=charp_to_string(env_348)))))),"/usr/local/");
                (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value523 = come_decrement_ref_count(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value524 = come_decrement_ref_count(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value525 = come_decrement_ref_count(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value528 = come_decrement_ref_count(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value530 = come_decrement_ref_count(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value531 = come_decrement_ref_count(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value535 = come_decrement_ref_count(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value538 = come_decrement_ref_count(__right_value538, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value539 = come_decrement_ref_count(__right_value539, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value540 = come_decrement_ref_count(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value541 = come_decrement_ref_count(__right_value541, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_345+1<argc&&charp_operator_equals(argv[i_345],"-target")) {
                buffer_append_str(clang_option_328,((char*)(__right_value543=xsprintf("-target \%s",((char*)(__right_value542=charp_to_string(argv[i_345+1])))))));
                (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value543 = come_decrement_ref_count(__right_value543, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_345++;
            }
            else if(            i_345+1<argc&&charp_operator_equals(argv[i_345],"-T")) {
                buffer_append_str(clang_option_328,((char*)(__right_value545=xsprintf(" -T \%s ",((char*)(__right_value544=charp_to_string(argv[i_345+1])))))));
                (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_345++;
            }
            else if(            charp_operator_equals(argv[i_345],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_345],"-cg")) {
                come_debug_339=(_Bool)1;
                buffer_append_str(clang_option_328,"-g ");
            }
            else if(            charp_operator_equals(argv[i_345],"-C")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value547=xsprintf("\%s ",((char*)(__right_value546=charp_to_string(argv[i_345])))))));
                (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value547 = come_decrement_ref_count(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-M")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value549=xsprintf("\%s ",((char*)(__right_value548=charp_to_string(argv[i_345])))))));
                (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value549 = come_decrement_ref_count(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-MM")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value551=xsprintf("\%s ",((char*)(__right_value550=charp_to_string(argv[i_345])))))));
                (__right_value550 = come_decrement_ref_count(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value551 = come_decrement_ref_count(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-dM")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value553=xsprintf("\%s ",((char*)(__right_value552=charp_to_string(argv[i_345])))))));
                (__right_value552 = come_decrement_ref_count(__right_value552, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value553 = come_decrement_ref_count(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-dD")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value555=xsprintf("\%s ",((char*)(__right_value554=charp_to_string(argv[i_345])))))));
                (__right_value554 = come_decrement_ref_count(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value555 = come_decrement_ref_count(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-H")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value557=xsprintf("\%s ",((char*)(__right_value556=charp_to_string(argv[i_345])))))));
                (__right_value556 = come_decrement_ref_count(__right_value556, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value557 = come_decrement_ref_count(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-P")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value559=xsprintf("\%s ",((char*)(__right_value558=charp_to_string(argv[i_345])))))));
                (__right_value558 = come_decrement_ref_count(__right_value558, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value559 = come_decrement_ref_count(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-nostdinc")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value561=xsprintf("\%s ",((char*)(__right_value560=charp_to_string(argv[i_345])))))));
                (__right_value560 = come_decrement_ref_count(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value561 = come_decrement_ref_count(__right_value561, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-CC")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value563=xsprintf("\%s ",((char*)(__right_value562=charp_to_string(argv[i_345])))))));
                (__right_value562 = come_decrement_ref_count(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value563 = come_decrement_ref_count(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_345+1<argc&&charp_operator_equals(argv[i_345],"-target")) {
                buffer_append_str(clang_option_328,((char*)(__right_value565=xsprintf("-target \%s",((char*)(__right_value564=charp_to_string(argv[i_345+1])))))));
                (__right_value564 = come_decrement_ref_count(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value565 = come_decrement_ref_count(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_345++;
            }
            else if(            i_345+1<argc&&charp_operator_equals(argv[i_345],"-include")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value567=xsprintf("-iclude \%s",((char*)(__right_value566=charp_to_string(argv[i_345+1])))))));
                (__right_value566 = come_decrement_ref_count(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_345++;
            }
            else if(            i_345+1<argc&&charp_operator_equals(argv[i_345],"-isystem")) {
                buffer_append_str(cpp_option_330,((char*)(__right_value569=xsprintf("-isystem \%s",((char*)(__right_value568=charp_to_string(argv[i_345+1])))))));
                (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value569 = come_decrement_ref_count(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_328,((char*)(__right_value571=xsprintf("-isystem \%s",((char*)(__right_value570=charp_to_string(argv[i_345+1])))))));
                (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value571 = come_decrement_ref_count(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_345++;
            }
            else if(            i_345+1<argc&&charp_operator_equals(argv[i_345],"-T")) {
                buffer_append_str(clang_option_328,((char*)(__right_value573=xsprintf(" -T \%s ",((char*)(__right_value572=charp_to_string(argv[i_345+1])))))));
                (__right_value572 = come_decrement_ref_count(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value573 = come_decrement_ref_count(__right_value573, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_345++;
            }
            else if(            charp_operator_equals(argv[i_345],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_345],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value575=charp_operator_load_range_element(argv[i_345],0,2))),"-O"))),            (__right_value574 = come_decrement_ref_count(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value575 = come_decrement_ref_count(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(clang_option_328,((char*)(__right_value577=xsprintf(" \%s ",((char*)(__right_value576=charp_to_string(argv[i_345])))))));
                (__right_value576 = come_decrement_ref_count(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value577 = come_decrement_ref_count(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_339=(_Bool)0;
            }
            else if(            (_elif_conditional5=(string_operator_equals(((char*)(__right_value579=charp_operator_load_range_element(argv[i_345],0,2))),"-D"))),            (__right_value578 = come_decrement_ref_count(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value579 = come_decrement_ref_count(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional5) {
                buffer_append_str(cpp_option_330,((char*)(__right_value581=xsprintf(" \%s ",((char*)(__right_value580=charp_to_string(argv[i_345])))))));
                (__right_value580 = come_decrement_ref_count(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value581 = come_decrement_ref_count(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_328,((char*)(__right_value583=xsprintf(" \%s ",((char*)(__right_value582=charp_to_string(argv[i_345])))))));
                (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value583 = come_decrement_ref_count(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional6=(string_operator_equals(((char*)(__right_value585=charp_operator_load_range_element(argv[i_345],0,2))),"-U"))),            (__right_value584 = come_decrement_ref_count(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value585 = come_decrement_ref_count(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional6) {
                buffer_append_str(cpp_option_330,((char*)(__right_value587=xsprintf(" \%s ",((char*)(__right_value586=charp_to_string(argv[i_345])))))));
                (__right_value586 = come_decrement_ref_count(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value587 = come_decrement_ref_count(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_328,((char*)(__right_value589=xsprintf(" \%s ",((char*)(__right_value588=charp_to_string(argv[i_345])))))));
                (__right_value588 = come_decrement_ref_count(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value589 = come_decrement_ref_count(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-g")) {
                buffer_append_str(clang_option_328,"-g ");
            }
            else if(            charp_operator_equals(argv[i_345],"-v")) {
                buffer_append_str(clang_option_328,"-v ");
                buffer_append_str(cpp_option_330,"-v ");
                verbose_338=(_Bool)1;
            }
            else if(            strlen(argv[i_345])>=2&&memcmp(argv[i_345],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_330,((char*)(__right_value592=string_operator_add(((char*)(__right_value591=charp_operator_add(" ",argv[i_345])))," "))));
                (__right_value590 = come_decrement_ref_count(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value591 = come_decrement_ref_count(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value592 = come_decrement_ref_count(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_345],"-gdwarf-4")) {
                buffer_append_str(clang_option_328,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_345],"-s")||charp_operator_equals(argv[i_345],"-S")) {
                output_source_file_flag_335=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_345],"-c")) {
                output_object_file_333=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_345],"-E")) {
                output_cpp_file_334=(_Bool)1;
            }
            else if(            argv[i_345][0]==45) {
                buffer_append_str(clang_option_328,((char*)(__right_value593=charp_operator_add(argv[i_345]," "))));
                (__right_value593 = come_decrement_ref_count(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_345])>2&&memcmp(argv[i_345]+strlen(argv[i_345])-2,".o",2)==0) {
                list$1char$ph_push_back(object_files_332,(char*)come_increment_ref_count(__builtin_string(argv[i_345])));
            }
            else if(            strlen(argv[i_345])>2&&memcmp(argv[i_345]+strlen(argv[i_345])-2,".a",2)==0) {
                list$1char$ph_push_back(object_files_332,(char*)come_increment_ref_count(__builtin_string(argv[i_345])));
            }
            else if(            string_operator_equals(ext_name_346,"c")) {
                list$1char$ph_push_back(files_331,(char*)come_increment_ref_count(__builtin_string(argv[i_345])));
            }
            else {
                buffer_append_str(clang_option_328,((char*)(__right_value597=charp_operator_add(argv[i_345]," "))));
                (__right_value597 = come_decrement_ref_count(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_346 = come_decrement_ref_count(ext_name_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_339;
        gComeMalloc=come_malloc_340;
        for(        o2_saved_349=(struct list$1char$ph*)come_increment_ref_count((files_331)),it_350=list$1char$ph_begin((o2_saved_349));        !list$1char$ph_end((o2_saved_349));        it_350=list$1char$ph_next((o2_saved_349))        ){
            memset(&info_351,0,sizeof(struct sInfo));
            Value_352=fopen(it_350,"r");
            if(            Value_352) {
                fclose(Value_352);
            }
            else {
                /*c*/ come_call_finalizer3((&info_351),sInfo_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                continue;
            }
            __dec_obj91=info_351.sname,
            info_351.sname=(char*)come_increment_ref_count(__builtin_string(it_350));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info_351.sline=1;
            info_351.err_num=0;
            __dec_obj92=info_351.clang_option,
            info_351.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_328));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj93=info_351.cpp_option,
            info_351.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_330));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj94=info_351.linker_option,
            info_351.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_329));
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info_351.no_output_err=(_Bool)0;
            __dec_obj95=info_351.funcs,
            info_351.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1146, "struct map$2char$phsFun$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj95,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj96=info_351.uniq_funcs,
            info_351.uniq_funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1147, "struct map$2char$phsFun$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj96,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj97=info_351.struct_definition,
            info_351.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1148, "struct map$2char$phbuffer$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj97,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj98=info_351.uniq_definition,
            info_351.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1149, "struct map$2char$phchar$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj98,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj99=info_351.previous_struct_definition,
            info_351.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1150, "struct map$2char$phbuffer$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj99,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj100=info_351.generics_funcs,
            info_351.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1151, "struct map$2char$phsGenericsFun$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj100,map$2char$phsGenericsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj101=info_351.classes,
            info_351.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1152, "struct map$2char$phsClass$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj101,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj102=info_351.modules,
            info_351.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1153, "struct map$2char$phsClassModule$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj102,map$2char$phsClassModule$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj103=info_351.types,
            info_351.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1154, "struct map$2char$phsType$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj103,map$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj104=info_351.module,
            info_351.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc_v2(1, sizeof(struct sModule)*(1), "02transpile.c", 1155, "struct sModule*"))));
            /*b*/ come_call_finalizer3(__dec_obj104,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj105=info_351.right_value_objects,
            info_351.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1156, "struct list$1sRightValueObject$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj105,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj106=info_351.stack,
            info_351.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1157, "struct list$1CVALUE$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj106,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj107=info_351.gv_table,
            info_351.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1158, "struct sVarTable*")),(_Bool)1,((void*)0)));
            /*b*/ come_call_finalizer3(__dec_obj107,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            lv_table_353=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1159, "struct sVarTable*")),(_Bool)0,((void*)0)));
            info_351.lv_table=lv_table_353;
            __dec_obj108=info_351.generics_type_names,
            info_351.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1161, "struct list$1char$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj108,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj109=info_351.method_generics_type_names,
            info_351.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1162, "struct list$1char$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj109,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj110=info_351.generics_classes,
            info_351.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1163, "struct map$2char$phsClass$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj110,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info_351.verbose=verbose_338;
            info_351.m5stack_cpp=m5stack_cpp_341;
            info_351.pico_cpp=pico_cpp_342;
            info_351.emb_cpp=emb_cpp_343;
            info_351.gcc_compiler=gcc_compiler_344;
            init_classes(&info_351);
            clear_tmp_file(&info_351);
            Value_354=cpp(&info_351);
            if(            !Value_354) {
                printf("transpile failed\n");
                exit(2);
            }
            else {
            }
            __dec_obj111=info_351.source,
            info_351.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value637=charp_read(((char*)(__right_value636=xsprintf("%s.i",it_350))))))));
            /*b*/ come_call_finalizer3(__dec_obj111,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value636 = come_decrement_ref_count(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value637 = come_decrement_ref_count(__right_value637, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info_351.p=info_351.source->buf;
            info_351.head=info_351.source->buf;
            if(            output_file_name_337) {
                __dec_obj112=info_351.output_file_name,
                info_351.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_337));
                __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj113=info_351.output_file_name,
                info_351.output_file_name=((void*)0);
                __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            Value_355=output_cpp_file_334;
            if(            !Value_355) {
                transpile(&info_351);
                Value_356=output_source_file(&info_351);
                if(                !Value_356) {
                    printf("output source file faield\n");
                    exit(2);
                }
                else {
                }
                if(                info_351.err_num>0) {
                    printf("transpile error. err num %d\n",info_351.err_num);
                    exit(2);
                }
                Value_357=output_object_file_flag_336;
                if(                Value_357) {
                    Value_358=compile(&info_351,output_object_file_333,object_files_332);
                    if(                    !Value_358) {
                        printf("compile faield\n");
                        exit(27);
                    }
                    else {
                    }
                }
                else {
                }
            }
            else {
            }
            if(            output_cpp_file_334) {
            }
            else if(            info_351.err_num>0) {
            }
            else if(            output_source_file_flag_335) {
                clear_tmp_file_without_object_file_and_ccfile(&info_351);
            }
            else {
                clear_tmp_file_without_object_file(&info_351);
            }
            /*c*/ come_call_finalizer3((&info_351),sInfo_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(lv_table_353,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_349,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !output_object_file_333&&!output_cpp_file_334&&(list$1char$ph_length(files_331)>0||list$1char$ph_length(object_files_332)>0)) {
            memset(&info_359,0,sizeof(struct sInfo));
            __dec_obj114=info_359.sname,
            info_359.sname=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value640=list$1char$ph_operator_load_element(files_331,0))), "02transpile.c", 1229, "char*"));
            __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value640 = come_decrement_ref_count(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj115=info_359.clang_option,
            info_359.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_328));
            __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj116=info_359.linker_option,
            info_359.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_329));
            __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info_359.verbose=verbose_338;
            if(            output_file_name_337) {
                __dec_obj117=info_359.output_file_name,
                info_359.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_337));
                __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj118=info_359.output_file_name,
                info_359.output_file_name=((void*)0);
                __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            output_object_file_flag_336) {
                Value_366=linker(&info_359,object_files_332);
                if(                !Value_366) {
                    printf("linker faield\n");
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_334&&!output_source_file_flag_335) {
                clear_tmp_file(&info_359);
            }
            /*c*/ come_call_finalizer3((&info_359),sInfo_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (output_file_name_str_327 = come_decrement_ref_count(output_file_name_str_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(clang_option_328,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(linker_option_329,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(cpp_option_330,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(files_331,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(object_files_332,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (output_file_name_337 = come_decrement_ref_count(output_file_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return 0;
}

static char* list$1char$ph_join(struct list$1char$ph* self, char* sep){
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct buffer* buf_261;
int n_262;
char* it_263;
void* __right_value412 = (void*)0;
char* __result_obj__62;
    buf_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 1874, "struct buffer*"))));
    n_262=0;
    for(    it_263=list$1char$ph_begin(self);    !list$1char$ph_end(self);    it_263=list$1char$ph_next(self)    ){
        buffer_append_str(buf_261,it_263);
        if(        n_262<list$1char$ph_length(self)-1) {
            buffer_append_str(buf_261,sep);
        }
        n_262++;
    }
    __result_obj__62 = (char*)come_increment_ref_count(((char*)(__right_value412=buffer_to_string(buf_261))));
    /*c*/ come_call_finalizer3(buf_261,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value412 = come_decrement_ref_count(__right_value412, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__62;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self){
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
int i_266;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1char$ph* __dec_obj63;
struct map$2char$phsFun$ph* __result_obj__64;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value423=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value424=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 1915, "struct sFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value425=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_266=0;    i_266<128;    i_266++    ){
        self->item_existance[i_266]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj63=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj63,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__64 = (struct map$2char$phsFun$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__64,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__64;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__63 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_267;
struct list_item$1char$p* prev_it_268;
    it_267=self->head;
    while(    it_267!=((void*)0)) {
        prev_it_268=it_267;
        it_267=it_267->next;
        /*c*/ come_call_finalizer3(prev_it_268,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_269;
int i_270;
    for(    i_269=0;    i_269<self->size;    i_269++    ){
        if(        self->item_existance[i_269]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_269],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_270=0;    i_270<self->size;    i_270++    ){
        if(        self->item_existance[i_270]) {
            if(            1) {
                (self->keys[i_270] = come_decrement_ref_count(self->keys[i_270], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self){
int i_271;
int i_272;
    for(    i_271=0;    i_271<self->size;    i_271++    ){
        if(        self->item_existance[i_271]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_271],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_272=0;    i_272<self->size;    i_272++    ){
        if(        self->item_existance[i_272]) {
            if(            1) {
                (self->keys[i_272] = come_decrement_ref_count(self->keys[i_272], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self){
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
int i_273;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1char$ph* __dec_obj66;
struct map$2char$phbuffer$ph* __result_obj__65;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value432=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value433=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(128)), "./comelang.h", 1915, "struct buffer**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value434=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_273=0;    i_273<128;    i_273++    ){
        self->item_existance[i_273]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj66=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj66,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__65 = (struct map$2char$phbuffer$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_274;
int i_275;
    for(    i_274=0;    i_274<self->size;    i_274++    ){
        if(        self->item_existance[i_274]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_274],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_275=0;    i_275<self->size;    i_275++    ){
        if(        self->item_existance[i_275]) {
            if(            1) {
                (self->keys[i_275] = come_decrement_ref_count(self->keys[i_275], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self){
int i_276;
int i_277;
    for(    i_276=0;    i_276<self->size;    i_276++    ){
        if(        self->item_existance[i_276]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_276],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_277=0;    i_277<self->size;    i_277++    ){
        if(        self->item_existance[i_277]) {
            if(            1) {
                (self->keys[i_277] = come_decrement_ref_count(self->keys[i_277], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
int i_278;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1char$ph* __dec_obj68;
struct map$2char$phchar$ph* __result_obj__66;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value439=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value440=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1915, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value441=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_278=0;    i_278<128;    i_278++    ){
        self->item_existance[i_278]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj68=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj68,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__66 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_279;
int i_280;
    for(    i_279=0;    i_279<self->size;    i_279++    ){
        if(        self->item_existance[i_279]) {
            if(            1) {
                (self->items[i_279] = come_decrement_ref_count(self->items[i_279], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_280=0;    i_280<self->size;    i_280++    ){
        if(        self->item_existance[i_280]) {
            if(            1) {
                (self->keys[i_280] = come_decrement_ref_count(self->keys[i_280], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_281;
int i_282;
    for(    i_281=0;    i_281<self->size;    i_281++    ){
        if(        self->item_existance[i_281]) {
            if(            1) {
                (self->items[i_281] = come_decrement_ref_count(self->items[i_281], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_282=0;    i_282<self->size;    i_282++    ){
        if(        self->item_existance[i_282]) {
            if(            1) {
                (self->keys[i_282] = come_decrement_ref_count(self->keys[i_282], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self){
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
int i_283;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1char$ph* __dec_obj71;
struct map$2char$phsGenericsFun$ph* __result_obj__67;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value448=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value449=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 1915, "struct sGenericsFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value450=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_283=0;    i_283<128;    i_283++    ){
        self->item_existance[i_283]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj71=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj71,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__67 = (struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsGenericsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__67,map$2char$phsGenericsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__67;
}

static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_284;
int i_285;
    for(    i_284=0;    i_284<self->size;    i_284++    ){
        if(        self->item_existance[i_284]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_284],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_285=0;    i_285<self->size;    i_285++    ){
        if(        self->item_existance[i_285]) {
            if(            1) {
                (self->keys[i_285] = come_decrement_ref_count(self->keys[i_285], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_286;
int i_287;
    for(    i_286=0;    i_286<self->size;    i_286++    ){
        if(        self->item_existance[i_286]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_286],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_287=0;    i_287<self->size;    i_287++    ){
        if(        self->item_existance[i_287]) {
            if(            1) {
                (self->keys[i_287] = come_decrement_ref_count(self->keys[i_287], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self){
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
int i_288;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1char$ph* __dec_obj73;
struct map$2char$phsClass$ph* __result_obj__68;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value455=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value456=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 1915, "struct sClass**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value457=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_288=0;    i_288<128;    i_288++    ){
        self->item_existance[i_288]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj73=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj73,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__68 = (struct map$2char$phsClass$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsClass$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,map$2char$phsClass$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self){
int i_289;
int i_290;
    for(    i_289=0;    i_289<self->size;    i_289++    ){
        if(        self->item_existance[i_289]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_289],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_290=0;    i_290<self->size;    i_290++    ){
        if(        self->item_existance[i_290]) {
            if(            1) {
                (self->keys[i_290] = come_decrement_ref_count(self->keys[i_290], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self){
int i_291;
int i_292;
    for(    i_291=0;    i_291<self->size;    i_291++    ){
        if(        self->item_existance[i_291]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_291],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_292=0;    i_292<self->size;    i_292++    ){
        if(        self->item_existance[i_292]) {
            if(            1) {
                (self->keys[i_292] = come_decrement_ref_count(self->keys[i_292], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self){
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
int i_293;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1char$ph* __dec_obj75;
struct map$2char$phsClassModule$ph* __result_obj__69;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value462=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value463=(struct sClassModule**)come_calloc_v2(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 1915, "struct sClassModule**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value464=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_293=0;    i_293<128;    i_293++    ){
        self->item_existance[i_293]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj75=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj75,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__69 = (struct map$2char$phsClassModule$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsClassModule$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,map$2char$phsClassModule$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self){
int i_294;
int i_295;
    for(    i_294=0;    i_294<self->size;    i_294++    ){
        if(        self->item_existance[i_294]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_294],sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_295=0;    i_295<self->size;    i_295++    ){
        if(        self->item_existance[i_295]) {
            if(            1) {
                (self->keys[i_295] = come_decrement_ref_count(self->keys[i_295], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self){
int i_296;
int i_297;
    for(    i_296=0;    i_296<self->size;    i_296++    ){
        if(        self->item_existance[i_296]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_296],sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_297=0;    i_297<self->size;    i_297++    ){
        if(        self->item_existance[i_297]) {
            if(            1) {
                (self->keys[i_297] = come_decrement_ref_count(self->keys[i_297], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self){
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
int i_298;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1char$ph* __dec_obj77;
struct map$2char$phsType$ph* __result_obj__70;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value469=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value470=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 1915, "struct sType**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value471=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_298=0;    i_298<128;    i_298++    ){
        self->item_existance[i_298]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj77=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj77,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__70 = (struct map$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__70,map$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__70;
}

static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self){
int i_299;
int i_300;
    for(    i_299=0;    i_299<self->size;    i_299++    ){
        if(        self->item_existance[i_299]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_299],sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_300=0;    i_300<self->size;    i_300++    ){
        if(        self->item_existance[i_300]) {
            if(            1) {
                (self->keys[i_300] = come_decrement_ref_count(self->keys[i_300], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self){
int i_301;
int i_302;
    for(    i_301=0;    i_301<self->size;    i_301++    ){
        if(        self->item_existance[i_301]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_301],sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_302=0;    i_302<self->size;    i_302++    ){
        if(        self->item_existance[i_302]) {
            if(            1) {
                (self->keys[i_302] = come_decrement_ref_count(self->keys[i_302], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeader,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeaderStructs,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__71 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_303;
struct list_item$1sRightValueObject$ph* prev_it_304;
    it_303=self->head;
    while(    it_303!=((void*)0)) {
        prev_it_304=it_303;
        it_303=it_303->next;
        /*c*/ come_call_finalizer3(prev_it_304,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mObjType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mObjType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_305;
struct list_item$1sRightValueObject$ph* prev_it_306;
    it_305=self->head;
    while(    it_305!=((void*)0)) {
        prev_it_306=it_305;
        it_305=it_305->next;
        /*c*/ come_call_finalizer3(prev_it_306,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__72 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_307;
struct list_item$1CVALUE$ph* prev_it_308;
    it_307=self->head;
    while(    it_307!=((void*)0)) {
        prev_it_308=it_307;
        it_307=it_307->next;
        /*c*/ come_call_finalizer3(prev_it_308,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_309;
struct list_item$1CVALUE$ph* prev_it_310;
    it_309=self->head;
    while(    it_309!=((void*)0)) {
        prev_it_310=it_309;
        it_309=it_309->next;
        /*c*/ come_call_finalizer3(prev_it_310,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sInfo_finalize(struct sInfo* self){
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->source,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        (self->sname_at_head = come_decrement_ref_count(self->sname_at_head, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        (self->base_sname = come_decrement_ref_count(self->base_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        (self->clang_option = come_decrement_ref_count(self->clang_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        (self->cpp_option = come_decrement_ref_count(self->cpp_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        (self->linker_option = come_decrement_ref_count(self->linker_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->funcs,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->uniq_funcs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->uniq_funcs,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->generics_funcs,map$2char$phsGenericsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->classes,map$2char$phsClass$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->modules,map$2char$phsClassModule$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->types,map$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->generics_classes,map$2char$phsClass$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->struct_definition,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->previous_struct_definition,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->module,sModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->right_value_objects,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->generics_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->stack,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->come_function_result_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->gv_table,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->generics_type_names,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_type_names,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->impl_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->class_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->class_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        (self->output_file_name = come_decrement_ref_count(self->output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->function_result_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->module_params,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        (self->if_result_var_name = come_decrement_ref_count(self->if_result_var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->match_it_var,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->uniq_definition,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_316;
struct list_item$1sVar$ph* prev_it_317;
    it_316=self->head;
    while(    it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        /*c*/ come_call_finalizer3(prev_it_317,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_360;
int i_361;
char* __result_obj__73;
char* default_value_362;
char* __result_obj__74;
default_value_362 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_360=self->head;
    i_361=0;
    while(    it_360!=((void*)0)) {
        if(        position==i_361) {
            __result_obj__73 = (char*)come_increment_ref_count(it_360->item);
            (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__73;
        }
        it_360=it_360->next;
        i_361++;
    }
    memset(&default_value_362,0,sizeof(char*));
    __result_obj__74 = (char*)come_increment_ref_count(default_value_362);
    (default_value_362 = come_decrement_ref_count(default_value_362, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__74 = come_decrement_ref_count(__result_obj__74, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__74;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_363;
int i_364;
char* __result_obj__75;
char* default_value_365;
char* __result_obj__76;
default_value_365 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_363=self->head;
    i_364=0;
    while(    it_363!=((void*)0)) {
        if(        position==i_364) {
            __result_obj__75 = (char*)come_increment_ref_count(it_363->item);
            (__result_obj__75 = come_decrement_ref_count(__result_obj__75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__75;
        }
        it_363=it_363->next;
        i_364++;
    }
    memset(&default_value_365,0,sizeof(char*));
    __result_obj__76 = (char*)come_increment_ref_count(default_value_365);
    (default_value_365 = come_decrement_ref_count(default_value_365, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__76 = come_decrement_ref_count(__result_obj__76, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__76;
}

