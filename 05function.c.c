/// previous struct definition ///
struct __locale_t;

struct __sFILE;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    long  long __clang_max_align_nonce1;
    long  double __clang_max_align_nonce2;
};

typedef struct anonymous_typeX1 max_align_t;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long __int64_t;

typedef unsigned long  int __uint64_t;

typedef long __intptr_t;

typedef unsigned long  int __uintptr_t;

typedef char int8_t;

typedef unsigned char uint8_t;

typedef short int16_t;

typedef unsigned short int uint16_t;

typedef int int32_t;

typedef unsigned int uint32_t;

typedef long int64_t;

typedef unsigned long  int uint64_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef char int_least8_t;

typedef unsigned char uint_least8_t;

typedef short int_least16_t;

typedef unsigned short int uint_least16_t;

typedef int int_least32_t;

typedef unsigned int uint_least32_t;

typedef long int_least64_t;

typedef unsigned long  int uint_least64_t;

typedef char int_fast8_t;

typedef unsigned char uint_fast8_t;

typedef long int_fast64_t;

typedef unsigned long  int uint_fast64_t;

typedef long int_fast16_t;

typedef unsigned long  int uint_fast16_t;

typedef long int_fast32_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uintmax_t;

typedef long intmax_t;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long  long __s64;

typedef unsigned long  long __u64;

struct anonymous_typeX2
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

typedef struct anonymous_typeX2 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int __kernel_ino_t;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long __kernel_suseconds_t;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned int __kernel_old_dev_t;

typedef unsigned long  int __kernel_size_t;

typedef long __kernel_ssize_t;

typedef long __kernel_ptrdiff_t;

struct anonymous_typeX3
{
    int val[2];
};

typedef struct anonymous_typeX3 __kernel_fsid_t;

typedef long __kernel_off_t;

typedef long  long __kernel_loff_t;

typedef long __kernel_old_time_t;

typedef long __kernel_time_t;

typedef long  long __kernel_time64_t;

typedef long __kernel_clock_t;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef __int128 __s128;

typedef unsigned __int128 __u128;

typedef unsigned short int __le16;

typedef unsigned short int __be16;

typedef unsigned int __le32;

typedef unsigned int __be32;

typedef unsigned long  long __le64;

typedef unsigned long  long __be64;

typedef unsigned short int __sum16;

typedef unsigned int __wsum;

typedef unsigned int __poll_t;

struct anonymous_typeX4
{
    unsigned int flags;
    void* stack_base;
    unsigned long  int stack_size;
    unsigned long  int guard_size;
    int sched_policy;
    int sched_priority;
    char __reserved[16];
};

typedef struct anonymous_typeX4 pthread_attr_t;

struct anonymous_typeX5
{
    long __private[4];
};

typedef struct anonymous_typeX5 pthread_barrier_t;

typedef int pthread_barrierattr_t;

struct anonymous_typeX6
{
    int __private[12];
};

typedef struct anonymous_typeX6 pthread_cond_t;

typedef long pthread_condattr_t;

typedef int pthread_key_t;

struct anonymous_typeX7
{
    int __private[10];
};

typedef struct anonymous_typeX7 pthread_mutex_t;

typedef long pthread_mutexattr_t;

typedef int pthread_once_t;

struct anonymous_typeX8
{
    int __private[14];
};

typedef struct anonymous_typeX8 pthread_rwlock_t;

typedef long pthread_rwlockattr_t;

struct anonymous_typeX9
{
    long __private;
};

typedef struct anonymous_typeX9 pthread_spinlock_t;

typedef long pthread_t;

typedef unsigned int __gid_t;

typedef unsigned int gid_t;

typedef unsigned int __uid_t;

typedef unsigned int uid_t;

typedef int __pid_t;

typedef int pid_t;

typedef unsigned int __id_t;

typedef unsigned int id_t;

typedef unsigned long  int blkcnt_t;

typedef unsigned long  int blksize_t;

typedef char* caddr_t;

typedef long clock_t;

typedef int __clockid_t;

typedef int clockid_t;

typedef int daddr_t;

typedef unsigned long  int fsblkcnt_t;

typedef unsigned long  int fsfilcnt_t;

typedef unsigned int __mode_t;

typedef unsigned int mode_t;

typedef int __key_t;

typedef int key_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int ino_t;

typedef unsigned long  int ino64_t;

typedef unsigned int __nlink_t;

typedef unsigned int nlink_t;

typedef void* __timer_t;

typedef void* timer_t;

typedef long __suseconds_t;

typedef long suseconds_t;

typedef unsigned int __useconds_t;

typedef unsigned int useconds_t;

typedef unsigned long  int dev_t;

typedef long __time_t;

typedef long time_t;

typedef long off_t;

typedef long loff_t;

typedef long off64_t;

typedef unsigned int __socklen_t;

typedef unsigned int socklen_t;

typedef __builtin_va_list __va_list;

typedef long ssize_t;

typedef unsigned int uint_t;

typedef unsigned int uint;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef unsigned int u_int32_t;

typedef unsigned short int u_int16_t;

typedef unsigned char u_int8_t;

typedef unsigned long  int u_int64_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef struct __locale_t* locale_t;

struct flock
{
    short l_type;
    short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};

struct flock64
{
    short l_type;
    short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};

struct f_owner_ex
{
    int type;
    int pid;
};

typedef long fpos_t;

typedef long fpos64_t;

typedef struct __sFILE FILE;

struct mallinfo
{
    unsigned long  int arena;
    unsigned long  int ordblks;
    unsigned long  int smblks;
    unsigned long  int hblks;
    unsigned long  int hblkhd;
    unsigned long  int usmblks;
    unsigned long  int fsmblks;
    unsigned long  int uordblks;
    unsigned long  int fordblks;
    unsigned long  int keepcost;
};

struct mallinfo2
{
    unsigned long  int arena;
    unsigned long  int ordblks;
    unsigned long  int smblks;
    unsigned long  int hblks;
    unsigned long  int hblkhd;
    unsigned long  int usmblks;
    unsigned long  int fsmblks;
    unsigned long  int uordblks;
    unsigned long  int fordblks;
    unsigned long  int keepcost;
};

enum HeapTaggingLevel { M_HEAP_TAGGING_LEVEL_NONE=(0),
M_HEAP_TAGGING_LEVEL_TBI=(1),
M_HEAP_TAGGING_LEVEL_ASYNC=(2),
M_HEAP_TAGGING_LEVEL_SYNC=(3)
};

struct anonymous_typeX10
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX10 div_t;

struct anonymous_typeX11
{
    long  int quot;
    long  int rem;
};

typedef struct anonymous_typeX11 ldiv_t;

struct anonymous_typeX12
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX12 lldiv_t;

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

typedef void* any;

typedef char* string;

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct integer
{
    long value;
};

struct floating
{
    double value;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};

struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};

struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
};

struct sNodeBase
{
    int sline;
    char* sname;
};

struct tuple1$1sTypeph
{
    struct sType* v1;
};

struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};

struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    struct tuple1$1sTypeph* mNoExceptionType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct tuple1$1sTypeph* mChannelType;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
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
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    _Bool no_output_come_code2;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceHead3;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
    struct buffer* mHeader;
};

struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphbufferph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};

struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};

struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};

struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
};

struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct map$2charphbufferph* struct_definition;
    struct map$2charphbufferph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
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
    struct map$2charphcharph* module_params;
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
    struct list$1sVarph* match_it_var;
    int sline_top;
    _Bool new_;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

struct sSemicolonNode
{
    int sline;
    char* sname;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};

// source head
extern struct __sFILE* stdin;
extern struct __sFILE* stdout;
extern struct __sFILE* stderr;
extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
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
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
int android_get_application_target_sdk_version();
int __system_property_get(const char* __name, char* __value);
int strcasecmp(const char* __s1, const char* __s2);
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_t* __l);
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int __n, struct __locale_t* __l);
void* memccpy(void* __dst, const void* __src, int __stop_char, unsigned long  int __n);
void* memchr(const void* __s, int __ch, unsigned long  int __n);
void* memrchr(const void* __s, int __ch, unsigned long  int __n);
int memcmp(const void* __lhs, const void* __rhs, unsigned long  int __n);
void* memcpy(void* anonymous_var_nameX2, const void* anonymous_var_nameX3, unsigned long  int anonymous_var_nameX4);
void* mempcpy(void* __dst, const void* __src, unsigned long  int __n);
void* memmove(void* __dst, const void* __src, unsigned long  int __n);
void* memset(void* __dst, int __ch, unsigned long  int __n);
void* memmem(const void* __haystack, unsigned long  int __haystack_size, const void* __needle, unsigned long  int __needle_size);
char* strchr(const char* __s, int __ch);
char* __strchr_chk(const char* __s, int __ch, unsigned long  int __n);
char* strchrnul(const char* __s, int __ch);
char* strrchr(const char* __s, int __ch);
char* __strrchr_chk(const char* __s, int __ch, unsigned long  int __n);
unsigned long  int strlen(const char* __s);
unsigned long  int __strlen_chk(const char* __s, unsigned long  int __n);
int strcmp(const char* __lhs, const char* __rhs);
char* stpcpy(char* __dst, const char* __src);
char* strcpy(char* __dst, const char* __src);
char* strcat(char* __dst, const char* __src);
char* strdup(const char* __s);
char* strstr(const char* __haystack, const char* __needle);
char* strcasestr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delimiter);
char* strtok_r(char* __s, const char* __delimiter, char** __pos_ptr);
char* strerror_l(int __errno_value, struct __locale_t* __l);
char* __gnu_strerror_r(int __errno_value, char* __buf, unsigned long  int __n);
const char* strerror(int __errno_value);
unsigned long  int strnlen(const char* __s, unsigned long  int __n);
char* strncat(char* __dst, const char* __src, unsigned long  int __n);
char* strndup(const char* __s, unsigned long  int __n);
int strncmp(const char* __lhs, const char* __rhs, unsigned long  int __n);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strlcat(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strlcpy(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strcspn(const char* __s, const char* __reject);
char* strpbrk(const char* __s, const char* __accept);
char* strsep(char** __s_ptr, const char* __delimiter);
unsigned long  int strspn(const char* __s, const char* __accept);
char* strsignal(int __signal);
int strcoll(const char* __lhs, const char* __rhs);
unsigned long  int strxfrm(char* __dst, const char* __src, unsigned long  int __n);
int strcoll_l(const char* __lhs, const char* __rhs, struct __locale_t* __l);
unsigned long  int strxfrm_l(char* __dst, const char* __src, unsigned long  int __n, struct __locale_t* __l);
char* __gnu_basename(const char* __path);
void clearerr(struct __sFILE* __fp);
int fclose(struct __sFILE* __fp);
int feof(struct __sFILE* __fp);
int ferror(struct __sFILE* __fp);
int fflush(struct __sFILE* __fp);
int fgetc(struct __sFILE* __fp);
char* fgets(char* __buf, int __size, struct __sFILE* __fp);
int fprintf(struct __sFILE* __fp, const char* __fmt, ...);
int fputc(int __ch, struct __sFILE* __fp);
int fputs(const char* __s, struct __sFILE* __fp);
unsigned long  int fread(void* __buf, unsigned long  int __size, unsigned long  int __count, struct __sFILE* __fp);
int fscanf(struct __sFILE* __fp, const char* __fmt, ...);
unsigned long  int fwrite(const void* __buf, unsigned long  int __size, unsigned long  int __count, struct __sFILE* __fp);
int getc(struct __sFILE* __fp);
int getchar();
long getdelim(char** __line_ptr, unsigned long  int* __line_length_ptr, int __delimiter, struct __sFILE* __fp);
long getline(char** __line_ptr, unsigned long  int* __line_length_ptr, struct __sFILE* __fp);
void perror(const char* __msg);
int printf(const char* __fmt, ...);
int putc(int __ch, struct __sFILE* __fp);
int putchar(int __ch);
int puts(const char* __s);
int remove(const char* __path);
void rewind(struct __sFILE* __fp);
int scanf(const char* __fmt, ...);
void setbuf(struct __sFILE* __fp, char* __buf);
int setvbuf(struct __sFILE* __fp, char* __buf, int __mode, unsigned long  int __size);
int sscanf(const char* __s, const char* __fmt, ...);
int ungetc(int __ch, struct __sFILE* __fp);
int vfprintf(struct __sFILE* __fp, const char* __fmt, va_list __args);
int vprintf(const char* __fp, va_list __args);
int dprintf(int __fd, const char* __fmt, ...);
int vdprintf(int __fd, const char* __fmt, va_list __args);
int sprintf(char* __s, const char* __fmt, ...);
int vsprintf(char* __s, const char* __fmt, va_list __args);
char* tmpnam(char* __s);
char* tempnam(const char* __dir, const char* __prefix);
int rename(const char* __old_path, const char* __new_path);
int renameat(int __old_dir_fd, const char* __old_path, int __new_dir_fd, const char* __new_path);
int fseek(struct __sFILE* __fp, long __offset, int __whence);
long ftell(struct __sFILE* __fp);
int fgetpos(struct __sFILE* __fp, long* __pos);
int fsetpos(struct __sFILE* __fp, const long* __pos);
int fseeko(struct __sFILE* __fp, long __offset, int __whence);
long ftello(struct __sFILE* __fp);
struct __sFILE* funopen(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));
int fgetpos64(struct __sFILE* __fp, long* __pos);
int fsetpos64(struct __sFILE* __fp, const long* __pos);
int fseeko64(struct __sFILE* __fp, long __offset, int __whence);
long ftello64(struct __sFILE* __fp);
struct __sFILE* funopen64(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));
struct __sFILE* fopen(const char* __path, const char* __mode);
struct __sFILE* fopen64(const char* __path, const char* __mode);
struct __sFILE* freopen(const char* __path, const char* __mode, struct __sFILE* __fp);
struct __sFILE* freopen64(const char* __path, const char* __mode, struct __sFILE* __fp);
struct __sFILE* tmpfile64();
int snprintf(char* __buf, unsigned long  int __size, const char* __fmt, ...);
int vfscanf(struct __sFILE* __fp, const char* __fmt, va_list __args);
int vscanf(const char* __fmt, va_list __args);
int vsnprintf(char* __buf, unsigned long  int __size, const char* __fmt, va_list __args);
int vsscanf(const char* __s, const char* __fmt, va_list __args);
struct __sFILE* fdopen(int __fd, const char* __mode);
int fileno(struct __sFILE* __fp);
int pclose(struct __sFILE* __fp);
struct __sFILE* popen(const char* __command, const char* __mode);
void flockfile(struct __sFILE* __fp);
int ftrylockfile(struct __sFILE* __fp);
void funlockfile(struct __sFILE* __fp);
int getc_unlocked(struct __sFILE* __fp);
int getchar_unlocked();
int putc_unlocked(int __ch, struct __sFILE* __fp);
int putchar_unlocked(int __ch);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __ptr, unsigned long  int* __size_ptr);
int asprintf(char** __s_ptr, const char* __fmt, ...);
char* fgetln(struct __sFILE* __fp, unsigned long  int* __length_ptr);
int fpurge(struct __sFILE* __fp);
void setbuffer(struct __sFILE* __fp, char* __buf, int __size);
int setlinebuf(struct __sFILE* __fp);
int vasprintf(char** __s_ptr, const char* __fmt, va_list __args);
void clearerr_unlocked(struct __sFILE* __fp);
int feof_unlocked(struct __sFILE* __fp);
int ferror_unlocked(struct __sFILE* __fp);
int fileno_unlocked(struct __sFILE* __fp);
int open(const char* anonymous_var_nameX25, int anonymous_var_nameX26, ...);
int getpid();
int unlink(const char* anonymous_var_nameX27);
void* malloc(unsigned long  int __byte_count);
void* calloc(unsigned long  int __item_count, unsigned long  int __item_size);
void* realloc(void* __ptr, unsigned long  int __byte_count);
void free(void* __ptr);
void* memalign(unsigned long  int __alignment, unsigned long  int __byte_count);
unsigned long  int malloc_usable_size(const void* __ptr);
struct mallinfo2 mallinfo();
int malloc_info(int __must_be_zero, struct __sFILE* __fp);
void abort();
void exit(int __status);
void _Exit(int __status);
int atexit(void (*__fn)());
int at_quick_exit(void (*__fn)());
void quick_exit(int __status);
char* getenv(const char* __name);
int putenv(char* __assignment);
int setenv(const char* __name, const char* __value, int __overwrite);
int unsetenv(const char* __name);
int clearenv();
char* mkdtemp(char* __template);
char* mktemp(char* __template);
int mkostemp64(char* __template, int __flags);
int mkostemp(char* __template, int __flags);
int mkostemps64(char* __template, int __suffix_length, int __flags);
int mkostemps(char* __template, int __suffix_length, int __flags);
int mkstemp64(char* __template);
int mkstemp(char* __template);
int mkstemps64(char* __template, int __flags);
int mkstemps(char* __template, int __flags);
long strtol(const char* __s, char** __end_ptr, int __base);
long long strtoll(const char* __s, char** __end_ptr, int __base);
unsigned long  int strtoul(const char* __s, char** __end_ptr, int __base);
unsigned long  long strtoull(const char* __s, char** __end_ptr, int __base);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
double strtod(const char* __s, char** __end_ptr);
long  double strtold(const char* __s, char** __end_ptr);
int atoi(const char* __s);
long atol(const char* __s);
long long atoll(const char* __s);
char* realpath(const char* __path, char* __resolved);
int system(const char* __command);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__comparator)(const void*,const void*));
void qsort(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__comparator)(const void*,const void*));
unsigned int arc4random();
unsigned int arc4random_uniform(unsigned int __upper_bound);
void arc4random_buf(void* __buf, unsigned long  int __n);
int rand_r(unsigned int* __seed_ptr);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long jrand48(unsigned short int __xsubi[3]);
void lcong48(unsigned short int __param[7]);
long lrand48();
long mrand48();
long nrand48(unsigned short int __xsubi[3]);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void srand48(long __seed);
char* initstate(unsigned int __seed, char* __state, unsigned long  int __n);
char* setstate(char* __state);
int getpt();
int posix_openpt(int __flags);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int __n);
int unlockpt(int __fd);
struct anonymous_typeX10 div(int __numerator, int __denominator);
struct anonymous_typeX11 ldiv(long __numerator, long __denominator);
struct anonymous_typeX12 lldiv(long  long __numerator, long  long __denominator);
const char* getprogname();
void setprogname(const char* __name);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(unsigned int* __dst, const char* __src, unsigned long  int __n);
int mbtowc(unsigned int* __wc_ptr, const char* __s, unsigned long  int __n);
int wctomb(char* __dst, unsigned int __wc);
unsigned long  int wcstombs(char* __dst, const unsigned int* __src, unsigned long  int __n);
int abs(int __x);
long labs(long __x);
long long llabs(long  long __x);
float strtof(const char* __s, char** __end_ptr);
double atof(const char* __s);
int rand();
void srand(unsigned int __seed);
long random();
void srandom(unsigned int __seed);
int grantpt(int __fd);
long long strtoll_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);
unsigned long  long strtoull_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);
long  double strtold_l(const char* __s, char** __end_ptr, struct __locale_t* __l);
struct lconv* localeconv();
struct __locale_t* duplocale(struct __locale_t* __l);
void freelocale(struct __locale_t* __l);
struct __locale_t* newlocale(int __category_mask, const char* __locale_name, struct __locale_t* __base);
char* setlocale(int __category, const char* __locale_name);
struct __locale_t* uselocale(struct __locale_t* __l);
int* __errno();
void __assert(const char* __file, int __line, const char* __msg);
void __assert2(const char* __file, int __line, const char* __function, const char* __msg);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_format(struct buffer* self, char* str, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool int_equals(int self, int right);
_Bool short_equals(short self, short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(unsigned int c);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
char* bool_to_string(_Bool self);
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
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct __sFILE* f, char* str);
char* FILE_read(struct __sFILE* f);
int FILE_fclose(struct __sFILE* f);
int* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_come_last_code3(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
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
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right);
static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
char* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
// uniq global variable
// source head3

// inline function
static inline int android_get_device_api_level(){
int api_level_1;
    char value_0[92]={0};
    if(    __system_property_get("ro.build.version.sdk",value_0)<1) {
        return -1;
    }
    api_level_1=atoi(value_0);
    return (((api_level_1>0))?(api_level_1):(-1));
}
static inline void __bionic_bcopy(const void* b1, void* b2, unsigned long  int len){
    __builtin_memmove(b2,b1,len);
}
static inline void __bionic_bzero(void* b, unsigned long  int len){
    __builtin_memset(b,0,len);
}
static inline int ffs(int __n){
    return __builtin_ffs(__n);
}
static inline int ffsl(long __n){
    return __builtin_ffsl(__n);
}
static inline int ffsll(long  long __n){
    return __builtin_ffsll(__n);
}
static inline char* ctermid(char* s){
    if(    s==0) {
        return (char*)"/dev/tty";
    }
    strcpy(s,"/dev/tty");
    return s;
}
static inline struct __sFILE* tmpfile(){
int p_2;
char* path_3;
int i_4;
unsigned int r_5;
int fd_6;
struct __sFILE* result_7;
path_3 = (void*)0;
memset(&i_4, 0, sizeof(int));
    p_2=getpid();
    for(    i_4=0;    i_4<100;    i_4++    ){
        r_5=arc4random();
        if(        asprintf(&path_3,"/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u",p_2,r_5)==-1) {
            return ((void*)0);
        }
        fd_6=open(path_3,2|64|128|131072,384);
        if(        fd_6>=0) {
            result_7=fdopen(fd_6,"w+");
            unlink(path_3);
            free(path_3);
            return result_7;
        }
        free(path_3);
    }
    return ((void*)0);
}
static inline double strtod_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
    return strtod(__s,__end_ptr);
}
static inline float strtof_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
    return strtof(__s,__end_ptr);
}
static inline long strtol_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l){
    return strtol(__s,__end_ptr,__base);
}
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_8;
struct buffer* __result1__;
    result_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2392, "buffer"))));
    buffer_append(result_8,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_8;
    /*i*/come_call_finalizer3(result_8,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_9;
int i_10;
struct buffer* __result2__;
    result_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2399, "buffer"))));
    for(    i_10=0;    i_10<len;    i_10++    ){
        buffer_append(result_9,self[i_10],strlen(self[i_10]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_9;
    /*i*/come_call_finalizer3(result_9,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_11;
struct buffer* __result3__;
    result_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2408, "buffer"))));
    buffer_append(result_11,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_11;
    /*i*/come_call_finalizer3(result_11,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_12;
struct buffer* __result4__;
    result_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2415, "buffer"))));
    buffer_append(result_12,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_12;
    /*i*/come_call_finalizer3(result_12,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_13;
struct buffer* __result5__;
    result_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2422, "buffer"))));
    buffer_append(result_13,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_13;
    /*i*/come_call_finalizer3(result_13,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_14;
struct buffer* __result6__;
    result_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2429, "buffer"))));
    buffer_append(result_14,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_14;
    /*i*/come_call_finalizer3(result_14,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_15;
struct buffer* __result7__;
    result_15=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2436, "buffer"))));
    buffer_append(result_15,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_15;
    /*i*/come_call_finalizer3(result_15,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2736, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2746, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2751, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2756, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_16;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_16=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2789, "buffer"))));
    buffer_append(buf_16,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2791, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_16))));
    /*i*/come_call_finalizer3(buf_16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_17;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_17=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2796, "buffer"))));
    buffer_append(buf_17,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2798, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_17))));
    /*i*/come_call_finalizer3(buf_17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_18;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_18=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2803, "buffer"))));
    buffer_append(buf_18,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2805, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_18))));
    /*i*/come_call_finalizer3(buf_18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_19;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_19=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2810, "buffer"))));
    buffer_append(buf_19,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2812, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_19))));
    /*i*/come_call_finalizer3(buf_19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_20;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_20=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2817, "buffer"))));
    buffer_append(buf_20,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2819, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_20))));
    /*i*/come_call_finalizer3(buf_20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_21;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_21=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2824, "buffer"))));
    buffer_append(buf_21,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2826, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_21))));
    /*i*/come_call_finalizer3(buf_21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_22;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_22=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2831, "buffer"))));
    buffer_append(buf_22,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2833, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_22))));
    /*i*/come_call_finalizer3(buf_22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2838, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2843, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2848, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2853, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2858, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2863, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2868, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2873, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2878, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2883, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2888, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2893, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2898, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2903, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_72;
int i_73;
    result_72=(_Bool)0;
    for(    i_73=0;    i_73<len;    i_73++    ){
        if(        strncmp(self[i_73],str,strlen(self[i_73]))==0) {
            result_72=(_Bool)1;
            break;
        }
    }
    return result_72;
}
static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

// body function




















static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result11__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result23__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result25__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1char_push_back(self,values[i_23]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_24;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_25;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_26;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_24=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 219, "list_item$1char"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 229, "list_item$1char"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 239, "list_item$1char"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_27;
struct list_item$1char* prev_it_28;
    it_27=self->head;
    while(it_27!=((void*)0)) {
        prev_it_28=it_27;
        it_27=it_27->next;
        /*i*/come_call_finalizer3(prev_it_28,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_29;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_29=0;    i_29<num_value;    i_29++    ){
        list$1charp_push_back(self,values[i_29]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_30;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_31;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_32;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_30=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 219, "list_item$1charp"))));
        litem_30->prev=((void*)0);
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail=litem_30;
        self->head=litem_30;
    }
    else if(    self->len==1) {
        litem_31=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 229, "list_item$1charp"))));
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        litem_31->item=item;
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        litem_32=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 239, "list_item$1charp"))));
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_33;
struct list_item$1charp* prev_it_34;
    it_33=self->head;
    while(it_33!=((void*)0)) {
        prev_it_34=it_33;
        it_33=it_33->next;
        /*i*/come_call_finalizer3(prev_it_34,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1short_push_back(self,values[i_35]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_36;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_37;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_38;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_36=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 219, "list_item$1short"))));
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 229, "list_item$1short"))));
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 239, "list_item$1short"))));
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_39;
struct list_item$1short* prev_it_40;
    it_39=self->head;
    while(it_39!=((void*)0)) {
        prev_it_40=it_39;
        it_39=it_39->next;
        /*i*/come_call_finalizer3(prev_it_40,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_41;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_41=0;    i_41<num_value;    i_41++    ){
        list$1int_push_back(self,values[i_41]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_42;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_43;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_44;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_42=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 219, "list_item$1int"))));
        litem_42->prev=((void*)0);
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail=litem_42;
        self->head=litem_42;
    }
    else if(    self->len==1) {
        litem_43=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 229, "list_item$1int"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        litem_43->item=item;
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 239, "list_item$1int"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        litem_44->item=item;
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_45;
struct list_item$1int* prev_it_46;
    it_45=self->head;
    while(it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        /*i*/come_call_finalizer3(prev_it_46,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_47;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_47=0;    i_47<num_value;    i_47++    ){
        list$1long_push_back(self,values[i_47]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_48;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_49;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_50;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_48=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 219, "list_item$1long"))));
        litem_48->prev=((void*)0);
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail=litem_48;
        self->head=litem_48;
    }
    else if(    self->len==1) {
        litem_49=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 229, "list_item$1long"))));
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        litem_49->item=item;
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 239, "list_item$1long"))));
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        litem_50->item=item;
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_51;
struct list_item$1long* prev_it_52;
    it_51=self->head;
    while(it_51!=((void*)0)) {
        prev_it_52=it_51;
        it_51=it_51->next;
        /*i*/come_call_finalizer3(prev_it_52,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_53;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_53=0;    i_53<num_value;    i_53++    ){
        list$1float_push_back(self,values[i_53]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_54;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_55;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_56;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_54=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 219, "list_item$1float"))));
        litem_54->prev=((void*)0);
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail=litem_54;
        self->head=litem_54;
    }
    else if(    self->len==1) {
        litem_55=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 229, "list_item$1float"))));
        litem_55->prev=self->head;
        litem_55->next=((void*)0);
        litem_55->item=item;
        self->tail=litem_55;
        self->head->next=litem_55;
    }
    else {
        litem_56=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 239, "list_item$1float"))));
        litem_56->prev=self->tail;
        litem_56->next=((void*)0);
        litem_56->item=item;
        self->tail->next=litem_56;
        self->tail=litem_56;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_57;
struct list_item$1float* prev_it_58;
    it_57=self->head;
    while(it_57!=((void*)0)) {
        prev_it_58=it_57;
        it_57=it_57->next;
        /*i*/come_call_finalizer3(prev_it_58,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_59;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_59=0;    i_59<num_value;    i_59++    ){
        list$1double_push_back(self,values[i_59]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_60;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_61;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_62;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_60=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 219, "list_item$1double"))));
        litem_60->prev=((void*)0);
        litem_60->next=((void*)0);
        litem_60->item=item;
        self->tail=litem_60;
        self->head=litem_60;
    }
    else if(    self->len==1) {
        litem_61=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 229, "list_item$1double"))));
        litem_61->prev=self->head;
        litem_61->next=((void*)0);
        litem_61->item=item;
        self->tail=litem_61;
        self->head->next=litem_61;
    }
    else {
        litem_62=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 239, "list_item$1double"))));
        litem_62->prev=self->tail;
        litem_62->next=((void*)0);
        litem_62->item=item;
        self->tail->next=litem_62;
        self->tail=litem_62;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_63;
struct list_item$1double* prev_it_64;
    it_63=self->head;
    while(it_63!=((void*)0)) {
        prev_it_64=it_63;
        it_63=it_63->next;
        /*i*/come_call_finalizer3(prev_it_64,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1013, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_65;
    if(    0) {
        for(        i_65=0;        i_65<self->len;        i_65++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1013, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_66;
    if(    0) {
        for(        i_66=0;        i_66<self->len;        i_66++        ){
            /* U13 */self->items[i_66] = come_decrement_ref_count2(self->items[i_66], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1013, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_67;
    if(    0) {
        for(        i_67=0;        i_67<self->len;        i_67++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1013, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_68;
    if(    0) {
        for(        i_68=0;        i_68<self->len;        i_68++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1013, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_69;
    if(    0) {
        for(        i_69=0;        i_69<self->len;        i_69++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1013, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_70;
    if(    0) {
        for(        i_70=0;        i_70<self->len;        i_70++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1013, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_71;
    if(    0) {
        for(        i_71=0;        i_71<self->len;        i_71++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}











struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sSemicolonNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=__builtin_string("sSemicolonNode")));
    /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct sLambdaNode* __result67__;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value118,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("sLambdaNode")));
    /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_74;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* result_type_75;
void* __right_value122 = (void*)0;
int block_level_76;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_77;
void* __right_value125 = (void*)0;
char* __dec_obj18;
void* __right_value162 = (void*)0;
struct sType* __dec_obj66;
_Bool __result88__;
    come_fun_74=info->come_fun;
    info->come_fun=self->mFun;
    result_type_75=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_75,"__result_obj__",(_Bool)0,info))));
        /* U11 */__right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_76=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_76;
    come_value_77=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_77->c_value;
    come_value_77->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj66=come_value_77->type;
    come_value_77->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_77->var=((void*)0);
    add_come_last_code(info,"%s",come_value_77->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    info->come_fun=come_fun_74;
    __result88__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_75,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_77,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value126 = (void*)0;
struct sType* result_78;
void* __right_value129 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value130 = (void*)0;
struct tuple1$1sTypeph* __dec_obj44;
void* __right_value131 = (void*)0;
struct tuple1$1sTypeph* __dec_obj45;
void* __right_value132 = (void*)0;
char* __dec_obj46;
void* __right_value139 = (void*)0;
struct list$1sTypeph* __dec_obj50;
void* __right_value147 = (void*)0;
struct list$1sNodeph* __dec_obj54;
void* __right_value148 = (void*)0;
struct list$1sTypeph* __dec_obj55;
void* __right_value155 = (void*)0;
struct list$1charph* __dec_obj59;
void* __right_value156 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value158 = (void*)0;
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value159 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value160 = (void*)0;
char* __dec_obj64;
void* __right_value161 = (void*)0;
char* __dec_obj65;
struct sType* __result86__;
    if(    self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_78=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_78->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj43=result_78->mNoSolvedGenericsType;
        result_78->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj44=result_78->mOriginalLoadVarType;
        result_78->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj44,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj45=result_78->mNoExceptionType;
        result_78->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj45,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj46=result_78->mGenericsName;
        result_78->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj50=result_78->mGenericsTypes;
        result_78->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj54=result_78->mArrayNum;
        result_78->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_78->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj55=result_78->mParamTypes;
        result_78->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj59=result_78->mParamNames;
        result_78->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj60=result_78->mResultType;
        result_78->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_78->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj61=result_78->mAlignas;
        result_78->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj62=result_78->mChannelType;
        result_78->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_78->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_78->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_78->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_78->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_78->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_78->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_78->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_78->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_78->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_78->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_78->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_78->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_78->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_78->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_78->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_78->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_78->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_78->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_78->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_78->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_78->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_78->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_78->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_78->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_78->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_78->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_78->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_78->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj63=result_78->mSizeNum;
        result_78->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_78->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_78->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_78->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj64=result_78->mOriginalTypeName;
        result_78->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_78->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_78->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_78->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_78->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_78->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_78->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_78->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_78->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_78->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj65=result_78->mAsmName;
        result_78->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_78->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_78->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_78->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_78->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_78->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_78->mOriginIsArray=self->mOriginIsArray;
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_78;
    /*i*/come_call_finalizer3(result_78,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* result_79;
void* __right_value128 = (void*)0;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result71__;
    if(    self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_79=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_79->v1;
        result_79->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_79;
    /*i*/come_call_finalizer3(result_79,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj20;
struct tuple1$1sTypeph* __dec_obj22;
struct tuple1$1sTypeph* __dec_obj24;
char* __dec_obj26;
struct list$1sTypeph* __dec_obj27;
struct list$1sNodeph* __dec_obj29;
struct list$1sTypeph* __dec_obj31;
struct list$1charph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
struct sNode* __dec_obj36;
struct tuple1$1sTypeph* __dec_obj37;
struct sNode* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj20=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj22=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj24=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj26=self->mGenericsName;
            /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj27=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj29=self->mArrayNum;
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj31=self->mParamTypes;
            come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj32=self->mParamNames;
            come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj34=self->mResultType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj36=self->mAlignas;
            /* U1 */ if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj37=self->mChannelType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj39=self->mSizeNum;
            /* U1 */ if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj40=self->mOriginalTypeName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj41=self->mAsmName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_80;
struct list_item$1sTypeph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_82;
struct list_item$1sTypeph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_84;
struct list_item$1sNodeph* prev_it_85;
    it_84=self->head;
    while(it_84!=((void*)0)) {
        prev_it_85=it_84;
        it_84=it_84->next;
        /*i*/come_call_finalizer3(prev_it_85,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj30;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            /* U1 */ if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_86;
struct list_item$1sNodeph* prev_it_87;
    it_86=self->head;
    while(it_86!=((void*)0)) {
        prev_it_87=it_86;
        it_86=it_86->next;
        /*i*/come_call_finalizer3(prev_it_87,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_88;
struct list_item$1charph* prev_it_89;
    it_88=self->head;
    while(it_88!=((void*)0)) {
        prev_it_89=it_88;
        it_88=it_88->next;
        /*i*/come_call_finalizer3(prev_it_89,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_90;
struct list_item$1charph* prev_it_91;
    it_90=self->head;
    while(it_90!=((void*)0)) {
        prev_it_91=it_90;
        it_90=it_90->next;
        /*i*/come_call_finalizer3(prev_it_91,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj38;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj38=self->v1;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj42;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj42=self->v1;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result72__;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sTypeph* result_92;
struct list_item$1sTypeph* it_93;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __result75__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_92=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 135, "list$1sTypeph"))));
    it_93=self->head;
    while(it_93!=((void*)0)) {
        list$1sTypeph_add(result_92,(struct sType*)come_increment_ref_count(sType_clone(it_93->item)));
        it_93=it_93->next;
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_92;
    /*i*/come_call_finalizer3(result_92,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result73__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_94;
struct sType* __dec_obj47;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_95;
struct sType* __dec_obj48;
void* __right_value137 = (void*)0;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj49;
struct list$1sTypeph* __result74__;
    if(    self->len==0) {
        litem_94=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 149, "list_item$1sTypeph"))));
        litem_94->prev=((void*)0);
        litem_94->next=((void*)0);
        __dec_obj47=litem_94->item;
        litem_94->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_94;
        self->head=litem_94;
    }
    else if(    self->len==1) {
        litem_95=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 159, "list_item$1sTypeph"))));
        litem_95->prev=self->head;
        litem_95->next=((void*)0);
        __dec_obj48=litem_95->item;
        litem_95->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_95;
        self->head->next=litem_95;
    }
    else {
        litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 169, "list_item$1sTypeph"))));
        litem_96->prev=self->tail;
        litem_96->next=((void*)0);
        __dec_obj49=litem_96->item;
        litem_96->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_96;
        self->tail=litem_96;
    }
    self->len++;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result76__;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1sNodeph* result_97;
struct list_item$1sNodeph* it_98;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __result81__;
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_97=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 135, "list$1sNodeph"))));
    it_98=self->head;
    while(it_98!=((void*)0)) {
        list$1sNodeph_add(result_97,(struct sNode*)come_increment_ref_count(sNode_clone(it_98->item)));
        it_98=it_98->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_97;
    /*i*/come_call_finalizer3(result_97,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result77__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result77__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_99;
struct sNode* __dec_obj51;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_100;
struct sNode* __dec_obj52;
void* __right_value144 = (void*)0;
struct list_item$1sNodeph* litem_101;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result78__;
    if(    self->len==0) {
        litem_99=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 149, "list_item$1sNodeph"))));
        litem_99->prev=((void*)0);
        litem_99->next=((void*)0);
        __dec_obj51=litem_99->item;
        litem_99->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_99;
        self->head=litem_99;
    }
    else if(    self->len==1) {
        litem_100=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 159, "list_item$1sNodeph"))));
        litem_100->prev=self->head;
        litem_100->next=((void*)0);
        __dec_obj52=litem_100->item;
        litem_100->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_100;
        self->head->next=litem_100;
    }
    else {
        litem_101=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 169, "list_item$1sNodeph"))));
        litem_101->prev=self->tail;
        litem_101->next=((void*)0);
        __dec_obj53=litem_101->item;
        litem_101->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_101;
        self->tail=litem_101;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result79__;
void* __right_value145 = (void*)0;
struct sNode* result_102;
struct sNode* __result80__;
    if(    self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_102=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_102->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_102->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_102->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_102->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_102->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_102->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_102->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_102->kind=self->kind;
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_102;
    if(result_102) { result_102 = come_decrement_ref_count2(result_102, ((struct sNode*)result_102)->finalize, ((struct sNode*)result_102)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result82__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_103;
struct list_item$1charph* it_104;
void* __right_value154 = (void*)0;
struct list$1charph* __result85__;
    if(    self==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    result_103=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 135, "list$1charph"))));
    it_104=self->head;
    while(it_104!=((void*)0)) {
        list$1charph_add(result_103,(char*)come_increment_ref_count(string_clone(it_104->item)));
        it_104=it_104->next;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_103;
    /*i*/come_call_finalizer3(result_103,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result83__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
struct list_item$1charph* litem_105;
char* __dec_obj56;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_106;
char* __dec_obj57;
void* __right_value153 = (void*)0;
struct list_item$1charph* litem_107;
char* __dec_obj58;
struct list$1charph* __result84__;
    if(    self->len==0) {
        litem_105=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 149, "list_item$1charph"))));
        litem_105->prev=((void*)0);
        litem_105->next=((void*)0);
        __dec_obj56=litem_105->item;
        litem_105->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_105;
        self->head=litem_105;
    }
    else if(    self->len==1) {
        litem_106=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 159, "list_item$1charph"))));
        litem_106->prev=self->head;
        litem_106->next=((void*)0);
        __dec_obj57=litem_106->item;
        litem_106->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_106;
        self->head->next=litem_106;
    }
    else {
        litem_107=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 169, "list_item$1charph"))));
        litem_107->prev=self->tail;
        litem_107->next=((void*)0);
        __dec_obj58=litem_107->item;
        litem_107->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_107;
        self->tail=litem_107;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value163 = (void*)0;
struct list_item$1CVALUEph* litem_108;
struct CVALUE* __dec_obj67;
void* __right_value164 = (void*)0;
struct list_item$1CVALUEph* litem_109;
struct CVALUE* __dec_obj71;
void* __right_value165 = (void*)0;
struct list_item$1CVALUEph* litem_110;
struct CVALUE* __dec_obj72;
struct list$1CVALUEph* __result87__;
    if(    self->len==0) {
        litem_108=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 219, "list_item$1CVALUEph"))));
        litem_108->prev=((void*)0);
        litem_108->next=((void*)0);
        __dec_obj67=litem_108->item;
        litem_108->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_108;
        self->head=litem_108;
    }
    else if(    self->len==1) {
        litem_109=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 229, "list_item$1CVALUEph"))));
        litem_109->prev=self->head;
        litem_109->next=((void*)0);
        __dec_obj71=litem_109->item;
        litem_109->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_109;
        self->head->next=litem_109;
    }
    else {
        litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value165=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 239, "list_item$1CVALUEph"))));
        litem_110->prev=self->tail;
        litem_110->next=((void*)0);
        __dec_obj72=litem_110->item;
        litem_110->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_110;
        self->tail=litem_110;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj68;
struct sType* __dec_obj69;
char* __dec_obj70;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj68=self->c_value;
            /*G*/ __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj69=self->type;
            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj70=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
struct sFun* __dec_obj73;
struct sFunNode* __result89__;
    ((struct sNodeBase*)(__right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value166,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj73=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj73,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string("sFunNode")));
    /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_111;
char* come_fun_name_112;
void* __right_value168 = (void*)0;
char* __dec_obj91;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sType* result_type_113;
void* __right_value171 = (void*)0;
int block_level_114;
void* __right_value172 = (void*)0;
char* __dec_obj92;
_Bool __result91__;
    come_fun_111=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_112=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj91=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_113=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value171=make_define_var(result_type_113,"__result_obj__",(_Bool)0,info))));
            /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_114=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_114;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value172=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_111;
    __dec_obj92=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_112);
    /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = (_Bool)1;
    /* U13 */come_fun_name_112 = come_decrement_ref_count2(come_fun_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result91__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj74;
struct sType* __dec_obj75;
struct list$1sTypeph* __dec_obj76;
struct list$1charph* __dec_obj77;
struct list$1charph* __dec_obj78;
struct sType* __dec_obj79;
struct sBlock* __dec_obj80;
struct buffer* __dec_obj83;
struct buffer* __dec_obj84;
struct buffer* __dec_obj85;
struct buffer* __dec_obj86;
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj74=self->mName;
            /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj75=self->mResultType;
            come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj76=self->mParamTypes;
            come_call_finalizer3(__dec_obj76,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj77=self->mParamNames;
            come_call_finalizer3(__dec_obj77,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj78=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj78,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj79=self->mLambdaType;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj80=self->mBlock;
            come_call_finalizer3(__dec_obj80,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj83=self->mSource;
            come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj84=self->mSourceHead;
            come_call_finalizer3(__dec_obj84,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj85=self->mSourceHead2;
            come_call_finalizer3(__dec_obj85,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj86=self->mSourceDefer;
            come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj87=self->mComeHeader;
            /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj88=self->mDeclareSName;
            /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj81;
struct sVarTable* __dec_obj82;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj81=self->mNodes;
            come_call_finalizer3(__dec_obj81,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj82=self->mVarTable;
            come_call_finalizer3(__dec_obj82,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct list$1sNodeph* __dec_obj93;
struct sBlock* __result92__;
    __dec_obj93=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value175 = (void*)0;
struct sType* __dec_obj94;
void* __right_value176 = (void*)0;
struct list$1charph* __dec_obj95;
void* __right_value177 = (void*)0;
struct list$1charph* __dec_obj96;
char* __dec_obj97;
struct sType* __dec_obj98;
struct list$1sTypeph* __dec_obj99;
struct list$1charph* __dec_obj100;
struct list$1charph* __dec_obj101;
char* __dec_obj102;
void* __right_value178 = (void*)0;
char* __dec_obj103;
struct sGenericsFun* __result93__;
    __dec_obj94=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj95=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj98=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj99=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj99,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj100=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj101=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj102=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    /*G*/ __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj103=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj104;
struct list$1charph* __dec_obj105;
struct list$1charph* __dec_obj106;
char* __dec_obj107;
struct sType* __dec_obj108;
struct list$1sTypeph* __dec_obj109;
struct list$1charph* __dec_obj110;
struct list$1charph* __dec_obj111;
char* __dec_obj112;
char* __dec_obj113;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj104=self->mImplType;
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj105=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj106=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj106,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj107=self->mName;
            /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj108=self->mResultType;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj109=self->mParamTypes;
            come_call_finalizer3(__dec_obj109,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj110=self->mParamNames;
            come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj111=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj112=self->mBlock;
            /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj113=self->mGenericsSName;
            /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sBlock* result_115;
int sline_top_116;
int block_level_117;
char* p_118;
int sline_119;
char* sname_120;
void* __right_value181 = (void*)0;
struct sNode* node_121;
void* __right_value182 = (void*)0;
char* __dec_obj114;
_Bool omit_semicolon_125;
void* __right_value186 = (void*)0;
char* __dec_obj118;
char* head_140;
void* __right_value187 = (void*)0;
struct sNode* value_141;
char* tail_142;
void* __right_value188 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct sNode* node_144;
struct sNode* node_145;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value195 = (void*)0;
struct sNode* __dec_obj122;
void* __right_value196 = (void*)0;
struct sNode* __dec_obj123;
_Bool omit_semicolon_147;
char* p_148;
char* head_149;
void* __right_value197 = (void*)0;
char* source_150;
void* __right_value198 = (void*)0;
struct sNode* node_151;
struct sBlock* __result100__;
node_145 = (void*)0;
    result_115=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_116=info->sline_top;
    info->sline_top=info->sline;
    block_level_117=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_118=info->p;
            sline_119=info->sline;
            sname_120=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_119;
            }
            node_121=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj114=info->sname;
            info->sname=(char*)come_increment_ref_count(node_121->sname(node_121->_protocol_obj));
            /*G*/ __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_121->sline(node_121->_protocol_obj);
            if(            node_121==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_115->mNodes,(struct sNode*)come_increment_ref_count(node_121));
            parse_sharp_v5(info);
            if(            node_121->terminated(node_121->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_125=(_Bool)1;
            if(            node_121->terminated(node_121->_protocol_obj)) {
                omit_semicolon_125=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_125=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_115->mOmitSemicolon=omit_semicolon_125;
                if(                omit_semicolon_125&&in_function) {
                    list$1sNodeph_delete(result_115->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_118;
                    info->sline=sline_119;
                    __dec_obj118=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_120));
                    /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_140=info->p;
                    value_141=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_142=info->p;
                    __dec_obj119=value_141;
                    value_141=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_141),info));
                    /* U1 */ if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_143[tail_142-head_140+1];
                    memset(&buf_143, 0, sizeof(char)                    *(tail_142-head_140+1)                    );
                    memcpy(buf_143,head_140,tail_142-head_140);
                    buf_143[tail_142-head_140]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_144=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_141),(char*)come_increment_ref_count(__builtin_string(buf_143)),info));
                    list$1sNodeph_push_back(result_115->mNodes,(struct sNode*)come_increment_ref_count(node_144));
                    if(value_141) { value_141 = come_decrement_ref_count2(value_141, ((struct sNode*)value_141)->finalize, ((struct sNode*)value_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_144) { node_144 = come_decrement_ref_count2(node_144, ((struct sNode*)node_144)->finalize, ((struct sNode*)node_144)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_121) { node_121 = come_decrement_ref_count2(node_121, ((struct sNode*)node_121)->finalize, ((struct sNode*)node_121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_141) { value_141 = come_decrement_ref_count2(value_141, ((struct sNode*)value_141)->finalize, ((struct sNode*)value_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_144) { node_144 = come_decrement_ref_count2(node_144, ((struct sNode*)node_144)->finalize, ((struct sNode*)node_144)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_121) { node_121 = come_decrement_ref_count2(node_121, ((struct sNode*)node_121)->finalize, ((struct sNode*)node_121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_121) { node_121 = come_decrement_ref_count2(node_121, ((struct sNode*)node_121)->finalize, ((struct sNode*)node_121)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 270, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value192=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 270, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj122=node_145;
            node_145=(struct sNode*)come_increment_ref_count(_inf_value1);
            /* U1 */ if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value192,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_115->mNodes,(struct sNode*)come_increment_ref_count(node_145));
        }
        else {
            __dec_obj123=node_145;
            node_145=(struct sNode*)come_increment_ref_count(expression_v13(info));
            /* U1 */ if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_145==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_145->terminated(node_145->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_147=(_Bool)1;
            if(            node_145->terminated(node_145->_protocol_obj)) {
                omit_semicolon_147=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_147=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_115->mOmitSemicolon=omit_semicolon_147;
            list$1sNodeph_push_back(result_115->mNodes,(struct sNode*)come_increment_ref_count(node_145));
        }
        if(node_145) { node_145 = come_decrement_ref_count2(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_148=info->p;
        head_149=info->head;
        source_150=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_150;
        info->head=source_150;
        node_151=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_151==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_115->mNodes,(struct sNode*)come_increment_ref_count(node_151));
        info->p=p_148;
        info->head=head_149;
        /* U13 */source_150 = come_decrement_ref_count2(source_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_117;
    __result100__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
struct list_item$1sNodeph* litem_122;
struct sNode* __dec_obj115;
void* __right_value184 = (void*)0;
struct list_item$1sNodeph* litem_123;
struct sNode* __dec_obj116;
void* __right_value185 = (void*)0;
struct list_item$1sNodeph* litem_124;
struct sNode* __dec_obj117;
struct list$1sNodeph* __result94__;
    if(    self->len==0) {
        litem_122=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value183=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 219, "list_item$1sNodeph"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        __dec_obj115=litem_122->item;
        litem_122->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value184=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 229, "list_item$1sNodeph"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        __dec_obj116=litem_123->item;
        litem_123->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value185=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 239, "list_item$1sNodeph"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        __dec_obj117=litem_124->item;
        litem_124->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_126;
struct list$1sNodeph* __result95__;
struct list_item$1sNodeph* it_129;
int i_130;
struct list_item$1sNodeph* prev_it_131;
struct list_item$1sNodeph* it_132;
int i_133;
struct list_item$1sNodeph* prev_it_134;
struct list_item$1sNodeph* it_135;
struct list_item$1sNodeph* head_prev_it_136;
struct list_item$1sNodeph* tail_it_137;
int i_138;
struct list_item$1sNodeph* prev_it_139;
struct list$1sNodeph* __result97__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_126=tail;
        tail=head;
        head=tmp_126;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result95__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_129=self->head;
        i_130=0;
        while(it_129!=((void*)0)) {
            if(            i_130<tail) {
                prev_it_131=it_129;
                it_129=it_129->next;
                i_130++;
                /*i*/come_call_finalizer3(prev_it_131,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_130==tail) {
                self->head=it_129;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_129=it_129->next;
                i_130++;
            }
        }
    }
    else if(    tail==self->len) {
        it_132=self->head;
        i_133=0;
        while(it_132!=((void*)0)) {
            if(            i_133==head) {
                self->tail=it_132->prev;
                self->tail->next=((void*)0);
            }
            if(            i_133>=head) {
                prev_it_134=it_132;
                it_132=it_132->next;
                i_133++;
                /*i*/come_call_finalizer3(prev_it_134,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_132=it_132->next;
                i_133++;
            }
        }
    }
    else {
        it_135=self->head;
        head_prev_it_136=((void*)0);
        tail_it_137=((void*)0);
        i_138=0;
        while(it_135!=((void*)0)) {
            if(            i_138==head) {
                head_prev_it_136=it_135->prev;
            }
            if(            i_138==tail) {
                tail_it_137=it_135;
            }
            if(            i_138>=head&&i_138<tail) {
                prev_it_139=it_135;
                it_135=it_135->next;
                i_138++;
                /*i*/come_call_finalizer3(prev_it_139,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_135=it_135->next;
                i_138++;
            }
        }
        if(        head_prev_it_136!=((void*)0)) {
            head_prev_it_136->next=tail_it_137;
        }
        if(        tail_it_137!=((void*)0)) {
            tail_it_137->prev=head_prev_it_136;
        }
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_127;
struct list_item$1sNodeph* prev_it_128;
struct list$1sNodeph* __result96__;
    it_127=self->head;
    while(it_127!=((void*)0)) {
        prev_it_128=it_127;
        it_127=it_127->next;
        /*i*/come_call_finalizer3(prev_it_128,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj120;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj120=self->sname;
            /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result98__;
void* __right_value193 = (void*)0;
struct sSemicolonNode* result_146;
void* __right_value194 = (void*)0;
char* __dec_obj121;
struct sSemicolonNode* __result99__;
    if(    self==(void*)0) {
        __result98__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    result_146=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_146->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj121=result_146->sname;
        result_146->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_146;
    /*i*/come_call_finalizer3(result_146,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_152;
struct sVarTable* old_table_153;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct sVarTable* __dec_obj124;
struct sVarTable* current_loop_vtable_154;
struct list$1sTypeph* param_types__155;
struct list$1charph* param_names__156;
int i_157;
struct list$1charph* o2_saved_158;
char* name_161;
void* __right_value201 = (void*)0;
struct sType* type_164;
void* __right_value202 = (void*)0;
int block_level_168;
int i_169;
struct list$1sNodeph* o2_saved_170;
struct sNode* node_173;
struct list$1sRightValueObjectph* right_value_objects_176;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
char* __dec_obj132;
int stack_num_before_181;
int sline_182;
void* __right_value205 = (void*)0;
char* sname_183;
void* __right_value206 = (void*)0;
char* __dec_obj133;
void* __right_value207 = (void*)0;
struct CVALUE* come_value_184;
void* __right_value212 = (void*)0;
struct CVALUE* come_value2_185;
void* __right_value213 = (void*)0;
char* __dec_obj137;
void* __right_value214 = (void*)0;
struct CVALUE* come_value2_187;
struct sVar* var__188;
void* __right_value215 = (void*)0;
struct CVALUE* come_value3_189;
void* __right_value216 = (void*)0;
_Bool _if_conditional1;
void* __right_value217 = (void*)0;
struct sType* __dec_obj138;
void* __right_value218 = (void*)0;
char* __dec_obj139;
void* __right_value219 = (void*)0;
char* __dec_obj140;
void* __right_value220 = (void*)0;
char* __dec_obj141;
void* __right_value221 = (void*)0;
char* __dec_obj142;
struct list$1sRightValueObjectph* __dec_obj143;
void* __if_result__0_208 = (void*)0;
struct list$1sVarph* o2_saved_209;
struct sVar* it_212;
struct list$1sVarph* __dec_obj149;
memset(&i_157, 0, sizeof(int));
memset(&i_169, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_152=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_153=info->lv_table;
    if(    !no_var_table) {
        __dec_obj124=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 344, "sVarTable")),(_Bool)0,old_table_153));
        come_call_finalizer3(__dec_obj124,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_154=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__155=info->param_types;
    param_names__156=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_158=(param_names),name_161=list$1charph_begin((o2_saved_158));        !list$1charph_end((o2_saved_158));        name_161=list$1charph_next((o2_saved_158))        ){
            type_164=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_157), "05function.c", 362, 0))));
            type_164->mFunctionParam=(_Bool)1;
            type_164->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_161,(struct sType*)come_increment_ref_count(sType_clone(type_164)),info);
            i_157++;
            /*i*/come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_168=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_170=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_173=list$1sNodeph_begin((o2_saved_170));        !list$1sNodeph_end((o2_saved_170));        node_173=list$1sNodeph_next((o2_saved_170))        ){
            right_value_objects_176=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj129=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 381, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj129,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj130=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj131=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj132=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_181=list$1CVALUEph_length(info->stack);
            sline_182=info->sline;
            sname_183=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_173->sline(node_173->_protocol_obj);
            __dec_obj133=info->sname;
            info->sname=(char*)come_increment_ref_count(node_173->sname(node_173->_protocol_obj));
            /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_169==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                if(                !node_compile(node_173,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_181+1) {
                    come_value_184=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_184->type->mClass->mName,"void")&&come_value_184->type->mPointerNum==0) {
                        come_value2_185=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_184));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_185));
                        __dec_obj137=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_185->c_value));
                        /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_187=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_184));
                        var__188=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__188) {
                            come_value3_189=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 418, "CVALUE"));
                            if(                            var__188->mType->mClass=="void"&&var__188->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__188->mType,((struct sType*)(__right_value216=sType_clone(come_value_184->type))),come_value3_189,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value216,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj138=var__188->mType;
                            var__188->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_184->type));
                            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_184->type->mHeap) {
                                __dec_obj139=come_value2_187->c_value;
                                come_value2_187->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(come_increment_ref_count(%s))",var__188->mCValueName,come_value_184->c_value));
                                /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                __dec_obj140=come_value2_187->c_value;
                                come_value2_187->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__188->mCValueName,come_value_184->c_value));
                                /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_187));
                        __dec_obj141=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_187->c_value));
                        /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(                !node_compile(node_173,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
            }
            info->sline=sline_182;
            __dec_obj142=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_183));
            /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_181);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj143=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_176);
            come_call_finalizer3(__dec_obj143,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_169++;
            /*i*/come_call_finalizer3(right_value_objects_176,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */sname_183 = come_decrement_ref_count2(sname_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_170,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_168==0) {
            for(            o2_saved_209=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_212=list$1sVarph_begin((o2_saved_209));            !list$1sVarph_end((o2_saved_209));            it_212=list$1sVarph_next((o2_saved_209))            ){
                free_object(it_212->mType,it_212->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_209,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj149=info->match_it_var;
            __if_result__0_208=(void*)(come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj149,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_208,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_153;
    info->block_level=block_level_168;
    info->param_types=param_types__155;
    info->param_names=param_names__156;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_154;
    info->inhibits_output_code=inhibits_output_code_152;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_159;
char* __result101__;
char* __result102__;
char* result_160;
char* __result103__;
result_159 = (void*)0;
result_160 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_159,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_159;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->it=self->head;
    if(    self->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_160,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_160;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_162;
char* __result104__;
char* __result105__;
char* result_163;
char* __result106__;
result_162 = (void*)0;
result_163 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_162,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_162;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_163,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_163;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_165;
int i_166;
struct sType* __result107__;
struct sType* default_value_167;
struct sType* __result108__;
default_value_167 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_165=self->head;
    i_166=0;
    while(it_165!=((void*)0)) {
        if(        position==i_166) {
            __result107__ = gComeFunResultObject = __result_obj__ = it_165->item;
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
        it_165=it_165->next;
        i_166++;
    }
    memset(&default_value_167,0,sizeof(struct sType*));
    __result108__ = gComeFunResultObject = __result_obj__ = default_value_167;
    /*i*/come_call_finalizer3(default_value_167,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_171;
struct sNode* __result109__;
struct sNode* __result110__;
struct sNode* result_172;
struct sNode* __result111__;
result_171 = (void*)0;
result_172 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_171,0,sizeof(struct sNode*));
        __result109__ = gComeFunResultObject = __result_obj__ = result_171;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    self->it=self->head;
    if(    self->it) {
        __result110__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    memset(&result_172,0,sizeof(struct sNode*));
    __result111__ = gComeFunResultObject = __result_obj__ = result_172;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_174;
struct sNode* __result112__;
struct sNode* __result113__;
struct sNode* result_175;
struct sNode* __result114__;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_174,0,sizeof(struct sNode*));
        __result112__ = gComeFunResultObject = __result_obj__ = result_174;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result113__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    memset(&result_175,0,sizeof(struct sNode*));
    __result114__ = gComeFunResultObject = __result_obj__ = result_175;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_177;
struct list_item$1sRightValueObjectph* prev_it_178;
    it_177=self->head;
    while(it_177!=((void*)0)) {
        prev_it_178=it_177;
        it_177=it_177->next;
        /*i*/come_call_finalizer3(prev_it_178,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj125;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj125=self->item;
            come_call_finalizer3(__dec_obj125,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj126=self->mType;
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj127=self->mVarName;
            /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj128=self->mFunName;
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_179;
struct list_item$1sRightValueObjectph* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*i*/come_call_finalizer3(prev_it_180,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result116__;
void* __right_value208 = (void*)0;
struct CVALUE* result_186;
void* __right_value209 = (void*)0;
char* __dec_obj134;
void* __right_value210 = (void*)0;
struct sType* __dec_obj135;
void* __right_value211 = (void*)0;
char* __dec_obj136;
struct CVALUE* __result117__;
    if(    self==(void*)0) {
        __result116__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    result_186=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj134=result_186->c_value;
        result_186->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj135=result_186->type;
        result_186->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_186->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_186->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj136=result_186->c_value_without_right_value_objects;
        result_186->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_186;
    /*i*/come_call_finalizer3(result_186,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
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
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_190;
struct list_item$1tuple2$2charphsTypephph* it2_191;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_190=left->head;
    it2_191=right->head;
    while(it_190!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_190->item,it2_191->item)) {
            return (_Bool)0;
        }
        it_190=it_190->next;
        it2_191=it2_191->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !sType_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_192;
struct list_item$1sTypeph* it2_193;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_192=left->head;
    it2_193=right->head;
    while(it_192!=((void*)0)) {
        if(        !sType_equals(it_192->item,it2_193->item)) {
            return (_Bool)0;
        }
        it_192=it_192->next;
        it2_193=it2_193->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_194;
struct list_item$1sNodeph* it2_195;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_194=left->head;
    it2_195=right->head;
    while(it_194!=((void*)0)) {
        if(        !sNode_equals(it_194->item,it2_195->item)) {
            return (_Bool)0;
        }
        it_194=it_194->next;
        it2_195=it2_195->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_196;
struct list_item$1charph* it2_197;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_196=left->head;
    it2_197=right->head;
    while(it_196!=((void*)0)) {
        if(        !string_equals(it_196->item,it2_197->item)) {
            return (_Bool)0;
        }
        it_196=it_196->next;
        it2_197=it2_197->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2charphsTypephphp_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
    return !list$1tuple2$2charphsTypephph_operator_equals(left,right);
}

static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_198;
struct list_item$1tuple2$2charphsTypephph* it2_199;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_198=left->head;
    it2_199=right->head;
    while(it_198!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_198->item,it2_199->item))) {
            return (_Bool)0;
        }
        it_198=it_198->next;
        it2_199=it2_199->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mNoExceptionType,right->mNoExceptionType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodeph_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !bool_equals(left->mDummyHeap,right->mDummyHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDelegate,right->mDelegate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShare,right->mShare)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mClone,right->mClone)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRefference,right->mRefference)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
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
    if(    !int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mDynamicArrayNum,right->mDynamicArrayNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypeOfExpression,right->mTypeOfExpression)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mComeMemCore,right->mComeMemCore)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoNumberArray,right->mNoNumberArray)) {
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
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mNoExceptionType,right->mNoExceptionType)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    list$1sNodeph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1charph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDummyHeap,right->mDummyHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDelegate,right->mDelegate)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShare,right->mShare)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mClone,right->mClone)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRefference,right->mRefference)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mDynamicArrayNum,right->mDynamicArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypeOfExpression,right->mTypeOfExpression)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mComeMemCore,right->mComeMemCore)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoNumberArray,right->mNoNumberArray)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&string_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&string_equals(left->mParentClassName,right->mParentClassName));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))));
}

static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right){
    return !tuple1$1sTypeph_operator_equals(left,right);
}

static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !(sType_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypeph_operator_equals(left,right);
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_200;
struct list_item$1sTypeph* it2_201;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_200=left->head;
    it2_201=right->head;
    while(it_200!=((void*)0)) {
        if(        !(sType_operator_equals(it_200->item,it2_201->item))) {
            return (_Bool)0;
        }
        it_200=it_200->next;
        it2_201=it2_201->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_202;
struct list_item$1sNodeph* it2_203;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_202=left->head;
    it2_203=right->head;
    while(it_202!=((void*)0)) {
        if(        !(sNode_operator_equals(it_202->item,it2_203->item))) {
            return (_Bool)0;
        }
        it_202=it_202->next;
        it2_203=it2_203->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charph_operator_equals(left,right);
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_204;
struct list_item$1charph* it2_205;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_204=left->head;
    it2_205=right->head;
    while(it_204!=((void*)0)) {
        if(        !(string_operator_equals(it_204->item,it2_205->item))) {
            return (_Bool)0;
        }
        it_204=it_204->next;
        it2_205=it2_205->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_206;
struct list_item$1sRightValueObjectph* prev_it_207;
struct list$1sRightValueObjectph* __result118__;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        /*i*/come_call_finalizer3(prev_it_207,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_210;
struct sVar* __result119__;
struct sVar* __result120__;
struct sVar* result_211;
struct sVar* __result121__;
result_210 = (void*)0;
result_211 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_210,0,sizeof(struct sVar*));
        __result119__ = gComeFunResultObject = __result_obj__ = result_210;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    self->it=self->head;
    if(    self->it) {
        __result120__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    memset(&result_211,0,sizeof(struct sVar*));
    __result121__ = gComeFunResultObject = __result_obj__ = result_211;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_213;
struct sVar* __result122__;
struct sVar* __result123__;
struct sVar* result_214;
struct sVar* __result124__;
result_213 = (void*)0;
result_214 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_213,0,sizeof(struct sVar*));
        __result122__ = gComeFunResultObject = __result_obj__ = result_213;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result123__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    memset(&result_214,0,sizeof(struct sVar*));
    __result124__ = gComeFunResultObject = __result_obj__ = result_214;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_215;
struct list_item$1sVarph* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        /*i*/come_call_finalizer3(prev_it_216,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj144;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj144=self->item;
            come_call_finalizer3(__dec_obj144,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj145;
char* __dec_obj146;
struct sType* __dec_obj147;
char* __dec_obj148;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj145=self->mName;
            /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj146=self->mCValueName;
            /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj147=self->mType;
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj148=self->mFunName;
            /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_217;
struct list_item$1sVarph* prev_it_218;
    it_217=self->head;
    while(it_217!=((void*)0)) {
        prev_it_218=it_217;
        it_217=it_217->next;
        /*i*/come_call_finalizer3(prev_it_218,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(    list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_219;
_Bool dquort_220;
_Bool squort_221;
int sline_222;
int nest_223;
char* tail_224;
void* __right_value222 = (void*)0;
char* buf_225;
void* __right_value223 = (void*)0;
char* __result125__;
    head_219=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_220=(_Bool)0;
        squort_221=(_Bool)0;
        sline_222=0;
        nest_223=0;
        while(1) {
            if(            dquort_220) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_220=!dquort_220;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
            }
            else if(            squort_221) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_221=!squort_221;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_222);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_222=info->sline;
                info->p++;
                squort_221=!squort_221;
            }
            else if(            *info->p==34) {
                sline_222=info->sline;
                info->p++;
                dquort_220=!dquort_220;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_223++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_223==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_223--;
            }
            else if(            *info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_224=info->p;
    buf_225=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_224-head_219+1)), "05function.c", 649, "char"));
    memcpy(buf_225,head_219,tail_224-head_219);
    buf_225[tail_224-head_219]=0;
    __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=__builtin_string(buf_225)));
    /* U13 */buf_225 = come_decrement_ref_count2(buf_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_226;
char* p3_227;
int i_228;
    terminated_226=(_Bool)0;
    p3_227=p;
    for(    i_228=0;    i_228<strlen(p2);    i_228++    ){
        if(        *p3_227==0) {
            terminated_226=(_Bool)1;
            break;
        }
        p3_227++;
    }
    return !terminated_226&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct buffer* asm_fun_name_229;
int brace_num_230;
int len_231;
_Bool in_dquort_232;
int brace_num_233;
int brace_num_234;
void* __right_value226 = (void*)0;
char* __result126__;
    asm_fun_name_229=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 672, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            brace_num_230=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_230++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_230--;
                    if(                    brace_num_230==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            len_231=0;
            in_dquort_232=(_Bool)0;
            brace_num_233=0;
            while(*info->p) {
                if(                *info->p==34) {
                    info->p++;
                    in_dquort_232=!in_dquort_232;
                }
                else if(                in_dquort_232) {
                    buffer_append_char(asm_fun_name_229,*info->p);
                    info->p++;
                }
                else if(                *info->p==40) {
                    info->p++;
                    brace_num_233++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_233--;
                    if(                    brace_num_233==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            brace_num_234=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_234++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_234--;
                    if(                    brace_num_234==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=buffer_to_string(asm_fun_name_229)));
    /*i*/come_call_finalizer3(asm_fun_name_229,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_235;
int head_sline_236;
void* __right_value227 = (void*)0;
char* buf_237;
void* __right_value228 = (void*)0;
struct sNode* node_238;
    while(*info->p) {
        parse_sharp_v5(info);
        head_235=info->p;
        head_sline_236=info->sline;
        buf_237=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_237 = come_decrement_ref_count2(buf_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_238=(struct sNode*)come_increment_ref_count(top_level_v99(buf_237,head_235,head_sline_236,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_238!=((void*)0)) {
            if(            !node_compile(node_238,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_237 = come_decrement_ref_count2(buf_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */buf_237 = come_decrement_ref_count2(buf_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value229 = (void*)0;
char* name_239;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sType* result_type_240;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sType* __list_values1___241[5];
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sTypeph* param_types_246;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* __list_values2___247[5];
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct list$1charph* param_names_252;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1charph* param_default_parametors_253;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sFun* main_fun_254;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
char* name_296;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sType* result_type_297;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sType* __list_values3___298[1];
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1sTypeph* param_types_299;
void* __right_value277 = (void*)0;
char* __list_values4___300[1];
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* param_names_301;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* param_default_parametors_302;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sFun* main_fun_303;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
char* name_304;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* result_type_305;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* __list_values5___306[7];
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1sTypeph* param_types_307;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
char* __list_values6___308[7];
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* param_names_309;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct list$1charph* param_default_parametors_310;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sFun* main_fun_311;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* name_312;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* result_type_313;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __list_values7___314[5];
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct list$1sTypeph* param_types_315;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* __list_values8___316[5];
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1charph* param_names_317;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1charph* param_default_parametors_318;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sFun* main_fun_319;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
char* name_320;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sType* result_type_321;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __list_values9___322[1];
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1sTypeph* param_types_323;
void* __right_value358 = (void*)0;
char* __list_values10___324[1];
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1charph* param_names_325;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1charph* param_default_parametors_326;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sFun* main_fun_327;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* name_328;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* result_type_329;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sType* __list_values11___330[4];
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1sTypeph* param_types_331;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
char* __list_values12___332[4];
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1charph* param_names_333;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1charph* param_default_parametors_334;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sFun* main_fun_335;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
char* name_336;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sType* result_type_337;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct sType* __list_values13___338[3];
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1sTypeph* param_types_339;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* __list_values14___340[3];
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1charph* param_names_341;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct list$1charph* param_default_parametors_342;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sFun* main_fun_343;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
char* name_344;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sType* result_type_345;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sType* __list_values15___346[1];
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct list$1sTypeph* param_types_347;
void* __right_value427 = (void*)0;
char* __list_values16___348[1];
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct list$1charph* param_names_349;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1charph* param_default_parametors_350;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sFun* main_fun_351;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
char* name_352;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sType* result_type_353;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* __list_values17___354[3];
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1sTypeph* param_types_355;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
char* __list_values18___356[3];
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1charph* param_names_357;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1charph* param_default_parametors_358;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sFun* main_fun_359;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
char* name_360;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* result_type_361;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1sTypeph* param_types_362;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1charph* param_names_363;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1charph* param_default_parametors_364;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sFun* main_fun_365;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* name_366;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* result_type_367;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __list_values19___368[4];
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1sTypeph* param_types_369;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* __list_values20___370[4];
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1charph* param_names_371;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct list$1charph* param_default_parametors_372;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sFun* main_fun_373;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* name_374;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* result_type_375;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1sTypeph* param_types_376;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct list$1charph* param_names_377;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct list$1charph* param_default_parametors_378;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sFun* fun_379;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* name_380;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* result_type_381;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct list$1sTypeph* param_types_382;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct list$1charph* param_names_383;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1charph* param_default_parametors_384;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sFun* fun_385;
void* __right_value527 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_239=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_240=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")),"void*",(_Bool)0,info));
        param_types_246=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___241[0]=come_increment_ref_count(((struct sType*)(__right_value233=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 842, "sType")),"int",(_Bool)0,info)))),
__list_values1___241[1]=come_increment_ref_count(((struct sType*)(__right_value235=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 842, "sType")),"int",(_Bool)0,info)))),
__list_values1___241[2]=come_increment_ref_count(((struct sType*)(__right_value237=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 842, "sType")),"char*",(_Bool)0,info)))),
__list_values1___241[3]=come_increment_ref_count(((struct sType*)(__right_value239=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 842, "sType")),"int",(_Bool)0,info)))),
__list_values1___241[4]=come_increment_ref_count(((struct sType*)(__right_value241=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 842, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 842, "struct list$1sTypeph")),5,__list_values1___241)));
        /*g*/come_call_finalizer3(__right_value233,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value235,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_252=(struct list$1charph*)come_increment_ref_count((__list_values2___247[0]=come_increment_ref_count(((char*)(__right_value247=__builtin_string("count")))),
__list_values2___247[1]=come_increment_ref_count(((char*)(__right_value248=__builtin_string("size")))),
__list_values2___247[2]=come_increment_ref_count(((char*)(__right_value249=__builtin_string("sname")))),
__list_values2___247[3]=come_increment_ref_count(((char*)(__right_value250=__builtin_string("sline")))),
__list_values2___247[4]=come_increment_ref_count(((char*)(__right_value251=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 843, "struct list$1charph")),5,__list_values2___247)));
        /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_253=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 844, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_253,((void*)0));
        list$1charph_push_back(param_default_parametors_253,((void*)0));
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_254=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 850, "sFun")),(char*)come_increment_ref_count(name_239),(struct sType*)come_increment_ref_count(result_type_240),(struct list$1sTypeph*)come_increment_ref_count(param_types_246),(struct list$1charph*)come_increment_ref_count(param_names_252),(struct list$1charph*)come_increment_ref_count(param_default_parametors_253),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_239)),(struct sFun*)come_increment_ref_count(main_fun_254));
        /* U13 */name_239 = come_decrement_ref_count2(name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_252,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_253,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_254,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_296=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_297=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 861, "sType")),"void*",(_Bool)0,info));
        param_types_299=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___298[0]=come_increment_ref_count(((struct sType*)(__right_value274=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 862, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 862, "struct list$1sTypeph")),1,__list_values3___298)));
        /*g*/come_call_finalizer3(__right_value274,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_301=(struct list$1charph*)come_increment_ref_count((__list_values4___300[0]=come_increment_ref_count(((char*)(__right_value277=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 863, "struct list$1charph")),1,__list_values4___300)));
        /* U11 */__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_302=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 864, "list$1charph"))));
        main_fun_303=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 865, "sFun")),(char*)come_increment_ref_count(name_296),(struct sType*)come_increment_ref_count(result_type_297),(struct list$1sTypeph*)come_increment_ref_count(param_types_299),(struct list$1charph*)come_increment_ref_count(param_names_301),(struct list$1charph*)come_increment_ref_count(param_default_parametors_302),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_296)),(struct sFun*)come_increment_ref_count(main_fun_303));
        /* U13 */name_296 = come_decrement_ref_count2(name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_299,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_302,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_303,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_304=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 876, "sType")),"void",(_Bool)0,info));
        param_types_307=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___306[0]=come_increment_ref_count(((struct sType*)(__right_value291=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 877, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[1]=come_increment_ref_count(((struct sType*)(__right_value293=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 877, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[2]=come_increment_ref_count(((struct sType*)(__right_value295=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 877, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[3]=come_increment_ref_count(((struct sType*)(__right_value297=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 877, "sType")),"void*",(_Bool)0,info)))),
__list_values5___306[4]=come_increment_ref_count(((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 877, "sType")),"int",(_Bool)0,info)))),
__list_values5___306[5]=come_increment_ref_count(((struct sType*)(__right_value301=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 877, "sType")),"int",(_Bool)0,info)))),
__list_values5___306[6]=come_increment_ref_count(((struct sType*)(__right_value303=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 877, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 877, "struct list$1sTypeph")),7,__list_values5___306)));
        /*g*/come_call_finalizer3(__right_value291,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value293,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value295,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value297,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value299,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value303,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_309=(struct list$1charph*)come_increment_ref_count((__list_values6___308[0]=come_increment_ref_count(((char*)(__right_value306=__builtin_string("fun")))),
__list_values6___308[1]=come_increment_ref_count(((char*)(__right_value307=__builtin_string("mem")))),
__list_values6___308[2]=come_increment_ref_count(((char*)(__right_value308=__builtin_string("protocol_fun")))),
__list_values6___308[3]=come_increment_ref_count(((char*)(__right_value309=__builtin_string("protocol_obj")))),
__list_values6___308[4]=come_increment_ref_count(((char*)(__right_value310=__builtin_string("call_finalizer_only")))),
__list_values6___308[5]=come_increment_ref_count(((char*)(__right_value311=__builtin_string("no_decrement")))),
__list_values6___308[6]=come_increment_ref_count(((char*)(__right_value312=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 878, "struct list$1charph")),7,__list_values6___308)));
        /* U11 */__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_310=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 879, "list$1charph"))));
        main_fun_311=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 880, "sFun")),(char*)come_increment_ref_count(name_304),(struct sType*)come_increment_ref_count(result_type_305),(struct list$1sTypeph*)come_increment_ref_count(param_types_307),(struct list$1charph*)come_increment_ref_count(param_names_309),(struct list$1charph*)come_increment_ref_count(param_default_parametors_310),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_304)),(struct sFun*)come_increment_ref_count(main_fun_311));
        /* U13 */name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_307,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_309,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_310,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_311,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_312=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_313=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 891, "sType")),"void*",(_Bool)0,info));
        param_types_315=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___314[0]=come_increment_ref_count(((struct sType*)(__right_value326=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 892, "sType")),"void*",(_Bool)0,info)))),
__list_values7___314[1]=come_increment_ref_count(((struct sType*)(__right_value328=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 892, "sType")),"void*",(_Bool)0,info)))),
__list_values7___314[2]=come_increment_ref_count(((struct sType*)(__right_value330=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 892, "sType")),"void*",(_Bool)0,info)))),
__list_values7___314[3]=come_increment_ref_count(((struct sType*)(__right_value332=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 892, "sType")),"bool",(_Bool)0,info)))),
__list_values7___314[4]=come_increment_ref_count(((struct sType*)(__right_value334=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 892, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 892, "struct list$1sTypeph")),5,__list_values7___314)));
        /*g*/come_call_finalizer3(__right_value326,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value328,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value330,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value332,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_317=(struct list$1charph*)come_increment_ref_count((__list_values8___316[0]=come_increment_ref_count(((char*)(__right_value337=__builtin_string("mem")))),
__list_values8___316[1]=come_increment_ref_count(((char*)(__right_value338=__builtin_string("protocol_fun")))),
__list_values8___316[2]=come_increment_ref_count(((char*)(__right_value339=__builtin_string("protocol_obj")))),
__list_values8___316[3]=come_increment_ref_count(((char*)(__right_value340=__builtin_string("no_decrement")))),
__list_values8___316[4]=come_increment_ref_count(((char*)(__right_value341=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 893, "struct list$1charph")),5,__list_values8___316)));
        /* U11 */__right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 894, "list$1charph"))));
        main_fun_319=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 895, "sFun")),(char*)come_increment_ref_count(name_312),(struct sType*)come_increment_ref_count(result_type_313),(struct list$1sTypeph*)come_increment_ref_count(param_types_315),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_312)),(struct sFun*)come_increment_ref_count(main_fun_319));
        /* U13 */name_312 = come_decrement_ref_count2(name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_315,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_318,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_319,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_320=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_321=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 906, "sType")),"void",(_Bool)0,info));
        param_types_323=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___322[0]=come_increment_ref_count(((struct sType*)(__right_value355=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 907, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 907, "struct list$1sTypeph")),1,__list_values9___322)));
        /*g*/come_call_finalizer3(__right_value355,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_325=(struct list$1charph*)come_increment_ref_count((__list_values10___324[0]=come_increment_ref_count(((char*)(__right_value358=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 908, "struct list$1charph")),1,__list_values10___324)));
        /* U11 */__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_326=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 909, "list$1charph"))));
        main_fun_327=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 910, "sFun")),(char*)come_increment_ref_count(name_320),(struct sType*)come_increment_ref_count(result_type_321),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_325),(struct list$1charph*)come_increment_ref_count(param_default_parametors_326),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_320)),(struct sFun*)come_increment_ref_count(main_fun_327));
        /* U13 */name_320 = come_decrement_ref_count2(name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_323,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_325,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_326,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_327,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_328=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_329=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 921, "sType")),"void*",(_Bool)0,info));
        param_types_331=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___330[0]=come_increment_ref_count(((struct sType*)(__right_value372=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 922, "sType")),"void*",(_Bool)0,info)))),
__list_values11___330[1]=come_increment_ref_count(((struct sType*)(__right_value374=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 922, "sType")),"char*",(_Bool)0,info)))),
__list_values11___330[2]=come_increment_ref_count(((struct sType*)(__right_value376=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 922, "sType")),"int",(_Bool)0,info)))),
__list_values11___330[3]=come_increment_ref_count(((struct sType*)(__right_value378=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 922, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 922, "struct list$1sTypeph")),4,__list_values11___330)));
        /*g*/come_call_finalizer3(__right_value372,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value374,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value376,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_333=(struct list$1charph*)come_increment_ref_count((__list_values12___332[0]=come_increment_ref_count(((char*)(__right_value381=__builtin_string("block")))),
__list_values12___332[1]=come_increment_ref_count(((char*)(__right_value382=__builtin_string("sname")))),
__list_values12___332[2]=come_increment_ref_count(((char*)(__right_value383=__builtin_string("sline")))),
__list_values12___332[3]=come_increment_ref_count(((char*)(__right_value384=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 923, "struct list$1charph")),4,__list_values12___332)));
        /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_334=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 924, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_334,((void*)0));
        list$1charph_push_back(param_default_parametors_334,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_334,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_334,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_335=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 929, "sFun")),(char*)come_increment_ref_count(name_328),(struct sType*)come_increment_ref_count(result_type_329),(struct list$1sTypeph*)come_increment_ref_count(param_types_331),(struct list$1charph*)come_increment_ref_count(param_names_333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_334),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_328)),(struct sFun*)come_increment_ref_count(main_fun_335));
        /* U13 */name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_331,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_333,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_334,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_335,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_336=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 940, "sType")),"void*",(_Bool)0,info));
        param_types_339=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___338[0]=come_increment_ref_count(((struct sType*)(__right_value401=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 941, "sType")),"void*",(_Bool)0,info)))),
__list_values13___338[1]=come_increment_ref_count(((struct sType*)(__right_value403=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 941, "sType")),"int",(_Bool)0,info)))),
__list_values13___338[2]=come_increment_ref_count(((struct sType*)(__right_value405=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 941, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 941, "struct list$1sTypeph")),3,__list_values13___338)));
        /*g*/come_call_finalizer3(__right_value401,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value403,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value405,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_341=(struct list$1charph*)come_increment_ref_count((__list_values14___340[0]=come_increment_ref_count(((char*)(__right_value408=__builtin_string("b")))),
__list_values14___340[1]=come_increment_ref_count(((char*)(__right_value409=__builtin_string("c")))),
__list_values14___340[2]=come_increment_ref_count(((char*)(__right_value410=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 942, "struct list$1charph")),3,__list_values14___340)));
        /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_342=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 943, "list$1charph"))));
        main_fun_343=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 944, "sFun")),(char*)come_increment_ref_count(name_336),(struct sType*)come_increment_ref_count(result_type_337),(struct list$1sTypeph*)come_increment_ref_count(param_types_339),(struct list$1charph*)come_increment_ref_count(param_names_341),(struct list$1charph*)come_increment_ref_count(param_default_parametors_342),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_336)),(struct sFun*)come_increment_ref_count(main_fun_343));
        /* U13 */name_336 = come_decrement_ref_count2(name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_339,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_343,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_344=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_345=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 955, "sType")),"char*",(_Bool)0,info));
        param_types_347=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___346[0]=come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 956, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 956, "struct list$1sTypeph")),1,__list_values15___346)));
        /*g*/come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_349=(struct list$1charph*)come_increment_ref_count((__list_values16___348[0]=come_increment_ref_count(((char*)(__right_value427=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 957, "struct list$1charph")),1,__list_values16___348)));
        /* U11 */__right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_350=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 958, "list$1charph"))));
        main_fun_351=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 959, "sFun")),(char*)come_increment_ref_count(name_344),(struct sType*)come_increment_ref_count(result_type_345),(struct list$1sTypeph*)come_increment_ref_count(param_types_347),(struct list$1charph*)come_increment_ref_count(param_names_349),(struct list$1charph*)come_increment_ref_count(param_default_parametors_350),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_344)),(struct sFun*)come_increment_ref_count(main_fun_351));
        /* U13 */name_344 = come_decrement_ref_count2(name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_349,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_350,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_351,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_352=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_353=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 970, "sType")),"void",(_Bool)0,info));
        param_types_355=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___354[0]=come_increment_ref_count(((struct sType*)(__right_value441=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 971, "sType")),"int",(_Bool)0,info)))),
__list_values17___354[1]=come_increment_ref_count(((struct sType*)(__right_value443=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 971, "sType")),"int",(_Bool)0,info)))),
__list_values17___354[2]=come_increment_ref_count(((struct sType*)(__right_value445=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 971, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 971, "struct list$1sTypeph")),3,__list_values17___354)));
        /*g*/come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value443,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value445,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_357=(struct list$1charph*)come_increment_ref_count((__list_values18___356[0]=come_increment_ref_count(((char*)(__right_value448=xsprintf("come_malloc")))),
__list_values18___356[1]=come_increment_ref_count(((char*)(__right_value449=xsprintf("come_debug")))),
__list_values18___356[2]=come_increment_ref_count(((char*)(__right_value450=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 972, "struct list$1charph")),3,__list_values18___356)));
        /* U11 */__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_358=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 973, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_358,((void*)0));
        main_fun_359=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 975, "sFun")),(char*)come_increment_ref_count(name_352),(struct sType*)come_increment_ref_count(result_type_353),(struct list$1sTypeph*)come_increment_ref_count(param_types_355),(struct list$1charph*)come_increment_ref_count(param_names_357),(struct list$1charph*)come_increment_ref_count(param_default_parametors_358),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_352)),(struct sFun*)come_increment_ref_count(main_fun_359));
        /* U13 */name_352 = come_decrement_ref_count2(name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_353,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_355,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_358,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_359,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_360=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_361=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 986, "sType")),"void",(_Bool)0,info));
        param_types_362=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 987, "list$1sTypeph"))));
        param_names_363=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 988, "list$1charph"))));
        param_default_parametors_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 989, "list$1charph"))));
        main_fun_365=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 990, "sFun")),(char*)come_increment_ref_count(name_360),(struct sType*)come_increment_ref_count(result_type_361),(struct list$1sTypeph*)come_increment_ref_count(param_types_362),(struct list$1charph*)come_increment_ref_count(param_names_363),(struct list$1charph*)come_increment_ref_count(param_default_parametors_364),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_360)),(struct sFun*)come_increment_ref_count(main_fun_365));
        /* U13 */name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_363,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_364,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_365,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_366=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_367=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1001, "sType")),"void*",(_Bool)0,info));
        param_types_369=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___368[0]=come_increment_ref_count(((struct sType*)(__right_value478=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1002, "sType")),"void*",(_Bool)0,info)))),
__list_values19___368[1]=come_increment_ref_count(((struct sType*)(__right_value480=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1002, "sType")),"char*",(_Bool)0,info)))),
__list_values19___368[2]=come_increment_ref_count(((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1002, "sType")),"int",(_Bool)0,info)))),
__list_values19___368[3]=come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1002, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1002, "struct list$1sTypeph")),4,__list_values19___368)));
        /*g*/come_call_finalizer3(__right_value478,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value480,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_371=(struct list$1charph*)come_increment_ref_count((__list_values20___370[0]=come_increment_ref_count(((char*)(__right_value487=__builtin_string("mem")))),
__list_values20___370[1]=come_increment_ref_count(((char*)(__right_value488=__builtin_string("sname")))),
__list_values20___370[2]=come_increment_ref_count(((char*)(__right_value489=__builtin_string("sline")))),
__list_values20___370[3]=come_increment_ref_count(((char*)(__right_value490=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1003, "struct list$1charph")),4,__list_values20___370)));
        /* U11 */__right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_372=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1004, "list$1charph"))));
        main_fun_373=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1005, "sFun")),(char*)come_increment_ref_count(name_366),(struct sType*)come_increment_ref_count(result_type_367),(struct list$1sTypeph*)come_increment_ref_count(param_types_369),(struct list$1charph*)come_increment_ref_count(param_names_371),(struct list$1charph*)come_increment_ref_count(param_default_parametors_372),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_366)),(struct sFun*)come_increment_ref_count(main_fun_373));
        /* U13 */name_366 = come_decrement_ref_count2(name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_369,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_371,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_372,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_373,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_374=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_375=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1016, "sType")),"void",(_Bool)0,info));
        param_types_376=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1017, "list$1sTypeph"))));
        param_names_377=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1018, "list$1charph"))));
        param_default_parametors_378=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1019, "list$1charph"))));
        fun_379=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1020, "sFun")),(char*)come_increment_ref_count(name_374),(struct sType*)come_increment_ref_count(result_type_375),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_378),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_374)),(struct sFun*)come_increment_ref_count(fun_379));
        /* U13 */name_374 = come_decrement_ref_count2(name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_376,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_377,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_378,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_379,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_380=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_381=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1031, "sType")),"void",(_Bool)0,info));
        param_types_382=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1032, "list$1sTypeph"))));
        param_names_383=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1033, "list$1charph"))));
        param_default_parametors_384=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1034, "list$1charph"))));
        fun_385=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1035, "sFun")),(char*)come_increment_ref_count(name_380),(struct sType*)come_increment_ref_count(result_type_381),(struct list$1sTypeph*)come_increment_ref_count(param_types_382),(struct list$1charph*)come_increment_ref_count(param_names_383),(struct list$1charph*)come_increment_ref_count(param_default_parametors_384),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_380)),(struct sFun*)come_increment_ref_count(fun_385));
        /* U13 */name_380 = come_decrement_ref_count2(name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_382,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_383,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_384,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_385,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_242;
struct list$1sTypeph* __result128__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        list$1sTypeph_push_back(self,values[i_242]);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
struct list_item$1sTypeph* litem_243;
struct sType* __dec_obj150;
void* __right_value243 = (void*)0;
struct list_item$1sTypeph* litem_244;
struct sType* __dec_obj151;
void* __right_value244 = (void*)0;
struct list_item$1sTypeph* litem_245;
struct sType* __dec_obj152;
struct list$1sTypeph* __result127__;
    if(    self->len==0) {
        litem_243=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value242=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 219, "list_item$1sTypeph"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        __dec_obj150=litem_243->item;
        litem_243->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_243;
        self->head=litem_243;
    }
    else if(    self->len==1) {
        litem_244=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value243=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 229, "list_item$1sTypeph"))));
        litem_244->prev=self->head;
        litem_244->next=((void*)0);
        __dec_obj151=litem_244->item;
        litem_244->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_244;
        self->head->next=litem_244;
    }
    else {
        litem_245=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value244=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 239, "list_item$1sTypeph"))));
        litem_245->prev=self->tail;
        litem_245->next=((void*)0);
        __dec_obj152=litem_245->item;
        litem_245->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_245;
        self->tail=litem_245;
    }
    self->len++;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_248;
struct list$1charph* __result130__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_248=0;    i_248<num_value;    i_248++    ){
        list$1charph_push_back(self,values[i_248]);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct list_item$1charph* litem_249;
char* __dec_obj153;
void* __right_value253 = (void*)0;
struct list_item$1charph* litem_250;
char* __dec_obj154;
void* __right_value254 = (void*)0;
struct list_item$1charph* litem_251;
char* __dec_obj155;
struct list$1charph* __result129__;
    if(    self->len==0) {
        litem_249=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value252=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 219, "list_item$1charph"))));
        litem_249->prev=((void*)0);
        litem_249->next=((void*)0);
        __dec_obj153=litem_249->item;
        litem_249->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_249;
        self->head=litem_249;
    }
    else if(    self->len==1) {
        litem_250=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value253=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 229, "list_item$1charph"))));
        litem_250->prev=self->head;
        litem_250->next=((void*)0);
        __dec_obj154=litem_250->item;
        litem_250->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_250;
        self->head->next=litem_250;
    }
    else {
        litem_251=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value254=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 239, "list_item$1charph"))));
        litem_251->prev=self->tail;
        litem_251->next=((void*)0);
        __dec_obj155=litem_251->item;
        litem_251->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_251;
        self->tail=litem_251;
    }
    self->len++;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_272;
unsigned int it_273;
_Bool same_key_exist_290;
char* it2_293;
struct map$2charphsFunph* __result151__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_272=string_get_hash_key(key)%self->size;
    it_273=hash_272;
    while((_Bool)1) {
        if(        self->item_existance[it_273]) {
            if(            string_equals(self->keys[it_273],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_273]);
                    /* U13 */self->keys[it_273] = come_decrement_ref_count2(self->keys[it_273], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_273]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_273]);
                    self->keys[it_273]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_273],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_273]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_273]=item;
                }
                break;
            }
            it_273++;
            if(            it_273>=self->size) {
                it_273=0;
            }
            else if(            it_273==hash_272) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_273]=(_Bool)1;
            if(            1) {
                self->keys[it_273]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_273]=key;
            }
            if(            1) {
                self->items[it_273]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_273]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_290=(_Bool)0;
    for(    it2_293=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_293=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_293,key)) {
            same_key_exist_290=(_Bool)1;
        }
    }
    if(    !same_key_exist_290) {
        list$1charp_push_back(self->key_list,key);
    }
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_255;
void* __right_value266 = (void*)0;
char** keys_256;
void* __right_value267 = (void*)0;
struct sFun** items_257;
void* __right_value268 = (void*)0;
_Bool* item_existance_258;
int len_259;
char* it_262;
struct sFun* default_value_265;
struct sFun* it2_266;
unsigned int hash_269;
int n_270;
struct sFun* default_value_271;
default_value_265 = (void*)0;
default_value_271 = (void*)0;
    size_255=self->size*10;
    keys_256=(char**)come_increment_ref_count(((char**)(__right_value266=(char**)come_calloc(1, sizeof(char*)*(1*(size_255)), "./comelang.h", 1624, "char*%"))));
    items_257=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value267=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_255)), "./comelang.h", 1625, "sFun*%"))));
    item_existance_258=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value268=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_255)), "./comelang.h", 1626, "bool"))));
    len_259=0;
    for(    it_262=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_262=map$2charphsFunph_next(self)    ){
        memset(&default_value_265,0,sizeof(struct sFun*));
        it2_266=map$2charphsFunph_at(self,it_262,default_value_265);
        hash_269=string_get_hash_key(it_262)%size_255;
        n_270=hash_269;
        while((_Bool)1) {
            if(            item_existance_258[n_270]) {
                n_270++;
                if(                n_270>=size_255) {
                    n_270=0;
                }
                else if(                n_270==hash_269) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_258[n_270]=(_Bool)1;
                keys_256[n_270]=it_262;
                items_257[n_270]=map$2charphsFunph_at(self,it_262,default_value_271);
                len_259++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_256;
    self->items=items_257;
    self->item_existance=item_existance_258;
    self->size=size_255;
    self->len=len_259;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_260;
char* __result131__;
char* __result132__;
char* result_261;
char* __result133__;
result_260 = (void*)0;
result_261 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_260,0,sizeof(char*));
        __result131__ = gComeFunResultObject = __result_obj__ = result_260;
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result132__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result132__;
    }
    memset(&result_261,0,sizeof(char*));
    __result133__ = gComeFunResultObject = __result_obj__ = result_261;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_263;
char* __result134__;
char* __result135__;
char* result_264;
char* __result136__;
result_263 = (void*)0;
result_264 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_263,0,sizeof(char*));
        __result134__ = gComeFunResultObject = __result_obj__ = result_263;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result135__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    memset(&result_264,0,sizeof(char*));
    __result136__ = gComeFunResultObject = __result_obj__ = result_264;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_267;
unsigned int it_268;
struct sFun* __result137__;
struct sFun* __result138__;
struct sFun* __result139__;
struct sFun* __result140__;
    hash_267=string_get_hash_key(((char*)key))%self->size;
    it_268=hash_267;
    while((_Bool)1) {
        if(        self->item_existance[it_268]) {
            if(            string_equals(self->keys[it_268],key)) {
                __result137__ = gComeFunResultObject = __result_obj__ = self->items[it_268];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result137__;
            }
            it_268++;
            if(            it_268>=self->size) {
                it_268=0;
            }
            else if(            it_268==hash_267) {
                __result138__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result138__;
            }
        }
        else {
            __result139__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result139__;
        }
    }
    __result140__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_274;
struct list_item$1charp* it_275;
struct list$1charp* __result144__;
    it2_274=0;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        if(        charp_equals(it_275->item,item)) {
            list$1charp_delete(self,it2_274,it2_274+1);
            break;
        }
        it2_274++;
        it_275=it_275->next;
    }
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_276;
struct list$1charp* __result141__;
struct list_item$1charp* it_279;
int i_280;
struct list_item$1charp* prev_it_281;
struct list_item$1charp* it_282;
int i_283;
struct list_item$1charp* prev_it_284;
struct list_item$1charp* it_285;
struct list_item$1charp* head_prev_it_286;
struct list_item$1charp* tail_it_287;
int i_288;
struct list_item$1charp* prev_it_289;
struct list$1charp* __result143__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_276=tail;
        tail=head;
        head=tmp_276;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result141__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_279=self->head;
        i_280=0;
        while(it_279!=((void*)0)) {
            if(            i_280<tail) {
                prev_it_281=it_279;
                it_279=it_279->next;
                i_280++;
                /*i*/come_call_finalizer3(prev_it_281,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_280==tail) {
                self->head=it_279;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_279=it_279->next;
                i_280++;
            }
        }
    }
    else if(    tail==self->len) {
        it_282=self->head;
        i_283=0;
        while(it_282!=((void*)0)) {
            if(            i_283==head) {
                self->tail=it_282->prev;
                self->tail->next=((void*)0);
            }
            if(            i_283>=head) {
                prev_it_284=it_282;
                it_282=it_282->next;
                i_283++;
                /*i*/come_call_finalizer3(prev_it_284,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_282=it_282->next;
                i_283++;
            }
        }
    }
    else {
        it_285=self->head;
        head_prev_it_286=((void*)0);
        tail_it_287=((void*)0);
        i_288=0;
        while(it_285!=((void*)0)) {
            if(            i_288==head) {
                head_prev_it_286=it_285->prev;
            }
            if(            i_288==tail) {
                tail_it_287=it_285;
            }
            if(            i_288>=head&&i_288<tail) {
                prev_it_289=it_285;
                it_285=it_285->next;
                i_288++;
                /*i*/come_call_finalizer3(prev_it_289,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_285=it_285->next;
                i_288++;
            }
        }
        if(        head_prev_it_286!=((void*)0)) {
            head_prev_it_286->next=tail_it_287;
        }
        if(        tail_it_287!=((void*)0)) {
            tail_it_287->prev=head_prev_it_286;
        }
    }
    __result143__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result143__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_277;
struct list_item$1charp* prev_it_278;
struct list$1charp* __result142__;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*i*/come_call_finalizer3(prev_it_278,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result142__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_291;
char* __result145__;
char* __result146__;
char* result_292;
char* __result147__;
result_291 = (void*)0;
result_292 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_291,0,sizeof(char*));
        __result145__ = gComeFunResultObject = __result_obj__ = result_291;
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    self->it=self->head;
    if(    self->it) {
        __result146__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    memset(&result_292,0,sizeof(char*));
    __result147__ = gComeFunResultObject = __result_obj__ = result_292;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_294;
char* __result148__;
char* __result149__;
char* result_295;
char* __result150__;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_294,0,sizeof(char*));
        __result148__ = gComeFunResultObject = __result_obj__ = result_294;
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result149__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    memset(&result_295,0,sizeof(char*));
    __result150__ = gComeFunResultObject = __result_obj__ = result_295;
    gComeFunResultObject = (void*)0;
    return __result150__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_386;
_Bool is_type_name_flag_387;
int sline_388;
_Bool define_struct_nobody_389;
char* p_390;
int sline_391;
void* __right_value528 = (void*)0;
char* word_392;
_Bool define_function_pointer_result_function_393;
_Bool define_variable_between_brace_394;
char* p_395;
void* __right_value529 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_396=0;
char* fun_name_397=0;
_Bool err_398=0;
void* __right_value530 = (void*)0;
char* word_399;
_Bool define_function_flag_400;
char* p_401;
void* __right_value531 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_402=0;
char* fun_name_403=0;
_Bool err_404=0;
char* word_405;
void* __right_value532 = (void*)0;
char* __dec_obj158;
void* __right_value533 = (void*)0;
char* __dec_obj159;
char* __dec_obj160;
void* __right_value534 = (void*)0;
char* __dec_obj161;
_Bool define_variable_406;
char* p_407;
void* __right_value535 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_408=0;
char* fun_name_409=0;
_Bool err_410=0;
void* __right_value536 = (void*)0;
char* word_411;
void* __right_value537 = (void*)0;
char* word_412;
char* p_413;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
char* word_414;
void* __right_value540 = (void*)0;
char* __dec_obj162;
void* __right_value541 = (void*)0;
char* word_415;
void* __right_value542 = (void*)0;
char* word_418;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sNode* node_419;
struct sNode* __result153__;
void* __right_value545 = (void*)0;
struct sNode* __result154__;
char* header_head_420;
void* __right_value546 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_421=0;
char* fun_name_422=0;
_Bool err_423=0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1sTypeph* param_types_424;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1charph* param_names_425;
void* __right_value551 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_426=0;
char* param_name_427=0;
_Bool err_428=0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1sTypeph* param_types2_430;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1charph* param_names2_431;
void* __right_value558 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_432=0;
char* param_name_433=0;
_Bool err_434=0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
char* header_tail_436;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* result_type2_437;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct tuple1$1sTypeph* __dec_obj164;
void* __right_value565 = (void*)0;
struct list$1sTypeph* __dec_obj165;
void* __right_value566 = (void*)0;
struct list$1charph* __dec_obj166;
_Bool var_args_438;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct buffer* header_buf_439;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1charph* param_default_parametors_440;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sFun* fun_441;
void* __right_value576 = (void*)0;
struct sFun* fun2_445;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value614 = (void*)0;
struct sNode* __result183__;
void* __right_value615 = (void*)0;
struct sNode* node_480;
struct sNode* __result184__;
void* __right_value616 = (void*)0;
struct sNode* node_481;
char* source_tail_482;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct buffer* header_483;
struct sNode* __result185__;
void* __right_value619 = (void*)0;
char* buf2_484;
void* __right_value620 = (void*)0;
struct sNode* __result186__;
    source_head_386=info->p;
    is_type_name_flag_387=is_type_name(buf,info);
    sline_388=info->sline;
    define_struct_nobody_389=(_Bool)0;
    {
        p_390=info->p;
        sline_391=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_392=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_389=(_Bool)1;
                }
                /* U13 */word_392 = come_decrement_ref_count2(word_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_391;
    }
    define_function_pointer_result_function_393=(_Bool)0;
    define_variable_between_brace_394=(_Bool)0;
    if(    is_type_name_flag_387) {
        p_395=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value529=backtrace_parse_type((_Bool)0,info)));
            result_type_396=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_397=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_398=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value529,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_393=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_399=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_399,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_394=(_Bool)1;
                            }
                        }
                        /* U13 */word_399 = come_decrement_ref_count2(word_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_396,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_397 = come_decrement_ref_count2(fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_388;
    }
    define_function_flag_400=(_Bool)0;
    if(    is_type_name_flag_387&&!define_function_pointer_result_function_393&&charp_operator_not_equals(buf,"__typeof__")) {
        p_401=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value531=backtrace_parse_type((_Bool)0,info)));
            result_type_402=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_403=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_404=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value531,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_403 = come_decrement_ref_count2(fun_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_405=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj158=word_405;
                word_405=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_405,"extern")) {
                    __dec_obj159=word_405;
                    word_405=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj160=word_405;
                word_405=((void*)0);
                /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_405) {
                if(                is_type_name(word_405,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj161=word_405;
                        word_405=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_405)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_387) {
                        define_function_flag_400=(_Bool)1;
                    }
                }
            }
            /* U13 */word_405 = come_decrement_ref_count2(word_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_401;
        info->sline=sline_388;
    }
    define_variable_406=(_Bool)1;
    if(    is_type_name_flag_387&&!define_function_pointer_result_function_393) {
        p_407=info->p;
        info->p=head;
        if(        !is_type_name_flag_387) {
            define_variable_406=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value535=backtrace_parse_type((_Bool)0,info)));
            result_type_408=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_409=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_410=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value535,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_411=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_406=(_Bool)1;
                            }
                        }
                        /* U13 */word_411 = come_decrement_ref_count2(word_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_412=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_412,info)&&*info->p!=40) {
                            define_variable_406=(_Bool)1;
                        }
                    }
                    /* U13 */word_412 = come_decrement_ref_count2(word_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_409 = come_decrement_ref_count2(fun_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_406=(_Bool)0;
        }
        else if(        define_variable_406) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_406=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_406=(_Bool)0;
            }
        }
        info->p=p_407;
        info->sline=sline_388;
    }
    else {
        define_variable_406=(_Bool)0;
    }
    {
        p_413=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value538=parse_word(info)));
                /* U11 */__right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_414=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj162=word_414;
                        word_414=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_414,"extends")) {
                            define_variable_406=(_Bool)0;
                        }
                    }
                    /* U13 */word_414 = come_decrement_ref_count2(word_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_406=(_Bool)0;
        }
        else if(        define_variable_406) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_406=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_406=(_Bool)0;
            }
        }
        info->p=p_413;
        info->sline=sline_388;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_415=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_418=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_418)));
                    /* U13 */word_418 = come_decrement_ref_count2(word_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_419=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result153__ = gComeFunResultObject = __result_obj__ = node_419;
            if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */word_415 = come_decrement_ref_count2(word_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result153__;
            if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */word_415 = come_decrement_ref_count2(word_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_389) {
    }
    else if(    define_variable_between_brace_394) {
        info->p=head;
        info->sline=sline_388;
        __result154__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value545=parse_global_variable(info)));
        if(__right_value545) { __right_value545 = come_decrement_ref_count2(__right_value545, ((struct sNode*)__right_value545)->finalize, ((struct sNode*)__right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    else if(    define_function_pointer_result_function_393) {
        header_head_420=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value546=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_421=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_422=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_423=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value546,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_424=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1361, "list$1sTypeph"))));
            param_names_425=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1362, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value551=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_426=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_427=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_428=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value551,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_428) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_424,(struct sType*)come_increment_ref_count(param_type_426));
                    static int num_function_pointer_result_var_name_a_429=0;
                    list$1charph_push_back(param_names_425,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_429)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value553=parse_word(info)));
                        /* U11 */__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_427 = come_decrement_ref_count2(param_name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_427 = come_decrement_ref_count2(param_name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_430=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1408, "list$1sTypeph"))));
                param_names2_431=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1409, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value558=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_432=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_433=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_434=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value558,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_434) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_430,(struct sType*)come_increment_ref_count(param_type_432));
                        static int num_function_pointer_result_var_name_b_435=0;
                        list$1charph_push_back(param_names2_431,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_435)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value560=parse_word(info)));
                            /* U11 */__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */param_name_433 = come_decrement_ref_count2(param_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_433 = come_decrement_ref_count2(param_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_436=info->p;
                result_type2_437=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1451, "sType")),"lambda",(_Bool)0,info));
                __dec_obj164=result_type2_437->mResultType;
                result_type2_437->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1453, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_421)));
                come_call_finalizer3(__dec_obj164,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj165=result_type2_437->mParamTypes;
                result_type2_437->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_430));
                come_call_finalizer3(__dec_obj165,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj166=result_type2_437->mParamNames;
                result_type2_437->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_431));
                come_call_finalizer3(__dec_obj166,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_437->mVarArgs=(_Bool)0;
                result_type2_437->mStatic=(_Bool)0;
                var_args_438=(_Bool)0;
                header_buf_439=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1461, "buffer"))));
                buffer_append(header_buf_439,header_head_420,header_tail_436-header_head_420);
                buffer_append_char(header_buf_439,0);
                param_default_parametors_440=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1465, "list$1charph"))));
                fun_441=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1467, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_422)),(struct sType*)come_increment_ref_count(result_type2_437),(struct list$1sTypeph*)come_increment_ref_count(param_types_424),(struct list$1charph*)come_increment_ref_count(param_names_425),(struct list$1charph*)come_increment_ref_count(param_default_parametors_440),(_Bool)1,var_args_438,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_439)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                fun2_445=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value576=__builtin_string(fun_name_422))));
                /* U11 */__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_445==((void*)0)||fun2_445->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_422)),(struct sFun*)come_increment_ref_count(fun_441));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1479, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value579=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1479, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_441),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result183__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value614=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_430,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_440,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_441,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_424,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_425,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_422 = come_decrement_ref_count2(fun_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value579,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value614) { __right_value614 = come_decrement_ref_count2(__right_value614, ((struct sNode*)__right_value614)->finalize, ((struct sNode*)__right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result183__;
                /*i*/come_call_finalizer3(param_types2_430,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_440,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_441,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_424,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_425,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_422 = come_decrement_ref_count2(fun_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_400) {
        info->p=head;
        info->sline=sline_388;
        node_480=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result184__ = gComeFunResultObject = __result_obj__ = node_480;
        if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result184__;
        if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_406) {
        info->p=head;
        info->sline=sline_388;
        node_481=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_482=info->p;
        header_483=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1503, "buffer"))));
        buffer_append(header_483,source_head_386,source_tail_482-source_head_386);
        __result185__ = gComeFunResultObject = __result_obj__ = node_481;
        if(node_481) { node_481 = come_decrement_ref_count2(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result185__;
        if(node_481) { node_481 = come_decrement_ref_count2(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_388;
    buf2_484=(char*)come_increment_ref_count(parse_word(info));
    __result186__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value620=top_level_v98(buf2_484,head,head_sline,info)));
    /* U13 */buf2_484 = come_decrement_ref_count2(buf2_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value620) { __right_value620 = come_decrement_ref_count2(__right_value620, ((struct sNode*)__right_value620)->finalize, ((struct sNode*)__right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj156;
char* __dec_obj157;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj156=self->v1;
            come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj157=self->v2;
            /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_416;
struct list_item$1charph* prev_it_417;
struct list$1charph* __result152__;
    it_416=self->head;
    while(it_416!=((void*)0)) {
        prev_it_417=it_416;
        it_416=it_416->next;
        /*i*/come_call_finalizer3(prev_it_417,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result152__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj163;
struct tuple1$1sTypeph* __result155__;
    __dec_obj163=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_442;
unsigned int hash_443;
unsigned int it_444;
struct sFun* __result156__;
struct sFun* __result157__;
struct sFun* __result158__;
struct sFun* __result159__;
default_value_442 = (void*)0;
    memset(&default_value_442,0,sizeof(struct sFun*));
    hash_443=string_get_hash_key(((char*)key))%self->size;
    it_444=hash_443;
    while((_Bool)1) {
        if(        self->item_existance[it_444]) {
            if(            string_equals(self->keys[it_444],key)) {
                __result156__ = gComeFunResultObject = __result_obj__ = self->items[it_444];
                /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result156__;
            }
            it_444++;
            if(            it_444>=self->size) {
                it_444=0;
            }
            else if(            it_444==hash_443) {
                __result157__ = gComeFunResultObject = __result_obj__ = default_value_442;
                /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result157__;
            }
        }
        else {
            __result158__ = gComeFunResultObject = __result_obj__ = default_value_442;
            /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result158__;
        }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = default_value_442;
    /*i*/come_call_finalizer3(default_value_442,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result161__;
void* __right_value582 = (void*)0;
struct sFun* result_447;
void* __right_value583 = (void*)0;
char* __dec_obj170;
void* __right_value584 = (void*)0;
struct sType* __dec_obj171;
void* __right_value585 = (void*)0;
struct list$1sTypeph* __dec_obj172;
void* __right_value586 = (void*)0;
struct list$1charph* __dec_obj173;
void* __right_value587 = (void*)0;
struct list$1charph* __dec_obj174;
void* __right_value588 = (void*)0;
struct sType* __dec_obj175;
void* __right_value606 = (void*)0;
struct sBlock* __dec_obj181;
void* __right_value607 = (void*)0;
struct buffer* __dec_obj182;
void* __right_value608 = (void*)0;
struct buffer* __dec_obj183;
void* __right_value609 = (void*)0;
struct buffer* __dec_obj184;
void* __right_value610 = (void*)0;
struct buffer* __dec_obj185;
void* __right_value611 = (void*)0;
char* __dec_obj186;
void* __right_value612 = (void*)0;
char* __dec_obj187;
struct sFun* __result181__;
    if(    self==(void*)0) {
        __result161__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    result_447=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj170=result_447->mName;
        result_447->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj171=result_447->mResultType;
        result_447->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj172=result_447->mParamTypes;
        result_447->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj172,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj173=result_447->mParamNames;
        result_447->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj173,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj174=result_447->mParamDefaultParametors;
        result_447->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj174,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj175=result_447->mLambdaType;
        result_447->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj181=result_447->mBlock;
        result_447->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj181,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_447->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj182=result_447->mSource;
        result_447->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj183=result_447->mSourceHead;
        result_447->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj184=result_447->mSourceHead2;
        result_447->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj185=result_447->mSourceDefer;
        result_447->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj185,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj186=result_447->mComeHeader;
        result_447->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj187=result_447->mDeclareSName;
        result_447->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_447->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_447->no_output_come_code2=self->no_output_come_code2;
    }
    __result181__ = gComeFunResultObject = __result_obj__ = result_447;
    /*i*/come_call_finalizer3(result_447,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result162__;
void* __right_value589 = (void*)0;
struct sBlock* result_448;
void* __right_value590 = (void*)0;
struct list$1sNodeph* __dec_obj176;
void* __right_value605 = (void*)0;
struct sVarTable* __dec_obj180;
struct sBlock* __result180__;
    if(    self==(void*)0) {
        __result162__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    result_448=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj176=result_448->mNodes;
        result_448->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj176,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj180=result_448->mVarTable;
        result_448->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj180,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_448->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_448;
    /*i*/come_call_finalizer3(result_448,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result163__;
void* __right_value591 = (void*)0;
struct sVarTable* result_449;
void* __right_value604 = (void*)0;
struct map$2charphsVarph* __dec_obj179;
struct sVarTable* __result179__;
    if(    self==(void*)0) {
        __result163__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_449=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj179=result_449->mVars;
        result_449->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj179,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_449->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_449->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_449->mID=self->mID;
    }
    __result179__ = gComeFunResultObject = __result_obj__ = result_449;
    /*i*/come_call_finalizer3(result_449,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result164__;
void* __right_value592 = (void*)0;
void* __right_value598 = (void*)0;
struct map$2charphsVarph* result_453;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct list$1charp* __dec_obj178;
char* it_456;
struct sVar* default_value_459;
struct sVar* it2_462;
struct map$2charphsVarph* __result178__;
default_value_459 = (void*)0;
    if(    self==((void*)0)) {
        __result164__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result_453=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 1467, "map$2charphsVarph"))));
    __dec_obj178=result_453->key_list;
    result_453->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1469, "list$1charp"))));
    come_call_finalizer3(__dec_obj178,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_456=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_456=map$2charphsVarph_next(self)    ){
        memset(&default_value_459,0,sizeof(struct sVar*));
        it2_462=map$2charphsVarph_at(self,it_456,default_value_459);
        map$2charphsVarph_put(result_453,it_456,it2_462);
    }
    __result178__ = gComeFunResultObject = __result_obj__ = result_453;
    /*i*/come_call_finalizer3(result_453,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
int i_450;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1charp* __dec_obj177;
struct map$2charphsVarph* __result166__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value593=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1396, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value594=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1397, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value595=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1398, "bool"))));
    for(    i_450=0;    i_450<128;    i_450++    ){
        self->item_existance[i_450]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj177=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1408, "list$1charp"))));
    come_call_finalizer3(__dec_obj177,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result166__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result165__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result165__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_451;
int i_452;
    for(    i_451=0;    i_451<self->size;    i_451++    ){
        if(        self->item_existance[i_451]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_451],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_452=0;    i_452<self->size;    i_452++    ){
        if(        self->item_existance[i_452]) {
            if(            1) {
                /* U13 */self->keys[i_452] = come_decrement_ref_count2(self->keys[i_452], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_454;
char* __result167__;
char* __result168__;
char* result_455;
char* __result169__;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_454,0,sizeof(char*));
        __result167__ = gComeFunResultObject = __result_obj__ = result_454;
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result168__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    memset(&result_455,0,sizeof(char*));
    __result169__ = gComeFunResultObject = __result_obj__ = result_455;
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_457;
char* __result170__;
char* __result171__;
char* result_458;
char* __result172__;
result_457 = (void*)0;
result_458 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_457,0,sizeof(char*));
        __result170__ = gComeFunResultObject = __result_obj__ = result_457;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result171__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    memset(&result_458,0,sizeof(char*));
    __result172__ = gComeFunResultObject = __result_obj__ = result_458;
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_460;
unsigned int it_461;
struct sVar* __result173__;
struct sVar* __result174__;
struct sVar* __result175__;
struct sVar* __result176__;
    hash_460=string_get_hash_key(((char*)key))%self->size;
    it_461=hash_460;
    while((_Bool)1) {
        if(        self->item_existance[it_461]) {
            if(            string_equals(self->keys[it_461],key)) {
                __result173__ = gComeFunResultObject = __result_obj__ = self->items[it_461];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result173__;
            }
            it_461++;
            if(            it_461>=self->size) {
                it_461=0;
            }
            else if(            it_461==hash_460) {
                __result174__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result174__;
            }
        }
        else {
            __result175__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result175__;
        }
    }
    __result176__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_474;
int it_475;
_Bool same_key_exist_476;
char* it2_477;
struct map$2charphsVarph* __result177__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_474=string_get_hash_key(key)%self->size;
    it_475=hash_474;
    while((_Bool)1) {
        if(        self->item_existance[it_475]) {
            if(            string_equals(self->keys[it_475],key)) {
                if(                1) {
                    /* U13 */self->keys[it_475] = come_decrement_ref_count2(self->keys[it_475], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_475]);
                    self->keys[it_475]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_475]);
                    self->keys[it_475]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_475],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_475]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_475]=item;
                }
                break;
            }
            it_475++;
            if(            it_475>=self->size) {
                it_475=0;
            }
            else if(            it_475==hash_474) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_475]=(_Bool)1;
            if(            1) {
                self->keys[it_475]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_475]=key;
            }
            if(            1) {
                self->items[it_475]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_475]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_476=(_Bool)0;
    for(    it2_477=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_477=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_477,key)) {
            same_key_exist_476=(_Bool)1;
        }
    }
    if(    !same_key_exist_476) {
        list$1charp_push_back(self->key_list,key);
    }
    __result177__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_463;
void* __right_value601 = (void*)0;
char** keys_464;
void* __right_value602 = (void*)0;
struct sVar** items_465;
void* __right_value603 = (void*)0;
_Bool* item_existance_466;
int len_467;
char* it_468;
struct sVar* default_value_469;
struct sVar* it2_470;
unsigned int hash_471;
int n_472;
struct sVar* default_value_473;
default_value_469 = (void*)0;
default_value_473 = (void*)0;
    size_463=self->size*10;
    keys_464=(char**)come_increment_ref_count(((char**)(__right_value601=(char**)come_calloc(1, sizeof(char*)*(1*(size_463)), "./comelang.h", 1624, "char*%"))));
    items_465=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value602=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_463)), "./comelang.h", 1625, "sVar*%"))));
    item_existance_466=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value603=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_463)), "./comelang.h", 1626, "bool"))));
    len_467=0;
    for(    it_468=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_468=map$2charphsVarph_next(self)    ){
        memset(&default_value_469,0,sizeof(struct sVar*));
        it2_470=map$2charphsVarph_at(self,it_468,default_value_469);
        hash_471=string_get_hash_key(it_468)%size_463;
        n_472=hash_471;
        while((_Bool)1) {
            if(            item_existance_466[n_472]) {
                n_472++;
                if(                n_472>=size_463) {
                    n_472=0;
                }
                else if(                n_472==hash_471) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_466[n_472]=(_Bool)1;
                keys_464[n_472]=it_468;
                items_465[n_472]=map$2charphsVarph_at(self,it_468,default_value_473);
                len_467++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_464;
    self->items=items_465;
    self->item_existance=item_existance_466;
    self->size=size_463;
    self->len=len_467;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_478;
int i_479;
    for(    i_478=0;    i_478<self->size;    i_478++    ){
        if(        self->item_existance[i_478]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_478],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_479=0;    i_479<self->size;    i_479++    ){
        if(        self->item_existance[i_479]) {
            if(            1) {
                /* U13 */self->keys[i_479] = come_decrement_ref_count2(self->keys[i_479], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_485;
int caller_line_486;
char* caller_sname_487;
_Bool comma_instead_of_semicolon_488;
char* last_code_489;
char* __dec_obj189;
char* last_code2_490;
char* __dec_obj190;
char* last_code3_491;
char* __dec_obj191;
void* __right_value621 = (void*)0;
char* sname_top_492;
int sline_top_493;
struct sFun* funX_494;
_Bool __result187__;
void* __right_value622 = (void*)0;
struct sType* result_type_495;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct list$1sTypeph* param_types_496;
struct list$1sTypeph* o2_saved_497;
struct sType* it_500;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sType* param_type_503;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1charph* param_names_504;
void* __right_value629 = (void*)0;
struct list$1charph* param_default_parametors_505;
char* p_506;
int sline_507;
char* sname_508;
char* head_509;
struct buffer* source_510;
void* __right_value630 = (void*)0;
struct buffer* __dec_obj192;
struct sType* generics_type_saved_511;
void* __right_value631 = (void*)0;
struct sType* __dec_obj193;
struct list$1charph* method_generics_type_names_512;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1charph* __dec_obj194;
struct list$1charph* o2_saved_513;
char* it_514;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1charph* __dec_obj195;
char* __dec_obj196;
void* __right_value636 = (void*)0;
struct sBlock* block_515;
struct buffer* __dec_obj197;
char* __dec_obj198;
_Bool var_args_516;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sFun* fun_517;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value648 = (void*)0;
struct sNode* node_518;
_Bool in_generics_fun_520;
void* __if_result__1_521 = (void*)0;
_Bool __result196__;
struct sType* __dec_obj203;
struct list$1charph* __dec_obj204;
void* __right_value649 = (void*)0;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
_Bool __result197__;
    caller_fun_485=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_486=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_487=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_488=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_489=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj189=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_490=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj190=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_491=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj191=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_492=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_493=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_494=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_494) {
        __result187__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_489 = come_decrement_ref_count2(last_code_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_490 = come_decrement_ref_count2(last_code2_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_491 = come_decrement_ref_count2(last_code3_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_492 = come_decrement_ref_count2(sname_top_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    result_type_495=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_496=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1551, "list$1sTypeph"))));
    for(    o2_saved_497=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_500=list$1sTypeph_begin((o2_saved_497));    !list$1sTypeph_end((o2_saved_497));    it_500=list$1sTypeph_next((o2_saved_497))    ){
        param_type_503=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value625=sType_clone(it_500))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value625,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_503->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_496,(struct sType*)come_increment_ref_count(sType_clone(param_type_503)));
        /*i*/come_call_finalizer3(param_type_503,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_504=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_505=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_506=info->p;
    sline_507=info->sline;
    sname_508=(char*)come_increment_ref_count(info->sname);
    head_509=info->head;
    source_510=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj192=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_511=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj193=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_512=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj194=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1578, "list$1charph"))));
    come_call_finalizer3(__dec_obj194,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_513=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_514=list$1charph_begin((o2_saved_513));    !list$1charph_end((o2_saved_513));    it_514=list$1charph_next((o2_saved_513))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_514)));
    }
    /*i*/come_call_finalizer3(o2_saved_513,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj195=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj195,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj196=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_515=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_509;
    __dec_obj197=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_510);
    come_call_finalizer3(__dec_obj197,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_506;
    info->sline=sline_507;
    __dec_obj198=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_508);
    /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_495->mInline=(_Bool)0;
    var_args_516=generics_fun->mVarArgs;
    fun_517=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1600, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_495),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_496)),(struct list$1charph*)come_increment_ref_count(param_names_504),(struct list$1charph*)come_increment_ref_count(param_default_parametors_505),(_Bool)0,var_args_516,(struct sBlock*)come_increment_ref_count(block_515),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_517));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1607, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value644=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1607, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_517),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_518=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value644,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_520=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(    !node_compile(node_518,info)) {
        __result196__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_489 = come_decrement_ref_count2(last_code_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_490 = come_decrement_ref_count2(last_code2_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_491 = come_decrement_ref_count2(last_code3_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_492 = come_decrement_ref_count2(sname_top_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_504,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_508 = come_decrement_ref_count2(sname_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_511,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_512,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_515,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_517,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result196__;
    }
    info->in_generics_fun=in_generics_fun_520;
    __dec_obj203=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_511);
    come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj204=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_512);
    come_call_finalizer3(__dec_obj204,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj205=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_492));
    /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_493;
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_489);
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_490);
    /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj208=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_491);
    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_485;
    info->caller_line=caller_line_486;
    info->caller_sname=caller_sname_487;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_488;
    __result197__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_489 = come_decrement_ref_count2(last_code_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_490 = come_decrement_ref_count2(last_code2_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_491 = come_decrement_ref_count2(last_code3_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_492 = come_decrement_ref_count2(sname_top_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_504,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_508 = come_decrement_ref_count2(sname_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_511,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_512,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_515,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_517,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result197__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_498;
struct sType* __result188__;
struct sType* __result189__;
struct sType* result_499;
struct sType* __result190__;
result_498 = (void*)0;
result_499 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_498,0,sizeof(struct sType*));
        __result188__ = gComeFunResultObject = __result_obj__ = result_498;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    self->it=self->head;
    if(    self->it) {
        __result189__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    memset(&result_499,0,sizeof(struct sType*));
    __result190__ = gComeFunResultObject = __result_obj__ = result_499;
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_501;
struct sType* __result191__;
struct sType* __result192__;
struct sType* result_502;
struct sType* __result193__;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_501,0,sizeof(struct sType*));
        __result191__ = gComeFunResultObject = __result_obj__ = result_501;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result192__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    memset(&result_502,0,sizeof(struct sType*));
    __result193__ = gComeFunResultObject = __result_obj__ = result_502;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_522;
int caller_line_523;
char* caller_sname_524;
_Bool comma_instead_of_semicolon_525;
char* last_code_526;
char* __dec_obj209;
char* last_code2_527;
char* __dec_obj210;
char* last_code3_528;
char* __dec_obj211;
void* __right_value650 = (void*)0;
char* sname_top_529;
int sline_top_530;
struct sFun* funX_531;
_Bool __result198__;
void* __right_value651 = (void*)0;
struct sType* result_type_532;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1sTypeph* param_types_533;
struct list$1sTypeph* o2_saved_534;
struct sType* it_535;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* param_type_536;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct list$1charph* param_names_537;
void* __right_value658 = (void*)0;
struct list$1charph* param_default_parametors_538;
char* p_539;
int sline_540;
char* sname_541;
char* head_542;
struct buffer* source_543;
void* __right_value659 = (void*)0;
struct buffer* __dec_obj212;
struct list$1charph* method_generics_type_names_544;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* __dec_obj213;
struct list$1charph* o2_saved_545;
char* it_546;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1charph* __dec_obj214;
char* __dec_obj215;
void* __right_value664 = (void*)0;
struct sBlock* block_547;
struct buffer* __dec_obj216;
char* __dec_obj217;
_Bool var_args_548;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sFun* fun_549;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value676 = (void*)0;
struct sNode* node_550;
void* __if_result__2_552 = (void*)0;
_Bool __result201__;
struct list$1charph* __dec_obj222;
void* __right_value677 = (void*)0;
char* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
char* __dec_obj226;
_Bool __result202__;
    caller_fun_522=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_523=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_524=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_525=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_526=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj209=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_527=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj210=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_528=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj211=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_529=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_530=info->sline;
    funX_531=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_531) {
        __result198__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_526 = come_decrement_ref_count2(last_code_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_527 = come_decrement_ref_count2(last_code2_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_528 = come_decrement_ref_count2(last_code3_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result198__;
    }
    result_type_532=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_533=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1664, "list$1sTypeph"))));
    for(    o2_saved_534=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_535=list$1sTypeph_begin((o2_saved_534));    !list$1sTypeph_end((o2_saved_534));    it_535=list$1sTypeph_next((o2_saved_534))    ){
        param_type_536=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value654=sType_clone(it_535))),info));
        /*g*/come_call_finalizer3(__right_value654,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_536->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_533,(struct sType*)come_increment_ref_count(sType_clone(param_type_536)));
        /*i*/come_call_finalizer3(param_type_536,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_534,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_537=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_538=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_539=info->p;
    sline_540=info->sline;
    sname_541=(char*)come_increment_ref_count(info->sname);
    head_542=info->head;
    source_543=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj212=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_544=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj213=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1688, "list$1charph"))));
    come_call_finalizer3(__dec_obj213,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_545=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_546=list$1charph_begin((o2_saved_545));    !list$1charph_end((o2_saved_545));    it_546=list$1charph_next((o2_saved_545))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_546)));
    }
    /*i*/come_call_finalizer3(o2_saved_545,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj214=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj214,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj215=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_547=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_542;
    __dec_obj216=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_543);
    come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_539;
    info->sline=sline_540;
    __dec_obj217=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_541);
    /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_532->mInline=(_Bool)0;
    var_args_548=generics_fun->mVarArgs;
    fun_549=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1710, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_532),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_533)),(struct list$1charph*)come_increment_ref_count(param_names_537),(struct list$1charph*)come_increment_ref_count(param_default_parametors_538),(_Bool)0,var_args_548,(struct sBlock*)come_increment_ref_count(block_547),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_549));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1717, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value672=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1717, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_549),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_550=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value672,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(    !node_compile(node_550,info)) {
        __result201__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_526 = come_decrement_ref_count2(last_code_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_527 = come_decrement_ref_count2(last_code2_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code3_528 = come_decrement_ref_count2(last_code3_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_537,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_541 = come_decrement_ref_count2(sname_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_547,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_549,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_550) { node_550 = come_decrement_ref_count2(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result201__;
    }
    __dec_obj222=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_544);
    come_call_finalizer3(__dec_obj222,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj223=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_529));
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_530;
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_526);
    /*G*/ __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_527);
    /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_528);
    /*G*/ __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_522;
    info->caller_line=caller_line_523;
    info->caller_sname=caller_sname_524;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_525;
    __result202__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_526 = come_decrement_ref_count2(last_code_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_527 = come_decrement_ref_count2(last_code2_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_528 = come_decrement_ref_count2(last_code3_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_529 = come_decrement_ref_count2(sname_top_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_537,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_538,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_541 = come_decrement_ref_count2(sname_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_547,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_549,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_550) { node_550 = come_decrement_ref_count2(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result202__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_553;
char* source_head_554;
struct sType* result_type_555;
char* var_name_556;
_Bool constructor__557;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* __dec_obj227;
void* __right_value680 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_558=0;
char* var_name2_559=0;
_Bool err_560=0;
struct sType* __dec_obj228;
char* __dec_obj229;
_Bool method_definition_561;
char* p_562;
int sline_563;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct buffer* buf2_564;
char* fun_name_565;
char* base_fun_name_566;
void* __right_value683 = (void*)0;
char* __dec_obj230;
void* __right_value684 = (void*)0;
char* __dec_obj231;
void* __right_value685 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_567=0;
char* name_568=0;
_Bool err_569=0;
void* __right_value686 = (void*)0;
char* __dec_obj232;
void* __right_value687 = (void*)0;
char* __dec_obj233;
void* __right_value688 = (void*)0;
char* __dec_obj234;
void* __right_value689 = (void*)0;
char* __dec_obj235;
void* __right_value690 = (void*)0;
char* __dec_obj236;
void* __right_value691 = (void*)0;
char* __dec_obj237;
void* __right_value692 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_570=0;
struct list$1charph* param_names_571=0;
struct list$1charph* param_default_parametors_572=0;
_Bool var_args_573=0;
char* header_tail_574;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct buffer* header_buf_575;
int version_576;
int n_577;
void* __right_value695 = (void*)0;
struct sBlock* block_578;
void* __right_value696 = (void*)0;
char* fun_name_580;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sFun* fun_581;
void* __right_value702 = (void*)0;
struct sFun* fun2_582;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value708 = (void*)0;
struct sNode* __result205__;
void* __right_value709 = (void*)0;
char* none_generics_name_584;
void* __right_value710 = (void*)0;
char* generics_sname_585;
int generics_sline_586;
void* __right_value711 = (void*)0;
char* block_587;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sGenericsFun* fun_588;
void* __right_value718 = (void*)0;
char* fun_name3_589;
void* __right_value722 = (void*)0;
struct sNode* __result217__;
void* __right_value723 = (void*)0;
char* generics_sname_611;
int generics_sline_612;
void* __right_value724 = (void*)0;
char* block_613;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sGenericsFun* fun_614;
void* __right_value731 = (void*)0;
char* fun_name3_615;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sNode* __result218__;
char* source_tail_616;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct buffer* header_617;
void* __right_value736 = (void*)0;
char* name_618;
void* __right_value737 = (void*)0;
char* name_619;
int i_620;
struct sType* param_type_621;
char* param_name_625;
char* default_parametor_626;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
char* impl_name_627;
void* __right_value741 = (void*)0;
char* result_type_name_628;
void* __right_value742 = (void*)0;
char* impl_name_629;
void* __right_value743 = (void*)0;
char* result_type_name_630;
int i_631;
struct sType* param_type_632;
char* param_name_633;
char* default_parametor_634;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sBlock* block_635;
_Bool static__636;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
char* new_fun_name_637;
void* __right_value750 = (void*)0;
char* __dec_obj243;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sFun* fun_638;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sFun* fun2_639;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value765 = (void*)0;
struct sNode* __result223__;
void* __right_value766 = (void*)0;
char* new_fun_name_641;
void* __right_value767 = (void*)0;
char* __dec_obj248;
_Bool result_type_static_642;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sFun* fun_643;
void* __right_value773 = (void*)0;
struct sFun* fun2_644;
void* __right_value774 = (void*)0;
char* source_tail_645;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct buffer* header_646;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value783 = (void*)0;
struct sNode* __result226__;
void* __right_value784 = (void*)0;
char* asm_fun_648;
void* __right_value785 = (void*)0;
char* __dec_obj253;
_Bool result_type_static_649;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sFun* fun_650;
void* __right_value791 = (void*)0;
struct sFun* fun2_651;
void* __right_value792 = (void*)0;
char* source_tail_652;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct buffer* header_653;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value801 = (void*)0;
struct sNode* __result229__;
struct sNode* __result230__;
fun_name_565 = (void*)0;
    header_head_553=info->p;
    source_head_554=info->p;
    result_type_555=((void*)0);
    var_name_556=((void*)0);
    constructor__557=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value678=parse_word(info)));
        /* U11 */__right_value678 = come_decrement_ref_count2(__right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj227=result_type_555;
        result_type_555=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_555->mHeap=(_Bool)1;
        constructor__557=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value680=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_558=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_559=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_560=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value680,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj228=result_type_555;
        result_type_555=(struct sType*)come_increment_ref_count(result_type2_558);
        come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj229=var_name_556;
        var_name_556=(char*)come_increment_ref_count(var_name2_559);
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_560) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_558,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name2_559 = come_decrement_ref_count2(var_name2_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_561=(_Bool)0;
    {
        p_562=info->p;
        sline_563=info->sline;
        buf2_564=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1782, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_564,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_564)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_561=(_Bool)1;
        }
        info->p=p_562;
        info->sline=sline_563;
        /*i*/come_call_finalizer3(buf2_564,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_566=((void*)0);
    if(    constructor__557) {
        __dec_obj230=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj231=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_566,info,(_Bool)1));
        /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_561) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value685=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_567=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_568=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_569=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value685,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_569) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj232=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj233=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(create_method_name(obj_type_567,(_Bool)0,base_fun_name_566,info,(_Bool)1));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_568 = come_decrement_ref_count2(name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj234=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj235=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_566,info,(_Bool)1));
        /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj236=fun_name_565;
        fun_name_565=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj237=base_fun_name_566;
        base_fun_name_566=(char*)come_increment_ref_count(__builtin_string(fun_name_565));
        /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_566,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value692=parse_params(info,constructor__557)));
    param_types_570=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_571=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_572=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_573=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value692,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_574=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_566,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_575=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1849, "buffer"))));
    buffer_append(header_buf_575,header_head_553,header_tail_574-header_head_553);
    buffer_append_char(header_buf_575,0);
    version_576=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_577=0;
        while(xisdigit(*info->p)) {
            n_577=n_577*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_576=n_577;
    }
    if(    charp_operator_equals(base_fun_name_566,"lambda")) {
        block_578=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_579=0;
        lambda_num_579++;
        fun_name_580=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_579));
        result_type_555->mStatic=(_Bool)0;
        fun_581=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1879, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_580)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)0,var_args_573,(struct sBlock*)come_increment_ref_count(block_578),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_582=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value702=__builtin_string(fun_name_580))));
        /* U11 */__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_582==((void*)0)||fun2_582->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_580)),(struct sFun*)come_increment_ref_count(fun_581));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1889, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value705=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1889, "sLambdaNode")),fun_581,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value708=_inf_value5));
        /*i*/come_call_finalizer3(block_578,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_580 = come_decrement_ref_count2(fun_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_581,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value705,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value708) { __right_value708 = come_decrement_ref_count2(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result205__;
        /*i*/come_call_finalizer3(block_578,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_580 = come_decrement_ref_count2(fun_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_581,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_584=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_585=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_586=info->sline;
        block_587=(char*)come_increment_ref_count(skip_block(info));
        fun_588=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1899, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value713=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value714=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),var_args_573,(char*)come_increment_ref_count(block_587),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_585)),generics_sline_586));
        /*g*/come_call_finalizer3(__right_value713,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value714,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_589=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_584,base_fun_name_566));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_589)),(struct sGenericsFun*)come_increment_ref_count(fun_588));
        __result217__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */none_generics_name_584 = come_decrement_ref_count2(none_generics_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_585 = come_decrement_ref_count2(generics_sname_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_587 = come_decrement_ref_count2(block_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_588,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_589 = come_decrement_ref_count2(fun_name3_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
        /* U13 */none_generics_name_584 = come_decrement_ref_count2(none_generics_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_585 = come_decrement_ref_count2(generics_sname_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_587 = come_decrement_ref_count2(block_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_588,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_589 = come_decrement_ref_count2(fun_name3_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_611=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_612=info->sline;
        block_613=(char*)come_increment_ref_count(skip_block(info));
        fun_614=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1913, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value726=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value727=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),var_args_573,(char*)come_increment_ref_count(block_613),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_611)),generics_sline_612));
        /*g*/come_call_finalizer3(__right_value726,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value727,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_615=(char*)come_increment_ref_count(charp_clone(base_fun_name_566));
        if(        method_definition_561) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sGenericsFun*)come_increment_ref_count(fun_614));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_615)),(struct sGenericsFun*)come_increment_ref_count(fun_614));
        }
        __result218__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */generics_sname_611 = come_decrement_ref_count2(generics_sname_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_613 = come_decrement_ref_count2(block_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_614,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_615 = come_decrement_ref_count2(fun_name3_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result218__;
        /* U13 */generics_sname_611 = come_decrement_ref_count2(generics_sname_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_613 = come_decrement_ref_count2(block_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_614,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_615 = come_decrement_ref_count2(fun_name3_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_616=info->p-1;
        header_617=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1929, "buffer"))));
        if(        constructor__557) {
            if(            list$1sTypeph_length(param_types_570)==1) {
                name_618=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_617,"extern %s*%% %s*::initialize(%s*%% self);\n",name_618,name_618,name_618);
                /* U13 */name_618 = come_decrement_ref_count2(name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_619=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_617,"extern %s*%% %s*::initialize(%s*%% self, ",name_619,name_619,name_619);
                for(                i_620=1;                i_620<list$1sTypeph_length(param_types_570);                i_620++                ){
                    param_type_621=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_570,i_620), "05function.c", 1941, 1));
                    param_name_625=((char*)come_null_check(list$1charphp_operator_load_element(param_names_571,i_620), "05function.c", 1942, 2));
                    default_parametor_626=list$1charphp_operator_load_element(param_default_parametors_572,i_620);
                    if(                    default_parametor_626) {
                        buffer_append_format(header_617,"extern %s %s=%s",((char*)(__right_value738=make_come_type_name_string_no_solved(param_type_621,(_Bool)0,info))),param_name_625,default_parametor_626);
                        /* U11 */__right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_617,"extern %s %s",((char*)(__right_value739=make_come_type_name_string_no_solved(param_type_621,(_Bool)0,info))),param_name_625);
                        /* U11 */__right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_620!=list$1sTypeph_length(param_types_570)-1) {
                        buffer_append_str(header_617,",");
                    }
                }
                buffer_append_str(header_617,");\n");
                /* U13 */name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_570)==1) {
                impl_name_627=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_628=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_555,(_Bool)0,info));
                buffer_append_format(header_617,"extern %s %s*::%s(%s* self);\n",result_type_name_628,impl_name_627,base_fun_name_566,impl_name_627);
                /* U13 */impl_name_627 = come_decrement_ref_count2(impl_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_628 = come_decrement_ref_count2(result_type_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_629=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_630=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_555,(_Bool)0,info));
                buffer_append_format(header_617,"extern %s %s*::%s(%s* self, ",result_type_name_630,impl_name_629,base_fun_name_566,impl_name_629);
                for(                i_631=1;                i_631<list$1sTypeph_length(param_types_570);                i_631++                ){
                    param_type_632=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_570,i_631), "05function.c", 1972, 3));
                    param_name_633=((char*)come_null_check(list$1charphp_operator_load_element(param_names_571,i_631), "05function.c", 1973, 4));
                    default_parametor_634=list$1charphp_operator_load_element(param_default_parametors_572,i_631);
                    if(                    default_parametor_634) {
                        buffer_append_format(header_617,"extern %s %s=%s",((char*)(__right_value744=make_come_type_name_string_no_solved(param_type_632,(_Bool)0,info))),param_name_633,default_parametor_634);
                        /* U11 */__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_617,"extern %s %s",((char*)(__right_value745=make_come_type_name_string_no_solved(param_type_632,(_Bool)0,info))),param_name_633);
                        /* U11 */__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_631!=list$1sTypeph_length(param_types_570)-1) {
                        buffer_append_str(header_617,",");
                    }
                }
                buffer_append_str(header_617,");\n");
                /* U13 */impl_name_629 = come_decrement_ref_count2(impl_name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_630 = come_decrement_ref_count2(result_type_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_617,source_head_554,source_tail_616-source_head_554);
            buffer_append_str(header_617,";\n");
        }
        if(        !result_type_555->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value746=buffer_to_string(header_617))));
                /* U11 */__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_635=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__557,(_Bool)1));
        static__636=(_Bool)0;
        if(        result_type_555->mStatic) {
            result_type_555->mStatic=(_Bool)0;
            static__636=(_Bool)1;
        }
        if(        version_576>0) {
            new_fun_name_637=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value748=__builtin_string(fun_name_565))),version_576));
            /* U11 */__right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj243=fun_name_565;
            fun_name_565=(char*)come_increment_ref_count(__builtin_string(new_fun_name_637));
            /*G*/ __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_637 = come_decrement_ref_count2(new_fun_name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_638=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2015, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)0,var_args_573,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_635)),static__636,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_638));
        }
        else {
            fun2_639=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value758=__builtin_string(fun_name_565))));
            /* U11 */__right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_639==((void*)0)||fun2_639->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_638));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2035, "struct sNode");
        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value761=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2035, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_638),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value765=_inf_value6));
        /*i*/come_call_finalizer3(header_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_635,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_638,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value761,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value765) { __right_value765 = come_decrement_ref_count2(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result223__;
        /*i*/come_call_finalizer3(header_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_635,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_638,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_576>0) {
            new_fun_name_641=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_565,version_576));
            __dec_obj248=fun_name_565;
            fun_name_565=(char*)come_increment_ref_count(__builtin_string(new_fun_name_641));
            /*G*/ __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_641 = come_decrement_ref_count2(new_fun_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_642=result_type_555->mStatic;
            result_type_555->mStatic=(_Bool)0;
            fun_643=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2050, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)1,var_args_573,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_644=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value773=__builtin_string(fun_name_565))));
            /* U11 */__right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_644==((void*)0)||fun2_644->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_643));
            }
            source_tail_645=info->p;
            header_646=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2064, "buffer"))));
            buffer_append(header_646,source_head_554,source_tail_645-source_head_554);
            if(            !result_type_static_642) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value777=buffer_to_string(header_646))));
                    /* U11 */__right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2073, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value779=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2073, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_643),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value783=_inf_value7));
            /*i*/come_call_finalizer3(fun_643,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value779,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value783) { __right_value783 = come_decrement_ref_count2(__right_value783, ((struct sNode*)__right_value783)->finalize, ((struct sNode*)__right_value783)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result226__;
            /*i*/come_call_finalizer3(fun_643,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_648=(char*)come_increment_ref_count(parse_attribute(info));
            if(            string_operator_not_equals(asm_fun_648,"")) {
                __dec_obj253=fun_name_565;
                fun_name_565=(char*)come_increment_ref_count(__builtin_string(asm_fun_648));
                /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_649=result_type_555->mStatic;
            result_type_555->mStatic=(_Bool)0;
            fun_650=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2087, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_565)),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_571),(struct list$1charph*)come_increment_ref_count(param_default_parametors_572),(_Bool)1,var_args_573,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_575)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_651=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value791=__builtin_string(fun_name_565))));
            /* U11 */__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_651==((void*)0)||fun2_651->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_565)),(struct sFun*)come_increment_ref_count(fun_650));
            }
            source_tail_652=info->p;
            header_653=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2101, "buffer"))));
            buffer_append(header_653,source_head_554,source_tail_652-source_head_554);
            if(            !result_type_static_649) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value795=buffer_to_string(header_653))));
                    /* U11 */__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2110, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value797=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2110, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_650),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result229__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value801=_inf_value8));
            /* U13 */asm_fun_648 = come_decrement_ref_count2(asm_fun_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_650,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_653,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value797,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value801) { __right_value801 = come_decrement_ref_count2(__right_value801, ((struct sNode*)__right_value801)->finalize, ((struct sNode*)__right_value801)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result229__;
            /* U13 */asm_fun_648 = come_decrement_ref_count2(asm_fun_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_650,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_653,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    __result230__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_556 = come_decrement_ref_count2(var_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_565 = come_decrement_ref_count2(fun_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */base_fun_name_566 = come_decrement_ref_count2(base_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj238;
struct list$1charph* __dec_obj239;
struct list$1charph* __dec_obj240;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj238=self->v1;
            come_call_finalizer3(__dec_obj238,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj239=self->v2;
            come_call_finalizer3(__dec_obj239,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj240=self->v3;
            come_call_finalizer3(__dec_obj240,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj241;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj241=self->sname;
            /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result203__;
void* __right_value706 = (void*)0;
struct sLambdaNode* result_583;
void* __right_value707 = (void*)0;
char* __dec_obj242;
struct sLambdaNode* __result204__;
    if(    self==(void*)0) {
        __result203__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_583=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_583->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj242=result_583->sname;
        result_583->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_583->mFun=self->mFun;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_583;
    /*i*/come_call_finalizer3(result_583,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_607;
unsigned int it_608;
_Bool same_key_exist_609;
char* it2_610;
struct map$2charphsGenericsFunph* __result216__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_607=string_get_hash_key(key)%self->size;
    it_608=hash_607;
    while((_Bool)1) {
        if(        self->item_existance[it_608]) {
            if(            string_equals(self->keys[it_608],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_608]);
                    /* U13 */self->keys[it_608] = come_decrement_ref_count2(self->keys[it_608], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_608]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_608]);
                    self->keys[it_608]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_608],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_608]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_608]=item;
                }
                break;
            }
            it_608++;
            if(            it_608>=self->size) {
                it_608=0;
            }
            else if(            it_608==hash_607) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_608]=(_Bool)1;
            if(            1) {
                self->keys[it_608]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_608]=key;
            }
            if(            1) {
                self->items[it_608]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_608]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_609=(_Bool)0;
    for(    it2_610=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_610=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_610,key)) {
            same_key_exist_609=(_Bool)1;
        }
    }
    if(    !same_key_exist_609) {
        list$1charp_push_back(self->key_list,key);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_590;
void* __right_value719 = (void*)0;
char** keys_591;
void* __right_value720 = (void*)0;
struct sGenericsFun** items_592;
void* __right_value721 = (void*)0;
_Bool* item_existance_593;
int len_594;
char* it_597;
struct sGenericsFun* default_value_600;
struct sGenericsFun* it2_601;
unsigned int hash_604;
int n_605;
struct sGenericsFun* default_value_606;
default_value_600 = (void*)0;
default_value_606 = (void*)0;
    size_590=self->size*10;
    keys_591=(char**)come_increment_ref_count(((char**)(__right_value719=(char**)come_calloc(1, sizeof(char*)*(1*(size_590)), "./comelang.h", 1624, "char*%"))));
    items_592=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value720=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_590)), "./comelang.h", 1625, "sGenericsFun*%"))));
    item_existance_593=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value721=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_590)), "./comelang.h", 1626, "bool"))));
    len_594=0;
    for(    it_597=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_597=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_600,0,sizeof(struct sGenericsFun*));
        it2_601=map$2charphsGenericsFunph_at(self,it_597,default_value_600);
        hash_604=string_get_hash_key(it_597)%size_590;
        n_605=hash_604;
        while((_Bool)1) {
            if(            item_existance_593[n_605]) {
                n_605++;
                if(                n_605>=size_590) {
                    n_605=0;
                }
                else if(                n_605==hash_604) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_593[n_605]=(_Bool)1;
                keys_591[n_605]=it_597;
                items_592[n_605]=map$2charphsGenericsFunph_at(self,it_597,default_value_606);
                len_594++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_591;
    self->items=items_592;
    self->item_existance=item_existance_593;
    self->size=size_590;
    self->len=len_594;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_595;
char* __result206__;
char* __result207__;
char* result_596;
char* __result208__;
result_595 = (void*)0;
result_596 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_595,0,sizeof(char*));
        __result206__ = gComeFunResultObject = __result_obj__ = result_595;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result207__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    memset(&result_596,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = result_596;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_598;
char* __result209__;
char* __result210__;
char* result_599;
char* __result211__;
result_598 = (void*)0;
result_599 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_598,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_598;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_599,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_599;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_602;
unsigned int it_603;
struct sGenericsFun* __result212__;
struct sGenericsFun* __result213__;
struct sGenericsFun* __result214__;
struct sGenericsFun* __result215__;
    hash_602=string_get_hash_key(((char*)key))%self->size;
    it_603=hash_602;
    while((_Bool)1) {
        if(        self->item_existance[it_603]) {
            if(            string_equals(self->keys[it_603],key)) {
                __result212__ = gComeFunResultObject = __result_obj__ = self->items[it_603];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result212__;
            }
            it_603++;
            if(            it_603>=self->size) {
                it_603=0;
            }
            else if(            it_603==hash_602) {
                __result213__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result213__;
            }
        }
        else {
            __result214__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result214__;
        }
    }
    __result215__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_622;
int i_623;
char* __result219__;
char* default_value_624;
char* __result220__;
default_value_624 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_622=self->head;
    i_623=0;
    while(it_622!=((void*)0)) {
        if(        position==i_623) {
            __result219__ = gComeFunResultObject = __result_obj__ = it_622->item;
            gComeFunResultObject = (void*)0;
            return __result219__;
        }
        it_622=it_622->next;
        i_623++;
    }
    memset(&default_value_624,0,sizeof(char*));
    __result220__ = gComeFunResultObject = __result_obj__ = default_value_624;
    /* U13 */default_value_624 = come_decrement_ref_count2(default_value_624, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_655;
char* __dec_obj258;
char* last_code2_656;
char* __dec_obj259;
char* last_code3_657;
_Bool comma_instead_of_semicolon_658;
char* __dec_obj260;
struct sClass* current_stack_frame_struct_659;
struct sFun* finalizer_660;
void* __right_value802 = (void*)0;
char* real_fun_name_661;
void* __right_value803 = (void*)0;
char* user_real_fun_name_662;
struct sFun* user_finalizer_663;
void* __right_value804 = (void*)0;
struct sType* type2_664;
struct sClass* klass_665;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct buffer* source_666;
struct list$1tuple2$2charphsTypephph* o2_saved_675;
struct tuple2$2charphsTypeph* it_678;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* name_681=0;
struct sType* field_type_682=0;
char* p_685;
int sline_686;
char* sname_687;
char* head_688;
struct buffer* source3_689;
struct buffer* __dec_obj268;
void* __right_value807 = (void*)0;
char* __dec_obj269;
void* __right_value808 = (void*)0;
struct sBlock* block_690;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sType* result_type_691;
void* __right_value811 = (void*)0;
char* name_692;
void* __right_value812 = (void*)0;
struct sType* self_type_693;
struct sType* __list_values21___694[1];
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1sTypeph* param_types_695;
void* __right_value815 = (void*)0;
char* __list_values22___696[1];
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct list$1charph* param_names_697;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1charph* param_default_parametors_698;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct buffer* header_buf_699;
void* __right_value822 = (void*)0;
int i_700;
struct sType* param_type_701;
char* param_name_702;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sFun* fun_703;
void* __right_value828 = (void*)0;
struct sFun* fun2_704;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value835 = (void*)0;
struct sNode* node_705;
struct buffer* __dec_obj274;
char* __dec_obj275;
char* __dec_obj276;
char* __dec_obj277;
char* __dec_obj278;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct tuple2$2sFunpcharph* __result244__;
    last_code_655=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj258=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_656=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj259=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_657=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_658=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj260=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_659=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_660=((void*)0);
    real_fun_name_661=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_662=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_663=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_662);
    type2_664=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_664;
    klass_665=type->mClass;
    if(    type->mPointerNum>0&&klass_665->mStruct||type->mAllocaValue) {
        source_666=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2152, "buffer"))));
        buffer_append_char(source_666,123);
        if(        user_finalizer_663) {
            char source2_667[1024];
            memset(&source2_667, 0, sizeof(char)            *(1024)            );
            snprintf(source2_667,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_662);
            buffer_append_str(source_666,source2_667);
        }
        klass_665=map$2charphsClassphp_operator_load_element(info->classes,klass_665->mName);
        for(        o2_saved_675=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_665->mFields)),it_678=list$1tuple2$2charphsTypephph_begin((o2_saved_675));        !list$1tuple2$2charphsTypephph_end((o2_saved_675));        it_678=list$1tuple2$2charphsTypephph_next((o2_saved_675))        ){
            multiple_assign_var10=it_678;
            name_681=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_682=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_682->mClass->mName)&&type->mPointerNum==field_type_682->mPointerNum&&field_type_682->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_682->mHeap) {
                char source2_683[1024];
                memset(&source2_683, 0, sizeof(char)                *(1024)                );
                snprintf(source2_683,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_681,name_681,name_681,name_681);
                buffer_append_str(source_666,source2_683);
            }
            else if(            field_type_682->mChannel) {
                char source2_684[1024];
                memset(&source2_684, 0, sizeof(char)                *(1024)                );
                snprintf(source2_684,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_681,name_681);
                buffer_append_str(source_666,source2_684);
                snprintf(source2_684,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_681,name_681);
                buffer_append_str(source_666,source2_684);
            }
            /* U13 */name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_675,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_666,125);
        p_685=info->p;
        sline_686=info->sline;
        sname_687=(char*)come_increment_ref_count(info->sname);
        head_688=info->head;
        source3_689=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj268=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_666);
        come_call_finalizer3(__dec_obj268,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_666->buf;
        info->head=source_666->buf;
        __dec_obj269=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_661));
        /*G*/ __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_690=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_691=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2207, "sType")),"void",(_Bool)0,info));
        name_692=(char*)come_increment_ref_count(string_clone(real_fun_name_661));
        self_type_693=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_693->mHeap=(_Bool)0;
        if(        self_type_693->mPointerNum==0) {
            self_type_693->mPointerNum=1;
        }
        if(        self_type_693->mPointerNum>1) {
            self_type_693->mPointerNum=1;
        }
        param_types_695=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___694[0]=come_increment_ref_count(self_type_693),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2217, "struct list$1sTypeph")),1,__list_values21___694)));
        param_names_697=(struct list$1charph*)come_increment_ref_count((__list_values22___696[0]=come_increment_ref_count(((char*)(__right_value815=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2218, "struct list$1charph")),1,__list_values22___696)));
        /* U11 */__right_value815 = come_decrement_ref_count2(__right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_698=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2219, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_698,((void*)0));
        header_buf_699=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2222, "buffer"))));
        buffer_append_str(header_buf_699,((char*)(__right_value822=make_come_type_name_string(result_type_691,info))));
        /* U11 */__right_value822 = come_decrement_ref_count2(__right_value822, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_699," ");
        buffer_append_str(header_buf_699,real_fun_name_661);
        buffer_append_str(header_buf_699,"(");
        for(        i_700=0;        i_700<list$1sTypeph_length(param_types_695);        i_700++        ){
            param_type_701=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_695,i_700), "05function.c", 2230, 5));
            param_name_702=((char*)come_null_check(list$1charphp_operator_load_element(param_names_697,i_700), "05function.c", 2231, 6));
            buffer_append_str(header_buf_699,((char*)(__right_value823=make_come_type_name_string(param_type_701,info))));
            /* U11 */__right_value823 = come_decrement_ref_count2(__right_value823, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_699," ");
            buffer_append_str(header_buf_699,param_name_702);
            if(            i_700!=list$1sTypeph_length(param_types_695)-1) {
                buffer_append_str(header_buf_699,",");
            }
        }
        buffer_append_str(header_buf_699,")");
        result_type_691->mStatic=(_Bool)0;
        fun_703=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2245, "sFun")),(char*)come_increment_ref_count(name_692),(struct sType*)come_increment_ref_count(result_type_691),(struct list$1sTypeph*)come_increment_ref_count(param_types_695),(struct list$1charph*)come_increment_ref_count(param_names_697),(struct list$1charph*)come_increment_ref_count(param_default_parametors_698),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_690),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_699)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_704=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value828=__builtin_string(fun_name))));
        /* U11 */__right_value828 = come_decrement_ref_count2(__right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_704==((void*)0)||fun2_704->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_692)),(struct sFun*)come_increment_ref_count(fun_703));
        }
        finalizer_660=fun_703;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2261, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value831=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2261, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_703),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_705=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value831,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_705,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj274=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_689);
        come_call_finalizer3(__dec_obj274,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_685;
        info->head=head_688;
        info->sline=sline_686;
        __dec_obj275=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_687);
        /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_687 = come_decrement_ref_count2(sname_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_689,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_690,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_691,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_692 = come_decrement_ref_count2(name_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_693,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_695,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_697,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_703,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_659;
    __dec_obj276=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_655);
    /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj277=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_656);
    /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj278=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_657);
    /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_658;
    __result244__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value837=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2282, "struct tuple2$2sFunpcharph")),finalizer_660,(char*)come_increment_ref_count(real_fun_name_661))));
    /* U13 */last_code_655 = come_decrement_ref_count2(last_code_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_656 = come_decrement_ref_count2(last_code2_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_657 = come_decrement_ref_count2(last_code3_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_661 = come_decrement_ref_count2(real_fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */user_real_fun_name_662 = come_decrement_ref_count2(user_real_fun_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value837,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_668;
unsigned int hash_669;
unsigned int it_670;
struct sClass* __result231__;
struct sClass* __result232__;
struct sClass* __result233__;
struct sClass* __result234__;
default_value_668 = (void*)0;
    memset(&default_value_668,0,sizeof(struct sClass*));
    hash_669=string_get_hash_key(((char*)key))%self->size;
    it_670=hash_669;
    while((_Bool)1) {
        if(        self->item_existance[it_670]) {
            if(            string_equals(self->keys[it_670],key)) {
                __result231__ = gComeFunResultObject = __result_obj__ = self->items[it_670];
                /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
            it_670++;
            if(            it_670>=self->size) {
                it_670=0;
            }
            else if(            it_670==hash_669) {
                __result232__ = gComeFunResultObject = __result_obj__ = default_value_668;
                /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
        }
        else {
            __result233__ = gComeFunResultObject = __result_obj__ = default_value_668;
            /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result233__;
        }
    }
    __result234__ = gComeFunResultObject = __result_obj__ = default_value_668;
    /*i*/come_call_finalizer3(default_value_668,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj261;
struct list$1tuple2$2charphsTypephph* __dec_obj262;
char* __dec_obj266;
char* __dec_obj267;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj261=self->mName;
            /*G*/ __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj262=self->mFields;
            come_call_finalizer3(__dec_obj262,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj266=self->mDeclareSName;
            /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj267=self->mParentClassName;
            /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_671;
struct list_item$1tuple2$2charphsTypephph* prev_it_672;
    it_671=self->head;
    while(it_671!=((void*)0)) {
        prev_it_672=it_671;
        it_671=it_671->next;
        /*i*/come_call_finalizer3(prev_it_672,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj263;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj263=self->item;
            come_call_finalizer3(__dec_obj263,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj264;
struct sType* __dec_obj265;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj264=self->v1;
            /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj265=self->v2;
            come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_673;
struct list_item$1tuple2$2charphsTypephph* prev_it_674;
    it_673=self->head;
    while(it_673!=((void*)0)) {
        prev_it_674=it_673;
        it_673=it_673->next;
        /*i*/come_call_finalizer3(prev_it_674,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_676;
struct tuple2$2charphsTypeph* __result235__;
struct tuple2$2charphsTypeph* __result236__;
struct tuple2$2charphsTypeph* result_677;
struct tuple2$2charphsTypeph* __result237__;
result_676 = (void*)0;
result_677 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_676,0,sizeof(struct tuple2$2charphsTypeph*));
        __result235__ = gComeFunResultObject = __result_obj__ = result_676;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    self->it=self->head;
    if(    self->it) {
        __result236__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    memset(&result_677,0,sizeof(struct tuple2$2charphsTypeph*));
    __result237__ = gComeFunResultObject = __result_obj__ = result_677;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_679;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* __result239__;
struct tuple2$2charphsTypeph* result_680;
struct tuple2$2charphsTypeph* __result240__;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_679,0,sizeof(struct tuple2$2charphsTypeph*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_679;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_680,0,sizeof(struct tuple2$2charphsTypeph*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_680;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj279;
struct tuple2$2sFunpcharph* __result243__;
    self->v1=v1;
    __dec_obj279=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj280;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj280=self->v2;
            /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_707;
char* __dec_obj281;
char* last_code2_708;
char* __dec_obj282;
char* last_code3_709;
_Bool comma_instead_of_semicolon_710;
char* __dec_obj283;
struct sClass* current_stack_frame_struct_711;
struct sFun* finalizer_712;
void* __right_value838 = (void*)0;
char* real_fun_name_713;
void* __right_value839 = (void*)0;
struct sType* type2_714;
struct sClass* klass_715;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct buffer* source_716;
struct list$1tuple2$2charphsTypephph* o2_saved_717;
struct tuple2$2charphsTypeph* it_718;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_719=0;
struct sType* field_type_720=0;
char* p_722;
int sline_723;
char* sname_724;
char* head_725;
struct buffer* source3_726;
struct buffer* __dec_obj284;
void* __right_value842 = (void*)0;
char* __dec_obj285;
void* __right_value843 = (void*)0;
struct sBlock* block_727;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sType* result_type_728;
void* __right_value846 = (void*)0;
char* name_729;
void* __right_value847 = (void*)0;
struct sType* self_type_730;
struct sType* __list_values23___731[1];
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1sTypeph* param_types_732;
void* __right_value850 = (void*)0;
char* __list_values24___733[1];
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct list$1charph* param_names_734;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1charph* param_default_parametors_735;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct buffer* header_buf_736;
void* __right_value857 = (void*)0;
int i_737;
struct sType* param_type_738;
char* param_name_739;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct sFun* fun_740;
void* __right_value863 = (void*)0;
struct sFun* fun2_741;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value870 = (void*)0;
struct sNode* node_742;
struct buffer* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
char* __dec_obj293;
char* __dec_obj294;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct tuple2$2sFunpcharph* __result247__;
    last_code_707=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj281=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_708=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj282=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_709=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_710=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj283=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_711=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_712=((void*)0);
    real_fun_name_713=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_714=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_714;
    klass_715=type->mClass;
    if(    type->mPointerNum>0&&klass_715->mStruct) {
        source_716=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2311, "buffer"))));
        buffer_append_char(source_716,123);
        klass_715=map$2charphsClassphp_operator_load_element(info->classes,klass_715->mName);
        for(        o2_saved_717=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_715->mFields)),it_718=list$1tuple2$2charphsTypephph_begin((o2_saved_717));        !list$1tuple2$2charphsTypephph_end((o2_saved_717));        it_718=list$1tuple2$2charphsTypephph_next((o2_saved_717))        ){
            multiple_assign_var11=it_718;
            name_719=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_720=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_720->mClass->mName)&&type->mPointerNum==field_type_720->mPointerNum&&field_type_720->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_720->mHeap) {
                char source2_721[1024];
                memset(&source2_721, 0, sizeof(char)                *(1024)                );
                snprintf(source2_721,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_719,name_719,name_719,name_719);
                buffer_append_str(source_716,source2_721);
            }
            /* U13 */name_719 = come_decrement_ref_count2(name_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_717,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_716,125);
        p_722=info->p;
        sline_723=info->sline;
        sname_724=(char*)come_increment_ref_count(info->sname);
        head_725=info->head;
        source3_726=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj284=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_716);
        come_call_finalizer3(__dec_obj284,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_716->buf;
        info->head=source_716->buf;
        __dec_obj285=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_713));
        /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_727=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_728=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2350, "sType")),"void",(_Bool)0,info));
        name_729=(char*)come_increment_ref_count(string_clone(real_fun_name_713));
        self_type_730=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_730->mHeap=(_Bool)0;
        if(        self_type_730->mPointerNum>1) {
            self_type_730->mPointerNum=1;
        }
        param_types_732=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___731[0]=come_increment_ref_count(self_type_730),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2357, "struct list$1sTypeph")),1,__list_values23___731)));
        param_names_734=(struct list$1charph*)come_increment_ref_count((__list_values24___733[0]=come_increment_ref_count(((char*)(__right_value850=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2358, "struct list$1charph")),1,__list_values24___733)));
        /* U11 */__right_value850 = come_decrement_ref_count2(__right_value850, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_735=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2359, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_735,((void*)0));
        header_buf_736=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2362, "buffer"))));
        buffer_append_str(header_buf_736,((char*)(__right_value857=make_come_type_name_string(result_type_728,info))));
        /* U11 */__right_value857 = come_decrement_ref_count2(__right_value857, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_736," ");
        buffer_append_str(header_buf_736,real_fun_name_713);
        buffer_append_str(header_buf_736,"(");
        for(        i_737=0;        i_737<list$1sTypeph_length(param_types_732);        i_737++        ){
            param_type_738=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_732,i_737), "05function.c", 2370, 7));
            param_name_739=((char*)come_null_check(list$1charphp_operator_load_element(param_names_734,i_737), "05function.c", 2371, 8));
            buffer_append_str(header_buf_736,((char*)(__right_value858=make_come_type_name_string(param_type_738,info))));
            /* U11 */__right_value858 = come_decrement_ref_count2(__right_value858, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_736," ");
            buffer_append_str(header_buf_736,param_name_739);
            if(            i_737!=list$1sTypeph_length(param_types_732)-1) {
                buffer_append_str(header_buf_736,",");
            }
        }
        buffer_append_str(header_buf_736,")");
        result_type_728->mStatic=(_Bool)0;
        fun_740=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2385, "sFun")),(char*)come_increment_ref_count(name_729),(struct sType*)come_increment_ref_count(result_type_728),(struct list$1sTypeph*)come_increment_ref_count(param_types_732),(struct list$1charph*)come_increment_ref_count(param_names_734),(struct list$1charph*)come_increment_ref_count(param_default_parametors_735),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_727),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_736)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_741=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value863=__builtin_string(fun_name))));
        /* U11 */__right_value863 = come_decrement_ref_count2(__right_value863, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_741==((void*)0)||fun2_741->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_729)),(struct sFun*)come_increment_ref_count(fun_740));
        }
        finalizer_712=fun_740;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2401, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value866=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2401, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_740),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_742=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value866,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_742,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj290=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_726);
        come_call_finalizer3(__dec_obj290,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_722;
        info->head=head_725;
        info->sline=sline_723;
        __dec_obj291=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_724);
        /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_716,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_724 = come_decrement_ref_count2(sname_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_727,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_729 = come_decrement_ref_count2(name_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_732,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_734,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_735,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_736,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_740,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_742) { node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_711;
    __dec_obj292=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_707);
    /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj293=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_708);
    /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj294=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_709);
    /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_710;
    __result247__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value872=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2422, "struct tuple2$2sFunpcharph")),finalizer_712,(char*)come_increment_ref_count(real_fun_name_713))));
    /* U13 */last_code_707 = come_decrement_ref_count2(last_code_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_708 = come_decrement_ref_count2(last_code2_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_709 = come_decrement_ref_count2(last_code3_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_713 = come_decrement_ref_count2(real_fun_name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_714,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value872,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_744;
char* __dec_obj295;
char* last_code2_745;
char* __dec_obj296;
char* last_code3_746;
char* __dec_obj297;
_Bool comma_instead_of_semicolon_747;
struct sClass* current_stack_frame_struct_748;
struct sFun* equaler_749;
void* __right_value873 = (void*)0;
char* real_fun_name_750;
void* __right_value874 = (void*)0;
struct sType* type2_751;
struct sClass* klass_752;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct buffer* source_753;
char* name_754;
struct list$1tuple2$2charphsTypephph* o2_saved_756;
struct tuple2$2charphsTypeph* it_757;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_758=0;
struct sType* field_type_759=0;
char* p_761;
int sline_762;
char* sname_763;
char* head_764;
struct buffer* source3_765;
struct buffer* __dec_obj298;
void* __right_value877 = (void*)0;
char* __dec_obj299;
void* __right_value878 = (void*)0;
struct sBlock* block_766;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sType* result_type_767;
void* __right_value881 = (void*)0;
char* name_768;
void* __right_value882 = (void*)0;
struct sType* left_type_769;
void* __right_value883 = (void*)0;
struct sType* right_type_770;
struct sType* __list_values25___771[2];
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct list$1sTypeph* param_types_772;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
char* __list_values26___773[2];
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct list$1charph* param_names_774;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct list$1charph* param_default_parametors_775;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct buffer* header_buf_776;
void* __right_value894 = (void*)0;
int i_777;
struct sType* param_type_778;
char* param_name_779;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sFun* fun_780;
void* __right_value900 = (void*)0;
struct sFun* fun2_781;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value907 = (void*)0;
struct sNode* node_782;
struct buffer* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
char* __dec_obj307;
char* __dec_obj308;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct tuple2$2sFunpcharph* __result250__;
    last_code_744=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj295=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_745=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj296=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_746=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj297=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_747=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_748=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_749=((void*)0);
    real_fun_name_750=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_751=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_751;
    klass_752=type->mClass;
    if(    type->mPointerNum>0&&!klass_752->mNumber) {
        source_753=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2449, "buffer"))));
        buffer_append_char(source_753,123);
        if(        klass_752->mProtocol) {
            name_754="_protocol_obj";
            char source2_755[1024];
            memset(&source2_755, 0, sizeof(char)            *(1024)            );
            snprintf(source2_755,1024,"return left.%s.equals(right.%s);\n",name_754,name_754);
            buffer_append_str(source_753,source2_755);
        }
        else {
            klass_752=map$2charphsClassphp_operator_load_element(info->classes,klass_752->mName);
            for(            o2_saved_756=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_752->mFields)),it_757=list$1tuple2$2charphsTypephph_begin((o2_saved_756));            !list$1tuple2$2charphsTypephph_end((o2_saved_756));            it_757=list$1tuple2$2charphsTypephph_next((o2_saved_756))            ){
                multiple_assign_var12=it_757;
                name_758=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_759=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_759->mClass->mName)&&type->mPointerNum==field_type_759->mPointerNum&&field_type_759->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_760[1024];
                memset(&source2_760, 0, sizeof(char)                *(1024)                );
                snprintf(source2_760,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_758,name_758,name_758);
                buffer_append_str(source_753,source2_760);
                /* U13 */name_758 = come_decrement_ref_count2(name_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_759,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_756,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_753,"return true;");
        buffer_append_char(source_753,125);
        p_761=info->p;
        sline_762=info->sline;
        sname_763=(char*)come_increment_ref_count(info->sname);
        head_764=info->head;
        source3_765=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_753);
        come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_753->buf;
        info->head=source_753->buf;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_750));
        /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_766=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_767=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2495, "sType")),"bool",(_Bool)0,info));
        name_768=(char*)come_increment_ref_count(string_clone(real_fun_name_750));
        left_type_769=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_769->mHeap=(_Bool)0;
        right_type_770=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_770->mHeap=(_Bool)0;
        param_types_772=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___771[0]=come_increment_ref_count(left_type_769),
__list_values25___771[1]=come_increment_ref_count(right_type_770),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2501, "struct list$1sTypeph")),2,__list_values25___771)));
        param_names_774=(struct list$1charph*)come_increment_ref_count((__list_values26___773[0]=come_increment_ref_count(((char*)(__right_value886=__builtin_string("left")))),
__list_values26___773[1]=come_increment_ref_count(((char*)(__right_value887=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2502, "struct list$1charph")),2,__list_values26___773)));
        /* U11 */__right_value886 = come_decrement_ref_count2(__right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value887 = come_decrement_ref_count2(__right_value887, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_775=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2503, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_775,((void*)0));
        list$1charph_push_back(param_default_parametors_775,((void*)0));
        header_buf_776=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2507, "buffer"))));
        buffer_append_str(header_buf_776,((char*)(__right_value894=make_come_type_name_string(result_type_767,info))));
        /* U11 */__right_value894 = come_decrement_ref_count2(__right_value894, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_776," ");
        buffer_append_str(header_buf_776,real_fun_name_750);
        buffer_append_str(header_buf_776,"(");
        for(        i_777=0;        i_777<list$1sTypeph_length(param_types_772);        i_777++        ){
            param_type_778=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_772,i_777), "05function.c", 2515, 9));
            param_name_779=((char*)come_null_check(list$1charphp_operator_load_element(param_names_774,i_777), "05function.c", 2516, 10));
            buffer_append_str(header_buf_776,((char*)(__right_value895=make_come_type_name_string(param_type_778,info))));
            /* U11 */__right_value895 = come_decrement_ref_count2(__right_value895, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_776," ");
            buffer_append_str(header_buf_776,param_name_779);
            if(            i_777!=list$1sTypeph_length(param_types_772)-1) {
                buffer_append_str(header_buf_776,",");
            }
        }
        buffer_append_str(header_buf_776,")");
        result_type_767->mStatic=(_Bool)0;
        fun_780=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2530, "sFun")),(char*)come_increment_ref_count(name_768),(struct sType*)come_increment_ref_count(result_type_767),(struct list$1sTypeph*)come_increment_ref_count(param_types_772),(struct list$1charph*)come_increment_ref_count(param_names_774),(struct list$1charph*)come_increment_ref_count(param_default_parametors_775),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_766),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_776)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_781=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value900=__builtin_string(fun_name))));
        /* U11 */__right_value900 = come_decrement_ref_count2(__right_value900, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_781==((void*)0)||fun2_781->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_768)),(struct sFun*)come_increment_ref_count(fun_780));
        }
        equaler_749=fun_780;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2546, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value903=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2546, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_780),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_782=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value903,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_782,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj304=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_765);
        come_call_finalizer3(__dec_obj304,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_761;
        info->head=head_764;
        info->sline=sline_762;
        __dec_obj305=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_763);
        /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_763 = come_decrement_ref_count2(sname_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_766,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_767,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_768 = come_decrement_ref_count2(name_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_770,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_772,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_774,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_775,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_776,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_780,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_748;
    __dec_obj306=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_744);
    /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj307=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_745);
    /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj308=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_746);
    /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_747;
    __result250__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value909=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2567, "struct tuple2$2sFunpcharph")),equaler_749,(char*)come_increment_ref_count(real_fun_name_750))));
    /* U13 */last_code_744 = come_decrement_ref_count2(last_code_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_745 = come_decrement_ref_count2(last_code2_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_746 = come_decrement_ref_count2(last_code3_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_750 = come_decrement_ref_count2(real_fun_name_750, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_751,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value909,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_784;
char* __dec_obj309;
char* last_code2_785;
char* __dec_obj310;
char* last_code3_786;
char* __dec_obj311;
_Bool comma_instead_of_semicolon_787;
struct sClass* current_stack_frame_struct_788;
struct sFun* equaler_789;
void* __right_value910 = (void*)0;
char* real_fun_name_790;
void* __right_value911 = (void*)0;
struct sType* type2_791;
struct sClass* klass_792;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct buffer* source_793;
char* name_794;
int i_797;
struct list$1tuple2$2charphsTypephph* o2_saved_798;
struct tuple2$2charphsTypeph* it_799;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_800=0;
struct sType* field_type_801=0;
char* p_805;
int sline_806;
char* sname_807;
char* head_808;
struct buffer* source3_809;
struct buffer* __dec_obj312;
void* __right_value914 = (void*)0;
char* __dec_obj313;
void* __right_value915 = (void*)0;
struct sBlock* block_810;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct sType* result_type_811;
void* __right_value918 = (void*)0;
char* name_812;
void* __right_value919 = (void*)0;
struct sType* left_type_813;
void* __right_value920 = (void*)0;
struct sType* right_type_814;
struct sType* __list_values27___815[2];
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct list$1sTypeph* param_types_816;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
char* __list_values28___817[2];
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct list$1charph* param_names_818;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct list$1charph* param_default_parametors_819;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct buffer* header_buf_820;
void* __right_value931 = (void*)0;
int i_821;
struct sType* param_type_822;
char* param_name_823;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sFun* fun_824;
void* __right_value937 = (void*)0;
struct sFun* fun2_825;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value944 = (void*)0;
struct sNode* node_826;
struct buffer* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct tuple2$2sFunpcharph* __result253__;
    last_code_784=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj309=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_785=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj310=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_786=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj311=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_787=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_788=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_789=((void*)0);
    real_fun_name_790=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_791=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_791;
    klass_792=type->mClass;
    if(    type->mPointerNum>0&&!klass_792->mNumber) {
        source_793=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2594, "buffer"))));
        buffer_append_char(source_793,123);
        if(        klass_792->mProtocol) {
            name_794="_protocol_obj";
            char source2_795[1024];
            memset(&source2_795, 0, sizeof(char)            *(1024)            );
            snprintf(source2_795,1024,"return left.%s !== right.%s;\n",name_794,name_794);
            buffer_append_str(source_793,source2_795);
        }
        else {
            char source2_796[1024];
            memset(&source2_796, 0, sizeof(char)            *(1024)            );
            snprintf(source2_796,1024,"return !(");
            buffer_append_str(source_793,source2_796);
            snprintf(source2_796,1024,"( ");
            buffer_append_str(source_793,source2_796);
            i_797=0;
            klass_792=map$2charphsClassphp_operator_load_element(info->classes,klass_792->mName);
            for(            o2_saved_798=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_792->mFields)),it_799=list$1tuple2$2charphsTypephph_begin((o2_saved_798));            !list$1tuple2$2charphsTypephph_end((o2_saved_798));            it_799=list$1tuple2$2charphsTypephph_next((o2_saved_798))            ){
                multiple_assign_var13=it_799;
                name_800=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_801=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_801->mClass->mName)&&type->mPointerNum==field_type_801->mPointerNum&&field_type_801->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_802[1024];
                memset(&source2_802, 0, sizeof(char)                *(1024)                );
                snprintf(source2_802,1024,"(left.%s === right.%s)",name_800,name_800,name_800);
                buffer_append_str(source_793,source2_802);
                if(                i_797==list$1tuple2$2charphsTypephph_length(klass_792->mFields)-1) {
                    char source2_803[1024];
                    memset(&source2_803, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_803,1024,"));");
                    buffer_append_str(source_793,source2_803);
                }
                else {
                    char source2_804[1024];
                    memset(&source2_804, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_804,1024," && ");
                    buffer_append_str(source_793,source2_804);
                }
                i_797++;
                /* U13 */name_800 = come_decrement_ref_count2(name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_798,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_793,125);
        p_805=info->p;
        sline_806=info->sline;
        sname_807=(char*)come_increment_ref_count(info->sname);
        head_808=info->head;
        source3_809=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj312=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_793);
        come_call_finalizer3(__dec_obj312,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_793->buf;
        info->head=source_793->buf;
        __dec_obj313=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_790));
        /*G*/ __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_810=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_811=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2660, "sType")),"bool",(_Bool)0,info));
        name_812=(char*)come_increment_ref_count(string_clone(real_fun_name_790));
        left_type_813=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_813->mHeap=(_Bool)0;
        right_type_814=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_814->mHeap=(_Bool)0;
        param_types_816=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___815[0]=come_increment_ref_count(left_type_813),
__list_values27___815[1]=come_increment_ref_count(right_type_814),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2666, "struct list$1sTypeph")),2,__list_values27___815)));
        param_names_818=(struct list$1charph*)come_increment_ref_count((__list_values28___817[0]=come_increment_ref_count(((char*)(__right_value923=__builtin_string("left")))),
__list_values28___817[1]=come_increment_ref_count(((char*)(__right_value924=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2667, "struct list$1charph")),2,__list_values28___817)));
        /* U11 */__right_value923 = come_decrement_ref_count2(__right_value923, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value924 = come_decrement_ref_count2(__right_value924, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_819=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2668, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_819,((void*)0));
        list$1charph_push_back(param_default_parametors_819,((void*)0));
        header_buf_820=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2672, "buffer"))));
        buffer_append_str(header_buf_820,((char*)(__right_value931=make_come_type_name_string(result_type_811,info))));
        /* U11 */__right_value931 = come_decrement_ref_count2(__right_value931, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_820," ");
        buffer_append_str(header_buf_820,real_fun_name_790);
        buffer_append_str(header_buf_820,"(");
        for(        i_821=0;        i_821<list$1sTypeph_length(param_types_816);        i_821++        ){
            param_type_822=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_816,i_821), "05function.c", 2680, 11));
            param_name_823=((char*)come_null_check(list$1charphp_operator_load_element(param_names_818,i_821), "05function.c", 2681, 12));
            buffer_append_str(header_buf_820,((char*)(__right_value932=make_come_type_name_string(param_type_822,info))));
            /* U11 */__right_value932 = come_decrement_ref_count2(__right_value932, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_820," ");
            buffer_append_str(header_buf_820,param_name_823);
            if(            i_821!=list$1sTypeph_length(param_types_816)-1) {
                buffer_append_str(header_buf_820,",");
            }
        }
        buffer_append_str(header_buf_820,")");
        result_type_811->mStatic=(_Bool)0;
        fun_824=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2695, "sFun")),(char*)come_increment_ref_count(name_812),(struct sType*)come_increment_ref_count(result_type_811),(struct list$1sTypeph*)come_increment_ref_count(param_types_816),(struct list$1charph*)come_increment_ref_count(param_names_818),(struct list$1charph*)come_increment_ref_count(param_default_parametors_819),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_810),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_820)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_825=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value937=__builtin_string(fun_name))));
        /* U11 */__right_value937 = come_decrement_ref_count2(__right_value937, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_825==((void*)0)||fun2_825->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_812)),(struct sFun*)come_increment_ref_count(fun_824));
        }
        equaler_789=fun_824;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2711, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value940=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2711, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_824),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_826=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value940,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_826,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj318=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_809);
        come_call_finalizer3(__dec_obj318,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_805;
        info->head=head_808;
        info->sline=sline_806;
        __dec_obj319=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_807);
        /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_793,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_807 = come_decrement_ref_count2(sname_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_810,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_811,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_812 = come_decrement_ref_count2(name_812, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_813,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_814,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_816,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_819,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_824,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_788;
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_784);
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_785);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj322=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_786);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_787;
    __result253__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value946=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2732, "struct tuple2$2sFunpcharph")),equaler_789,(char*)come_increment_ref_count(real_fun_name_790))));
    /* U13 */last_code_784 = come_decrement_ref_count2(last_code_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_785 = come_decrement_ref_count2(last_code2_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_786 = come_decrement_ref_count2(last_code3_786, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_790 = come_decrement_ref_count2(real_fun_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_791,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value946,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_828;
char* __dec_obj323;
char* last_code2_829;
char* __dec_obj324;
char* last_code3_830;
char* __dec_obj325;
_Bool comma_instead_of_semicolon_831;
struct sClass* current_stack_frame_struct_832;
struct sFun* equaler_833;
void* __right_value947 = (void*)0;
char* real_fun_name_834;
void* __right_value948 = (void*)0;
struct sType* type2_835;
struct sClass* klass_836;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct buffer* source_837;
char* name_838;
int i_841;
struct list$1tuple2$2charphsTypephph* o2_saved_842;
struct tuple2$2charphsTypeph* it_843;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_844=0;
struct sType* field_type_845=0;
char* p_849;
int sline_850;
char* sname_851;
char* head_852;
struct buffer* source3_853;
struct buffer* __dec_obj326;
void* __right_value951 = (void*)0;
char* __dec_obj327;
void* __right_value952 = (void*)0;
struct sBlock* block_854;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sType* result_type_855;
void* __right_value955 = (void*)0;
char* name_856;
void* __right_value956 = (void*)0;
struct sType* left_type_857;
void* __right_value957 = (void*)0;
struct sType* right_type_858;
struct sType* __list_values29___859[2];
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct list$1sTypeph* param_types_860;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
char* __list_values30___861[2];
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct list$1charph* param_names_862;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct list$1charph* param_default_parametors_863;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct buffer* header_buf_864;
void* __right_value968 = (void*)0;
int i_865;
struct sType* param_type_866;
char* param_name_867;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sFun* fun_868;
void* __right_value974 = (void*)0;
struct sFun* fun2_869;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value981 = (void*)0;
struct sNode* node_870;
struct buffer* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
char* __dec_obj335;
char* __dec_obj336;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct tuple2$2sFunpcharph* __result256__;
    last_code_828=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj323=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_829=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj324=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_830=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj325=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_831=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_832=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_833=((void*)0);
    real_fun_name_834=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_835=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_835;
    klass_836=type->mClass;
    if(    type->mPointerNum>0&&!klass_836->mNumber) {
        source_837=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2759, "buffer"))));
        buffer_append_char(source_837,123);
        if(        klass_836->mProtocol) {
            name_838="_protocol_obj";
            char source2_839[1024];
            memset(&source2_839, 0, sizeof(char)            *(1024)            );
            snprintf(source2_839,1024,"return !left.%s.equals(right.%s);\n",name_838,name_838);
            buffer_append_str(source_837,source2_839);
        }
        else {
            char source2_840[1024];
            memset(&source2_840, 0, sizeof(char)            *(1024)            );
            snprintf(source2_840,1024,"return !(");
            buffer_append_str(source_837,source2_840);
            i_841=0;
            klass_836=map$2charphsClassphp_operator_load_element(info->classes,klass_836->mName);
            for(            o2_saved_842=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_836->mFields)),it_843=list$1tuple2$2charphsTypephph_begin((o2_saved_842));            !list$1tuple2$2charphsTypephph_end((o2_saved_842));            it_843=list$1tuple2$2charphsTypephph_next((o2_saved_842))            ){
                multiple_assign_var14=it_843;
                name_844=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_845=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_845->mClass->mName)&&type->mPointerNum==field_type_845->mPointerNum&&field_type_845->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_846[1024];
                memset(&source2_846, 0, sizeof(char)                *(1024)                );
                snprintf(source2_846,1024,"left.%s.equals(right.%s)",name_844,name_844);
                buffer_append_str(source_837,source2_846);
                if(                i_841==list$1tuple2$2charphsTypephph_length(klass_836->mFields)-1) {
                    char source2_847[1024];
                    memset(&source2_847, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_847,1024,");");
                    buffer_append_str(source_837,source2_847);
                }
                else {
                    char source2_848[1024];
                    memset(&source2_848, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_848,1024," && ");
                    buffer_append_str(source_837,source2_848);
                }
                i_841++;
                /* U13 */name_844 = come_decrement_ref_count2(name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_845,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_842,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_837,125);
        p_849=info->p;
        sline_850=info->sline;
        sname_851=(char*)come_increment_ref_count(info->sname);
        head_852=info->head;
        source3_853=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj326=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_837);
        come_call_finalizer3(__dec_obj326,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_837->buf;
        info->head=source_837->buf;
        __dec_obj327=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_834));
        /*G*/ __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_854=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_855=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2822, "sType")),"bool",(_Bool)0,info));
        name_856=(char*)come_increment_ref_count(string_clone(real_fun_name_834));
        left_type_857=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_857->mHeap=(_Bool)0;
        right_type_858=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_858->mHeap=(_Bool)0;
        param_types_860=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___859[0]=come_increment_ref_count(left_type_857),
__list_values29___859[1]=come_increment_ref_count(right_type_858),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2828, "struct list$1sTypeph")),2,__list_values29___859)));
        param_names_862=(struct list$1charph*)come_increment_ref_count((__list_values30___861[0]=come_increment_ref_count(((char*)(__right_value960=__builtin_string("left")))),
__list_values30___861[1]=come_increment_ref_count(((char*)(__right_value961=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2829, "struct list$1charph")),2,__list_values30___861)));
        /* U11 */__right_value960 = come_decrement_ref_count2(__right_value960, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value961 = come_decrement_ref_count2(__right_value961, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_863=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2830, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_863,((void*)0));
        list$1charph_push_back(param_default_parametors_863,((void*)0));
        header_buf_864=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2834, "buffer"))));
        buffer_append_str(header_buf_864,((char*)(__right_value968=make_come_type_name_string(result_type_855,info))));
        /* U11 */__right_value968 = come_decrement_ref_count2(__right_value968, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_864," ");
        buffer_append_str(header_buf_864,real_fun_name_834);
        buffer_append_str(header_buf_864,"(");
        for(        i_865=0;        i_865<list$1sTypeph_length(param_types_860);        i_865++        ){
            param_type_866=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_860,i_865), "05function.c", 2842, 13));
            param_name_867=((char*)come_null_check(list$1charphp_operator_load_element(param_names_862,i_865), "05function.c", 2843, 14));
            buffer_append_str(header_buf_864,((char*)(__right_value969=make_come_type_name_string(param_type_866,info))));
            /* U11 */__right_value969 = come_decrement_ref_count2(__right_value969, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_864," ");
            buffer_append_str(header_buf_864,param_name_867);
            if(            i_865!=list$1sTypeph_length(param_types_860)-1) {
                buffer_append_str(header_buf_864,",");
            }
        }
        buffer_append_str(header_buf_864,")");
        result_type_855->mStatic=(_Bool)0;
        fun_868=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2857, "sFun")),(char*)come_increment_ref_count(name_856),(struct sType*)come_increment_ref_count(result_type_855),(struct list$1sTypeph*)come_increment_ref_count(param_types_860),(struct list$1charph*)come_increment_ref_count(param_names_862),(struct list$1charph*)come_increment_ref_count(param_default_parametors_863),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_854),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_864)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_869=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value974=__builtin_string(fun_name))));
        /* U11 */__right_value974 = come_decrement_ref_count2(__right_value974, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_869==((void*)0)||fun2_869->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_856)),(struct sFun*)come_increment_ref_count(fun_868));
        }
        equaler_833=fun_868;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2873, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value977=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2873, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_868),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_870=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value977,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_870,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj332=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_853);
        come_call_finalizer3(__dec_obj332,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_849;
        info->head=head_852;
        info->sline=sline_850;
        __dec_obj333=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_851);
        /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_837,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_851 = come_decrement_ref_count2(sname_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_854,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_855,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_856 = come_decrement_ref_count2(name_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_860,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_862,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_863,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_864,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_868,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_870) { node_870 = come_decrement_ref_count2(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_832;
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_828);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_829);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj336=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_830);
    /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_831;
    __result256__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value983=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2894, "struct tuple2$2sFunpcharph")),equaler_833,(char*)come_increment_ref_count(real_fun_name_834))));
    /* U13 */last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_830 = come_decrement_ref_count2(last_code3_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_834 = come_decrement_ref_count2(real_fun_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_835,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value983,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_872;
char* __dec_obj337;
char* last_code2_873;
char* __dec_obj338;
char* last_code3_874;
char* __dec_obj339;
_Bool comma_instead_of_semicolon_875;
struct sClass* current_stack_frame_struct_876;
struct sFun* equaler_877;
void* __right_value984 = (void*)0;
char* real_fun_name_878;
void* __right_value985 = (void*)0;
struct sType* type2_879;
struct sClass* klass_880;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct buffer* source_881;
char* name_882;
struct list$1tuple2$2charphsTypephph* o2_saved_885;
struct tuple2$2charphsTypeph* it_886;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_887=0;
struct sType* field_type_888=0;
char* p_890;
int sline_891;
char* sname_892;
char* head_893;
struct buffer* source3_894;
struct buffer* __dec_obj340;
void* __right_value988 = (void*)0;
char* __dec_obj341;
void* __right_value989 = (void*)0;
struct sBlock* block_895;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sType* result_type_896;
void* __right_value992 = (void*)0;
char* name_897;
void* __right_value993 = (void*)0;
struct sType* left_type_898;
void* __right_value994 = (void*)0;
struct sType* right_type_899;
struct sType* __list_values31___900[2];
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct list$1sTypeph* param_types_901;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
char* __list_values32___902[2];
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct list$1charph* param_names_903;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct list$1charph* param_default_parametors_904;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct buffer* header_buf_905;
void* __right_value1005 = (void*)0;
int i_906;
struct sType* param_type_907;
char* param_name_908;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct sFun* fun_909;
void* __right_value1011 = (void*)0;
struct sFun* fun2_910;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1018 = (void*)0;
struct sNode* node_911;
struct buffer* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
char* __dec_obj349;
char* __dec_obj350;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct tuple2$2sFunpcharph* __result259__;
    last_code_872=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj337=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_873=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj338=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_874=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj339=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_875=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_876=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_877=((void*)0);
    real_fun_name_878=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_879=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_879;
    klass_880=type->mClass;
    if(    type->mPointerNum>0&&!klass_880->mNumber) {
        source_881=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2921, "buffer"))));
        buffer_append_char(source_881,123);
        if(        klass_880->mProtocol) {
            name_882="_protocol_obj";
            char source2_883[1024];
            memset(&source2_883, 0, sizeof(char)            *(1024)            );
            snprintf(source2_883,1024,"return left.%s === right.%s;\n",name_882,name_882);
            buffer_append_str(source_881,source2_883);
        }
        else {
            char source2_884[1024];
            memset(&source2_884, 0, sizeof(char)            *(1024)            );
            klass_880=map$2charphsClassphp_operator_load_element(info->classes,klass_880->mName);
            for(            o2_saved_885=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_880->mFields)),it_886=list$1tuple2$2charphsTypephph_begin((o2_saved_885));            !list$1tuple2$2charphsTypephph_end((o2_saved_885));            it_886=list$1tuple2$2charphsTypephph_next((o2_saved_885))            ){
                multiple_assign_var15=it_886;
                name_887=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_888=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_888->mClass->mName)&&type->mPointerNum==field_type_888->mPointerNum&&field_type_888->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_889[1024];
                memset(&source2_889, 0, sizeof(char)                *(1024)                );
                snprintf(source2_889,1024,"if(left.%s !== right.%s) { return false; }\n",name_887,name_887,name_887);
                buffer_append_str(source_881,source2_889);
                /* U13 */name_887 = come_decrement_ref_count2(name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_885,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_881,"return true;\n");
        buffer_append_char(source_881,125);
        p_890=info->p;
        sline_891=info->sline;
        sname_892=(char*)come_increment_ref_count(info->sname);
        head_893=info->head;
        source3_894=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj340=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_881);
        come_call_finalizer3(__dec_obj340,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_881->buf;
        info->head=source_881->buf;
        __dec_obj341=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_878));
        /*G*/ __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_895=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_896=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2969, "sType")),"bool",(_Bool)0,info));
        name_897=(char*)come_increment_ref_count(string_clone(real_fun_name_878));
        left_type_898=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_898->mHeap=(_Bool)0;
        right_type_899=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_899->mHeap=(_Bool)0;
        param_types_901=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___900[0]=come_increment_ref_count(left_type_898),
__list_values31___900[1]=come_increment_ref_count(right_type_899),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2975, "struct list$1sTypeph")),2,__list_values31___900)));
        param_names_903=(struct list$1charph*)come_increment_ref_count((__list_values32___902[0]=come_increment_ref_count(((char*)(__right_value997=__builtin_string("left")))),
__list_values32___902[1]=come_increment_ref_count(((char*)(__right_value998=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2976, "struct list$1charph")),2,__list_values32___902)));
        /* U11 */__right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_904=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2977, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_904,((void*)0));
        list$1charph_push_back(param_default_parametors_904,((void*)0));
        header_buf_905=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2981, "buffer"))));
        buffer_append_str(header_buf_905,((char*)(__right_value1005=make_come_type_name_string(result_type_896,info))));
        /* U11 */__right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_905," ");
        buffer_append_str(header_buf_905,real_fun_name_878);
        buffer_append_str(header_buf_905,"(");
        for(        i_906=0;        i_906<list$1sTypeph_length(param_types_901);        i_906++        ){
            param_type_907=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_901,i_906), "05function.c", 2989, 15));
            param_name_908=((char*)come_null_check(list$1charphp_operator_load_element(param_names_903,i_906), "05function.c", 2990, 16));
            buffer_append_str(header_buf_905,((char*)(__right_value1006=make_come_type_name_string(param_type_907,info))));
            /* U11 */__right_value1006 = come_decrement_ref_count2(__right_value1006, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_905," ");
            buffer_append_str(header_buf_905,param_name_908);
            if(            i_906!=list$1sTypeph_length(param_types_901)-1) {
                buffer_append_str(header_buf_905,",");
            }
        }
        buffer_append_str(header_buf_905,")");
        result_type_896->mStatic=(_Bool)0;
        fun_909=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3004, "sFun")),(char*)come_increment_ref_count(name_897),(struct sType*)come_increment_ref_count(result_type_896),(struct list$1sTypeph*)come_increment_ref_count(param_types_901),(struct list$1charph*)come_increment_ref_count(param_names_903),(struct list$1charph*)come_increment_ref_count(param_default_parametors_904),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_895),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_905)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_910=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1011=__builtin_string(fun_name))));
        /* U11 */__right_value1011 = come_decrement_ref_count2(__right_value1011, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_910==((void*)0)||fun2_910->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_897)),(struct sFun*)come_increment_ref_count(fun_909));
        }
        equaler_877=fun_909;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3020, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1014=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3020, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_909),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_911=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1014,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_911,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj346=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_894);
        come_call_finalizer3(__dec_obj346,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_890;
        info->head=head_893;
        info->sline=sline_891;
        __dec_obj347=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_892);
        /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_892 = come_decrement_ref_count2(sname_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_895,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_896,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_897 = come_decrement_ref_count2(name_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_899,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_901,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_903,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_904,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_905,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_909,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_911) { node_911 = come_decrement_ref_count2(node_911, ((struct sNode*)node_911)->finalize, ((struct sNode*)node_911)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_876;
    __dec_obj348=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_872);
    /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj349=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_873);
    /*G*/ __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj350=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_874);
    /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_875;
    __result259__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1020=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3041, "struct tuple2$2sFunpcharph")),equaler_877,(char*)come_increment_ref_count(real_fun_name_878))));
    /* U13 */last_code_872 = come_decrement_ref_count2(last_code_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_873 = come_decrement_ref_count2(last_code2_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_874 = come_decrement_ref_count2(last_code3_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_878 = come_decrement_ref_count2(real_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_879,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1020,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_913;
char* __dec_obj351;
char* last_code2_914;
char* __dec_obj352;
char* last_code3_915;
char* __dec_obj353;
_Bool comma_instead_of_semicolon_916;
struct sClass* current_stack_frame_struct_917;
struct sFun* cloner_918;
void* __right_value1021 = (void*)0;
char* real_fun_name_919;
void* __right_value1022 = (void*)0;
struct sType* type2_920;
struct sClass* klass_921;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct buffer* source_922;
void* __right_value1025 = (void*)0;
char* name_923;
struct list$1tuple2$2charphsTypephph* o2_saved_925;
struct tuple2$2charphsTypeph* it_926;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_927=0;
struct sType* field_type_928=0;
struct list$1tuple2$2charphsTypephph* o2_saved_931;
struct tuple2$2charphsTypeph* it_932;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_933=0;
struct sType* field_type_934=0;
char* p_938;
int sline_939;
char* sname_940;
struct buffer* source3_941;
char* head_942;
struct buffer* __dec_obj354;
void* __right_value1026 = (void*)0;
char* __dec_obj355;
void* __right_value1027 = (void*)0;
struct sBlock* block_943;
void* __right_value1028 = (void*)0;
struct sType* result_type_944;
void* __right_value1029 = (void*)0;
char* name_945;
void* __right_value1030 = (void*)0;
struct sType* self_type_946;
struct sType* __list_values33___947[1];
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct list$1sTypeph* param_types_948;
void* __right_value1033 = (void*)0;
char* __list_values34___949[1];
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct list$1charph* param_names_950;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct list$1charph* param_default_parametors_951;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct buffer* header_buf_952;
void* __right_value1040 = (void*)0;
int i_953;
struct sType* param_type_954;
char* param_name_955;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sFun* fun_956;
void* __right_value1046 = (void*)0;
struct sFun* fun2_957;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1053 = (void*)0;
struct sNode* node_958;
char* __dec_obj360;
struct buffer* __dec_obj361;
char* __dec_obj362;
char* __dec_obj363;
char* __dec_obj364;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
struct tuple2$2sFunpcharph* __result262__;
    last_code_913=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj351=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_914=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj352=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_915=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj353=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_916=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_917=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_918=((void*)0);
    real_fun_name_919=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_920=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_920;
    klass_921=type->mClass;
    if(    type->mPointerNum>0&&!klass_921->mNumber) {
        source_922=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3068, "buffer"))));
        buffer_append_str(source_922,"{\n");
        buffer_append_str(source_922,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_922,"var result = new %s;\n",((char*)(__right_value1025=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        /* U11 */__right_value1025 = come_decrement_ref_count2(__right_value1025, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_921->mProtocol) {
            name_923="_protocol_obj";
            char source2_924[1024];
            memset(&source2_924, 0, sizeof(char)            *(1024)            );
            snprintf(source2_924,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_922,source2_924);
            klass_921=map$2charphsClassphp_operator_load_element(info->classes,klass_921->mName);
            for(            o2_saved_925=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_921->mFields)),it_926=list$1tuple2$2charphsTypephph_begin((o2_saved_925));            !list$1tuple2$2charphsTypephph_end((o2_saved_925));            it_926=list$1tuple2$2charphsTypephph_next((o2_saved_925))            ){
                multiple_assign_var16=it_926;
                name_927=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_928=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_928->mClass->mName)&&type->mPointerNum==field_type_928->mPointerNum&&field_type_928->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_927,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_928->mArrayNum)>0) {
                    char source2_929[1024];
                    memset(&source2_929, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_929,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_927,name_927,name_927);
                    buffer_append_str(source_922,source2_929);
                }
                else {
                    char source2_930[1024];
                    memset(&source2_930, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_930,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_927,name_927);
                    buffer_append_str(source_922,source2_930);
                }
                /* U13 */name_927 = come_decrement_ref_count2(name_927, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_928,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_925,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_921=map$2charphsClassphp_operator_load_element(info->classes,klass_921->mName);
            for(            o2_saved_931=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_921->mFields)),it_932=list$1tuple2$2charphsTypephph_begin((o2_saved_931));            !list$1tuple2$2charphsTypephph_end((o2_saved_931));            it_932=list$1tuple2$2charphsTypephph_next((o2_saved_931))            ){
                multiple_assign_var17=it_932;
                name_933=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_934=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_934->mClass->mName)&&type->mPointerNum==field_type_934->mPointerNum&&field_type_934->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_934->mHeap) {
                    char source2_935[1024];
                    memset(&source2_935, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_935,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_933,name_933,name_933);
                    buffer_append_str(source_922,source2_935);
                }
                else if(                list$1sNodeph_length(field_type_934->mArrayNum)>0) {
                    char source2_936[1024];
                    memset(&source2_936, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_936,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_933,name_933,name_933);
                    buffer_append_str(source_922,source2_936);
                }
                else {
                    char source2_937[1024];
                    memset(&source2_937, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_937,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_933,name_933);
                    buffer_append_str(source_922,source2_937);
                }
                /* U13 */name_933 = come_decrement_ref_count2(name_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_934,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_931,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_922,"return result;");
        buffer_append_char(source_922,125);
        p_938=info->p;
        sline_939=info->sline;
        sname_940=(char*)come_increment_ref_count(info->sname);
        source3_941=(struct buffer*)come_increment_ref_count(info->source);
        head_942=info->head;
        __dec_obj354=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_922);
        come_call_finalizer3(__dec_obj354,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj355=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_919));
        /*G*/ __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_943=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_944=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_945=(char*)come_increment_ref_count(string_clone(real_fun_name_919));
        self_type_946=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_946->mHeap=(_Bool)0;
        param_types_948=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___947[0]=come_increment_ref_count(self_type_946),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3162, "struct list$1sTypeph")),1,__list_values33___947)));
        param_names_950=(struct list$1charph*)come_increment_ref_count((__list_values34___949[0]=come_increment_ref_count(((char*)(__right_value1033=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3163, "struct list$1charph")),1,__list_values34___949)));
        /* U11 */__right_value1033 = come_decrement_ref_count2(__right_value1033, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_951=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3164, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_951,((void*)0));
        header_buf_952=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3167, "buffer"))));
        buffer_append_str(header_buf_952,((char*)(__right_value1040=make_come_type_name_string(result_type_944,info))));
        /* U11 */__right_value1040 = come_decrement_ref_count2(__right_value1040, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_952," ");
        buffer_append_str(header_buf_952,real_fun_name_919);
        buffer_append_str(header_buf_952,"(");
        for(        i_953=0;        i_953<list$1sTypeph_length(param_types_948);        i_953++        ){
            param_type_954=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_948,i_953), "05function.c", 3175, 17));
            param_name_955=((char*)come_null_check(list$1charphp_operator_load_element(param_names_950,i_953), "05function.c", 3176, 18));
            buffer_append_str(header_buf_952,((char*)(__right_value1041=make_come_type_name_string(param_type_954,info))));
            /* U11 */__right_value1041 = come_decrement_ref_count2(__right_value1041, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_952," ");
            buffer_append_str(header_buf_952,param_name_955);
            if(            i_953!=list$1sTypeph_length(param_types_948)-1) {
                buffer_append_str(header_buf_952,",");
            }
        }
        buffer_append_str(header_buf_952,")");
        result_type_944->mStatic=(_Bool)0;
        fun_956=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3190, "sFun")),(char*)come_increment_ref_count(name_945),(struct sType*)come_increment_ref_count(result_type_944),(struct list$1sTypeph*)come_increment_ref_count(param_types_948),(struct list$1charph*)come_increment_ref_count(param_names_950),(struct list$1charph*)come_increment_ref_count(param_default_parametors_951),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_943),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_952)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_956->mCloner=(_Bool)1;
        fun2_957=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1046=__builtin_string(fun_name))));
        /* U11 */__right_value1046 = come_decrement_ref_count2(__right_value1046, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_957==((void*)0)||fun2_957->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_945)),(struct sFun*)come_increment_ref_count(fun_956));
        }
        cloner_918=fun_956;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3207, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sFunNode*)(__right_value1049=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3207, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_956),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_958=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1049,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_958,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj360=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_940);
        /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_939;
        __dec_obj361=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_941);
        come_call_finalizer3(__dec_obj361,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_938;
        info->head=head_942;
        info->sline=sline_939;
        /*i*/come_call_finalizer3(source_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_940 = come_decrement_ref_count2(sname_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_941,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_943,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_944,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_945 = come_decrement_ref_count2(name_945, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_946,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_948,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_950,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_951,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_952,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_956,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_958) { node_958 = come_decrement_ref_count2(node_958, ((struct sNode*)node_958)->finalize, ((struct sNode*)node_958)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_917;
    __dec_obj362=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_913);
    /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj363=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_914);
    /*G*/ __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj364=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_915);
    /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_916;
    __result262__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1055=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3230, "struct tuple2$2sFunpcharph")),cloner_918,(char*)come_increment_ref_count(real_fun_name_919))));
    /* U13 */last_code_913 = come_decrement_ref_count2(last_code_913, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_914 = come_decrement_ref_count2(last_code2_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_915 = come_decrement_ref_count2(last_code3_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_919 = come_decrement_ref_count2(real_fun_name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_920,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1055,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_960;
char* __dec_obj365;
char* last_code2_961;
char* __dec_obj366;
char* last_code3_962;
char* __dec_obj367;
_Bool comma_instead_of_semicolon_963;
struct sClass* current_stack_frame_struct_964;
struct sFun* cloner_965;
void* __right_value1056 = (void*)0;
char* real_fun_name_966;
void* __right_value1057 = (void*)0;
struct sType* type2_967;
struct sClass* klass_968;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct buffer* source_969;
int i_970;
struct list$1tuple2$2charphsTypephph* o2_saved_971;
struct tuple2$2charphsTypeph* it_972;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_973=0;
struct sType* field_type_974=0;
char* p_977;
int sline_978;
char* sname_979;
struct buffer* source3_980;
char* head_981;
struct buffer* __dec_obj368;
void* __right_value1060 = (void*)0;
char* __dec_obj369;
void* __right_value1061 = (void*)0;
struct sBlock* block_982;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sType* result_type_983;
void* __right_value1064 = (void*)0;
char* name_984;
void* __right_value1065 = (void*)0;
struct sType* self_type_985;
struct sType* __list_values35___986[1];
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
struct list$1sTypeph* param_types_987;
void* __right_value1068 = (void*)0;
char* __list_values36___988[1];
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct list$1charph* param_names_989;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct list$1charph* param_default_parametors_990;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct buffer* header_buf_991;
void* __right_value1075 = (void*)0;
int i_992;
struct sType* param_type_993;
char* param_name_994;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct sFun* fun_995;
void* __right_value1081 = (void*)0;
struct sFun* fun2_996;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value1088 = (void*)0;
struct sNode* node_997;
char* __dec_obj374;
struct buffer* __dec_obj375;
char* __dec_obj376;
char* __dec_obj377;
char* __dec_obj378;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct tuple2$2sFunpcharph* __result265__;
    last_code_960=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj365=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_961=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj366=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_962=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj367=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_963=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_964=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_965=((void*)0);
    real_fun_name_966=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_967=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_967;
    klass_968=type->mClass;
    if(    type->mPointerNum>0&&!klass_968->mNumber) {
        source_969=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3257, "buffer"))));
        buffer_append_str(source_969,"{\n");
        buffer_append_str(source_969,"var result = new buffer();\n");
        buffer_append_format(source_969,"result.append_str(\"%s {\");\n",klass_968->mName);
        i_970=0;
        klass_968=map$2charphsClassphp_operator_load_element(info->classes,klass_968->mName);
        for(        o2_saved_971=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_968->mFields)),it_972=list$1tuple2$2charphsTypephph_begin((o2_saved_971));        !list$1tuple2$2charphsTypephph_end((o2_saved_971));        it_972=list$1tuple2$2charphsTypephph_next((o2_saved_971))        ){
            multiple_assign_var18=it_972;
            name_973=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_974=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_974->mClass->mName)&&type->mPointerNum==field_type_974->mPointerNum&&field_type_974->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_970==list$1tuple2$2charphsTypephph_length(klass_968->mFields)-1) {
                char source2_975[1024];
                memset(&source2_975, 0, sizeof(char)                *(1024)                );
                snprintf(source2_975,1024,"result.append_str(\"%s:\");\n",name_973);
                buffer_append_str(source_969,source2_975);
                snprintf(source2_975,1024,"result.append_str(self.%s.to_string());\n",name_973);
                buffer_append_str(source_969,source2_975);
            }
            else {
                char source2_976[1024];
                memset(&source2_976, 0, sizeof(char)                *(1024)                );
                snprintf(source2_976,1024,"result.append_str(\"%s:\");\n",name_973);
                buffer_append_str(source_969,source2_976);
                snprintf(source2_976,1024,"result.append_str(self.%s.to_string());\n",name_973);
                buffer_append_str(source_969,source2_976);
                snprintf(source2_976,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_969,source2_976);
            }
            i_970++;
            /* U13 */name_973 = come_decrement_ref_count2(name_973, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_974,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_971,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_969,"result.append_str(\"}\");\n");
        buffer_append_format(source_969,"return result.to_string();\n");
        buffer_append_char(source_969,125);
        p_977=info->p;
        sline_978=info->sline;
        sname_979=(char*)come_increment_ref_count(info->sname);
        source3_980=(struct buffer*)come_increment_ref_count(info->source);
        head_981=info->head;
        __dec_obj368=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_969);
        come_call_finalizer3(__dec_obj368,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj369=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_966));
        /*G*/ __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_982=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_983=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3324, "sType")),"char*",(_Bool)0,info));
        result_type_983->mHeap=(_Bool)1;
        name_984=(char*)come_increment_ref_count(string_clone(real_fun_name_966));
        self_type_985=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_985->mHeap=(_Bool)0;
        param_types_987=(struct list$1sTypeph*)come_increment_ref_count((__list_values35___986[0]=come_increment_ref_count(self_type_985),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3329, "struct list$1sTypeph")),1,__list_values35___986)));
        param_names_989=(struct list$1charph*)come_increment_ref_count((__list_values36___988[0]=come_increment_ref_count(((char*)(__right_value1068=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3330, "struct list$1charph")),1,__list_values36___988)));
        /* U11 */__right_value1068 = come_decrement_ref_count2(__right_value1068, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_990=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3331, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_990,((void*)0));
        header_buf_991=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3334, "buffer"))));
        buffer_append_str(header_buf_991,((char*)(__right_value1075=make_come_type_name_string(result_type_983,info))));
        /* U11 */__right_value1075 = come_decrement_ref_count2(__right_value1075, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_991," ");
        buffer_append_str(header_buf_991,real_fun_name_966);
        buffer_append_str(header_buf_991,"(");
        for(        i_992=0;        i_992<list$1sTypeph_length(param_types_987);        i_992++        ){
            param_type_993=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_987,i_992), "05function.c", 3342, 19));
            param_name_994=((char*)come_null_check(list$1charphp_operator_load_element(param_names_989,i_992), "05function.c", 3343, 20));
            buffer_append_str(header_buf_991,((char*)(__right_value1076=make_come_type_name_string(param_type_993,info))));
            /* U11 */__right_value1076 = come_decrement_ref_count2(__right_value1076, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_991," ");
            buffer_append_str(header_buf_991,param_name_994);
            if(            i_992!=list$1sTypeph_length(param_types_987)-1) {
                buffer_append_str(header_buf_991,",");
            }
        }
        buffer_append_str(header_buf_991,")");
        result_type_983->mStatic=(_Bool)0;
        fun_995=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3357, "sFun")),(char*)come_increment_ref_count(name_984),(struct sType*)come_increment_ref_count(result_type_983),(struct list$1sTypeph*)come_increment_ref_count(param_types_987),(struct list$1charph*)come_increment_ref_count(param_names_989),(struct list$1charph*)come_increment_ref_count(param_default_parametors_990),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_982),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_991)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_995->mCloner=(_Bool)1;
        fun2_996=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1081=__builtin_string(fun_name))));
        /* U11 */__right_value1081 = come_decrement_ref_count2(__right_value1081, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_996==((void*)0)||fun2_996->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_984)),(struct sFun*)come_increment_ref_count(fun_995));
        }
        cloner_965=fun_995;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3374, "struct sNode");
        _inf_obj_value16=come_increment_ref_count(((struct sFunNode*)(__right_value1084=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3374, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_995),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFunNode_finalize;
        _inf_value16->clone=(void*)sFunNode_clone;
        _inf_value16->compile=(void*)sFunNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFunNode_kind;
        node_997=(struct sNode*)come_increment_ref_count(_inf_value16);
        /*g*/come_call_finalizer3(__right_value1084,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_997,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj374=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_979);
        /*G*/ __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_978;
        __dec_obj375=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_980);
        come_call_finalizer3(__dec_obj375,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_977;
        info->head=head_981;
        info->sline=sline_978;
        /*i*/come_call_finalizer3(source_969,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_979 = come_decrement_ref_count2(sname_979, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_980,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_982,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_983,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_984 = come_decrement_ref_count2(name_984, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_987,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_989,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_990,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_991,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_995,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_997) { node_997 = come_decrement_ref_count2(node_997, ((struct sNode*)node_997)->finalize, ((struct sNode*)node_997)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_964;
    __dec_obj376=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_960);
    /*G*/ __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj377=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_961);
    /*G*/ __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj378=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_962);
    /*G*/ __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_963;
    __result265__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1090=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3397, "struct tuple2$2sFunpcharph")),cloner_965,(char*)come_increment_ref_count(real_fun_name_966))));
    /* U13 */last_code_960 = come_decrement_ref_count2(last_code_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_961 = come_decrement_ref_count2(last_code2_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code3_962 = come_decrement_ref_count2(last_code3_962, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_966 = come_decrement_ref_count2(real_fun_name_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_967,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1090,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj370;
struct sFun* __dec_obj371;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj370=self->sname;
            /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj371=self->mFun;
            come_call_finalizer3(__dec_obj371,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result263__;
void* __right_value1085 = (void*)0;
struct sFunNode* result_998;
void* __right_value1086 = (void*)0;
char* __dec_obj372;
void* __right_value1087 = (void*)0;
struct sFun* __dec_obj373;
struct sFunNode* __result264__;
    if(    self==(void*)0) {
        __result263__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_998=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_998->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj372=result_998->sname;
        result_998->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj373=result_998->mFun;
        result_998->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj373,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_998;
    /*i*/come_call_finalizer3(result_998,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

