/// previous struct definition ///
struct __locale_struct;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
typedef unsigned long  int size_t;

typedef long ssize_t;

typedef long off_t;

typedef struct _IO_FILE FILE;

typedef __builtin_va_list va_list;

typedef __builtin_va_list __isoc_va_list;

union _G_fpos64_t
{
char __opaque[16];
long  long __lldata;
double __align;
};

typedef union _G_fpos64_t fpos_t;

extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long*,int);

typedef int (*cookie_close_function_t)(void*);

struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long  int);
    long (*write)(void*,const char*,unsigned long  int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX1 div_t;

struct anonymous_typeX2
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX2 ldiv_t;

struct anonymous_typeX3
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX3 lldiv_t;

typedef struct __locale_struct* locale_t;

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

extern char* program_invocation_short_name;
extern char* program_invocation_name;
typedef void* any;

typedef char* string;

extern void* gComeFunResultObject;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
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
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
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

typedef struct regex_t* re_t;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
};

union anonymous_typeZ4
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ5
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ5 u;
};

typedef struct regex_t regex_t;

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
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
    char* mAttribute;
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

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
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
    struct tuple1$1sTypeph* mRefferenceOriginalType;
    struct sType* mAnyOriginalType;
    _Bool mAnyClass;
    char* mInterfaceName;
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
    _Bool mRefference;
    _Bool mNoRefference;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
    char* mAttribute;
    int mGenericsNumBefore;
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
    _Bool mInline;
    _Bool mUniq;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    _Bool no_output_come_code2;
    char* mAttribute;
    char* mFunAttribute;
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
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
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
    char* sname_at_head;
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
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
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

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
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

extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
typedef unsigned long  int nfds_t;

struct pollfd
{
    int fd;
    short events;
    short revents;
};

typedef long time_t;

struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};

struct __sigset_t
{
    unsigned long  int __bits[128/sizeof(long)];
};

typedef struct __sigset_t sigset_t;

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
    struct list$1sNodeph* exps;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
    int sline_real;
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
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
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

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* vars;
    struct list$1sBlockph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
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
struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);
struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);
int fclose(struct _IO_FILE* anonymous_var_nameX6);
int remove(const char* anonymous_var_nameX7);
int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);
int feof(struct _IO_FILE* anonymous_var_nameX10);
int ferror(struct _IO_FILE* anonymous_var_nameX11);
int fflush(struct _IO_FILE* anonymous_var_nameX12);
void clearerr(struct _IO_FILE* anonymous_var_nameX13);
int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);
long ftell(struct _IO_FILE* anonymous_var_nameX17);
void rewind(struct _IO_FILE* anonymous_var_nameX18);
int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);
int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);
unsigned long  int fread(void* anonymous_var_nameX23, unsigned long  int anonymous_var_nameX24, unsigned long  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long  int fwrite(const void* anonymous_var_nameX27, unsigned long  int anonymous_var_nameX28, unsigned long  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
int fgetc(struct _IO_FILE* anonymous_var_nameX31);
int getc(struct _IO_FILE* anonymous_var_nameX32);
int getchar();
int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);
int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);
int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);
int putchar(int anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);
int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);
int puts(const char* anonymous_var_nameX45);
int printf(const char* anonymous_var_nameX46, ...);
int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);
int snprintf(char* anonymous_var_nameX51, unsigned long  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long  int* anonymous_var_nameX91);
struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);
struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int pclose(struct _IO_FILE* anonymous_var_nameX96);
int fileno(struct _IO_FILE* anonymous_var_nameX97);
int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);
long ftello(struct _IO_FILE* anonymous_var_nameX101);
int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);
int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);
void flockfile(struct _IO_FILE* anonymous_var_nameX107);
int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);
void funlockfile(struct _IO_FILE* anonymous_var_nameX109);
int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);
int putchar_unlocked(int anonymous_var_nameX113);
long getdelim(char** anonymous_var_nameX114, unsigned long  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long  int fread_unlocked(void* anonymous_var_nameX137, unsigned long  int anonymous_var_nameX138, unsigned long  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long  int anonymous_var_nameX142, unsigned long  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long  int* anonymous_var_nameX153);
int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);
int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);
char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);
int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);
struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);
int atoi(const char* anonymous_var_nameX177);
long atol(const char* anonymous_var_nameX178);
long long atoll(const char* anonymous_var_nameX179);
double atof(const char* anonymous_var_nameX180);
float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);
double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);
long  double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);
long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);
unsigned long  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long  int anonymous_var_nameX200);
void* calloc(unsigned long  int anonymous_var_nameX201, unsigned long  int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long  int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long  int anonymous_var_nameX206, unsigned long  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long  int anonymous_var_nameX215, unsigned long  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long  int anonymous_var_nameX220, unsigned long  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
unsigned long  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long  int anonymous_var_nameX247, unsigned long  int anonymous_var_nameX248);
int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);
int unsetenv(const char* anonymous_var_nameX252);
int mkstemp(char* anonymous_var_nameX253);
int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);
char* mkdtemp(char* anonymous_var_nameX256);
int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
long  int random();
void srandom(unsigned int anonymous_var_nameX263);
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long  int anonymous_var_nameX266);
char* setstate(char* anonymous_var_nameX267);
int putenv(char* anonymous_var_nameX268);
int posix_openpt(int anonymous_var_nameX269);
int grantpt(int anonymous_var_nameX270);
int unlockpt(int anonymous_var_nameX271);
char* ptsname(int anonymous_var_nameX272);
char* l64a(long anonymous_var_nameX273);
long a64l(const char* anonymous_var_nameX274);
void setkey(const char* anonymous_var_nameX275);
double drand48();
double erand48(unsigned short int anonymous_var_nameX276[3]);
long  int lrand48();
long  int nrand48(unsigned short int anonymous_var_nameX277[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX278[3]);
void srand48(long anonymous_var_nameX279);
unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);
void lcong48(unsigned short int anonymous_var_nameX281[7]);
void* alloca(unsigned long  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long  int anonymous_var_nameX289);
void* memalign(unsigned long  int anonymous_var_nameX290, unsigned long  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long  int anonymous_var_nameX295, unsigned long  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long  int anonymous_var_nameX298, unsigned long  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long  int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long  int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long  int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long  int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long  int anonymous_var_nameX416);
unsigned long  int strnlen(const char* anonymous_var_nameX417, unsigned long  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long  int anonymous_var_nameX444);
unsigned long  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
int isalnum(int anonymous_var_nameX474);
int isalpha(int anonymous_var_nameX475);
int isblank(int anonymous_var_nameX476);
int iscntrl(int anonymous_var_nameX477);
int isdigit(int anonymous_var_nameX478);
int isgraph(int anonymous_var_nameX479);
int islower(int anonymous_var_nameX480);
int isprint(int anonymous_var_nameX481);
int ispunct(int anonymous_var_nameX482);
int isspace(int anonymous_var_nameX483);
int isupper(int anonymous_var_nameX484);
int isxdigit(int anonymous_var_nameX485);
int tolower(int anonymous_var_nameX486);
int toupper(int anonymous_var_nameX487);
int isalnum_l(int anonymous_var_nameX488, struct __locale_struct* anonymous_var_nameX489);
int isalpha_l(int anonymous_var_nameX490, struct __locale_struct* anonymous_var_nameX491);
int isblank_l(int anonymous_var_nameX492, struct __locale_struct* anonymous_var_nameX493);
int iscntrl_l(int anonymous_var_nameX494, struct __locale_struct* anonymous_var_nameX495);
int isdigit_l(int anonymous_var_nameX496, struct __locale_struct* anonymous_var_nameX497);
int isgraph_l(int anonymous_var_nameX498, struct __locale_struct* anonymous_var_nameX499);
int islower_l(int anonymous_var_nameX500, struct __locale_struct* anonymous_var_nameX501);
int isprint_l(int anonymous_var_nameX502, struct __locale_struct* anonymous_var_nameX503);
int ispunct_l(int anonymous_var_nameX504, struct __locale_struct* anonymous_var_nameX505);
int isspace_l(int anonymous_var_nameX506, struct __locale_struct* anonymous_var_nameX507);
int isupper_l(int anonymous_var_nameX508, struct __locale_struct* anonymous_var_nameX509);
int isxdigit_l(int anonymous_var_nameX510, struct __locale_struct* anonymous_var_nameX511);
int tolower_l(int anonymous_var_nameX512, struct __locale_struct* anonymous_var_nameX513);
int toupper_l(int anonymous_var_nameX514, struct __locale_struct* anonymous_var_nameX515);
int isascii(int anonymous_var_nameX516);
int toascii(int anonymous_var_nameX517);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_call_cloner(void* fun, void* mem);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
static void va_list_finalize(va_list self);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
char* buffer_printable(struct buffer* self);
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
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
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
_Bool charp_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
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
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
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
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
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
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, char* attribute, char* fun_attribute);
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
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile_v5(struct sInfo* info);
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
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
int poll(struct pollfd* anonymous_var_nameX893, unsigned long  int anonymous_var_nameX894, int anonymous_var_nameX895);
int ppoll(struct pollfd* anonymous_var_nameX896, unsigned long  int anonymous_var_nameX897, const struct timespec* anonymous_var_nameX898, const struct __sigset_t* anonymous_var_nameX899);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
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
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_132;
struct buffer* __result63__;
    result_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3779, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_132,self,sizeof(char)*len);
    __result63__ = gComeFunResultObject = __result_obj__ = result_132;
    come_call_finalizer3(result_132,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_133;
int i_134;
struct buffer* __result64__;
    result_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3786, "struct buffer*", (void*)0, (void*)0))));
    for(    i_134=0;    i_134<len;    i_134++    ){
        buffer_append(result_133,self[i_134],strlen(self[i_134]));
    }
    __result64__ = gComeFunResultObject = __result_obj__ = result_133;
    come_call_finalizer3(result_133,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_135;
struct buffer* __result65__;
    result_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3795, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_135,(char*)self,sizeof(short)*len);
    __result65__ = gComeFunResultObject = __result_obj__ = result_135;
    come_call_finalizer3(result_135,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_136;
struct buffer* __result66__;
    result_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3802, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_136,(char*)self,sizeof(int)*len);
    __result66__ = gComeFunResultObject = __result_obj__ = result_136;
    come_call_finalizer3(result_136,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_137;
struct buffer* __result67__;
    result_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3809, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_137,(char*)self,sizeof(long)*len);
    __result67__ = gComeFunResultObject = __result_obj__ = result_137;
    come_call_finalizer3(result_137,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_138;
struct buffer* __result68__;
    result_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3816, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_138,(char*)self,sizeof(float)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = result_138;
    come_call_finalizer3(result_138,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_139;
struct buffer* __result69__;
    result_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3823, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_139,(char*)self,sizeof(double)*len);
    __result69__ = gComeFunResultObject = __result_obj__ = result_139;
    come_call_finalizer3(result_139,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4151, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4156, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4161, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4166, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4171, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_145;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result80__;
    buf_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4204, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_145,(char*)self,sizeof(char)*len);
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4206, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_145))));
    come_call_finalizer3(buf_145,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_146;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result82__;
    buf_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4211, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_146,(char*)self,sizeof(char*)*len);
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4213, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_146))));
    come_call_finalizer3(buf_146,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_147;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result83__;
    buf_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4218, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_147,(char*)self,sizeof(short)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4220, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_147))));
    come_call_finalizer3(buf_147,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_148;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result84__;
    buf_148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4225, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_148,(char*)self,sizeof(int)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4227, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_148))));
    come_call_finalizer3(buf_148,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_149;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result85__;
    buf_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4232, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_149,(char*)self,sizeof(long)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4234, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_149))));
    come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_150;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result87__;
    buf_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4239, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_150,(char*)self,sizeof(float)*len);
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4241, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_150))));
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_151;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result89__;
    buf_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4246, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_151,(char*)self,sizeof(double)*len);
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4248, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_151))));
    come_call_finalizer3(buf_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4253, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4258, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4263, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result101__;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4268, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result101__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4273, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4278, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4283, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4288, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4293, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result116__;
    __result116__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4298, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result116__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4303, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result120__;
    __result120__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4308, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4313, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result124__;
    __result124__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4318, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_209;
int i_210;
    result_209=(_Bool)0;
    for(    i_210=0;    i_210<len;    i_210++    ){
        if(        strncmp(self[i_210],str,strlen(self[i_210]))==0) {
            result_209=(_Bool)1;
            break;
        }
    }
    return result_209;
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
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result165__;
    __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result165__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result71__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result74__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result76__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result78__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result81__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result86__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result88__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1char* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1char_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_153;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_154;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_155;
struct list$1char* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1290, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1300, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1310, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_156;
struct list_item$1char* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1charp* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1charp_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_159;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_160;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_161;
struct list$1charp* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1290, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1300, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1310, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_162;
struct list_item$1charp* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1short* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1short_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_165;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_166;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_167;
struct list$1short* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1290, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1300, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1310, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_168;
struct list_item$1short* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_170;
struct list$1int* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0;    i_170<num_value;    i_170++    ){
        list$1int_push_back(self,values[i_170]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_171;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_172;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_173;
struct list$1int* __result99__;
    if(    self->len==0) {
        litem_171=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1290, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1) {
        litem_172=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1300, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1310, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_174;
struct list_item$1int* prev_it_175;
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer3(prev_it_175,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_176;
struct list$1long* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0;    i_176<num_value;    i_176++    ){
        list$1long_push_back(self,values[i_176]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_177;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_178;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_179;
struct list$1long* __result102__;
    if(    self->len==0) {
        litem_177=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1290, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head=litem_177;
    }
    else if(    self->len==1) {
        litem_178=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1300, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_178->prev=self->head;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head->next=litem_178;
    }
    else {
        litem_179=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1310, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_179->prev=self->tail;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail->next=litem_179;
        self->tail=litem_179;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_180;
struct list_item$1long* prev_it_181;
    it_180=self->head;
    while(it_180!=((void*)0)) {
        prev_it_181=it_180;
        it_180=it_180->next;
        come_call_finalizer3(prev_it_181,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_182;
struct list$1float* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0;    i_182<num_value;    i_182++    ){
        list$1float_push_back(self,values[i_182]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_183;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_184;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_185;
struct list$1float* __result105__;
    if(    self->len==0) {
        litem_183=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1290, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1) {
        litem_184=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1300, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1310, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_185->prev=self->tail;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail->next=litem_185;
        self->tail=litem_185;
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_186;
struct list_item$1float* prev_it_187;
    it_186=self->head;
    while(it_186!=((void*)0)) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer3(prev_it_187,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_188;
struct list$1double* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0;    i_188<num_value;    i_188++    ){
        list$1double_push_back(self,values[i_188]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_189;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_190;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_191;
struct list$1double* __result108__;
    if(    self->len==0) {
        litem_189=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1290, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1) {
        litem_190=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1300, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1310, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_192;
struct list_item$1double* prev_it_193;
    it_192=self->head;
    while(it_192!=((void*)0)) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer3(prev_it_193,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2082, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_194;
    if(    0) {
        for(        i_194=0;        i_194<self->len;        i_194++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2082, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_195;
    if(    0) {
        for(        i_195=0;        i_195<self->len;        i_195++        ){
            self->items[i_195] = come_decrement_ref_count2(self->items[i_195], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result115__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2082, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_196;
    if(    0) {
        for(        i_196=0;        i_196<self->len;        i_196++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result117__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2082, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_197;
    if(    0) {
        for(        i_197=0;        i_197<self->len;        i_197++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result119__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2082, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_198;
    if(    0) {
        for(        i_198=0;        i_198<self->len;        i_198++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2082, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_199;
    if(    0) {
        for(        i_199=0;        i_199<self->len;        i_199++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2082, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_200;
    if(    0) {
        for(        i_200=0;        i_200<self->len;        i_200++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result161__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_232;
struct list_item$1charph* prev_it_233;
    it_232=self->head;
    while(it_232!=((void*)0)) {
        prev_it_233=it_232;
        it_232=it_232->next;
        come_call_finalizer3(prev_it_233,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_237;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_238;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_239;
char* __dec_obj30;
struct list$1charph* __result163__;
    if(    self->len==0) {
        litem_237=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1290, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        __dec_obj28=litem_237->item;
        litem_237->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1) {
        litem_238=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1300, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        __dec_obj29=litem_238->item;
        litem_238->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1310, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_239->prev=self->tail;
        litem_239->next=((void*)0);
        __dec_obj30=litem_239->item;
        litem_239->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_239;
        self->tail=litem_239;
    }
    self->len++;
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value250 = (void*)0;
char* __dec_obj33;
struct sReturnNode* __result219__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj33=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sReturnNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_290;
void* __right_value292 = (void*)0;
struct sType* result_type_291;
void* __right_value293 = (void*)0;
struct sType* result_type2_320;
struct sType* result_type3_321;
void* __right_value294 = (void*)0;
_Bool _if_conditional1;
void* __right_value295 = (void*)0;
struct sNode* __dec_obj87;
_Bool Value_322;
_Bool __result238__;
void* __right_value296 = (void*)0;
struct CVALUE* come_value_323;
void* __right_value297 = (void*)0;
struct sType* come_value_type_324;
void* __right_value298 = (void*)0;
struct sType* __dec_obj88;
void* __right_value299 = (void*)0;
char* var_name_326;
int num_result_stack_327;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __if_result__0_328 = (void*)0;
struct list$1sVarph* o2_saved_329;
struct sVar* it_332;
struct list$1sVarph* __dec_obj94;
void* __right_value302 = (void*)0;
struct sFun* come_fun_339;
void* __if_result__1_340 = (void*)0;
struct list$1sVarph* o2_saved_341;
struct sVar* it_342;
struct list$1sVarph* __dec_obj98;
void* __right_value303 = (void*)0;
    if(    self->value) {
        come_fun_290=info->come_fun;
        result_type_291=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_290->mResultType));
        result_type2_320=(struct sType*)come_increment_ref_count(solve_generics(result_type_291,info->generics_type,info));
        result_type3_321=result_type2_320->mNoSolvedGenericsType->v1;
        if(        result_type2_320->mNoSolvedGenericsType->v1) {
            result_type3_321=result_type2_320->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_321=result_type2_320;
        }
        if(        result_type_291->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value294=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj87=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_322=node_compile(self->value,info);
        if(        !Value_322) {
            __result238__ = (_Bool)0;
            come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_320,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result238__;
        }
        else {
        }
        come_value_323=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_324=(struct sType*)come_increment_ref_count(solve_generics(come_value_323->type,info->generics_type,info));
        __dec_obj88=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_323->type));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_323->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_290->mBlock,info,come_value_323->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_323->c_value);
        }
        else {
            static int num_result_325=0;
            var_name_326=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_325));
            num_result_stack_327=num_result_325;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_320->mClass->mName)>strlen("tuple")&&memcmp(result_type2_320->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_320,come_value_type_324,come_value_323,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value300=make_define_var(result_type2_320,var_name_326,(_Bool)0,info))));
                __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_326,come_value_323->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value301=make_define_var(result_type2_320,var_name_326,(_Bool)0,info))));
                __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_326,come_value_323->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_290->mBlock,info,come_value_323->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_329=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_332=list$1sVarph_begin((o2_saved_329));                    !list$1sVarph_end((o2_saved_329));                    it_332=list$1sVarph_next((o2_saved_329))                    ){
                        free_object(it_332->mType,it_332->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_329,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj94=info->match_it_var;
                    __if_result__0_328=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj94,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_328,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value302=xsprintf("come_heap_final();\n"))));
                __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_327);
            var_name_326 = come_decrement_ref_count2(var_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_320,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_323,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_324,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_339=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_339->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_341=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_342=list$1sVarph_begin((o2_saved_341));                !list$1sVarph_end((o2_saved_341));                it_342=list$1sVarph_next((o2_saved_341))                ){
                    free_object(it_342->mType,it_342->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_341,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj98=info->match_it_var;
                __if_result__1_340=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj98,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_340,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value303=xsprintf("come_heap_final();\n"))));
            __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj34;
struct sNode* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj34=self->sname;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj35=self->value;
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj36=self->value_source;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result221__;
void* __right_value252 = (void*)0;
struct sType* result_292;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value258 = (void*)0;
struct sType* __dec_obj63;
void* __right_value259 = (void*)0;
char* __dec_obj64;
void* __right_value260 = (void*)0;
char* __dec_obj65;
void* __right_value267 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __dec_obj73;
void* __right_value276 = (void*)0;
struct list$1sTypeph* __dec_obj74;
void* __right_value283 = (void*)0;
struct list$1charph* __dec_obj78;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj79;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value286 = (void*)0;
struct tuple1$1sTypeph* __dec_obj81;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value288 = (void*)0;
char* __dec_obj83;
void* __right_value289 = (void*)0;
char* __dec_obj84;
void* __right_value290 = (void*)0;
char* __dec_obj85;
void* __right_value291 = (void*)0;
char* __dec_obj86;
struct sType* __result237__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_292=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_292->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_292->mNoSolvedGenericsType;
        result_292->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_292->mOriginalLoadVarType;
        result_292->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj62=result_292->mRefferenceOriginalType;
        result_292->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj63=result_292->mAnyOriginalType;
        result_292->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj64=result_292->mInterfaceName;
        result_292->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj65=result_292->mGenericsName;
        result_292->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj69=result_292->mGenericsTypes;
        result_292->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj73=result_292->mArrayNum;
        result_292->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj73,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj74=result_292->mParamTypes;
        result_292->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj74,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj78=result_292->mParamNames;
        result_292->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj78,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj79=result_292->mResultType;
        result_292->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj80=result_292->mAlignas;
        result_292->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj81=result_292->mChannelType;
        result_292->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj81,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_292->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_292->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_292->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_292->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_292->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_292->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_292->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_292->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_292->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_292->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_292->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_292->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_292->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_292->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_292->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_292->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_292->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_292->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_292->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_292->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_292->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_292->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj82=result_292->mSizeNum;
        result_292->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_292->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj83=result_292->mOriginalTypeName;
        result_292->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_292->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_292->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_292->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_292->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_292->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_292->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj84=result_292->mAsmName;
        result_292->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_292->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_292->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_292->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_292->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_292->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj85=result_292->mTupleName;
        result_292->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj86=result_292->mAttribute;
        result_292->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_292;
    come_call_finalizer3(result_292,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result222__;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* result_293;
void* __right_value254 = (void*)0;
struct sType* __dec_obj37;
struct tuple1$1sTypeph* __result223__;
    if(    self==(void*)0) {
        __result222__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_293=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj37=result_293->v1;
        result_293->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_293;
    come_call_finalizer3(result_293,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj40;
struct tuple1$1sTypeph* __dec_obj41;
struct sType* __dec_obj42;
char* __dec_obj43;
char* __dec_obj44;
struct list$1sTypeph* __dec_obj45;
struct list$1sNodeph* __dec_obj47;
struct list$1sTypeph* __dec_obj49;
struct list$1charph* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj38=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj38,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj40=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj40,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj41=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj41,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj42=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj43=self->mInterfaceName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj44=self->mGenericsName;
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj45=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj45,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj47=self->mArrayNum;
            come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj49=self->mParamTypes;
            come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj50=self->mParamNames;
            come_call_finalizer3(__dec_obj50,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj51=self->mResultType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj52=self->mAlignas;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj53=self->mChannelType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj54=self->mSizeNum;
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj55=self->mOriginalTypeName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj56=self->mAsmName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj57=self->mTupleName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj58=self->mAttribute;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj39;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj39=self->v1;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_294;
struct list_item$1sTypeph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_296;
struct list_item$1sTypeph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_298;
struct list_item$1sNodeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj48;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj48=self->item;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_300;
struct list_item$1sNodeph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_302;
struct list_item$1charph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result224__;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1sTypeph* result_304;
struct list_item$1sTypeph* it_305;
void* __right_value266 = (void*)0;
struct list$1sTypeph* __result227__;
    if(    self==((void*)0)) {
        __result224__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_304=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_305=self->head;
    while(it_305!=((void*)0)) {
        list$1sTypeph_add(result_304,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_305->item)));
        it_305=it_305->next;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_304;
    come_call_finalizer3(result_304,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result225__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_306;
struct sType* __dec_obj66;
void* __right_value264 = (void*)0;
struct list_item$1sTypeph* litem_307;
struct sType* __dec_obj67;
void* __right_value265 = (void*)0;
struct list_item$1sTypeph* litem_308;
struct sType* __dec_obj68;
struct list$1sTypeph* __result226__;
    if(    self->len==0) {
        litem_306=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        __dec_obj66=litem_306->item;
        litem_306->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1) {
        litem_307=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value264=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        __dec_obj67=litem_307->item;
        litem_307->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value265=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        __dec_obj68=litem_308->item;
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result228__;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNodeph* result_309;
struct list_item$1sNodeph* it_310;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __result233__;
    if(    self==((void*)0)) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_309=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_310=self->head;
    while(it_310!=((void*)0)) {
        list$1sNodeph_add(result_309,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_310->item)));
        it_310=it_310->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_309;
    come_call_finalizer3(result_309,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result229__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_311;
struct sNode* __dec_obj70;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_312;
struct sNode* __dec_obj71;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_313;
struct sNode* __dec_obj72;
struct list$1sNodeph* __result230__;
    if(    self->len==0) {
        litem_311=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_311->prev=((void*)0);
        litem_311->next=((void*)0);
        __dec_obj70=litem_311->item;
        litem_311->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_311;
        self->head=litem_311;
    }
    else if(    self->len==1) {
        litem_312=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_312->prev=self->head;
        litem_312->next=((void*)0);
        __dec_obj71=litem_312->item;
        litem_312->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_312;
        self->head->next=litem_312;
    }
    else {
        litem_313=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_313->prev=self->tail;
        litem_313->next=((void*)0);
        __dec_obj72=litem_313->item;
        litem_313->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_313;
        self->tail=litem_313;
    }
    self->len++;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result231__;
void* __right_value273 = (void*)0;
struct sNode* result_314;
struct sNode* __result232__;
    if(    self==(void*)0) {
        __result231__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_314=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_314->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_314->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_314->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_314->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_314->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_314->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_314->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_314->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_314->kind=self->kind;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_314;
    if(result_314) { result_314 = come_decrement_ref_count2(result_314, ((struct sNode*)result_314)->finalize, ((struct sNode*)result_314)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result234__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* result_315;
struct list_item$1charph* it_316;
void* __right_value282 = (void*)0;
struct list$1charph* __result236__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_315=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_316=self->head;
    while(it_316!=((void*)0)) {
        list$1charph_add(result_315,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_316->item)));
        it_316=it_316->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_315;
    come_call_finalizer3(result_315,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_317;
char* __dec_obj75;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_318;
char* __dec_obj76;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_319;
char* __dec_obj77;
struct list$1charph* __result235__;
    if(    self->len==0) {
        litem_317=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_317->prev=((void*)0);
        litem_317->next=((void*)0);
        __dec_obj75=litem_317->item;
        litem_317->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_317;
        self->head=litem_317;
    }
    else if(    self->len==1) {
        litem_318=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_318->prev=self->head;
        litem_318->next=((void*)0);
        __dec_obj76=litem_318->item;
        litem_318->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_318;
        self->head->next=litem_318;
    }
    else {
        litem_319=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_319->prev=self->tail;
        litem_319->next=((void*)0);
        __dec_obj77=litem_319->item;
        litem_319->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_319;
        self->tail=litem_319;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_330;
struct sVar* __result239__;
struct sVar* __result240__;
struct sVar* result_331;
struct sVar* __result241__;
result_330 = (void*)0;
result_331 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_330,0,sizeof(struct sVar*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_330;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->it=self->head;
    if(    self->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_331,0,sizeof(struct sVar*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_331;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_333;
struct sVar* __result242__;
struct sVar* __result243__;
struct sVar* result_334;
struct sVar* __result244__;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_333,0,sizeof(struct sVar*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_333;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_334,0,sizeof(struct sVar*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_334;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_335;
struct list_item$1sVarph* prev_it_336;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj89;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj89=self->item;
            come_call_finalizer3(__dec_obj89,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj90;
char* __dec_obj91;
struct sType* __dec_obj92;
char* __dec_obj93;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj90=self->mName;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj91=self->mCValueName;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj92=self->mType;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj93=self->mFunName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_337;
struct list_item$1sVarph* prev_it_338;
    it_337=self->head;
    while(it_337!=((void*)0)) {
        prev_it_338=it_337;
        it_337=it_337->next;
        come_call_finalizer3(prev_it_338,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj95;
struct sType* __dec_obj96;
char* __dec_obj97;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj95=self->c_value;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj96=self->type;
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj97=self->c_value_without_right_value_objects;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __dec_obj99;
struct sOutputNode* __result245__;
    ((struct sNodeBase*)(__right_value304=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value304,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value305=__builtin_string("sOutputNode")));
    __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj100;
char* __dec_obj101;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj100=self->sname;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj101=self->contents;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
char* __dec_obj102;
struct list$1sNodeph* __dec_obj103;
struct sInlineAssembler* __result247__;
    ((struct sNodeBase*)(__right_value306=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value306,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj102=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj103=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj103,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
char* __result248__;
    __result248__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value307=__builtin_string("sInlineAssembler")));
    __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_343;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_344;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct buffer* buf_345;
char* p_346;
_Bool dquort_347;
int num_exp_348;
void* __right_value312 = (void*)0;
struct sNode* node_349;
_Bool Value_353;
_Bool __result251__;
void* __right_value313 = (void*)0;
struct CVALUE* come_value_354;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj107;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj108;
_Bool __result253__;
    source_343=(char*)come_increment_ref_count(self->source);
    come_value_344=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "struct CVALUE*", (void*)0, (void*)0))));
    buf_345=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "struct buffer*", (void*)0, (void*)0))));
    p_346=source_343;
    while(*p_346!=40) {
        buffer_append_char(buf_345,*p_346);
        p_346++;
    }
    if(    *p_346==40) {
        buffer_append_char(buf_345,*p_346);
        p_346++;
        while(*p_346==32||*p_346==9||*p_346==10) {
            buffer_append_char(buf_345,*p_346);
            p_346++;
        }
    }
    dquort_347=(_Bool)0;
    num_exp_348=0;
    while(*p_346) {
        if(        *p_346==34) {
            buffer_append_char(buf_345,*p_346);
            p_346++;
            dquort_347=!dquort_347;
        }
        else if(        dquort_347) {
            buffer_append_char(buf_345,*p_346);
            p_346++;
        }
        else if(        *p_346==40) {
            buffer_append_char(buf_345,*p_346);
            p_346++;
            node_349=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_348++));
            Value_353=node_compile(node_349,info);
            if(            !Value_353) {
                __result251__ = (_Bool)0;
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_343 = come_decrement_ref_count2(source_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_344,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result251__;
            }
            else {
            }
            come_value_354=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_345,come_value_354->c_value);
            if(            *p_346==41) {
                buffer_append_char(buf_345,*p_346);
                p_346++;
            }
            if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_354,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_345,*p_346);
            p_346++;
        }
    }
    __dec_obj107=come_value_344->c_value;
    come_value_344->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value314=buffer_to_string(buf_345)))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj108=come_value_344->type;
    come_value_344->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_344->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_344));
    add_come_last_code(info,"%s",come_value_344->c_value);
    __result253__ = (_Bool)1;
    source_343 = come_decrement_ref_count2(source_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_344,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result253__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj104;
char* __dec_obj105;
struct list$1sNodeph* __dec_obj106;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj104=self->sname;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj105=self->source;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj106=self->exps;
            come_call_finalizer3(__dec_obj106,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_350;
int i_351;
struct sNode* __result249__;
struct sNode* default_value_352;
struct sNode* __result250__;
default_value_352 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_350=self->head;
    i_351=0;
    while(it_350!=((void*)0)) {
        if(        position==i_351) {
            __result249__ = gComeFunResultObject = __result_obj__ = it_350->item;
            gComeFunResultObject = (void*)0;
            return __result249__;
        }
        it_350=it_350->next;
        i_351++;
    }
    memset(&default_value_352,0,sizeof(struct sNode*));
    __result250__ = gComeFunResultObject = __result_obj__ = default_value_352;
    if(default_value_352) { default_value_352 = come_decrement_ref_count2(default_value_352, ((struct sNode*)default_value_352)->finalize, ((struct sNode*)default_value_352)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
struct list_item$1CVALUEph* litem_355;
struct CVALUE* __dec_obj109;
void* __right_value319 = (void*)0;
struct list_item$1CVALUEph* litem_356;
struct CVALUE* __dec_obj110;
void* __right_value320 = (void*)0;
struct list_item$1CVALUEph* litem_357;
struct CVALUE* __dec_obj111;
struct list$1CVALUEph* __result252__;
    if(    self->len==0) {
        litem_355=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value318=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj109=litem_355->item;
        litem_355->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head=litem_355;
    }
    else if(    self->len==1) {
        litem_356=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value319=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_356->prev=self->head;
        litem_356->next=((void*)0);
        __dec_obj110=litem_356->item;
        litem_356->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_356;
        self->head->next=litem_356;
    }
    else {
        litem_357=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value320=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_357->prev=self->tail;
        litem_357->next=((void*)0);
        __dec_obj111=litem_357->item;
        litem_357->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_357;
        self->tail=litem_357;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
struct sCurrentNode2* __result254__;
    ((struct sNodeBase*)(__right_value321=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value321,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
char* __result255__;
    __result255__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value322=__builtin_string(self->sname)));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
char* __result256__;
    __result256__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value323=__builtin_string("sCurrentNode")));
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value324 = (void*)0;
char* class_name_358;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sClass* current_stack_359;
struct sVarTable* vtable_360;
struct map$2charphsVarph* o2_saved_361;
char* it_364;
char* key_367;
void* __right_value327 = (void*)0;
struct sVar* value_368;
void* __right_value328 = (void*)0;
struct sType* type2_372;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct tuple2$2charphsTypeph* item_373;
void* __right_value332 = (void*)0;
struct sType* type3_374;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct tuple2$2charphsTypeph* item2_377;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct map$2charphsVarph* o2_saved_429;
char* it_430;
char* key_431;
void* __right_value349 = (void*)0;
struct sVar* value_432;
void* __right_value350 = (void*)0;
struct sType* type2_433;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct tuple2$2charphsTypeph* item_434;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value355 = (void*)0;
char* __dec_obj130;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* __dec_obj131;
_Bool __result293__;
    info->current_stack_num++;
    class_name_358=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_359=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 460, "struct sClass*", (void*)0, (void*)0)),class_name_358,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_360=info->lv_table;
    while(vtable_360) {
        for(        o2_saved_361=(struct map$2charphsVarph*)come_increment_ref_count((vtable_360->mVars)),it_364=map$2charphsVarph_begin((o2_saved_361));        !map$2charphsVarph_end((o2_saved_361));        it_364=map$2charphsVarph_next((o2_saved_361))        ){
            key_367=it_364;
            value_368=((struct sVar*)come_null_check(((struct sVar*)(__right_value327=map$2charphsVarphp_operator_load_element(vtable_360->mVars,key_367))), "common.h", 467, 1));
            come_call_finalizer3(__right_value327,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_368->mType));
            type2_372->mPointerNum++;
            item_373=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 473, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_368->mCValueName)),(struct sType*)come_increment_ref_count(type2_372)));
            if(            value_368->mCValueName!=((void*)0)) {
                if(                strcmp(value_368->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_368->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_368->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_368->mType->mClass->mName,"va_list")||string_operator_equals(value_368->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_372->mArrayNum)==1) {
                    type3_374=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_372));
                    list$1sNodeph_reset(type3_374->mArrayNum);
                    type3_374->mPointerNum=1;
                    type3_374->mOriginIsArray=(_Bool)1;
                    item2_377=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 493, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_368->mCValueName)),(struct sType*)come_increment_ref_count(type3_374)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_359->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item2_377)));
                    value_368->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_377,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_359->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item_373)));
                }
            }
            come_call_finalizer3(type2_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_373,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_361,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_360=vtable_360->mParent;
    }
    output_struct(current_stack_359,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_358),(struct sClass*)come_increment_ref_count(current_stack_359));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_358,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_358);
    vtable_360=info->lv_table;
    while(vtable_360) {
        for(        o2_saved_429=(struct map$2charphsVarph*)come_increment_ref_count((vtable_360->mVars)),it_430=map$2charphsVarph_begin((o2_saved_429));        !map$2charphsVarph_end((o2_saved_429));        it_430=map$2charphsVarph_next((o2_saved_429))        ){
            key_431=it_430;
            value_432=((struct sVar*)come_null_check(((struct sVar*)(__right_value349=map$2charphsVarphp_operator_load_element(vtable_360->mVars,key_431))), "common.h", 518, 2));
            come_call_finalizer3(__right_value349,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_433=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_432->mType));
            item_434=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 522, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(value_432->mCValueName),(struct sType*)come_increment_ref_count(type2_433)));
            if(            value_432->mCValueName!=((void*)0)) {
                if(                strcmp(value_432->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_432->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_432->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_432->mType->mClass->mName,"va_list")||string_operator_equals(value_432->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_433->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_432->mCValueName,value_432->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_432->mCValueName,value_432->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_433,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_434,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_429,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_360=vtable_360->mParent;
    }
    come_value_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 551, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj130=come_value_435->c_value;
    come_value_435->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj131=come_value_435->type;
    come_value_435->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 554, "struct sType*", (void*)0, (void*)0)),class_name_358,(_Bool)0,info));
    come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_435->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_435->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_435));
    __result293__ = (_Bool)1;
    class_name_358 = come_decrement_ref_count2(class_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_359,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj112;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj112=self->sname;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_362;
char* __result257__;
char* __result258__;
char* result_363;
char* __result259__;
result_362 = (void*)0;
result_363 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_362,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_362;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_363,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_363;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_365;
char* __result260__;
char* __result261__;
char* result_366;
char* __result262__;
result_365 = (void*)0;
result_366 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_365,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_365;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_366,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_369;
unsigned int hash_370;
unsigned int it_371;
struct sVar* __result263__;
struct sVar* __result264__;
struct sVar* __result265__;
struct sVar* __result266__;
default_value_369 = (void*)0;
    memset(&default_value_369,0,sizeof(struct sVar*));
    hash_370=charp_get_hash_key(((char*)key))%self->size;
    it_371=hash_370;
    while((_Bool)1) {
        if(        self->item_existance[it_371]) {
            if(            charp_equals(self->keys[it_371],key)) {
                __result263__ = gComeFunResultObject = __result_obj__ = self->items[it_371];
                come_call_finalizer3(default_value_369,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result263__;
            }
            it_371++;
            if(            it_371>=self->size) {
                it_371=0;
            }
            else if(            it_371==hash_370) {
                __result264__ = gComeFunResultObject = __result_obj__ = default_value_369;
                come_call_finalizer3(default_value_369,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result264__;
            }
        }
        else {
            __result265__ = gComeFunResultObject = __result_obj__ = default_value_369;
            come_call_finalizer3(default_value_369,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result265__;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = default_value_369;
    come_call_finalizer3(default_value_369,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj113;
struct sType* __dec_obj114;
struct tuple2$2charphsTypeph* __result267__;
    __dec_obj113=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj115;
struct sType* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_375;
struct list_item$1sNodeph* prev_it_376;
struct list$1sNodeph* __result268__;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        come_call_finalizer3(prev_it_376,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_378;
struct tuple2$2charphsTypeph* __dec_obj117;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_379;
struct tuple2$2charphsTypeph* __dec_obj118;
void* __right_value338 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_380;
struct tuple2$2charphsTypeph* __dec_obj119;
struct list$1tuple2$2charphsTypephph* __result269__;
    if(    self->len==0) {
        litem_378=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value336=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj117=litem_378->item;
        litem_378->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value337=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj118=litem_379->item;
        litem_379->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value338=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj119=litem_380->item;
        litem_380->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result270__;
void* __right_value339 = (void*)0;
struct tuple2$2charphsTypeph* result_381;
void* __right_value340 = (void*)0;
char* __dec_obj120;
void* __right_value341 = (void*)0;
struct sType* __dec_obj121;
struct tuple2$2charphsTypeph* __result271__;
    if(    self==(void*)0) {
        __result270__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_381=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj120=result_381->v1;
        result_381->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj121=result_381->v2;
        result_381->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_381;
    come_call_finalizer3(result_381,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj122;
struct sType* __dec_obj123;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj122=self->v1;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj123=self->v2;
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_382;
int i_383;
    for(    i_382=0;    i_382<self->size;    i_382++    ){
        if(        self->item_existance[i_382]) {
            if(            1) {
                come_call_finalizer3(self->items[i_382],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_383=0;    i_383<self->size;    i_383++    ){
        if(        self->item_existance[i_383]) {
            if(            1) {
                self->keys[i_383] = come_decrement_ref_count2(self->keys[i_383], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_405;
unsigned int it_406;
_Bool same_key_exist_423;
char* it2_426;
struct map$2charphsClassph* __result292__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_405=charp_get_hash_key(key)%self->size;
    it_406=hash_405;
    while((_Bool)1) {
        if(        self->item_existance[it_406]) {
            if(            charp_equals(self->keys[it_406],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_406]);
                    self->keys[it_406] = come_decrement_ref_count2(self->keys[it_406], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_406]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_406]);
                    self->keys[it_406]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_406],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_406]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_406]=item;
                }
                break;
            }
            it_406++;
            if(            it_406>=self->size) {
                it_406=0;
            }
            else if(            it_406==hash_405) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_406]=(_Bool)1;
            if(            1) {
                self->keys[it_406]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_406]=key;
            }
            if(            1) {
                self->items[it_406]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_406]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_423=(_Bool)0;
    for(    it2_426=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_426=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_426,key)) {
            same_key_exist_423=(_Bool)1;
        }
    }
    if(    !same_key_exist_423) {
        list$1charp_push_back(self->key_list,key);
    }
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_384;
void* __right_value344 = (void*)0;
char** keys_385;
void* __right_value345 = (void*)0;
struct sClass** items_386;
void* __right_value346 = (void*)0;
_Bool* item_existance_387;
int len_388;
char* it_391;
struct sClass* default_value_394;
void* __right_value347 = (void*)0;
struct sClass* it2_395;
unsigned int hash_402;
int n_403;
struct sClass* default_value_404;
void* __right_value348 = (void*)0;
default_value_394 = (void*)0;
default_value_404 = (void*)0;
    size_384=self->size*10;
    keys_385=(char**)come_increment_ref_count(((char**)(__right_value344=(char**)come_calloc(1, sizeof(char*)*(1*(size_384)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_386=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value345=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_384)), "./comelang.h", 2694, "struct sClass**", (void*)0, (void*)0))));
    item_existance_387=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_384)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_388=0;
    for(    it_391=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_391=map$2charphsClassph_next(self)    ){
        memset(&default_value_394,0,sizeof(struct sClass*));
        it2_395=((struct sClass*)(__right_value347=map$2charphsClassph_at(self,it_391,default_value_394)));
        come_call_finalizer3(__right_value347,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_402=charp_get_hash_key(it_391)%size_384;
        n_403=hash_402;
        while((_Bool)1) {
            if(            item_existance_387[n_403]) {
                n_403++;
                if(                n_403>=size_384) {
                    n_403=0;
                }
                else if(                n_403==hash_402) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_387[n_403]=(_Bool)1;
                keys_385[n_403]=it_391;
                items_386[n_403]=((struct sClass*)(__right_value348=map$2charphsClassph_at(self,it_391,default_value_404)));
                come_call_finalizer3(__right_value348,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_388++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_385;
    self->items=items_386;
    self->item_existance=item_existance_387;
    self->size=size_384;
    self->len=len_388;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_389;
char* __result272__;
char* __result273__;
char* result_390;
char* __result274__;
result_389 = (void*)0;
result_390 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_389,0,sizeof(char*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_389;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_390,0,sizeof(char*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_390;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_392;
char* __result275__;
char* __result276__;
char* result_393;
char* __result277__;
result_392 = (void*)0;
result_393 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_392,0,sizeof(char*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_392;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_393,0,sizeof(char*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_393;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_396;
unsigned int it_397;
struct sClass* __result278__;
struct sClass* __result279__;
struct sClass* __result280__;
struct sClass* __result281__;
    hash_396=charp_get_hash_key(((char*)key))%self->size;
    it_397=hash_396;
    while((_Bool)1) {
        if(        self->item_existance[it_397]) {
            if(            charp_equals(self->keys[it_397],key)) {
                __result278__ = gComeFunResultObject = __result_obj__ = self->items[it_397];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
            it_397++;
            if(            it_397>=self->size) {
                it_397=0;
            }
            else if(            it_397==hash_396) {
                __result279__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result279__;
            }
        }
        else {
            __result280__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
    }
    __result281__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj124;
struct list$1tuple2$2charphsTypephph* __dec_obj125;
char* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj124=self->mName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj125=self->mFields;
            come_call_finalizer3(__dec_obj125,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj127=self->mDeclareSName;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj128=self->mParentClassName;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj129=self->mAttribute;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_398;
struct list_item$1tuple2$2charphsTypephph* prev_it_399;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        come_call_finalizer3(prev_it_399,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj126;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj126=self->item;
            come_call_finalizer3(__dec_obj126,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_400;
struct list_item$1tuple2$2charphsTypephph* prev_it_401;
    it_400=self->head;
    while(it_400!=((void*)0)) {
        prev_it_401=it_400;
        it_400=it_400->next;
        come_call_finalizer3(prev_it_401,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_407;
struct list_item$1charp* it_408;
struct list$1charp* __result285__;
    it2_407=0;
    it_408=self->head;
    while(it_408!=((void*)0)) {
        if(        charp_equals(it_408->item,item)) {
            list$1charp_delete(self,it2_407,it2_407+1);
            break;
        }
        it2_407++;
        it_408=it_408->next;
    }
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_409;
struct list$1charp* __result282__;
struct list_item$1charp* it_412;
int i_413;
struct list_item$1charp* prev_it_414;
struct list_item$1charp* it_415;
int i_416;
struct list_item$1charp* prev_it_417;
struct list_item$1charp* it_418;
struct list_item$1charp* head_prev_it_419;
struct list_item$1charp* tail_it_420;
int i_421;
struct list_item$1charp* prev_it_422;
struct list$1charp* __result284__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_409=tail;
        tail=head;
        head=tmp_409;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result282__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_412=self->head;
        i_413=0;
        while(it_412!=((void*)0)) {
            if(            i_413<tail) {
                prev_it_414=it_412;
                it_412=it_412->next;
                i_413++;
                come_call_finalizer3(prev_it_414,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_413==tail) {
                self->head=it_412;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_412=it_412->next;
                i_413++;
            }
        }
    }
    else if(    tail==self->len) {
        it_415=self->head;
        i_416=0;
        while(it_415!=((void*)0)) {
            if(            i_416==head) {
                self->tail=it_415->prev;
                self->tail->next=((void*)0);
            }
            if(            i_416>=head) {
                prev_it_417=it_415;
                it_415=it_415->next;
                i_416++;
                come_call_finalizer3(prev_it_417,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_415=it_415->next;
                i_416++;
            }
        }
    }
    else {
        it_418=self->head;
        head_prev_it_419=((void*)0);
        tail_it_420=((void*)0);
        i_421=0;
        while(it_418!=((void*)0)) {
            if(            i_421==head) {
                head_prev_it_419=it_418->prev;
            }
            if(            i_421==tail) {
                tail_it_420=it_418;
            }
            if(            i_421>=head&&i_421<tail) {
                prev_it_422=it_418;
                it_418=it_418->next;
                i_421++;
                come_call_finalizer3(prev_it_422,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_418=it_418->next;
                i_421++;
            }
        }
        if(        head_prev_it_419!=((void*)0)) {
            head_prev_it_419->next=tail_it_420;
        }
        if(        tail_it_420!=((void*)0)) {
            tail_it_420->prev=head_prev_it_419;
        }
    }
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_410;
struct list_item$1charp* prev_it_411;
struct list$1charp* __result283__;
    it_410=self->head;
    while(it_410!=((void*)0)) {
        prev_it_411=it_410;
        it_410=it_410->next;
        come_call_finalizer3(prev_it_411,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_424;
char* __result286__;
char* __result287__;
char* result_425;
char* __result288__;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_424,0,sizeof(char*));
        __result286__ = gComeFunResultObject = __result_obj__ = result_424;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    self->it=self->head;
    if(    self->it) {
        __result287__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    memset(&result_425,0,sizeof(char*));
    __result288__ = gComeFunResultObject = __result_obj__ = result_425;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_427;
char* __result289__;
char* __result290__;
char* result_428;
char* __result291__;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_427,0,sizeof(char*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_427;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_428,0,sizeof(char*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_428;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
struct sLineNode* __result294__;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("sLineNode")));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_436;
void* __right_value362 = (void*)0;
char* __dec_obj133;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* __dec_obj134;
_Bool __result296__;
    come_value_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj133=come_value_436->c_value;
    come_value_436->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj134=come_value_436->type;
    come_value_436->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_436->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_436));
    add_come_last_code(info,"%s",come_value_436->c_value);
    __result296__ = (_Bool)1;
    come_call_finalizer3(come_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj132;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj132=self->sname;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
struct sSNameNode* __result297__;
    ((struct sNodeBase*)(__right_value365=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value365,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value366=__builtin_string("sSNameNode")));
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value369 = (void*)0;
char* __dec_obj136;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sType* __dec_obj137;
_Bool __result299__;
    come_value_437=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj136=come_value_437->c_value;
    come_value_437->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj137=come_value_437->type;
    come_value_437->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_437->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_437));
    add_come_last_code(info,"%s",come_value_437->c_value);
    __result299__ = (_Bool)1;
    come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result299__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj135;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj135=self->sname;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
struct sFuncNode* __result300__;
    ((struct sNodeBase*)(__right_value372=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value372,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value373=__builtin_string("sFuncNode")));
    __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct CVALUE* come_value_438;
void* __right_value376 = (void*)0;
char* __dec_obj139;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sType* __dec_obj140;
_Bool __result302__;
    come_value_438=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj139=come_value_438->c_value;
    come_value_438->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=come_value_438->type;
    come_value_438->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_438->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_438));
    add_come_last_code(info,"%s",come_value_438->c_value);
    __result302__ = (_Bool)1;
    come_call_finalizer3(come_value_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj138;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj138=self->sname;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
struct sWildCard* __result303__;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value379,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value380=__builtin_string("sWildCard")));
    __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sNode* value_node_439;
_Bool Value_440;
_Bool __result305__;
_Bool __result306__;
    value_node_439=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value381=xsprintf("Value"))),info));
    __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_440=node_compile(value_node_439,info);
    if(    !Value_440) {
        __result305__ = (_Bool)0;
        if(value_node_439) { value_node_439 = come_decrement_ref_count2(value_node_439, ((struct sNode*)value_node_439)->finalize, ((struct sNode*)value_node_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result305__;
    }
    else {
    }
    __result306__ = (_Bool)1;
    if(value_node_439) { value_node_439 = come_decrement_ref_count2(value_node_439, ((struct sNode*)value_node_439)->finalize, ((struct sNode*)value_node_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result306__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj141;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj141=self->sname;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
struct sCallerFuncNode* __result307__;
    ((struct sNodeBase*)(__right_value383=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value383,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
char* __result308__;
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string("sCallerFuncNode")));
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value387 = (void*)0;
char* __dec_obj143;
void* __right_value388 = (void*)0;
char* __dec_obj144;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sType* __dec_obj145;
_Bool __result309__;
    come_value_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "struct CVALUE*", (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj143=come_value_441->c_value;
        come_value_441->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj144=come_value_441->c_value;
        come_value_441->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj145=come_value_441->type;
    come_value_441->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_441->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_441));
    add_come_last_code(info,"%s",come_value_441->c_value);
    __result309__ = (_Bool)1;
    come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result309__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj142;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
struct sCallerLineNode* __result310__;
    ((struct sNodeBase*)(__right_value391=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value391,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value394 = (void*)0;
char* __dec_obj147;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj148;
_Bool __result311__;
    come_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj147=come_value_442->c_value;
    come_value_442->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj148=come_value_442->type;
    come_value_442->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_442->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_442));
    add_come_last_code(info,"%s",come_value_442->c_value);
    __result311__ = (_Bool)1;
    come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result311__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value397=__builtin_string("sCallerLineNode")));
    __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj146=self->sname;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
struct sCallerSNameNode* __result313__;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value398,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value401 = (void*)0;
char* __dec_obj150;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sType* __dec_obj151;
_Bool __result314__;
    come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj150=come_value_443->c_value;
    come_value_443->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=come_value_443->type;
    come_value_443->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_443->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_443));
    add_come_last_code(info,"%s",come_value_443->c_value);
    __result314__ = (_Bool)1;
    come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result314__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* __result315__;
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value404=__builtin_string("sCallerSNameNode")));
    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj149;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj149=self->sname;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value405 = (void*)0;
char* fun_name3_445;
struct list$1sTypeph* method_generics_types_before_446;
struct list$1sTypeph* __dec_obj152;
void* __right_value406 = (void*)0;
struct sGenericsFun* generics_fun_447;
void* __right_value407 = (void*)0;
_Bool _if_conditional2;
void* __right_value408 = (void*)0;
char* __result320__;
struct list$1sTypeph* __dec_obj163;
char* __result321__;
    static int num_method_generics_444=0;
    fun_name3_445=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_444++));
    method_generics_types_before_446=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj152=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj152,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_447=((struct sGenericsFun*)(__right_value406=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value406,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_447) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_445)),generics_fun_447,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_445);
            __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value408=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_445 = come_decrement_ref_count2(fun_name3_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result320__;
        }
    }
    __dec_obj163=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_446);
    come_call_finalizer3(__dec_obj163,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result321__ = gComeFunResultObject = __result_obj__ = fun_name3_445;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_445 = come_decrement_ref_count2(fun_name3_445, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_448;
unsigned int it_449;
struct sGenericsFun* __result316__;
struct sGenericsFun* __result317__;
struct sGenericsFun* __result318__;
struct sGenericsFun* __result319__;
    hash_448=charp_get_hash_key(((char*)key))%self->size;
    it_449=hash_448;
    while((_Bool)1) {
        if(        self->item_existance[it_449]) {
            if(            charp_equals(self->keys[it_449],key)) {
                __result316__ = gComeFunResultObject = __result_obj__ = self->items[it_449];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result316__;
            }
            it_449++;
            if(            it_449>=self->size) {
                it_449=0;
            }
            else if(            it_449==hash_448) {
                __result317__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result317__;
            }
        }
        else {
            __result318__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
    }
    __result319__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj153;
struct list$1charph* __dec_obj154;
struct list$1charph* __dec_obj155;
char* __dec_obj156;
struct sType* __dec_obj157;
struct list$1sTypeph* __dec_obj158;
struct list$1charph* __dec_obj159;
struct list$1charph* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj153=self->mImplType;
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj154=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj154,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj155=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj155,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj156=self->mName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj157=self->mResultType;
            come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj158=self->mParamTypes;
            come_call_finalizer3(__dec_obj158,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj159=self->mParamNames;
            come_call_finalizer3(__dec_obj159,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj160=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj160,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj161=self->mBlock;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj162=self->mGenericsSName;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* __dec_obj164;
void* __right_value420 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj175;
struct list$1sTypeph* __dec_obj176;
struct buffer* __dec_obj177;
struct sFunCallNode* __result328__;
    ((struct sNodeBase*)(__right_value409=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value409,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj164=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj175,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj176=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj176,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj177=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj177,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value421=__builtin_string("sFunCallNode")));
    __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_460;
struct list$1tuple2$2charphsNodephph* params_461;
struct buffer* method_block_462;
int method_block_sline_463;
struct sVar* var__464;
struct sType* lambda_type_465;
_Bool __result330__;
void* __right_value422 = (void*)0;
struct sType* result_type_466;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1CVALUEph* come_params_467;
_Bool __result332__;
int i_470;
struct list$1tuple2$2charphsNodephph* o2_saved_471;
struct tuple2$2charphsNodeph* it_474;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_477=0;
struct sNode* node_478=0;
_Bool Value_479;
_Bool __result339__;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_480;
void* __right_value426 = (void*)0;
_Bool _if_conditional3;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
_Bool _if_conditional4;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct buffer* buf_484;
int j_485;
struct list$1CVALUEph* o2_saved_486;
struct CVALUE* it_489;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_492;
void* __right_value437 = (void*)0;
char* __dec_obj184;
void* __right_value438 = (void*)0;
struct sType* __dec_obj185;
_Bool __result348__;
void* __right_value439 = (void*)0;
struct sGenericsFun* generics_fun_493;
_Bool method_generics_494;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1sTypeph* method_generics_types_495;
void* __right_value442 = (void*)0;
char* generics_fun_name_496;
void* __right_value443 = (void*)0;
struct sFun* fun_497;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1CVALUEph* come_params_500;
void* __right_value446 = (void*)0;
struct sFun* fun_501;
_Bool no_output_come_code_502;
_Bool __result353__;
void* __right_value447 = (void*)0;
struct CVALUE* method_block_node_503;
void* __right_value448 = (void*)0;
struct sType* method_block_lambda_type_507;
void* __right_value449 = (void*)0;
struct sType* method_block_result_type_508;
void* __right_value450 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_509;
struct sType* generics_fun_method_block_result_type_510;
int method_generics_num_511;
void* __right_value454 = (void*)0;
int n_520;
struct list$1sTypeph* o2_saved_521;
struct sType* it_524;
int method_generics_num_527;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1CVALUEph* come_params_528;
int i_529;
struct sType* result_type_530;
struct list$1tuple2$2charphsNodephph* o2_saved_531;
struct tuple2$2charphsNodeph* it_532;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_533=0;
struct sNode* node_534=0;
_Bool Value_535;
_Bool __result365__;
void* __right_value459 = (void*)0;
struct CVALUE* come_value_536;
int method_generics_num_540;
void* __right_value463 = (void*)0;
int n_541;
struct list$1sTypeph* o2_saved_542;
struct sType* it_543;
int method_generics_num_544;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
char* __dec_obj210;
void* __right_value467 = (void*)0;
char* __dec_obj211;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1CVALUEph* come_params_547;
struct list$1tuple2$2charphsNodephph* o2_saved_548;
struct tuple2$2charphsNodeph* it_549;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_550=0;
struct sNode* node_551=0;
_Bool Value_552;
_Bool __result368__;
void* __right_value470 = (void*)0;
struct CVALUE* come_value_553;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct buffer* buf_554;
int j_555;
struct list$1CVALUEph* o2_saved_556;
struct CVALUE* it_557;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct CVALUE* come_value_558;
void* __right_value475 = (void*)0;
char* __dec_obj212;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* __dec_obj213;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj214;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* __dec_obj215;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj216;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __dec_obj217;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj218;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj219;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj220;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj221;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj222;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj223;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj224;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj225;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj226;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj227;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj228;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj229;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj230;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj231;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj232;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj233;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj234;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj235;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj236;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj237;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj238;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj239;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj240;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj241;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj242;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj243;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* __dec_obj244;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj245;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj246;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* __dec_obj247;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj248;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj249;
_Bool __result369__;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1CVALUEph* come_params_559;
int i_560;
struct sType* result_type_561;
struct list$1tuple2$2charphsNodephph* o2_saved_562;
struct tuple2$2charphsNodeph* it_563;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_564=0;
struct sNode* node_565=0;
_Bool Value_566;
_Bool __result370__;
void* __right_value552 = (void*)0;
struct CVALUE* come_value_567;
struct sType* __dec_obj250;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct buffer* buf_568;
int j_569;
struct list$1CVALUEph* o2_saved_570;
struct CVALUE* it_571;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct CVALUE* come_value_572;
void* __right_value557 = (void*)0;
char* __dec_obj251;
struct sType* __dec_obj252;
_Bool __result371__;
void* __right_value558 = (void*)0;
char* __dec_obj253;
void* __right_value559 = (void*)0;
char* __dec_obj254;
char* p_573;
int version_574;
char* p2_575;
int i_577;
void* __right_value560 = (void*)0;
char* new_fun_name_578;
void* __right_value561 = (void*)0;
_Bool _if_conditional5;
void* __right_value562 = (void*)0;
char* __dec_obj255;
void* __right_value563 = (void*)0;
char* new_fun_name_582;
void* __right_value564 = (void*)0;
_Bool _if_conditional6;
void* __right_value565 = (void*)0;
char* __dec_obj256;
_Bool __result376__;
int i_583;
void* __right_value566 = (void*)0;
char* new_fun_name_584;
void* __right_value567 = (void*)0;
_Bool _if_conditional7;
void* __right_value568 = (void*)0;
char* __dec_obj257;
void* __right_value569 = (void*)0;
struct sFun* fun_585;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1CVALUEph* come_params_586;
int i_587;
struct sType* result_type_588;
struct list$1tuple2$2charphsNodephph* o2_saved_589;
struct tuple2$2charphsNodeph* it_590;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_591=0;
struct sNode* node_592=0;
_Bool Value_593;
_Bool __result377__;
void* __right_value572 = (void*)0;
struct CVALUE* come_value_594;
struct sType* __dec_obj258;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct buffer* buf_595;
int j_596;
struct list$1CVALUEph* o2_saved_597;
struct CVALUE* it_598;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct CVALUE* come_value_599;
void* __right_value577 = (void*)0;
char* __dec_obj259;
struct sType* __dec_obj260;
_Bool __result378__;
void* __right_value578 = (void*)0;
struct sType* result_type_600;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1sTypeph* param_types_601;
struct list$1sTypeph* o2_saved_602;
struct sType* it_603;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sType* it2_604;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sType* __dec_obj261;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1CVALUEph* come_params_605;
int i_606;
struct list$1tuple2$2charphsNodephph* o2_saved_607;
struct tuple2$2charphsNodeph* it_608;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_609=0;
struct sNode* node_610=0;
_Bool Value_611;
_Bool __result379__;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_612;
int n_613;
struct list$1charph* o2_saved_614;
char* it_617;
void* __right_value588 = (void*)0;
_Bool _if_conditional8;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
_Bool _if_conditional9;
void* __right_value595 = (void*)0;
int i_625;
struct list$1tuple2$2charphsNodephph* o2_saved_626;
struct tuple2$2charphsNodeph* it_627;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_628=0;
struct sNode* node_629=0;
_Bool Value_630;
_Bool __result388__;
void* __right_value596 = (void*)0;
struct CVALUE* come_value_631;
void* __right_value597 = (void*)0;
_Bool _if_conditional10;
_Bool Value_632;
_Bool __result389__;
void* __right_value598 = (void*)0;
struct CVALUE* come_value_633;
void* __right_value599 = (void*)0;
_Bool _if_conditional11;
void* __right_value600 = (void*)0;
_Bool _if_conditional12;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
_Bool _if_conditional13;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
_Bool _if_conditional14;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
char* default_param_634;
void* __right_value611 = (void*)0;
char* param_name_638;
void* __right_value612 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_639;
char* p_640;
char* head_641;
int sline_642;
void* __right_value613 = (void*)0;
struct buffer* __dec_obj263;
void* __right_value614 = (void*)0;
struct sNode* node_643;
_Bool Value_644;
_Bool __result392__;
struct buffer* __dec_obj264;
void* __right_value615 = (void*)0;
struct CVALUE* come_value_645;
void* __right_value616 = (void*)0;
_Bool _if_conditional16;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
_Bool _if_conditional17;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
_Bool _if_conditional18;
_Bool __result393__;
_Bool __result394__;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value629 = (void*)0;
struct sNode* current_stack_frame_node_646;
_Bool Value_648;
_Bool __result397__;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_649;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct buffer* method_block2_650;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sType* method_block_type_651;
void* __right_value635 = (void*)0;
char* class_name_652;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sClass* current_stack_frame_struct_656;
void* __right_value638 = (void*)0;
_Bool __result402__;
void* __right_value639 = (void*)0;
struct sType* result_type_657;
void* __right_value640 = (void*)0;
struct list$1sTypeph* param_types_658;
struct list$1charph* param_names_659;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct buffer* all_alhabet_sname_660;
char* p_661;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct list$1sTypeph* o2_saved_662;
struct sType* it_663;
struct sType* param_type_664;
void* __right_value645 = (void*)0;
char* param_name_665;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
char* param_name_666;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
char* param_name_667;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct buffer* source3_668;
char* p_669;
char* head_670;
int sline_671;
struct buffer* __dec_obj266;
void* __right_value652 = (void*)0;
struct sNode* node_672;
_Bool Value_673;
_Bool __result403__;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
char* method_block_name_674;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct CVALUE* come_value2_675;
void* __right_value657 = (void*)0;
struct sFun* fun2_676;
_Bool __result404__;
struct sType* method_block_type2_677;
void* __right_value658 = (void*)0;
char* __dec_obj267;
void* __right_value659 = (void*)0;
struct sType* __dec_obj268;
struct buffer* __dec_obj269;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct buffer* buf_678;
int j_679;
struct list$1CVALUEph* o2_saved_680;
struct CVALUE* it_681;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct CVALUE* come_value_682;
void* __right_value664 = (void*)0;
char* __dec_obj270;
void* __right_value665 = (void*)0;
struct sType* __dec_obj271;
void* __right_value666 = (void*)0;
char* __dec_obj272;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
char* __dec_obj273;
_Bool __result405__;
memset(&i_577, 0, sizeof(int));
    fun_name_460=(char*)come_increment_ref_count(self->fun_name);
    params_461=self->params;
    method_block_462=self->method_block;
    method_block_sline_463=self->method_block_sline;
    var__464=get_variable_from_table(info->lv_table,fun_name_460);
    if(    var__464==((void*)0)) {
        var__464=get_variable_from_table(info->gv_table,fun_name_460);
    }
    if(    var__464) {
        lambda_type_465=var__464->mType;
        if(        string_operator_not_equals(lambda_type_465->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_460);
            __result330__ = (_Bool)0;
            fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        result_type_466=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_465->mResultType->v1));
        result_type_466->mStatic=(_Bool)0;
        come_params_467=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 542, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        if(        list$1sTypeph_length(lambda_type_465->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_461)&&!lambda_type_465->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_460,list$1sTypeph_length(lambda_type_465->mParamTypes),list$1tuple2$2charphsNodephph_length(params_461));
            __result332__ = (_Bool)0;
            come_call_finalizer3(result_type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result332__;
        }
        i_470=0;
        for(        o2_saved_471=(params_461),it_474=list$1tuple2$2charphsNodephph_begin((o2_saved_471));        !list$1tuple2$2charphsNodephph_end((o2_saved_471));        it_474=list$1tuple2$2charphsNodephph_next((o2_saved_471))        ){
            multiple_assign_var1=it_474;
            label_477=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_478=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_479=node_compile(node_478,info);
            if(            !Value_479) {
                __result339__ = (_Bool)0;
                label_477 = come_decrement_ref_count2(label_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result339__;
            }
            else {
            }
            come_value_480=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_465->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value426=list$1sTypephp_operator_load_element(lambda_type_465->mParamTypes,i_470))), "05call.c", 558, 3))==((void*)0))),            come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value429=xsprintf("\%s calling param #\%s",((char*)(__right_value427=string_to_string(fun_name_460))),((char*)(__right_value428=int_to_string(i_470)))))),((struct sType*)come_null_check(((struct sType*)(__right_value430=list$1sTypephp_operator_load_element(lambda_type_465->mParamTypes,i_470))), "05call.c", 561, 4)),come_value_480->type,come_value_480,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value431=list$1sTypephp_operator_load_element(lambda_type_465->mParamTypes,i_470))), "05call.c", 562, 5))->mHeap&&come_value_480->type->mHeap)),                come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value432=list$1sTypephp_operator_load_element(lambda_type_465->mParamTypes,i_470))), "05call.c", 563, 6)),come_value_480->type,come_value_480,info,(_Bool)1);
                    come_call_finalizer3(__right_value432,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_467,(struct CVALUE*)come_increment_ref_count(come_value_480));
            dec_stack_ptr(1,info);
            i_470++;
            label_477 = come_decrement_ref_count2(label_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_484=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 574, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_484,var__464->mCValueName);
        buffer_append_str(buf_484,"(");
        j_485=0;
        for(        o2_saved_486=(struct list$1CVALUEph*)come_increment_ref_count((come_params_467)),it_489=list$1CVALUEph_begin((o2_saved_486));        !list$1CVALUEph_end((o2_saved_486));        it_489=list$1CVALUEph_next((o2_saved_486))        ){
            buffer_append_str(buf_484,it_489->c_value);
            if(            j_485!=list$1CVALUEph_length(come_params_467)-1) {
                buffer_append_str(buf_484,",");
            }
            j_485++;
        }
        come_call_finalizer3(o2_saved_486,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_484,")");
        come_value_492=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 591, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj184=come_value_492->c_value;
        come_value_492->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_484));
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj185=come_value_492->type;
        come_value_492->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_466));
        come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_492->type->mStatic=(_Bool)0;
        come_value_492->var=((void*)0);
        if(        lambda_type_465->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_492,(struct sType*)come_increment_ref_count(lambda_type_465->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_492->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_492));
        info->calling_fun=((void*)0);
        __result348__ = (_Bool)1;
        come_call_finalizer3(result_type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result348__;
        come_call_finalizer3(result_type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_467,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_493=((struct sGenericsFun*)(__right_value439=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_460,((void*)0))));
    come_call_finalizer3(__right_value439,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_494=(_Bool)0;
    if(    generics_fun_493) {
        method_generics_494=list$1charph_length(generics_fun_493->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sTypeph_length(self->method_generics_types)>0||method_generics_494) {
        if(        list$1sTypeph_length(self->method_generics_types)==0) {
            method_generics_types_495=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 616, "struct list$1sTypeph*", (void*)0, (void*)0))));
            generics_fun_name_496=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_460),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_495),info));
            fun_497=((struct sFun*)(__right_value443=map$2charphsFunph_at(info->funcs,generics_fun_name_496,((void*)0))));
            come_call_finalizer3(__right_value443,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_462) {
                come_params_500=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 622, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                fun_501=((struct sFun*)(__right_value446=map$2charphsFunph_at(info->funcs,generics_fun_name_496,((void*)0))));
                come_call_finalizer3(__right_value446,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_502=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_462,(struct list$1CVALUEph*)come_increment_ref_count(come_params_500),fun_501,fun_name_460,method_block_sline_463,info,(_Bool)1)) {
                    __result353__ = (_Bool)0;
                    come_call_finalizer3(come_params_500,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_495,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_496 = come_decrement_ref_count2(generics_fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result353__;
                }
                info->no_output_come_code=no_output_come_code_502;
                method_block_node_503=((struct CVALUE*)(__right_value447=list$1CVALUEphp_operator_load_element(come_params_500,-1)));
                come_call_finalizer3(__right_value447,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_507=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_503->type));
                method_block_result_type_508=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_509=((struct sType*)(__right_value450=list$1sTypephp_operator_load_element(generics_fun_493->mParamTypes,-1)));
                come_call_finalizer3(__right_value450,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_510=generics_fun_method_block_lambda_type_509->mResultType->v1;
                if(                generics_fun_method_block_result_type_510->mClass->mMethodGenerics) {
                    method_generics_num_511=generics_fun_method_block_result_type_510->mClass->mMethodGenericsNum;
                    list$1sTypephp_operator_store_element(method_generics_types_495,method_generics_num_511,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_508)));
                }
                n_520=0;
                for(                o2_saved_521=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_509->mParamTypes)),it_524=list$1sTypeph_begin((o2_saved_521));                !list$1sTypeph_end((o2_saved_521));                it_524=list$1sTypeph_next((o2_saved_521))                ){
                    if(                    it_524->mClass->mMethodGenerics) {
                        method_generics_num_527=it_524->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_495,method_generics_num_527,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value455=list$1sTypephp_operator_load_element(method_block_lambda_type_507->mParamTypes,n_520))), "05call.c", 648, 7)))));
                        come_call_finalizer3(__right_value455,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_520++;
                }
                come_call_finalizer3(o2_saved_521,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_500,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_528=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 654, "struct list$1CVALUEph*", (void*)0, (void*)0))));
            i_529=0;
            result_type_530=((void*)0);
            for(            o2_saved_531=(params_461),it_532=list$1tuple2$2charphsNodephph_begin((o2_saved_531));            !list$1tuple2$2charphsNodephph_end((o2_saved_531));            it_532=list$1tuple2$2charphsNodephph_next((o2_saved_531))            ){
                multiple_assign_var2=it_532;
                label_533=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_534=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                Value_535=node_compile(node_534,info);
                if(                !Value_535) {
                    __result365__ = (_Bool)0;
                    label_533 = come_decrement_ref_count2(label_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_534) { node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_495,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_496 = come_decrement_ref_count2(generics_fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_528,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result365__;
                }
                else {
                }
                come_value_536=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_528,(struct CVALUE*)come_increment_ref_count(come_value_536));
                label_533 = come_decrement_ref_count2(label_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_534) { node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_493->mResultType->mClass->mMethodGenerics) {
                method_generics_num_540=generics_fun_493->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sTypephp_operator_store_element(method_generics_types_495,method_generics_num_540,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_541=0;
            for(            o2_saved_542=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_493->mParamTypes)),it_543=list$1sTypeph_begin((o2_saved_542));            !list$1sTypeph_end((o2_saved_542));            it_543=list$1sTypeph_next((o2_saved_542))            ){
                if(                it_543->mClass->mMethodGenerics) {
                    method_generics_num_544=it_543->mClass->mMethodGenericsNum;
                    if(                    n_541<list$1CVALUEph_length(come_params_528)) {
                        list$1sTypephp_operator_store_element(method_generics_types_495,method_generics_num_544,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value464=list$1CVALUEphp_operator_load_element(come_params_528,n_541)))->type)));
                        come_call_finalizer3(__right_value464,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_541++;
            }
            come_call_finalizer3(o2_saved_542,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunph_remove(info->funcs,generics_fun_name_496);
            __dec_obj210=fun_name_460;
            fun_name_460=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_460),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_495),info));
            __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_495,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_496 = come_decrement_ref_count2(generics_fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_528,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj211=fun_name_460;
            fun_name_460=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_460),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_460,"__builtin_memmove")||string_operator_equals(fun_name_460,"__builtin_memset")||string_operator_equals(fun_name_460,"__builtin_ffs")||string_operator_equals(fun_name_460,"__builtin_ffsl")||string_operator_equals(fun_name_460,"__builtin_ffsll")||string_operator_equals(fun_name_460,"__builtin_bswap16")||string_operator_equals(fun_name_460,"__builtin_bswap32")||string_operator_equals(fun_name_460,"__builtin_bswap64")||string_operator_equals(fun_name_460,"__builtin_constant_p")||string_operator_equals(fun_name_460,"__builtin_expect")||string_operator_equals(fun_name_460,"__builtin___memset_chk")||string_operator_equals(fun_name_460,"__builtin_object_size")||string_operator_equals(fun_name_460,"__builtin___memcpy_chk")||string_operator_equals(fun_name_460,"__builtin___strncpy_chk")||string_operator_equals(fun_name_460,"__builtin___strncat_chk")||string_operator_equals(fun_name_460,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_460,"__builtin_strrchr")||string_operator_equals(fun_name_460,"__builtin_clz")||string_operator_equals(fun_name_460,"__dsb")||string_operator_equals(fun_name_460,"__isb")||string_operator_equals(fun_name_460,"__dmb")||(strlen(fun_name_460)==strlen("__builtin_arm_")&&memcmp(fun_name_460,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_460,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_460,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_460,"__c11_atomic_store")||string_operator_equals(fun_name_460,"__c11_atomic_load")||string_operator_equals(fun_name_460,"__c11_atomic_exchange")||string_operator_equals(fun_name_460,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_460,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_460,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_460,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_460,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_460,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_460,"__c11_atomic_fetch_xor")) {
        come_params_547=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 726, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        for(        o2_saved_548=(params_461),it_549=list$1tuple2$2charphsNodephph_begin((o2_saved_548));        !list$1tuple2$2charphsNodephph_end((o2_saved_548));        it_549=list$1tuple2$2charphsNodephph_next((o2_saved_548))        ){
            multiple_assign_var3=it_549;
            label_550=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_551=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            Value_552=node_compile(node_551,info);
            if(            !Value_552) {
                __result368__ = (_Bool)0;
                label_550 = come_decrement_ref_count2(label_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result368__;
            }
            else {
            }
            come_value_553=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(come_params_547,(struct CVALUE*)come_increment_ref_count(come_value_553));
            label_550 = come_decrement_ref_count2(label_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_554=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 740, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_554,fun_name_460);
        buffer_append_str(buf_554,"(");
        j_555=0;
        for(        o2_saved_556=(struct list$1CVALUEph*)come_increment_ref_count((come_params_547)),it_557=list$1CVALUEph_begin((o2_saved_556));        !list$1CVALUEph_end((o2_saved_556));        it_557=list$1CVALUEph_next((o2_saved_556))        ){
            buffer_append_str(buf_554,it_557->c_value);
            if(            j_555!=list$1CVALUEph_length(come_params_547)-1) {
                buffer_append_str(buf_554,",");
            }
            j_555++;
        }
        come_call_finalizer3(o2_saved_556,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_554,")");
        come_value_558=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 757, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj212=come_value_558->c_value;
        come_value_558->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_554));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_460,"__builtin_memmove")||string_operator_equals(fun_name_460,"__builtin_memset")) {
            __dec_obj213=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_ffs")) {
            __dec_obj214=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_ffsl")) {
            __dec_obj215=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_ffsll")) {
            __dec_obj216=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_bswap16")) {
            __dec_obj217=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "struct sType*", (void*)0, (void*)0)),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_bswap32")) {
            __dec_obj218=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_bswap64")) {
            __dec_obj219=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_constant_p")) {
            __dec_obj220=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_expect")) {
            __dec_obj221=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin___memset_chk")) {
            __dec_obj222=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_558->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_object_size")) {
            __dec_obj223=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin___memcpy_chk")) {
            __dec_obj224=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_558->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_460,"__builtin___strncpy_chk")) {
            __dec_obj225=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_558->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_460,"__builtin___strncat_chk")) {
            __dec_obj226=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_558->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_strrchr")) {
            __dec_obj227=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 807, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_558->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_460,"__builtin___vsnprintf_chk")) {
            __dec_obj228=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_clz")) {
            __dec_obj229=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_thread_fence")) {
            __dec_obj230=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 817, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_signal_fence")) {
            __dec_obj231=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_exchange")) {
            __dec_obj232=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value514=list$1CVALUEphp_operator_load_element(come_params_547,1))), "05call.c", 823, 8))->type));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value514,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_exchange_strong")) {
            __dec_obj233=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value516=list$1CVALUEphp_operator_load_element(come_params_547,2))), "05call.c", 826, 9))->type));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value516,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_exchange_weak")) {
            __dec_obj234=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value518=list$1CVALUEphp_operator_load_element(come_params_547,2))), "05call.c", 829, 10))->type));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value518,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_store")) {
            __dec_obj235=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 832, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_load")) {
            __dec_obj236=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value522=list$1CVALUEphp_operator_load_element(come_params_547,0))), "05call.c", 835, 11))->type));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value522,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_558->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_fetch_add")) {
            __dec_obj237=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value524=list$1CVALUEphp_operator_load_element(come_params_547,1))), "05call.c", 839, 12))->type));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value524,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_fetch_sub")) {
            __dec_obj238=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value526=list$1CVALUEphp_operator_load_element(come_params_547,1))), "05call.c", 842, 13))->type));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value526,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_fetch_and")) {
            __dec_obj239=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value528=list$1CVALUEphp_operator_load_element(come_params_547,1))), "05call.c", 845, 14))->type));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value528,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_fetch_or")) {
            __dec_obj240=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value530=list$1CVALUEphp_operator_load_element(come_params_547,1))), "05call.c", 848, 15))->type));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value530,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__c11_atomic_fetch_xor")) {
            __dec_obj241=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value532=list$1CVALUEphp_operator_load_element(come_params_547,1))), "05call.c", 851, 16))->type));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value532,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__dsb")) {
            __dec_obj242=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__isb")) {
            __dec_obj243=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__dmb")) {
            __dec_obj244=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_arm_cdp")) {
            __dec_obj245=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_arm_ldc")) {
            __dec_obj246=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 866, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_arm_stc")) {
            __dec_obj247=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 869, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_arm_stcl")) {
            __dec_obj248=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 872, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_460,"__builtin_arm_ldcl")) {
            __dec_obj249=come_value_558->type;
            come_value_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 875, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_558->var=((void*)0);
        add_come_last_code(info,"%s",come_value_558->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_558));
        __result369__ = (_Bool)1;
        come_call_finalizer3(come_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result369__;
        come_call_finalizer3(come_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_460,"__builtin_va_arg")) {
        come_params_559=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 887, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_560=0;
        result_type_561=((void*)0);
        for(        o2_saved_562=(params_461),it_563=list$1tuple2$2charphsNodephph_begin((o2_saved_562));        !list$1tuple2$2charphsNodephph_end((o2_saved_562));        it_563=list$1tuple2$2charphsNodephph_next((o2_saved_562))        ){
            multiple_assign_var4=it_563;
            label_564=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_565=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_566=node_compile(node_565,info);
            if(            !Value_566) {
                __result370__ = (_Bool)0;
                label_564 = come_decrement_ref_count2(label_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_565) { node_565 = come_decrement_ref_count2(node_565, ((struct sNode*)node_565)->finalize, ((struct sNode*)node_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_559,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result370__;
            }
            else {
            }
            come_value_567=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_559,(struct CVALUE*)come_increment_ref_count(come_value_567));
            __dec_obj250=result_type_561;
            result_type_561=(struct sType*)come_increment_ref_count(come_value_567->type);
            come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_564 = come_decrement_ref_count2(label_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_565) { node_565 = come_decrement_ref_count2(node_565, ((struct sNode*)node_565)->finalize, ((struct sNode*)node_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 906, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_568,fun_name_460);
        buffer_append_str(buf_568,"(");
        j_569=0;
        for(        o2_saved_570=(struct list$1CVALUEph*)come_increment_ref_count((come_params_559)),it_571=list$1CVALUEph_begin((o2_saved_570));        !list$1CVALUEph_end((o2_saved_570));        it_571=list$1CVALUEph_next((o2_saved_570))        ){
            buffer_append_str(buf_568,it_571->c_value);
            if(            j_569!=list$1CVALUEph_length(come_params_559)-1) {
                buffer_append_str(buf_568,",");
            }
            j_569++;
        }
        come_call_finalizer3(o2_saved_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_568,")");
        come_value_572=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 923, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj251=come_value_572->c_value;
        come_value_572->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_568));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj252=come_value_572->type;
        come_value_572->type=(struct sType*)come_increment_ref_count(result_type_561);
        come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_572->var=((void*)0);
        add_come_last_code(info,"%s",come_value_572->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_572));
        __result371__ = (_Bool)1;
        come_call_finalizer3(come_params_559,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result371__;
        come_call_finalizer3(come_params_559,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_460,"string")) {
        __dec_obj253=fun_name_460;
        fun_name_460=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_460,"wstring")) {
        __dec_obj254=fun_name_460;
        fun_name_460=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_460,"inherit")) {
        p_573=info->come_fun->mName;
        version_574=0;
        while(*p_573) {
            if(            *p_573==95&&*(p_573+1)==118&&xisdigit(*(p_573+2))) {
                p2_575=p_573+2;
                version_574=0;
                while(xisdigit(*p2_575)) {
                    version_574=version_574*10+(*p2_575-48);
                    p2_575++;
                }
                break;
            }
            else {
                p_573++;
            }
        }
        char real_fun_name_576[2048];
        memset(&real_fun_name_576, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_576,info->come_fun->mName,p_573-info->come_fun->mName);
        real_fun_name_576[p_573-info->come_fun->mName]=0;
        for(        i_577=version_574-1;        i_577>=1;        i_577--        ){
            new_fun_name_578=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_576,i_577));
            if(            (_if_conditional5=(((struct sFun*)(__right_value561=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_578))))),            come_call_finalizer3(__right_value561,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj255=fun_name_460;
                fun_name_460=(char*)come_increment_ref_count(__builtin_string(new_fun_name_578));
                __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_578 = come_decrement_ref_count2(new_fun_name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_578 = come_decrement_ref_count2(new_fun_name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_577==0) {
            new_fun_name_582=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_576));
            if(            (_if_conditional6=(((struct sFun*)(__right_value564=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_582))))),            come_call_finalizer3(__right_value564,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj256=fun_name_460;
                fun_name_460=(char*)come_increment_ref_count(__builtin_string(new_fun_name_582));
                __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_460,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result376__ = (_Bool)0;
                new_fun_name_582 = come_decrement_ref_count2(new_fun_name_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result376__;
            }
            new_fun_name_582 = come_decrement_ref_count2(new_fun_name_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_583=128;        i_583>=1;        i_583--        ){
            new_fun_name_584=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_460,i_583));
            if(            (_if_conditional7=(((struct sFun*)(__right_value567=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_584))))),            come_call_finalizer3(__right_value567,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj257=fun_name_460;
                fun_name_460=(char*)come_increment_ref_count(__builtin_string(new_fun_name_584));
                __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_584 = come_decrement_ref_count2(new_fun_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_584 = come_decrement_ref_count2(new_fun_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_585=((struct sFun*)(__right_value569=map$2charphsFunph_at(info->funcs,fun_name_460,((void*)0))));
    come_call_finalizer3(__right_value569,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_585==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_460);
        come_params_586=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1004, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_587=0;
        result_type_588=((void*)0);
        for(        o2_saved_589=(params_461),it_590=list$1tuple2$2charphsNodephph_begin((o2_saved_589));        !list$1tuple2$2charphsNodephph_end((o2_saved_589));        it_590=list$1tuple2$2charphsNodephph_next((o2_saved_589))        ){
            multiple_assign_var5=it_590;
            label_591=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_592=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            Value_593=node_compile(node_592,info);
            if(            !Value_593) {
                __result377__ = (_Bool)0;
                label_591 = come_decrement_ref_count2(label_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_592) { node_592 = come_decrement_ref_count2(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_586,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result377__;
            }
            else {
            }
            come_value_594=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_586,(struct CVALUE*)come_increment_ref_count(come_value_594));
            __dec_obj258=result_type_588;
            result_type_588=(struct sType*)come_increment_ref_count(come_value_594->type);
            come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_591 = come_decrement_ref_count2(label_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_592) { node_592 = come_decrement_ref_count2(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_595=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1023, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_595,fun_name_460);
        buffer_append_str(buf_595,"(");
        j_596=0;
        for(        o2_saved_597=(struct list$1CVALUEph*)come_increment_ref_count((come_params_586)),it_598=list$1CVALUEph_begin((o2_saved_597));        !list$1CVALUEph_end((o2_saved_597));        it_598=list$1CVALUEph_next((o2_saved_597))        ){
            buffer_append_str(buf_595,it_598->c_value);
            if(            j_596!=list$1CVALUEph_length(come_params_586)-1) {
                buffer_append_str(buf_595,",");
            }
            j_596++;
        }
        come_call_finalizer3(o2_saved_597,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_595,")");
        come_value_599=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1040, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj259=come_value_599->c_value;
        come_value_599->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_595));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj260=come_value_599->type;
        come_value_599->type=(struct sType*)come_increment_ref_count(result_type_588);
        come_call_finalizer3(__dec_obj260,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_599->var=((void*)0);
        add_come_last_code(info,"%s",come_value_599->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_599));
        __result378__ = (_Bool)1;
        come_call_finalizer3(come_params_586,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_595,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result378__;
        come_call_finalizer3(come_params_586,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_595,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_600=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_585->mResultType));
    result_type_600->mStatic=(_Bool)0;
    param_types_601=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1055, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_602=(struct list$1sTypeph*)come_increment_ref_count((fun_585->mParamTypes)),it_603=list$1sTypeph_begin((o2_saved_602));    !list$1sTypeph_end((o2_saved_602));    it_603=list$1sTypeph_next((o2_saved_602))    ){
        it2_604=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value581=come_call_cloner(sType_clone, it_603))),info->generics_type,info));
        come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(param_types_601,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_604)));
        come_call_finalizer3(it2_604,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj261=result_type_600;
    result_type_600=(struct sType*)come_increment_ref_count(solve_generics(result_type_600,info->generics_type,info));
    come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_605=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1063, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    i_606=0;    i_606<list$1sTypeph_length(fun_585->mParamTypes)-(((method_block_462)?(2):(0)));    i_606++    ){
        list$1CVALUEph_add(come_params_605,((void*)0));
    }
    for(    o2_saved_607=(params_461),it_608=list$1tuple2$2charphsNodephph_begin((o2_saved_607));    !list$1tuple2$2charphsNodephph_end((o2_saved_607));    it_608=list$1tuple2$2charphsNodephph_next((o2_saved_607))    ){
        multiple_assign_var6=it_608;
        label_609=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_610=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        fun_585->mVarArgs||string_operator_equals(fun_name_460,"__builtin_va_start")) {
        }
        else if(        label_609) {
            Value_611=node_compile(node_610,info);
            if(            !Value_611) {
                __result379__ = (_Bool)0;
                label_609 = come_decrement_ref_count2(label_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_610) { node_610 = come_decrement_ref_count2(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result379__;
            }
            else {
            }
            come_value_612=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_613=0;
            for(            o2_saved_614=(struct list$1charph*)come_increment_ref_count((fun_585->mParamNames)),it_617=list$1charph_begin((o2_saved_614));            !list$1charph_end((o2_saved_614));            it_617=list$1charph_next((o2_saved_614))            ){
                if(                string_operator_equals(label_609,it_617)) {
                    break;
                }
                n_613++;
            }
            come_call_finalizer3(o2_saved_614,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional8=(((struct sType*)(__right_value588=list$1sTypephp_operator_load_element(param_types_601,n_613))))),            come_call_finalizer3(__right_value588,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                check_assign_type(((char*)(__right_value591=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value589=string_to_string(fun_name_460))),((char*)(__right_value590=int_to_string(n_613)))))),((struct sType*)come_null_check(((struct sType*)(__right_value592=list$1sTypephp_operator_load_element(param_types_601,n_613))), "05call.c", 1092, 17)),come_value_612->type,come_value_612,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value592,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional9=(((struct sType*)(__right_value593=list$1sTypephp_operator_load_element(param_types_601,n_613)))&&((struct sType*)come_null_check(((struct sType*)(__right_value594=list$1sTypephp_operator_load_element(param_types_601,n_613))), "05call.c", 1094, 18))->mHeap&&come_value_612->type->mHeap)),            come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value594,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value595=list$1sTypephp_operator_load_element(param_types_601,n_613))), "05call.c", 1095, 19)),come_value_612->type,come_value_612,info,(_Bool)1);
                come_call_finalizer3(__right_value595,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_605,n_613,(struct CVALUE*)come_increment_ref_count(come_value_612));
            come_call_finalizer3(come_value_612,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_609 = come_decrement_ref_count2(label_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_610) { node_610 = come_decrement_ref_count2(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_625=0;
    for(    o2_saved_626=(params_461),it_627=list$1tuple2$2charphsNodephph_begin((o2_saved_626));    !list$1tuple2$2charphsNodephph_end((o2_saved_626));    it_627=list$1tuple2$2charphsNodephph_next((o2_saved_626))    ){
        multiple_assign_var7=it_627;
        label_628=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_629=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        fun_585->mVarArgs||string_operator_equals(fun_name_460,"__builtin_va_start")) {
            Value_630=node_compile(node_629,info);
            if(            !Value_630) {
                __result388__ = (_Bool)0;
                label_628 = come_decrement_ref_count2(label_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result388__;
            }
            else {
            }
            come_value_631=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value597=list$1CVALUEphp_operator_load_element(come_params_605,i_625)))==((void*)0))),                come_call_finalizer3(__right_value597,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_625++;
                }
            }
            list$1CVALUEph_replace(come_params_605,i_625,(struct CVALUE*)come_increment_ref_count(come_value_631));
            i_625++;
            come_call_finalizer3(come_value_631,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_628) {
        }
        else {
            Value_632=node_compile(node_629,info);
            if(            !Value_632) {
                __result389__ = (_Bool)0;
                label_628 = come_decrement_ref_count2(label_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result389__;
            }
            else {
            }
            come_value_633=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional11=(((struct CVALUE*)(__right_value599=list$1CVALUEphp_operator_load_element(come_params_605,i_625)))==((void*)0))),                come_call_finalizer3(__right_value599,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    break;
                }
                else {
                    i_625++;
                }
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value600=list$1sTypephp_operator_load_element(param_types_601,i_625))))),            come_call_finalizer3(__right_value600,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                check_assign_type(((char*)(__right_value603=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value601=string_to_string(fun_name_460))),((char*)(__right_value602=int_to_string(i_625)))))),((struct sType*)come_null_check(((struct sType*)(__right_value604=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1146, 20)),come_value_633->type,come_value_633,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value604,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional13=(((struct sType*)(__right_value605=list$1sTypephp_operator_load_element(param_types_601,i_625)))&&((struct sType*)come_null_check(((struct sType*)(__right_value606=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1148, 21))->mHeap&&come_value_633->type->mHeap)),            come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value607=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1149, 22)),come_value_633->type,come_value_633,info,(_Bool)1);
                come_call_finalizer3(__right_value607,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_605,i_625,(struct CVALUE*)come_increment_ref_count(come_value_633));
            i_625++;
            come_call_finalizer3(come_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_628 = come_decrement_ref_count2(label_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional14=(((struct CVALUE*)(__right_value608=list$1CVALUEphp_operator_load_element(come_params_605,i_625)))==((void*)0))),        come_call_finalizer3(__right_value608,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            break;
        }
        else {
            i_625++;
        }
    }
    if(    list$1tuple2$2charphsNodephph_length(params_461)<list$1sTypeph_length(fun_585->mParamTypes)) {
        for(        ;        i_625<list$1sTypeph_length(fun_585->mParamTypes)-(((method_block_462)?(2):(0)));        i_625++        ){
            default_param_634=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value609=list$1charphp_operator_load_element(fun_585->mParamDefaultParametors,i_625)))));
            __right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_638=((char*)come_null_check(((char*)(__right_value611=list$1charphp_operator_load_element(fun_585->mParamNames,i_625))), "05call.c", 1170, 23));
            __right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional15=(default_param_634&&string_operator_not_equals(default_param_634,"")&&((struct CVALUE*)(__right_value612=list$1CVALUEphp_operator_load_element(come_params_605,i_625)))==((void*)0))),            come_call_finalizer3(__right_value612,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                source_639=(struct buffer*)come_increment_ref_count(info->source);
                p_640=info->p;
                head_641=info->head;
                sline_642=info->sline;
                __dec_obj263=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_634));
                come_call_finalizer3(__dec_obj263,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_643=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_644=node_compile(node_643,info);
                if(                !Value_644) {
                    __result392__ = (_Bool)0;
                    come_call_finalizer3(source_639,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_643) { node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_634 = come_decrement_ref_count2(default_param_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result392__;
                }
                else {
                }
                __dec_obj264=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_639);
                come_call_finalizer3(__dec_obj264,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_640;
                info->head=head_641;
                info->sline=sline_642;
                come_value_645=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value616=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1194, 24)))),                come_call_finalizer3(__right_value616,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    check_assign_type(((char*)(__right_value619=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value617=string_to_string(fun_name_460))),((char*)(__right_value618=int_to_string(i_625)))))),((struct sType*)come_null_check(((struct sType*)(__right_value620=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1195, 25)),come_value_645->type,come_value_645,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value620,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value621=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1197, 26))&&((struct sType*)come_null_check(((struct sType*)(__right_value622=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1197, 27))->mHeap&&come_value_645->type->mHeap)),                come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value623=list$1sTypephp_operator_load_element(param_types_601,i_625))), "05call.c", 1198, 28)),come_value_645->type,come_value_645,info,(_Bool)1);
                    come_call_finalizer3(__right_value623,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_605,i_625,(struct CVALUE*)come_increment_ref_count(come_value_645));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_639,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_643) { node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_645,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional18=(((struct CVALUE*)(__right_value624=list$1CVALUEphp_operator_load_element(come_params_605,i_625)))==((void*)0))),                come_call_finalizer3(__right_value624,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_585->mName,i_625);
                    __result393__ = (_Bool)0;
                    default_param_634 = come_decrement_ref_count2(default_param_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result393__;
                }
            }
            default_param_634 = come_decrement_ref_count2(default_param_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypeph_length(fun_585->mParamTypes)-(((method_block_462)?(2):(0)))!=list$1CVALUEph_length(come_params_605)&&!fun_585->mVarArgs&&string_operator_not_equals(fun_name_460,"__builtin_va_start")&&string_operator_not_equals(fun_name_460,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_460,list$1sTypeph_length(fun_585->mParamTypes),list$1tuple2$2charphsNodephph_length(params_461));
        __result394__ = (_Bool)0;
        fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result394__;
    }
    if(    method_block_462) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1219, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value626=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1219, "struct sCurrentNode2*", (void*)0, (void*)0)),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_646=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value626,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_648=node_compile(current_stack_frame_node_646,info);
        if(        !Value_648) {
            __result397__ = (_Bool)0;
            if(current_stack_frame_node_646) { current_stack_frame_node_646 = come_decrement_ref_count2(current_stack_frame_node_646, ((struct sNode*)current_stack_frame_node_646)->finalize, ((struct sNode*)current_stack_frame_node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result397__;
        }
        else {
        }
        come_value_649=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEph_push_back(come_params_605,(struct CVALUE*)come_increment_ref_count(come_value_649));
        dec_stack_ptr(1,info);
        method_block2_650=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1229, "struct buffer*", (void*)0, (void*)0))));
        method_block_type_651=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value633=list$1sTypephp_operator_load_element(fun_585->mParamTypes,-1))), "05call.c", 1230, 29))));
        come_call_finalizer3(__right_value633,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_652=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)come_null_check(((struct sType*)(__right_value636=list$1sTypephp_operator_load_element(method_block_type_651->mParamTypes,0))), "05call.c", 1234, 30))->mClass=((struct sClass*)(__right_value637=map$2charphsClassphp_operator_load_element(info->classes,class_name_652)));
        come_call_finalizer3(__right_value636,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value637,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_656=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value638=map$2charphsClassphp_operator_load_element(info->classes,class_name_652)));
        come_call_finalizer3(__right_value638,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_651->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_460);
            __result402__ = (_Bool)0;
            if(current_stack_frame_node_646) { current_stack_frame_node_646 = come_decrement_ref_count2(current_stack_frame_node_646, ((struct sNode*)current_stack_frame_node_646)->finalize, ((struct sNode*)current_stack_frame_node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_651,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_652 = come_decrement_ref_count2(class_name_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result402__;
        }
        result_type_657=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_651->mResultType->v1));
        result_type_657->mStatic=(_Bool)0;
        param_types_658=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, method_block_type_651->mParamTypes));
        param_names_659=method_block_type_651->mParamNames;
        all_alhabet_sname_660=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1250, "struct buffer*", (void*)0, (void*)0))));
        {
            p_661=info->sname;
            while(*p_661) {
                if(                xisalnum(*p_661)) {
                    buffer_append_char(all_alhabet_sname_660,*p_661++);
                }
                else {
                    p_661++;
                }
            }
        }
        buffer_append_format(method_block2_650,"%s fun_block%d_%s(",((char*)(__right_value643=make_type_name_string(result_type_657,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value644=buffer_to_string(all_alhabet_sname_660))));
        __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_625=0;
        for(        o2_saved_662=(struct list$1sTypeph*)come_increment_ref_count((param_types_658)),it_663=list$1sTypeph_begin((o2_saved_662));        !list$1sTypeph_end((o2_saved_662));        it_663=list$1sTypeph_next((o2_saved_662))        ){
            param_type_664=it_663;
            if(            i_625==0) {
                param_name_665=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_650,"%s",((char*)(__right_value646=make_define_var(param_type_664,param_name_665,(_Bool)0,info))));
                __right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_665 = come_decrement_ref_count2(param_name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_625==1) {
                param_name_666=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_650,"%s",((char*)(__right_value648=make_define_var_no_solved(param_type_664,param_name_666,(_Bool)0,(_Bool)1,info))));
                __right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_666 = come_decrement_ref_count2(param_name_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_667=(char*)come_increment_ref_count(xsprintf("it%d",i_625));
                buffer_append_format(method_block2_650,"%s",((char*)(__right_value650=make_define_var_no_solved(param_type_664,param_name_667,(_Bool)0,(_Bool)1,info))));
                __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_667 = come_decrement_ref_count2(param_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_625!=list$1sTypeph_length(param_types_658)-1) {
                buffer_append_str(method_block2_650,",");
            }
            i_625++;
        }
        come_call_finalizer3(o2_saved_662,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_650,")\n");
        buffer_append_str(method_block2_650,((char*)(__right_value651=buffer_to_string(method_block_462))));
        __right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_668=(struct buffer*)come_increment_ref_count(info->source);
        p_669=info->p;
        head_670=info->head;
        sline_671=info->sline;
        __dec_obj266=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_650);
        come_call_finalizer3(__dec_obj266,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_463;
        node_672=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_673=node_compile(node_672,info);
        if(        !Value_673) {
            __result403__ = (_Bool)0;
            if(current_stack_frame_node_646) { current_stack_frame_node_646 = come_decrement_ref_count2(current_stack_frame_node_646, ((struct sNode*)current_stack_frame_node_646)->finalize, ((struct sNode*)current_stack_frame_node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_651,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_652 = come_decrement_ref_count2(class_name_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_672) { node_672 = come_decrement_ref_count2(node_672, ((struct sNode*)node_672)->finalize, ((struct sNode*)node_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result403__;
        }
        else {
        }
        method_block_name_674=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value653=buffer_to_string(all_alhabet_sname_660)))));
        __right_value653 = come_decrement_ref_count2(__right_value653, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_675=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1315, "struct CVALUE*", (void*)0, (void*)0))));
        fun2_676=((struct sFun*)(__right_value657=map$2charphsFunph_at(info->funcs,method_block_name_674,((void*)0))));
        come_call_finalizer3(__right_value657,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_676==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_674);
            __result404__ = (_Bool)1;
            if(current_stack_frame_node_646) { current_stack_frame_node_646 = come_decrement_ref_count2(current_stack_frame_node_646, ((struct sNode*)current_stack_frame_node_646)->finalize, ((struct sNode*)current_stack_frame_node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_651,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_652 = come_decrement_ref_count2(class_name_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_672) { node_672 = come_decrement_ref_count2(node_672, ((struct sNode*)node_672)->finalize, ((struct sNode*)node_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_674 = come_decrement_ref_count2(method_block_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result404__;
        }
        method_block_type2_677=fun2_676->mLambdaType;
        __dec_obj267=come_value2_675->c_value;
        come_value2_675->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_674));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj268=come_value2_675->type;
        come_value2_675->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_677));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_675->var=((void*)0);
        list$1CVALUEph_push_back(come_params_605,(struct CVALUE*)come_increment_ref_count(come_value2_675));
        __dec_obj269=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_668);
        come_call_finalizer3(__dec_obj269,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_669;
        info->head=head_670;
        info->sline=sline_671;
        info->current_stack_frame_struct=current_stack_frame_struct_656;
        if(current_stack_frame_node_646) { current_stack_frame_node_646 = come_decrement_ref_count2(current_stack_frame_node_646, ((struct sNode*)current_stack_frame_node_646)->finalize, ((struct sNode*)current_stack_frame_node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_651,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_652 = come_decrement_ref_count2(class_name_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_672) { node_672 = come_decrement_ref_count2(node_672, ((struct sNode*)node_672)->finalize, ((struct sNode*)node_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_674 = come_decrement_ref_count2(method_block_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_678=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1340, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_678,fun_name_460);
    buffer_append_str(buf_678,"(");
    j_679=0;
    for(    o2_saved_680=(struct list$1CVALUEph*)come_increment_ref_count((come_params_605)),it_681=list$1CVALUEph_begin((o2_saved_680));    !list$1CVALUEph_end((o2_saved_680));    it_681=list$1CVALUEph_next((o2_saved_680))    ){
        buffer_append_str(buf_678,it_681->c_value);
        if(        j_679!=list$1CVALUEph_length(come_params_605)-1) {
            buffer_append_str(buf_678,",");
        }
        j_679++;
    }
    come_call_finalizer3(o2_saved_680,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_678,")");
    come_value_682=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1357, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj270=come_value_682->c_value;
    come_value_682->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_678));
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj271=come_value_682->type;
    come_value_682->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_600));
    come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_682->type->mStatic=(_Bool)0;
    come_value_682->var=((void*)0);
    if(    fun_585->mResultType->mHeap) {
        append_object_to_right_values2(come_value_682,(struct sType*)come_increment_ref_count(result_type_600),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_460,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_460,"null_check")&&string_operator_not_equals(fun_name_460,"come_push_stackframe")&&string_operator_not_equals(fun_name_460,"come_pop_stackframe")) {
            __dec_obj272=come_value_682->c_value;
            come_value_682->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_682->c_value,come_value_682->type,info));
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_600->mGuardValue&&result_type_600->mPointerNum>0) {
        __dec_obj273=come_value_682->c_value;
        come_value_682->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value667=make_type_name_string(result_type_600,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_682->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_682->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_682));
    info->calling_fun=fun_585;
    __result405__ = (_Bool)1;
    fun_name_460 = come_decrement_ref_count2(fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_601,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_605,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_678,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_682,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result405__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result322__;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_452;
struct list_item$1tuple2$2charphsNodephph* it_453;
void* __right_value419 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result327__;
    if(    self==((void*)0)) {
        __result322__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_452=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_453=self->head;
    while(it_453!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_452,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_453->item)));
        it_453=it_453->next;
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_452;
    come_call_finalizer3(result_452,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result323__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_450;
struct list_item$1tuple2$2charphsNodephph* prev_it_451;
    it_450=self->head;
    while(it_450!=((void*)0)) {
        prev_it_451=it_450;
        it_450=it_450->next;
        come_call_finalizer3(prev_it_451,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj165;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj165=self->item;
            come_call_finalizer3(__dec_obj165,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj166;
struct sNode* __dec_obj167;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj166=self->v1;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj167=self->v2;
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_454;
struct tuple2$2charphsNodeph* __dec_obj168;
void* __right_value414 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_455;
struct tuple2$2charphsNodeph* __dec_obj169;
void* __right_value415 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_456;
struct tuple2$2charphsNodeph* __dec_obj170;
struct list$1tuple2$2charphsNodephph* __result324__;
    if(    self->len==0) {
        litem_454=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value413=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_454->prev=((void*)0);
        litem_454->next=((void*)0);
        __dec_obj168=litem_454->item;
        litem_454->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj168,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_454;
        self->head=litem_454;
    }
    else if(    self->len==1) {
        litem_455=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value414=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_455->prev=self->head;
        litem_455->next=((void*)0);
        __dec_obj169=litem_455->item;
        litem_455->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_455;
        self->head->next=litem_455;
    }
    else {
        litem_456=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value415=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_456->prev=self->tail;
        litem_456->next=((void*)0);
        __dec_obj170=litem_456->item;
        litem_456->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_456;
        self->tail=litem_456;
    }
    self->len++;
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result325__;
void* __right_value416 = (void*)0;
struct tuple2$2charphsNodeph* result_457;
void* __right_value417 = (void*)0;
char* __dec_obj171;
void* __right_value418 = (void*)0;
struct sNode* __dec_obj172;
struct tuple2$2charphsNodeph* __result326__;
    if(    self==(void*)0) {
        __result325__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    result_457=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj171=result_457->v1;
        result_457->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj172=result_457->v2;
        result_457->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result326__ = gComeFunResultObject = __result_obj__ = result_457;
    come_call_finalizer3(result_457,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj173;
struct sNode* __dec_obj174;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj173=self->v1;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj174=self->v2;
            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_458;
struct list_item$1tuple2$2charphsNodephph* prev_it_459;
    it_458=self->head;
    while(it_458!=((void*)0)) {
        prev_it_459=it_458;
        it_458=it_458->next;
        come_call_finalizer3(prev_it_459,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj178;
char* __dec_obj179;
struct list$1tuple2$2charphsNodephph* __dec_obj180;
struct list$1sTypeph* __dec_obj181;
struct buffer* __dec_obj182;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj178=self->sname;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj179=self->fun_name;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj180=self->params;
            come_call_finalizer3(__dec_obj180,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj181=self->method_generics_types;
            come_call_finalizer3(__dec_obj181,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj182=self->method_block;
            come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result331__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_468;
struct list_item$1CVALUEph* prev_it_469;
    it_468=self->head;
    while(it_468!=((void*)0)) {
        prev_it_469=it_468;
        it_468=it_468->next;
        come_call_finalizer3(prev_it_469,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj183;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj183=self->item;
            come_call_finalizer3(__dec_obj183,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_472;
struct tuple2$2charphsNodeph* __result333__;
struct tuple2$2charphsNodeph* __result334__;
struct tuple2$2charphsNodeph* result_473;
struct tuple2$2charphsNodeph* __result335__;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_472,0,sizeof(struct tuple2$2charphsNodeph*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_472;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->head;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_473,0,sizeof(struct tuple2$2charphsNodeph*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_473;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_475;
struct tuple2$2charphsNodeph* __result336__;
struct tuple2$2charphsNodeph* __result337__;
struct tuple2$2charphsNodeph* result_476;
struct tuple2$2charphsNodeph* __result338__;
result_475 = (void*)0;
result_476 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_475,0,sizeof(struct tuple2$2charphsNodeph*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_475;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_476,0,sizeof(struct tuple2$2charphsNodeph*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_476;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_481;
int i_482;
struct sType* __result340__;
struct sType* default_value_483;
struct sType* __result341__;
default_value_483 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_481=self->head;
    i_482=0;
    while(it_481!=((void*)0)) {
        if(        position==i_482) {
            __result340__ = gComeFunResultObject = __result_obj__ = it_481->item;
            gComeFunResultObject = (void*)0;
            return __result340__;
        }
        it_481=it_481->next;
        i_482++;
    }
    memset(&default_value_483,0,sizeof(struct sType*));
    __result341__ = gComeFunResultObject = __result_obj__ = default_value_483;
    come_call_finalizer3(default_value_483,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_487;
struct CVALUE* __result342__;
struct CVALUE* __result343__;
struct CVALUE* result_488;
struct CVALUE* __result344__;
result_487 = (void*)0;
result_488 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_487,0,sizeof(struct CVALUE*));
        __result342__ = gComeFunResultObject = __result_obj__ = result_487;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    self->it=self->head;
    if(    self->it) {
        __result343__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    memset(&result_488,0,sizeof(struct CVALUE*));
    __result344__ = gComeFunResultObject = __result_obj__ = result_488;
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_490;
struct CVALUE* __result345__;
struct CVALUE* __result346__;
struct CVALUE* result_491;
struct CVALUE* __result347__;
result_490 = (void*)0;
result_491 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_490,0,sizeof(struct CVALUE*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_490;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_491,0,sizeof(struct CVALUE*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_491;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_498;
unsigned int it_499;
struct sFun* __result349__;
struct sFun* __result350__;
struct sFun* __result351__;
struct sFun* __result352__;
    hash_498=charp_get_hash_key(((char*)key))%self->size;
    it_499=hash_498;
    while((_Bool)1) {
        if(        self->item_existance[it_499]) {
            if(            charp_equals(self->keys[it_499],key)) {
                __result349__ = gComeFunResultObject = __result_obj__ = self->items[it_499];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result349__;
            }
            it_499++;
            if(            it_499>=self->size) {
                it_499=0;
            }
            else if(            it_499==hash_498) {
                __result350__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result350__;
            }
        }
        else {
            __result351__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result351__;
        }
    }
    __result352__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj186;
struct sType* __dec_obj187;
struct list$1sTypeph* __dec_obj188;
struct list$1charph* __dec_obj189;
struct list$1charph* __dec_obj190;
struct sType* __dec_obj191;
struct sBlock* __dec_obj192;
struct buffer* __dec_obj195;
struct buffer* __dec_obj196;
struct buffer* __dec_obj197;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj186=self->mName;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj187=self->mResultType;
            come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj188=self->mParamTypes;
            come_call_finalizer3(__dec_obj188,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj189=self->mParamNames;
            come_call_finalizer3(__dec_obj189,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj190=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj190,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj191=self->mLambdaType;
            come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj192=self->mBlock;
            come_call_finalizer3(__dec_obj192,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj195=self->mSource;
            come_call_finalizer3(__dec_obj195,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj196=self->mSourceHead;
            come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj197=self->mSourceHead2;
            come_call_finalizer3(__dec_obj197,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj198=self->mSourceDefer;
            come_call_finalizer3(__dec_obj198,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj199=self->mComeHeader;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj200=self->mDeclareSName;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj201=self->mAttribute;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj202=self->mFunAttribute;
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj193;
struct sVarTable* __dec_obj194;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj193=self->mNodes;
            come_call_finalizer3(__dec_obj193,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj194=self->mVarTable;
            come_call_finalizer3(__dec_obj194,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_504;
int i_505;
struct CVALUE* __result354__;
struct CVALUE* default_value_506;
struct CVALUE* __result355__;
default_value_506 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_504=self->head;
    i_505=0;
    while(it_504!=((void*)0)) {
        if(        position==i_505) {
            __result354__ = gComeFunResultObject = __result_obj__ = it_504->item;
            gComeFunResultObject = (void*)0;
            return __result354__;
        }
        it_504=it_504->next;
        i_505++;
    }
    memset(&default_value_506,0,sizeof(struct CVALUE*));
    __result355__ = gComeFunResultObject = __result_obj__ = default_value_506;
    come_call_finalizer3(default_value_506,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_512;
int i_513;
struct sType* default_value_514;
struct list$1sTypeph* __result357__;
struct list_item$1sTypeph* it_518;
int i_519;
struct sType* __dec_obj206;
struct list$1sTypeph* __result358__;
default_value_514 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_512=self->len;
        for(        i_513=0;        i_513<position-len_512;        i_513++        ){
            memset(&default_value_514,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_514));
            come_call_finalizer3(default_value_514,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result357__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    it_518=self->head;
    i_519=0;
    while(it_518!=((void*)0)) {
        if(        position==i_519) {
            __dec_obj206=it_518->item;
            it_518->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_518=it_518->next;
        i_519++;
    }
    __result358__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value451 = (void*)0;
struct list_item$1sTypeph* litem_515;
struct sType* __dec_obj203;
void* __right_value452 = (void*)0;
struct list_item$1sTypeph* litem_516;
struct sType* __dec_obj204;
void* __right_value453 = (void*)0;
struct list_item$1sTypeph* litem_517;
struct sType* __dec_obj205;
struct list$1sTypeph* __result356__;
    if(    self->len==0) {
        litem_515=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value451=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_515->prev=((void*)0);
        litem_515->next=((void*)0);
        __dec_obj203=litem_515->item;
        litem_515->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_515;
        self->head=litem_515;
    }
    else if(    self->len==1) {
        litem_516=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value452=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_516->prev=self->head;
        litem_516->next=((void*)0);
        __dec_obj204=litem_516->item;
        litem_516->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_516;
        self->head->next=litem_516;
    }
    else {
        litem_517=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value453=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_517->prev=self->tail;
        litem_517->next=((void*)0);
        __dec_obj205=litem_517->item;
        litem_517->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_517;
        self->tail=litem_517;
    }
    self->len++;
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_522;
struct sType* __result359__;
struct sType* __result360__;
struct sType* result_523;
struct sType* __result361__;
result_522 = (void*)0;
result_523 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_522,0,sizeof(struct sType*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_522;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->head;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_523,0,sizeof(struct sType*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_523;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_525;
struct sType* __result362__;
struct sType* __result363__;
struct sType* result_526;
struct sType* __result364__;
result_525 = (void*)0;
result_526 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_525,0,sizeof(struct sType*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_525;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_526,0,sizeof(struct sType*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_526;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value460 = (void*)0;
struct list_item$1CVALUEph* litem_537;
struct CVALUE* __dec_obj207;
void* __right_value461 = (void*)0;
struct list_item$1CVALUEph* litem_538;
struct CVALUE* __dec_obj208;
void* __right_value462 = (void*)0;
struct list_item$1CVALUEph* litem_539;
struct CVALUE* __dec_obj209;
struct list$1CVALUEph* __result366__;
    if(    self->len==0) {
        litem_537=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value460=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1220, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_537->prev=((void*)0);
        litem_537->next=((void*)0);
        __dec_obj207=litem_537->item;
        litem_537->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_537;
        self->head=litem_537;
    }
    else if(    self->len==1) {
        litem_538=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value461=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1230, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_538->prev=self->head;
        litem_538->next=((void*)0);
        __dec_obj208=litem_538->item;
        litem_538->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_538;
        self->head->next=litem_538;
    }
    else {
        litem_539=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value462=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1240, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_539->prev=self->tail;
        litem_539->next=((void*)0);
        __dec_obj209=litem_539->item;
        litem_539->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_539;
        self->tail=litem_539;
    }
    self->len++;
    __result366__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_545;
unsigned int it_546;
struct map$2charphsFunph* __result367__;
    hash_545=charp_get_hash_key(((char*)key))%self->size;
    it_546=hash_545;
    while((_Bool)1) {
        if(        self->item_existance[it_546]) {
            if(            charp_equals(self->keys[it_546],key)) {
                list$1charp_remove(self->key_list,self->keys[it_546]);
                self->item_existance[it_546]=(_Bool)0;
                if(                1) {
                    self->keys[it_546] = come_decrement_ref_count2(self->keys[it_546], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_546]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_546],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_546]=((void*)0);
                self->len--;
                break;
            }
            it_546++;
            if(            it_546>=self->size) {
                it_546=0;
            }
            else if(            it_546==hash_545) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_579;
unsigned int hash_580;
unsigned int it_581;
struct sFun* __result372__;
struct sFun* __result373__;
struct sFun* __result374__;
struct sFun* __result375__;
default_value_579 = (void*)0;
    memset(&default_value_579,0,sizeof(struct sFun*));
    hash_580=charp_get_hash_key(((char*)key))%self->size;
    it_581=hash_580;
    while((_Bool)1) {
        if(        self->item_existance[it_581]) {
            if(            charp_equals(self->keys[it_581],key)) {
                __result372__ = gComeFunResultObject = __result_obj__ = self->items[it_581];
                come_call_finalizer3(default_value_579,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result372__;
            }
            it_581++;
            if(            it_581>=self->size) {
                it_581=0;
            }
            else if(            it_581==hash_580) {
                __result373__ = gComeFunResultObject = __result_obj__ = default_value_579;
                come_call_finalizer3(default_value_579,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result373__;
            }
        }
        else {
            __result374__ = gComeFunResultObject = __result_obj__ = default_value_579;
            come_call_finalizer3(default_value_579,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result374__;
        }
    }
    __result375__ = gComeFunResultObject = __result_obj__ = default_value_579;
    come_call_finalizer3(default_value_579,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_615;
char* __result380__;
char* __result381__;
char* result_616;
char* __result382__;
result_615 = (void*)0;
result_616 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_615,0,sizeof(char*));
        __result380__ = gComeFunResultObject = __result_obj__ = result_615;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    self->it=self->head;
    if(    self->it) {
        __result381__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    memset(&result_616,0,sizeof(char*));
    __result382__ = gComeFunResultObject = __result_obj__ = result_616;
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_618;
char* __result383__;
char* __result384__;
char* result_619;
char* __result385__;
result_618 = (void*)0;
result_619 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_618,0,sizeof(char*));
        __result383__ = gComeFunResultObject = __result_obj__ = result_618;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result384__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    memset(&result_619,0,sizeof(char*));
    __result385__ = gComeFunResultObject = __result_obj__ = result_619;
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_620;
int i_621;
struct CVALUE* default_value_622;
struct list$1CVALUEph* __result386__;
struct list_item$1CVALUEph* it_623;
int i_624;
struct CVALUE* __dec_obj262;
struct list$1CVALUEph* __result387__;
default_value_622 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_620=self->len;
        for(        i_621=0;        i_621<position-len_620;        i_621++        ){
            memset(&default_value_622,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_622));
            come_call_finalizer3(default_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result386__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    it_623=self->head;
    i_624=0;
    while(it_623!=((void*)0)) {
        if(        position==i_624) {
            __dec_obj262=it_623->item;
            it_623->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_623=it_623->next;
        i_624++;
    }
    __result387__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_635;
int i_636;
char* __result390__;
char* default_value_637;
char* __result391__;
default_value_637 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_635=self->head;
    i_636=0;
    while(it_635!=((void*)0)) {
        if(        position==i_636) {
            __result390__ = gComeFunResultObject = __result_obj__ = it_635->item;
            gComeFunResultObject = (void*)0;
            return __result390__;
        }
        it_635=it_635->next;
        i_636++;
    }
    memset(&default_value_637,0,sizeof(char*));
    __result391__ = gComeFunResultObject = __result_obj__ = default_value_637;
    default_value_637 = come_decrement_ref_count2(default_value_637, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result395__;
void* __right_value627 = (void*)0;
struct sCurrentNode2* result_647;
void* __right_value628 = (void*)0;
char* __dec_obj265;
struct sCurrentNode2* __result396__;
    if(    self==(void*)0) {
        __result395__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    result_647=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_647->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj265=result_647->sname;
        result_647->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_647->sline_real=self->sline_real;
    }
    __result396__ = gComeFunResultObject = __result_obj__ = result_647;
    come_call_finalizer3(result_647,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_653;
unsigned int hash_654;
unsigned int it_655;
struct sClass* __result398__;
struct sClass* __result399__;
struct sClass* __result400__;
struct sClass* __result401__;
default_value_653 = (void*)0;
    memset(&default_value_653,0,sizeof(struct sClass*));
    hash_654=charp_get_hash_key(((char*)key))%self->size;
    it_655=hash_654;
    while((_Bool)1) {
        if(        self->item_existance[it_655]) {
            if(            charp_equals(self->keys[it_655],key)) {
                __result398__ = gComeFunResultObject = __result_obj__ = self->items[it_655];
                come_call_finalizer3(default_value_653,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result398__;
            }
            it_655++;
            if(            it_655>=self->size) {
                it_655=0;
            }
            else if(            it_655==hash_654) {
                __result399__ = gComeFunResultObject = __result_obj__ = default_value_653;
                come_call_finalizer3(default_value_653,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result399__;
            }
        }
        else {
            __result400__ = gComeFunResultObject = __result_obj__ = default_value_653;
            come_call_finalizer3(default_value_653,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result400__;
        }
    }
    __result401__ = gComeFunResultObject = __result_obj__ = default_value_653;
    come_call_finalizer3(default_value_653,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value669 = (void*)0;
struct buffer* __dec_obj274;
struct sComeCallNode* __result406__;
    ((struct sNodeBase*)(__right_value669=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value669,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj274=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj274,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result406__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value670 = (void*)0;
char* __result407__;
    __result407__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value670=__builtin_string("sComeCallNode")));
    __right_value670 = come_decrement_ref_count2(__right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_683;
struct buffer* come_block_684;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct list$1CVALUEph* come_params_685;
void* __right_value673 = (void*)0;
char* var_name_687;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* type__688;
_Bool __result412__;
void* __right_value676 = (void*)0;
struct sNode* var_node_691;
_Bool Value_692;
_Bool __result413__;
void* __right_value677 = (void*)0;
struct CVALUE* thread_var_value_693;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct CVALUE* come_value_694;
void* __right_value680 = (void*)0;
char* __dec_obj277;
struct sType* __dec_obj278;
void* __right_value681 = (void*)0;
struct sNode* null_node_695;
_Bool Value_696;
_Bool __result414__;
void* __right_value682 = (void*)0;
struct CVALUE* __dec_obj279;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value685 = (void*)0;
struct sNode* current_stack_frame_node_697;
_Bool Value_698;
_Bool __result415__;
void* __right_value686 = (void*)0;
struct CVALUE* current_stack_frame_value_699;
void* __right_value687 = (void*)0;
char* fun_name_700;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct buffer* come_block2_701;
void* __right_value690 = (void*)0;
char* class_name_702;
void* __right_value691 = (void*)0;
struct sClass* current_stack_frame_struct_703;
void* __right_value692 = (void*)0;
struct buffer* source3_704;
char* p_705;
char* head_706;
int sline_707;
struct buffer* __dec_obj280;
void* __right_value693 = (void*)0;
struct sNode* node_708;
_Bool Value_709;
_Bool __result416__;
struct buffer* __dec_obj281;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct CVALUE* fun_value_710;
void* __right_value696 = (void*)0;
char* __dec_obj282;
struct sType* __dec_obj283;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct buffer* buf_711;
void* __right_value699 = (void*)0;
char* fun_name_712;
int j_713;
struct list$1CVALUEph* o2_saved_714;
struct CVALUE* it_715;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct CVALUE* come_value_716;
void* __right_value702 = (void*)0;
char* __dec_obj284;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sType* type_717;
_Bool __result417__;
struct sType* __dec_obj285;
_Bool __result418__;
    come_block_sline_683=self->come_block_sline;
    come_block_684=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_685=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1412, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    static int thread_num_686=0;
    thread_num_686++;
    var_name_687=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_686));
    type__688=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value674=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value674,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__688==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result412__ = (_Bool)0;
        come_call_finalizer3(come_block_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_685,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_687 = come_decrement_ref_count2(var_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__688,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result412__;
    }
    var_node_691=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_687),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__688),(_Bool)1,((void*)0),info));
    Value_692=node_compile(var_node_691,info);
    if(    !Value_692) {
        __result413__ = (_Bool)0;
        come_call_finalizer3(come_block_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_685,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_687 = come_decrement_ref_count2(var_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__688,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_691) { var_node_691 = come_decrement_ref_count2(var_node_691, ((struct sNode*)var_node_691)->finalize, ((struct sNode*)var_node_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result413__;
    }
    else {
    }
    thread_var_value_693=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_694=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1435, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj277=come_value_694->c_value;
    come_value_694->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_693->c_value));
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj278=come_value_694->type;
    come_value_694->type=(struct sType*)come_increment_ref_count(thread_var_value_693->type);
    come_call_finalizer3(__dec_obj278,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_694->var=((void*)0);
    list$1CVALUEph_push_back(come_params_685,(struct CVALUE*)come_increment_ref_count(come_value_694));
    null_node_695=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_696=node_compile(null_node_695,info);
    if(    !Value_696) {
        __result414__ = (_Bool)0;
        come_call_finalizer3(come_block_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_685,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_687 = come_decrement_ref_count2(var_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__688,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_691) { var_node_691 = come_decrement_ref_count2(var_node_691, ((struct sNode*)var_node_691)->finalize, ((struct sNode*)var_node_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_695) { null_node_695 = come_decrement_ref_count2(null_node_695, ((struct sNode*)null_node_695)->finalize, ((struct sNode*)null_node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result414__;
    }
    else {
    }
    __dec_obj279=come_value_694;
    come_value_694=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_685,(struct CVALUE*)come_increment_ref_count(come_value_694));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1453, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value684=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1453, "struct sCurrentNode2*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_697=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value684,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_698=node_compile(current_stack_frame_node_697,info);
    if(    !Value_698) {
        __result415__ = (_Bool)0;
        come_call_finalizer3(come_block_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_685,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_687 = come_decrement_ref_count2(var_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__688,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_691) { var_node_691 = come_decrement_ref_count2(var_node_691, ((struct sNode*)var_node_691)->finalize, ((struct sNode*)var_node_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_695) { null_node_695 = come_decrement_ref_count2(null_node_695, ((struct sNode*)null_node_695)->finalize, ((struct sNode*)null_node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_697) { current_stack_frame_node_697 = come_decrement_ref_count2(current_stack_frame_node_697, ((struct sNode*)current_stack_frame_node_697)->finalize, ((struct sNode*)current_stack_frame_node_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result415__;
    }
    else {
    }
    current_stack_frame_value_699=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_700=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_686));
    come_block2_701=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1464, "struct buffer*", (void*)0, (void*)0))));
    class_name_702=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_701,"void* %s(%s* parent)\n",fun_name_700,class_name_702);
    buffer_append_str(come_block2_701,((char*)(__right_value691=buffer_to_string(come_block_684))));
    __right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_703=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value692=map$2charphsClassphp_operator_load_element(info->classes,class_name_702)));
    come_call_finalizer3(__right_value692,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_704=(struct buffer*)come_increment_ref_count(info->source);
    p_705=info->p;
    head_706=info->head;
    sline_707=info->sline;
    __dec_obj280=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_701);
    come_call_finalizer3(__dec_obj280,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_683;
    node_708=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_709=node_compile(node_708,info);
    if(    !Value_709) {
        __result416__ = (_Bool)0;
        come_call_finalizer3(come_block_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_685,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_687 = come_decrement_ref_count2(var_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__688,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_691) { var_node_691 = come_decrement_ref_count2(var_node_691, ((struct sNode*)var_node_691)->finalize, ((struct sNode*)var_node_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_695) { null_node_695 = come_decrement_ref_count2(null_node_695, ((struct sNode*)null_node_695)->finalize, ((struct sNode*)null_node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_697) { current_stack_frame_node_697 = come_decrement_ref_count2(current_stack_frame_node_697, ((struct sNode*)current_stack_frame_node_697)->finalize, ((struct sNode*)current_stack_frame_node_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_700 = come_decrement_ref_count2(fun_name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_701,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_702 = come_decrement_ref_count2(class_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_708) { node_708 = come_decrement_ref_count2(node_708, ((struct sNode*)node_708)->finalize, ((struct sNode*)node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result416__;
    }
    else {
    }
    __dec_obj281=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_704);
    come_call_finalizer3(__dec_obj281,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_705;
    info->head=head_706;
    info->sline=sline_707;
    info->current_stack_frame_struct=current_stack_frame_struct_703;
    fun_value_710=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1498, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj282=fun_value_710->c_value;
    fun_value_710->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_700));
    __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj283=come_value_694->type;
    come_value_694->type=((void*)0);
    come_call_finalizer3(__dec_obj283,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_694->var=((void*)0);
    list$1CVALUEph_add(come_params_685,(struct CVALUE*)come_increment_ref_count(fun_value_710));
    list$1CVALUEph_add(come_params_685,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_699));
    buf_711=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1508, "struct buffer*", (void*)0, (void*)0))));
    fun_name_700 = come_decrement_ref_count2(fun_name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_712=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_711,"(");
    buffer_append_str(buf_711,fun_name_712);
    buffer_append_str(buf_711,"(");
    j_713=0;
    for(    o2_saved_714=(struct list$1CVALUEph*)come_increment_ref_count((come_params_685)),it_715=list$1CVALUEph_begin((o2_saved_714));    !list$1CVALUEph_end((o2_saved_714));    it_715=list$1CVALUEph_next((o2_saved_714))    ){
        buffer_append_str(buf_711,it_715->c_value);
        if(        j_713!=list$1CVALUEph_length(come_params_685)-1) {
            buffer_append_str(buf_711,",");
        }
        j_713++;
    }
    come_call_finalizer3(o2_saved_714,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_711,")");
    buffer_append_str(buf_711,", ");
    buffer_append_str(buf_711,thread_var_value_693->c_value);
    buffer_append_str(buf_711,")");
    come_call_finalizer3(come_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_716=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1531, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj284=come_value_716->c_value;
    come_value_716->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_711));
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_717=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value703=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value703,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_717==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result417__ = (_Bool)0;
        come_call_finalizer3(come_block_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_685,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_687 = come_decrement_ref_count2(var_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__688,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_691) { var_node_691 = come_decrement_ref_count2(var_node_691, ((struct sNode*)var_node_691)->finalize, ((struct sNode*)var_node_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_695) { null_node_695 = come_decrement_ref_count2(null_node_695, ((struct sNode*)null_node_695)->finalize, ((struct sNode*)null_node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_697) { current_stack_frame_node_697 = come_decrement_ref_count2(current_stack_frame_node_697, ((struct sNode*)current_stack_frame_node_697)->finalize, ((struct sNode*)current_stack_frame_node_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_701,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_702 = come_decrement_ref_count2(class_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_708) { node_708 = come_decrement_ref_count2(node_708, ((struct sNode*)node_708)->finalize, ((struct sNode*)node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_710,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_711,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_712 = come_decrement_ref_count2(fun_name_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result417__;
    }
    __dec_obj285=come_value_716->type;
    come_value_716->type=(struct sType*)come_increment_ref_count(type_717);
    come_call_finalizer3(__dec_obj285,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_716->var=((void*)0);
    add_come_last_code(info,"%s",come_value_716->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_716));
    __result418__ = (_Bool)1;
    come_call_finalizer3(come_block_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_685,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_687 = come_decrement_ref_count2(var_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__688,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_691) { var_node_691 = come_decrement_ref_count2(var_node_691, ((struct sNode*)var_node_691)->finalize, ((struct sNode*)var_node_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_695) { null_node_695 = come_decrement_ref_count2(null_node_695, ((struct sNode*)null_node_695)->finalize, ((struct sNode*)null_node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_697) { current_stack_frame_node_697 = come_decrement_ref_count2(current_stack_frame_node_697, ((struct sNode*)current_stack_frame_node_697)->finalize, ((struct sNode*)current_stack_frame_node_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_701,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_702 = come_decrement_ref_count2(class_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_708) { node_708 = come_decrement_ref_count2(node_708, ((struct sNode*)node_708)->finalize, ((struct sNode*)node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_710,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_711,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_712 = come_decrement_ref_count2(fun_name_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result418__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj275;
struct buffer* __dec_obj276;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj275=self->sname;
            __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj276=self->come_block;
            come_call_finalizer3(__dec_obj276,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_689;
unsigned int it_690;
struct sType* __result408__;
struct sType* __result409__;
struct sType* __result410__;
struct sType* __result411__;
    hash_689=charp_get_hash_key(((char*)key))%self->size;
    it_690=hash_689;
    while((_Bool)1) {
        if(        self->item_existance[it_690]) {
            if(            charp_equals(self->keys[it_690],key)) {
                __result408__ = gComeFunResultObject = __result_obj__ = self->items[it_690];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result408__;
            }
            it_690++;
            if(            it_690>=self->size) {
                it_690=0;
            }
            else if(            it_690==hash_689) {
                __result409__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result409__;
            }
        }
        else {
            __result410__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result410__;
        }
    }
    __result411__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value705 = (void*)0;
struct sNode* __dec_obj286;
struct sComeJoinNode* __result419__;
    ((struct sNodeBase*)(__right_value705=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value705,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj286=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
    __result419__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result419__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value706 = (void*)0;
char* __result420__;
    __result420__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value706=__builtin_string("sComeJoinNode")));
    __right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_718;
_Bool Value_719;
_Bool __result421__;
void* __right_value707 = (void*)0;
struct CVALUE* come_value_720;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct buffer* buf_721;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct CVALUE* come_value_722;
void* __right_value712 = (void*)0;
char* __dec_obj289;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sType* __dec_obj290;
_Bool __result422__;
    node_718=(struct sNode*)come_increment_ref_count(self->node);
    Value_719=node_compile(node_718,info);
    if(    !Value_719) {
        __result421__ = (_Bool)0;
        if(node_718) { node_718 = come_decrement_ref_count2(node_718, ((struct sNode*)node_718)->finalize, ((struct sNode*)node_718)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result421__;
    }
    else {
    }
    come_value_720=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_721=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1579, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_721,"pthread_join(");
    buffer_append_str(buf_721,come_value_720->c_value);
    buffer_append_str(buf_721,", 0)");
    come_call_finalizer3(come_value_720,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_722=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1584, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj289=come_value_722->c_value;
    come_value_722->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_721));
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj290=come_value_722->type;
    come_value_722->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1586, "struct sType*", (void*)0, (void*)0)),"void",info,info));
    come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_722->var=((void*)0);
    add_come_last_code(info,"%s",come_value_722->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_722));
    __result422__ = (_Bool)1;
    if(node_718) { node_718 = come_decrement_ref_count2(node_718, ((struct sNode*)node_718)->finalize, ((struct sNode*)node_718)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_722,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result422__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj287;
struct sNode* __dec_obj288;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj287=self->sname;
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj288=self->node;
            if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value715 = (void*)0;
struct list$1sNodeph* __dec_obj291;
struct list$1sBlockph* __dec_obj292;
struct sBlock* __dec_obj294;
struct sComePollNode* __result423__;
    ((struct sNodeBase*)(__right_value715=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value715,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj291=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj291,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj292=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj292,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj294=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj294,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result423__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value716 = (void*)0;
char* __result424__;
    __result424__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value716=__builtin_string("sComePollNode")));
    __right_value716 = come_decrement_ref_count2(__right_value716, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_727;
struct list$1sBlockph* blocks_728;
int time_out_729;
int n_731;
struct list$1sNodeph* o2_saved_732;
struct sNode* it_735;
_Bool Value_738;
_Bool __result431__;
void* __right_value717 = (void*)0;
struct CVALUE* come_value_739;
int n_740;
struct list$1sNodeph* o2_saved_741;
struct sNode* it_742;
void* __right_value718 = (void*)0;
_Bool __result434__;
    vars_727=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_728=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_729=self->time_out;
    static int var_num_730=0;
    var_num_730++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_730,list$1sNodeph_length(vars_727));
    n_731=0;
    for(    o2_saved_732=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_735=list$1sNodeph_begin((o2_saved_732));    !list$1sNodeph_end((o2_saved_732));    it_735=list$1sNodeph_next((o2_saved_732))    ){
        Value_738=node_compile(it_735,info);
        if(        !Value_738) {
            __result431__ = (_Bool)0;
            come_call_finalizer3(o2_saved_732,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_727,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_728,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result431__;
        }
        else {
        }
        come_value_739=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_730,n_731,come_value_739->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_730,n_731,1);
        n_731++;
        come_call_finalizer3(come_value_739,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_732,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_730,var_num_730,list$1sNodeph_length(vars_727),time_out_729);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_730);
    n_740=0;
    for(    o2_saved_741=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_742=list$1sNodeph_begin((o2_saved_741));    !list$1sNodeph_end((o2_saved_741));    it_742=list$1sNodeph_next((o2_saved_741))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_730,n_740,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value718=list$1sBlockphp_operator_load_element(blocks_728,n_740))), "05call.c", 1650, 31)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value718,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_740++;
    }
    come_call_finalizer3(o2_saved_741,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_730);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result434__ = (_Bool)1;
    come_call_finalizer3(vars_727,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_728,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result434__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_723;
struct list_item$1sBlockph* prev_it_724;
    it_723=self->head;
    while(it_723!=((void*)0)) {
        prev_it_724=it_723;
        it_723=it_723->next;
        come_call_finalizer3(prev_it_724,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj293;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj293=self->item;
            come_call_finalizer3(__dec_obj293,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj295;
struct list$1sNodeph* __dec_obj296;
struct list$1sBlockph* __dec_obj297;
struct sBlock* __dec_obj298;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj295=self->sname;
            __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj296=self->vars;
            come_call_finalizer3(__dec_obj296,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj297=self->blocks;
            come_call_finalizer3(__dec_obj297,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj298=self->else_block;
            come_call_finalizer3(__dec_obj298,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_725;
struct list_item$1sBlockph* prev_it_726;
    it_725=self->head;
    while(it_725!=((void*)0)) {
        prev_it_726=it_725;
        it_725=it_725->next;
        come_call_finalizer3(prev_it_726,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_733;
struct sNode* __result425__;
struct sNode* __result426__;
struct sNode* result_734;
struct sNode* __result427__;
result_733 = (void*)0;
result_734 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_733,0,sizeof(struct sNode*));
        __result425__ = gComeFunResultObject = __result_obj__ = result_733;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    self->it=self->head;
    if(    self->it) {
        __result426__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result426__;
    }
    memset(&result_734,0,sizeof(struct sNode*));
    __result427__ = gComeFunResultObject = __result_obj__ = result_734;
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_736;
struct sNode* __result428__;
struct sNode* __result429__;
struct sNode* result_737;
struct sNode* __result430__;
result_736 = (void*)0;
result_737 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_736,0,sizeof(struct sNode*));
        __result428__ = gComeFunResultObject = __result_obj__ = result_736;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result429__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result429__;
    }
    memset(&result_737,0,sizeof(struct sNode*));
    __result430__ = gComeFunResultObject = __result_obj__ = result_737;
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_743;
int i_744;
struct sBlock* __result432__;
struct sBlock* default_value_745;
struct sBlock* __result433__;
default_value_745 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_743=self->head;
    i_744=0;
    while(it_743!=((void*)0)) {
        if(        position==i_744) {
            __result432__ = gComeFunResultObject = __result_obj__ = it_743->item;
            gComeFunResultObject = (void*)0;
            return __result432__;
        }
        it_743=it_743->next;
        i_744++;
    }
    memset(&default_value_745,0,sizeof(struct sBlock*));
    __result433__ = gComeFunResultObject = __result_obj__ = default_value_745;
    come_call_finalizer3(default_value_745,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value727 = (void*)0;
struct sNode* node_746;
void* __right_value728 = (void*)0;
struct sNode* __dec_obj304;
struct sNode* __result437__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value720=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1670, "struct sFunCallNode*", (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_746=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value720,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj304=node_746;
    node_746=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_746),info));
    if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    __result437__ = gComeFunResultObject = __result_obj__ = node_746;
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result437__;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result435__;
void* __right_value721 = (void*)0;
struct sFunCallNode* result_747;
void* __right_value722 = (void*)0;
char* __dec_obj299;
void* __right_value723 = (void*)0;
char* __dec_obj300;
void* __right_value724 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj301;
void* __right_value725 = (void*)0;
struct list$1sTypeph* __dec_obj302;
void* __right_value726 = (void*)0;
struct buffer* __dec_obj303;
struct sFunCallNode* __result436__;
    if(    self==(void*)0) {
        __result435__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result435__;
    }
    result_747=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_747->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_747->sname;
        result_747->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_747->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj300=result_747->fun_name;
        result_747->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj301=result_747->params;
        result_747->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj301,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_747->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj302=result_747->method_generics_types;
        result_747->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj302,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj303=result_747->method_block;
        result_747->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj303,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_747->method_block_sline=self->method_block_sline;
    }
    __result436__ = gComeFunResultObject = __result_obj__ = result_747;
    come_call_finalizer3(result_747,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value729 = (void*)0;
struct sNode* __dec_obj305;
void* __right_value730 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj306;
struct sLambdaCall* __result438__;
    ((struct sNodeBase*)(__right_value729=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value729,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj305=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj306=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj306,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result438__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result438__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value731 = (void*)0;
char* __result439__;
    __result439__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value731=__builtin_string("sLambdaCall")));
    __right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result439__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_748;
struct list$1tuple2$2charphsNodephph* params_749;
_Bool Value_750;
_Bool __result440__;
void* __right_value732 = (void*)0;
struct CVALUE* come_value_751;
struct sType* lambda_type_752;
_Bool __result441__;
void* __right_value733 = (void*)0;
struct sType* result_type_753;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct list$1CVALUEph* come_params_754;
_Bool __result442__;
int i_755;
struct list$1tuple2$2charphsNodephph* o2_saved_756;
struct tuple2$2charphsNodeph* it_757;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_758=0;
struct sNode* node_759=0;
_Bool Value_760;
_Bool __result443__;
void* __right_value736 = (void*)0;
struct CVALUE* come_value_761;
void* __right_value737 = (void*)0;
_Bool _if_conditional19;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
_Bool _if_conditional20;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct buffer* buf_762;
int j_763;
struct list$1CVALUEph* o2_saved_764;
struct CVALUE* it_765;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct CVALUE* come_value2_766;
void* __right_value747 = (void*)0;
char* __dec_obj310;
void* __right_value748 = (void*)0;
struct sType* __dec_obj311;
_Bool __result444__;
    node_748=(struct sNode*)come_increment_ref_count(self->node);
    params_749=self->params;
    Value_750=node_compile(node_748,info);
    if(    !Value_750) {
        __result440__ = (_Bool)0;
        if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result440__;
    }
    else {
    }
    come_value_751=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_752=come_value_751->type;
    if(    lambda_type_752->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result441__ = (_Bool)0;
        if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result441__;
    }
    result_type_753=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_752->mResultType->v1));
    result_type_753->mStatic=(_Bool)0;
    come_params_754=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1714, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    list$1sTypeph_length(lambda_type_752->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_749)&&!lambda_type_752->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_752->mParamTypes),list$1tuple2$2charphsNodephph_length(params_749));
        __result442__ = (_Bool)0;
        if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_753,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_754,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result442__;
    }
    i_755=0;
    for(    o2_saved_756=(params_749),it_757=list$1tuple2$2charphsNodephph_begin((o2_saved_756));    !list$1tuple2$2charphsNodephph_end((o2_saved_756));    it_757=list$1tuple2$2charphsNodephph_next((o2_saved_756))    ){
        multiple_assign_var8=it_757;
        label_758=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_759=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        Value_760=node_compile(node_759,info);
        if(        !Value_760) {
            __result443__ = (_Bool)0;
            label_758 = come_decrement_ref_count2(label_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_759) { node_759 = come_decrement_ref_count2(node_759, ((struct sNode*)node_759)->finalize, ((struct sNode*)node_759)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_753,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_754,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result443__;
        }
        else {
        }
        come_value_761=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_752->mVarArgs&&((struct sType*)(__right_value737=list$1sTypephp_operator_load_element(lambda_type_752->mParamTypes,i_755)))==((void*)0))),        come_call_finalizer3(__right_value737,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value739=xsprintf("calling param #\%s",((char*)(__right_value738=int_to_string(i_755)))))),((struct sType*)come_null_check(((struct sType*)(__right_value740=list$1sTypephp_operator_load_element(lambda_type_752->mParamTypes,i_755))), "05call.c", 1733, 32)),come_value_761->type,come_value_761,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value740,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value741=list$1sTypephp_operator_load_element(lambda_type_752->mParamTypes,i_755))), "05call.c", 1734, 33))->mHeap&&come_value_761->type->mHeap)),            come_call_finalizer3(__right_value741,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value742=list$1sTypephp_operator_load_element(lambda_type_752->mParamTypes,i_755))), "05call.c", 1735, 34)),come_value_761->type,come_value_761,info,(_Bool)1);
                come_call_finalizer3(__right_value742,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_754,(struct CVALUE*)come_increment_ref_count(come_value_761));
        dec_stack_ptr(1,info);
        i_755++;
        label_758 = come_decrement_ref_count2(label_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_759) { node_759 = come_decrement_ref_count2(node_759, ((struct sNode*)node_759)->finalize, ((struct sNode*)node_759)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_761,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_762=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1745, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_762,"(");
    buffer_append_str(buf_762,come_value_751->c_value);
    buffer_append_str(buf_762,")");
    buffer_append_str(buf_762,"(");
    j_763=0;
    for(    o2_saved_764=(struct list$1CVALUEph*)come_increment_ref_count((come_params_754)),it_765=list$1CVALUEph_begin((o2_saved_764));    !list$1CVALUEph_end((o2_saved_764));    it_765=list$1CVALUEph_next((o2_saved_764))    ){
        buffer_append_str(buf_762,it_765->c_value);
        if(        j_763!=list$1CVALUEph_length(come_params_754)-1) {
            buffer_append_str(buf_762,",");
        }
        j_763++;
    }
    come_call_finalizer3(o2_saved_764,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_762,")");
    come_value2_766=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1764, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj310=come_value2_766->c_value;
    come_value2_766->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_762));
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_752->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_766,(struct sType*)come_increment_ref_count(lambda_type_752->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj311=come_value2_766->type;
    come_value2_766->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_753));
    come_call_finalizer3(__dec_obj311,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_766->type->mStatic=(_Bool)0;
    come_value2_766->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_766->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_766));
    __result444__ = (_Bool)1;
    if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_753,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_754,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_762,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_766,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result444__;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj307;
struct sNode* __dec_obj308;
struct list$1tuple2$2charphsNodephph* __dec_obj309;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj307=self->sname;
            __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj308=self->node;
            if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj309=self->params;
            come_call_finalizer3(__dec_obj309,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value749 = (void*)0;
struct sType* __dec_obj312;
struct sVarArgTypeName* __result445__;
    ((struct sNodeBase*)(__right_value749=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value749,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj312=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj312,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result445__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value750 = (void*)0;
char* __result446__;
    __result446__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value750=__builtin_string("sVarArgTypeName")));
    __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result446__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_767;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct CVALUE* come_value_768;
void* __right_value753 = (void*)0;
char* __dec_obj315;
struct sType* __dec_obj316;
_Bool __result447__;
    type_767=(struct sType*)come_increment_ref_count(self->type);
    come_value_768=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1801, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj315=come_value_768->c_value;
    come_value_768->c_value=(char*)come_increment_ref_count(make_type_name_string(type_767,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj316=come_value_768->type;
    come_value_768->type=(struct sType*)come_increment_ref_count(type_767);
    come_call_finalizer3(__dec_obj316,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_768->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_768));
    __result447__ = (_Bool)1;
    come_call_finalizer3(type_767,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_768,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result447__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj313;
struct sType* __dec_obj314;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj313=self->sname;
            __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj314=self->type;
            come_call_finalizer3(__dec_obj314,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct list$1sTypeph* method_generics_types_769;
void* __right_value756 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_770=0;
char* name_771=0;
_Bool err_772=0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_773;
_Bool _va_arg_774;
char* p_775;
int sline_776;
_Bool err_flag_777;
void* __right_value760 = (void*)0;
char* label_778;
void* __right_value761 = (void*)0;
char* __dec_obj319;
char* __dec_obj320;
_Bool no_comma_779;
_Bool in_fun_param_780;
void* __right_value762 = (void*)0;
struct sNode* node_781;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj321;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
_Bool guard_break_785;
struct buffer* method_block_786;
int method_block_sline_787;
char* head_788;
void* __right_value769 = (void*)0;
char* tail_789;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct buffer* __dec_obj327;
int len_790;
void* __right_value772 = (void*)0;
char* mem_791;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value775 = (void*)0;
struct sNode* node_792;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj328;
struct sNode* __result450__;
    method_generics_types_769=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1815, "struct list$1sTypeph*", (void*)0, (void*)0))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value756=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_770=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_771=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_772=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value756,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_772) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_769,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_770)));
                come_call_finalizer3(type_770,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_771 = come_decrement_ref_count2(name_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_773=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1853, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    _va_arg_774=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_775=info->p;
        sline_776=info->sline;
        err_flag_777=(_Bool)0;
        label_778=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj319=label_778;
            label_778=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_777=(_Bool)1;
        }
        if(        err_flag_777==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj320=label_778;
            label_778=((void*)0);
            __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_775;
            info->sline=sline_776;
        }
        no_comma_779=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_780=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_781=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj321=node_781;
        node_781=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_781),info));
        if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_779;
        info->in_fun_param=in_fun_param_780;
        list$1tuple2$2charphsNodephph_push_back(params_773,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1901, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(label_778),(struct sNode*)come_increment_ref_count(node_781))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_778 = come_decrement_ref_count2(label_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_781) { node_781 = come_decrement_ref_count2(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_778 = come_decrement_ref_count2(label_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_781) { node_781 = come_decrement_ref_count2(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_774;
    guard_break_785=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_785=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_786=((void*)0);
    method_block_sline_787=0;
    if(    *info->p==123) {
        head_788=info->p;
        method_block_sline_787=info->sline;
        ((char*)(__right_value769=skip_block(info)));
        __right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_789=info->p;
        __dec_obj327=method_block_786;
        method_block_786=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1938, "struct buffer*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj327,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_790=tail_789-head_788;
        mem_791=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_790+1)), "05call.c", 1941, "char*", (void*)0, (void*)0));
        memcpy(mem_791,head_788,len_790);
        mem_791[len_790]=0;
        buffer_append_str(method_block_786,mem_791);
        buffer_append_str(method_block_786,"\n");
        mem_791 = come_decrement_ref_count2(mem_791, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1951, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value774=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1951, "struct sFunCallNode*", (void*)0, (void*)0)),fun_name,params_773,guard_break_785,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_769),(struct buffer*)come_increment_ref_count(method_block_786),method_block_sline_787,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_792=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value774,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj328=node_792;
    node_792=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_792),info));
    if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
    __result450__ = gComeFunResultObject = __result_obj__ = node_792;
    come_call_finalizer3(method_generics_types_769,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_773,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_792) { node_792 = come_decrement_ref_count2(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result450__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj317;
char* __dec_obj318;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj317=self->v1;
            come_call_finalizer3(__dec_obj317,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj318=self->v2;
            __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value764 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_782;
struct tuple2$2charphsNodeph* __dec_obj322;
void* __right_value765 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_783;
struct tuple2$2charphsNodeph* __dec_obj323;
void* __right_value766 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_784;
struct tuple2$2charphsNodeph* __dec_obj324;
struct list$1tuple2$2charphsNodephph* __result448__;
    if(    self->len==0) {
        litem_782=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value764=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_782->prev=((void*)0);
        litem_782->next=((void*)0);
        __dec_obj322=litem_782->item;
        litem_782->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj322,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_782;
        self->head=litem_782;
    }
    else if(    self->len==1) {
        litem_783=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value765=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_783->prev=self->head;
        litem_783->next=((void*)0);
        __dec_obj323=litem_783->item;
        litem_783->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj323,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_783;
        self->head->next=litem_783;
    }
    else {
        litem_784=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value766=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_784->prev=self->tail;
        litem_784->next=((void*)0);
        __dec_obj324=litem_784->item;
        litem_784->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj324,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_784;
        self->tail=litem_784;
    }
    self->len++;
    __result448__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj325;
struct sNode* __dec_obj326;
struct tuple2$2charphsNodeph* __result449__;
    __dec_obj325=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj326=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    __result449__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result449__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result451__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result451__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result451__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value783 = (void*)0;
struct sNode* __result454__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value778=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "struct sReturnNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result454__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value783=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value778,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value783) { __right_value783 = come_decrement_ref_count2(__right_value783, ((struct sNode*)__right_value783)->finalize, ((struct sNode*)__right_value783)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result454__;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result452__;
void* __right_value779 = (void*)0;
struct sReturnNode* result_793;
void* __right_value780 = (void*)0;
char* __dec_obj329;
void* __right_value781 = (void*)0;
struct sNode* __dec_obj330;
void* __right_value782 = (void*)0;
char* __dec_obj331;
struct sReturnNode* __result453__;
    if(    self==(void*)0) {
        __result452__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result452__;
    }
    result_793=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_793->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj329=result_793->sname;
        result_793->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_793->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj330=result_793->value;
        result_793->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj331=result_793->value_source;
        result_793->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result453__ = gComeFunResultObject = __result_obj__ = result_793;
    come_call_finalizer3(result_793,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result453__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value787 = (void*)0;
struct sNode* __result455__;
char* head_794;
void* __right_value788 = (void*)0;
struct sNode* value_795;
char* tail_796;
void* __right_value789 = (void*)0;
struct sNode* __dec_obj332;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value793 = (void*)0;
struct sNode* __result456__;
int nest_798;
char* head_799;
int head_sline_800;
int sline_real_801;
void* __right_value794 = (void*)0;
char* buf_802;
_Bool is_type_name__803;
_Bool is_special_word_805;
_Bool define_function_pointer_flag_806;
void* __right_value795 = (void*)0;
_Bool lambda_flag_807;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
char* word2_808;
_Bool fun_name_with_type_name_809;
void* __right_value798 = (void*)0;
char* word2_810;
_Bool call_method_generics_fun_call_811;
void* __right_value799 = (void*)0;
char* __dec_obj333;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
_Bool _if_conditional21;
int nest_812;
_Bool inline_asm_813;
void* __right_value802 = (void*)0;
char* __dec_obj334;
void* __right_value803 = (void*)0;
char* __dec_obj335;
void* __right_value804 = (void*)0;
char* __dec_obj336;
void* __right_value805 = (void*)0;
struct sNode* node_814;
struct sNode* __result457__;
_Bool no_comma_815;
void* __right_value806 = (void*)0;
struct sNode* exp_816;
void* __right_value807 = (void*)0;
struct sNode* exp2_817;
void* __right_value808 = (void*)0;
struct sNode* __result458__;
void* __right_value809 = (void*)0;
char* block_text_818;
char* contents_819;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value815 = (void*)0;
struct sNode* __result461__;
void* __right_value816 = (void*)0;
struct sNode* node_821;
struct sNode* __result462__;
void* __right_value817 = (void*)0;
struct sNode* node_822;
struct sNode* __result463__;
struct buffer* come_block_823;
int come_block_sline_824;
char* head_825;
void* __right_value818 = (void*)0;
char* tail_826;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct buffer* __dec_obj339;
int len_827;
void* __right_value821 = (void*)0;
char* mem_828;
char* head_829;
_Bool no_output_come_code_830;
void* __right_value822 = (void*)0;
char* tail_831;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct buffer* __dec_obj340;
int len_832;
void* __right_value825 = (void*)0;
char* mem_833;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value831 = (void*)0;
struct sNode* node_834;
struct sNode* __result466__;
struct buffer* come_block_836;
int come_block_sline_837;
void* __right_value832 = (void*)0;
struct sNode* node_838;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value838 = (void*)0;
struct sNode* __result469__;
int time_out_840;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1sNodeph* vars_841;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1sBlockph* blocks_842;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct sBlock* else_block_843;
void* __right_value845 = (void*)0;
struct sBlock* __dec_obj345;
void* __right_value846 = (void*)0;
struct sNode* var_name_844;
void* __right_value847 = (void*)0;
struct sBlock* block_845;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value890 = (void*)0;
struct sNode* __result493__;
void* __right_value891 = (void*)0;
struct sNode* node_881;
struct sNode* __result494__;
void* __right_value892 = (void*)0;
struct sNode* node_882;
struct sNode* __result495__;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value897 = (void*)0;
struct sNode* __result498__;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value902 = (void*)0;
struct sNode* __result501__;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value907 = (void*)0;
struct sNode* __result504__;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value912 = (void*)0;
struct sNode* __result507__;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value917 = (void*)0;
struct sNode* __result510__;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value922 = (void*)0;
struct sNode* __result513__;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value927 = (void*)0;
struct sNode* __result516__;
void* __right_value928 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_890=0;
char* name_891=0;
_Bool err_892=0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value934 = (void*)0;
struct sNode* __result519__;
void* __right_value935 = (void*)0;
struct sNode* node_894;
struct sNode* __result520__;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct buffer* buf2_895;
void* __right_value938 = (void*)0;
char* word_896;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct list$1sNodeph* exps_897;
void* __right_value941 = (void*)0;
struct sNode* exp_898;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value949 = (void*)0;
struct sNode* __result523__;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct buffer* fun_name_900;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sType* type_901;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sClass* klass_905;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct sType* __dec_obj374;
void* __right_value959 = (void*)0;
char* buf2_906;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sNode* node_907;
struct sNode* __result528__;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct buffer* fun_name_908;
void* __right_value964 = (void*)0;
char* buf2_909;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* node_910;
struct sNode* __result529__;
void* __right_value967 = (void*)0;
struct sNode* node_911;
struct sNode* __result530__;
void* __right_value968 = (void*)0;
struct sNode* node_912;
struct sNode* __result531__;
void* __right_value969 = (void*)0;
struct sNode* node_913;
struct sNode* __result532__;
void* __right_value970 = (void*)0;
struct sNode* node_914;
struct sNode* __result533__;
struct sNode* __result534__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value786=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1985, "struct sReturnNode*", (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result455__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value787=_inf_value6));
            come_call_finalizer3(__right_value786,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value787) { __right_value787 = come_decrement_ref_count2(__right_value787, ((struct sNode*)__right_value787)->finalize, ((struct sNode*)__right_value787)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result455__;
        }
        else {
            head_794=info->p;
            value_795=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_796=info->p;
            __dec_obj332=value_795;
            value_795=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_795),info));
            if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_797[tail_796-head_794+1];
            memset(&buf_797, 0, sizeof(char)            *(tail_796-head_794+1)            );
            memcpy(buf_797,head_794,tail_796-head_794);
            buf_797[tail_796-head_794]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1997, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value792=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1997, "struct sReturnNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_795),(char*)come_increment_ref_count(__builtin_string(buf_797)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result456__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value793=_inf_value7));
            if(value_795) { value_795 = come_decrement_ref_count2(value_795, ((struct sNode*)value_795)->finalize, ((struct sNode*)value_795)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value792,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value793) { __right_value793 = come_decrement_ref_count2(__right_value793, ((struct sNode*)__right_value793)->finalize, ((struct sNode*)__right_value793)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result456__;
            if(value_795) { value_795 = come_decrement_ref_count2(value_795, ((struct sNode*)value_795)->finalize, ((struct sNode*)value_795)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_798=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_798++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_798--;
                if(                nest_798==0) {
                    break;
                }
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
    else if(    *info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(1) {
            if(            *info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_799=info->p;
        head_sline_800=info->sline;
        sline_real_801=info->sline_real;
        info->sline_real=info->sline;
        buf_802=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__803=is_type_name(buf_802,info);
        static char* is_special_word_array_804[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_805=charppa_contained(is_special_word_array_804,19,buf_802);
        define_function_pointer_flag_806=(_Bool)0;
        if(        !is_special_word_805&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value795=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value795,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_806=(_Bool)1;
                }
            }
            info->p=head_799;
            info->sline=head_sline_800;
        }
        lambda_flag_807=(_Bool)0;
        if(        !is_special_word_805&&is_type_name__803) {
            info->p=head_799;
            info->sline=head_sline_800;
            ((struct tuple3$3sTypephcharphbool*)(__right_value796=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value796,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_808=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_808,"lambda")) {
                lambda_flag_807=(_Bool)1;
            }
            info->p=head_799;
            info->sline=head_sline_800;
            word2_808 = come_decrement_ref_count2(word2_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_809=(_Bool)0;
        if(        !is_special_word_805) {
            info->p=head_799;
            info->sline=head_sline_800;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_810=(char*)come_increment_ref_count(parse_word(info));
                word2_810 = come_decrement_ref_count2(word2_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_809=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_799;
            info->sline=head_sline_800;
        }
        call_method_generics_fun_call_811=(_Bool)0;
        {
            info->p=head_799;
            info->sline=head_sline_800;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj333=buf_802;
                buf_802=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_802,info)&&((struct sVar*)(__right_value800=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_802)))==((void*)0)&&((struct sVar*)(__right_value801=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_802)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value800,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value801,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_812=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_812++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_812==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_811=(_Bool)1;
                }
            }
            info->p=head_799;
            info->sline=head_sline_800;
        }
        inline_asm_813=(_Bool)0;
        {
            info->p=head_799;
            info->sline=head_sline_800;
            __dec_obj334=buf_802;
            buf_802=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_802,"asm")||string_operator_equals(buf_802,"__asm")||string_operator_equals(buf_802,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_813=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj335=buf_802;
                        buf_802=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_813=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_799;
            info->sline=head_sline_800;
        }
        parse_sharp_v5(info);
        __dec_obj336=buf_802;
        buf_802=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_807) {
            info->p=head_799;
            info->sline=head_sline_800;
            node_814=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_801;
            __result457__ = gComeFunResultObject = __result_obj__ = node_814;
            if(node_814) { node_814 = come_decrement_ref_count2(node_814, ((struct sNode*)node_814)->finalize, ((struct sNode*)node_814)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result457__;
            if(node_814) { node_814 = come_decrement_ref_count2(node_814, ((struct sNode*)node_814)->finalize, ((struct sNode*)node_814)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_802,"_Static_assert")||string_operator_equals(buf_802,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_815=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_816=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_815;
            expected_next_character(44,info);
            exp2_817=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result458__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=static_assert_node((struct sNode*)come_increment_ref_count(exp_816),(struct sNode*)come_increment_ref_count(exp2_817),info)));
            if(exp_816) { exp_816 = come_decrement_ref_count2(exp_816, ((struct sNode*)exp_816)->finalize, ((struct sNode*)exp_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_817) { exp2_817 = come_decrement_ref_count2(exp2_817, ((struct sNode*)exp2_817)->finalize, ((struct sNode*)exp2_817)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value808) { __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result458__;
            if(exp_816) { exp_816 = come_decrement_ref_count2(exp_816, ((struct sNode*)exp_816)->finalize, ((struct sNode*)exp_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_817) { exp2_817 = come_decrement_ref_count2(exp2_817, ((struct sNode*)exp2_817)->finalize, ((struct sNode*)exp2_817)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_802,"output")&&*info->p==123) {
            block_text_818=(char*)come_increment_ref_count(skip_block(info));
            contents_819=(char*)come_increment_ref_count(block_text_818);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2235, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value811=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2235, "struct sOutputNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_819),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value815=_inf_value8));
            block_text_818 = come_decrement_ref_count2(block_text_818, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_819 = come_decrement_ref_count2(contents_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value811,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value815) { __right_value815 = come_decrement_ref_count2(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result461__;
            block_text_818 = come_decrement_ref_count2(block_text_818, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_819 = come_decrement_ref_count2(contents_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_802,"extern")) {
            node_821=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result462__ = gComeFunResultObject = __result_obj__ = node_821;
            if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result462__;
            if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_802,"string")||string_operator_equals(buf_802,"wstring"))&&*info->p==40) {
            node_822=(struct sNode*)come_increment_ref_count(parse_function_call(buf_802,info,(_Bool)0));
            info->sline_real=sline_real_801;
            __result463__ = gComeFunResultObject = __result_obj__ = node_822;
            if(node_822) { node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result463__;
            if(node_822) { node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_802,"come")) {
            come_block_823=((void*)0);
            come_block_sline_824=0;
            if(            *info->p==123) {
                head_825=info->p;
                come_block_sline_824=info->sline;
                ((char*)(__right_value818=skip_block(info)));
                __right_value818 = come_decrement_ref_count2(__right_value818, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_826=info->p;
                __dec_obj339=come_block_823;
                come_block_823=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2260, "struct buffer*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj339,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_827=tail_826-head_825;
                mem_828=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_827+1)), "05call.c", 2263, "char*", (void*)0, (void*)0));
                memcpy(mem_828,head_825,len_827);
                mem_828[len_827]=0;
                buffer_append_str(come_block_823,mem_828);
                buffer_append_str(come_block_823,"\n");
                mem_828 = come_decrement_ref_count2(mem_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_829=info->p;
                come_block_sline_824=info->sline;
                no_output_come_code_830=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value822=expression_v13(info)));
                if(__right_value822) { __right_value822 = come_decrement_ref_count2(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_830;
                tail_831=info->p;
                __dec_obj340=come_block_823;
                come_block_823=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2281, "struct buffer*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj340,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_832=tail_831-head_829;
                mem_833=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_832+1)), "05call.c", 2284, "char*", (void*)0, (void*)0));
                memcpy(mem_833,head_829,len_832);
                mem_833[len_832]=0;
                buffer_append_str(come_block_823,"{");
                buffer_append_str(come_block_823,mem_833);
                buffer_append_str(come_block_823,"; }");
                buffer_append_str(come_block_823,"}");
                buffer_append_str(come_block_823,"\n");
                mem_833 = come_decrement_ref_count2(mem_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value827=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2295, "struct sComeCallNode*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_823),come_block_sline_824,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_834=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value827,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_801;
            __result466__ = gComeFunResultObject = __result_obj__ = node_834;
            come_call_finalizer3(come_block_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_834) { node_834 = come_decrement_ref_count2(node_834, ((struct sNode*)node_834)->finalize, ((struct sNode*)node_834)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result466__;
            come_call_finalizer3(come_block_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_834) { node_834 = come_decrement_ref_count2(node_834, ((struct sNode*)node_834)->finalize, ((struct sNode*)node_834)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_802,"come_join")&&*info->p==40) {
            come_block_836=((void*)0);
            come_block_sline_837=0;
            expected_next_character(40,info);
            node_838=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_801;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2309, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value834=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2309, "struct sComeJoinNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_838),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value838=_inf_value10));
            come_call_finalizer3(come_block_836,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_838) { node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value834,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value838) { __right_value838 = come_decrement_ref_count2(__right_value838, ((struct sNode*)__right_value838)->finalize, ((struct sNode*)__right_value838)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result469__;
            come_call_finalizer3(come_block_836,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_838) { node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_802,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_840=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_840=time_out_840*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_841=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2327, "struct list$1sNodeph*", (void*)0, (void*)0))));
            blocks_842=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2328, "struct list$1sBlockph*", (void*)0, (void*)0))));
            else_block_843=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2329, "struct sBlock*", (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj345=else_block_843;
                    else_block_843=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj345,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_844=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_845=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_841,(struct sNode*)come_increment_ref_count(var_name_844));
                    list$1sBlockph_add(blocks_842,(struct sBlock*)come_increment_ref_count(block_845));
                    if(                    *info->p==125) {
                        if(var_name_844) { var_name_844 = come_decrement_ref_count2(var_name_844, ((struct sNode*)var_name_844)->finalize, ((struct sNode*)var_name_844)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_845,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_844) { var_name_844 = come_decrement_ref_count2(var_name_844, ((struct sNode*)var_name_844)->finalize, ((struct sNode*)var_name_844)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_845,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_801;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value852=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2359, "struct sComePollNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(vars_841),(struct list$1sBlockph*)come_increment_ref_count(blocks_842),(struct sBlock*)come_increment_ref_count(else_block_843),time_out_840,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result493__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value890=_inf_value11));
            come_call_finalizer3(vars_841,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_842,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_843,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value852,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value890) { __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result493__;
            come_call_finalizer3(vars_841,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_842,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_843,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_802,"none")&&*info->p==40) {
            node_881=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_801;
            __result494__ = gComeFunResultObject = __result_obj__ = node_881;
            if(node_881) { node_881 = come_decrement_ref_count2(node_881, ((struct sNode*)node_881)->finalize, ((struct sNode*)node_881)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result494__;
            if(node_881) { node_881 = come_decrement_ref_count2(node_881, ((struct sNode*)node_881)->finalize, ((struct sNode*)node_881)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_802,"some")&&*info->p==40) {
            node_882=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_801;
            __result495__ = gComeFunResultObject = __result_obj__ = node_882;
            if(node_882) { node_882 = come_decrement_ref_count2(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result495__;
            if(node_882) { node_882 = come_decrement_ref_count2(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_802,"__func__")||string_operator_equals(buf_802,"__FUNCTION__")) {
            info->sline_real=sline_real_801;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value894=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2376, "struct sFuncNode*", (void*)0, (void*)0)),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result498__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value897=_inf_value12));
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value894,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value897) { __right_value897 = come_decrement_ref_count2(__right_value897, ((struct sNode*)__right_value897)->finalize, ((struct sNode*)__right_value897)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result498__;
        }
        else if(        !gComeC&&string_operator_equals(buf_802,"wildcard")) {
            info->sline_real=sline_real_801;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value899=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2380, "struct sWildCard*", (void*)0, (void*)0)),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result501__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value902=_inf_value13));
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value899,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value902) { __right_value902 = come_decrement_ref_count2(__right_value902, ((struct sNode*)__right_value902)->finalize, ((struct sNode*)__right_value902)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result501__;
        }
        else if(        string_operator_equals(buf_802,"__line__")||string_operator_equals(buf_802,"__LINE__")) {
            info->sline_real=sline_real_801;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value904=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2384, "struct sLineNode*", (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result504__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value907=_inf_value14));
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value904,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value907) { __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result504__;
        }
        else if(        string_operator_equals(buf_802,"__sname__")) {
            info->sline_real=sline_real_801;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value909=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2388, "struct sSNameNode*", (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result507__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value912=_inf_value15));
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value909,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value912) { __right_value912 = come_decrement_ref_count2(__right_value912, ((struct sNode*)__right_value912)->finalize, ((struct sNode*)__right_value912)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result507__;
        }
        else if(        string_operator_equals(buf_802,"__caller_func__")) {
            info->sline_real=sline_real_801;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value914=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2392, "struct sCallerFuncNode*", (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result510__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value917=_inf_value16));
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value914,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value917) { __right_value917 = come_decrement_ref_count2(__right_value917, ((struct sNode*)__right_value917)->finalize, ((struct sNode*)__right_value917)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result510__;
        }
        else if(        string_operator_equals(buf_802,"__caller_line__")) {
            info->sline_real=sline_real_801;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value919=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2396, "struct sCallerLineNode*", (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result513__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value922=_inf_value17));
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value919,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value922) { __right_value922 = come_decrement_ref_count2(__right_value922, ((struct sNode*)__right_value922)->finalize, ((struct sNode*)__right_value922)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result513__;
        }
        else if(        string_operator_equals(buf_802,"__caller_sname__")) {
            info->sline_real=sline_real_801;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value924=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2400, "struct sCallerSNameNode*", (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result516__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value927=_inf_value18));
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value924,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value927) { __right_value927 = come_decrement_ref_count2(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result516__;
        }
        else if(        info->va_arg&&is_type_name(buf_802,info)) {
            info->p=head_799;
            info->sline=head_sline_800;
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value928=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_890=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_891=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_892=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value928,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_801;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value930=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2409, "struct sVarArgTypeName*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_890),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result519__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value934=_inf_value19));
            come_call_finalizer3(type_890,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_891 = come_decrement_ref_count2(name_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value930,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value934) { __right_value934 = come_decrement_ref_count2(__right_value934, ((struct sNode*)__right_value934)->finalize, ((struct sNode*)__right_value934)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result519__;
            come_call_finalizer3(type_890,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_891 = come_decrement_ref_count2(name_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_802,"sizeof")||string_operator_equals(buf_802,"_Alignof")||string_operator_equals(buf_802,"_Alignas")||string_operator_equals(buf_802,"__alignof__")) {
            node_894=(struct sNode*)come_increment_ref_count(string_node_v21(buf_802,head_799,head_sline_800,info));
            info->sline_real=sline_real_801;
            __result520__ = gComeFunResultObject = __result_obj__ = node_894;
            if(node_894) { node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result520__;
            if(node_894) { node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_813) {
            buf2_895=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2418, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p!=40) {
                word_896=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_895,word_896);
                word_896 = come_decrement_ref_count2(word_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_895,40);
            exps_897=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2429, "struct list$1sNodeph*", (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_895,40);
                    info->p++;
                    exp_898=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_897,(struct sNode*)come_increment_ref_count(exp_898));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_895,41);
                    if(exp_898) { exp_898 = come_decrement_ref_count2(exp_898, ((struct sNode*)exp_898)->finalize, ((struct sNode*)exp_898)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_895,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_895,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_895,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_801;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2466, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value944=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2466, "struct sInlineAssembler*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_895)),(struct list$1sNodeph*)come_increment_ref_count(exps_897),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result523__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value949=_inf_value20));
            come_call_finalizer3(buf2_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_897,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value944,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value949) { __right_value949 = come_decrement_ref_count2(__right_value949, ((struct sNode*)__right_value949)->finalize, ((struct sNode*)__right_value949)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result523__;
            come_call_finalizer3(buf2_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_897,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_809) {
            fun_name_900=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2469, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(fun_name_900,buf_802);
            type_901=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value953=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value952=buffer_to_string(fun_name_900))))))));
            __right_value952 = come_decrement_ref_count2(__right_value952, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value953,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_901==((void*)0)) {
                klass_905=((struct sClass*)(__right_value956=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value955=buffer_to_string(fun_name_900))))));
                __right_value955 = come_decrement_ref_count2(__right_value955, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value956,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_905) {
                    __dec_obj374=type_901;
                    type_901=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2479, "struct sType*", (void*)0, (void*)0)),buf_802,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj374,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_802);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_901->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_900,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_900,"_");
            buf2_906=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_900,buf2_906);
            node_907=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value960=buffer_to_string(fun_name_900))),info,(_Bool)0));
            __right_value960 = come_decrement_ref_count2(__right_value960, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_801;
            __result528__ = gComeFunResultObject = __result_obj__ = node_907;
            come_call_finalizer3(fun_name_900,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_901,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_906 = come_decrement_ref_count2(buf2_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_907) { node_907 = come_decrement_ref_count2(node_907, ((struct sNode*)node_907)->finalize, ((struct sNode*)node_907)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result528__;
            come_call_finalizer3(fun_name_900,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_901,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_906 = come_decrement_ref_count2(buf2_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_907) { node_907 = come_decrement_ref_count2(node_907, ((struct sNode*)node_907)->finalize, ((struct sNode*)node_907)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_908=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2514, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(fun_name_908,buf_802);
            buffer_append_str(fun_name_908,"_");
            buf2_909=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_908,buf2_909);
            node_910=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value965=buffer_to_string(fun_name_908))),info,(_Bool)0));
            __right_value965 = come_decrement_ref_count2(__right_value965, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_801;
            __result529__ = gComeFunResultObject = __result_obj__ = node_910;
            come_call_finalizer3(fun_name_908,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_909 = come_decrement_ref_count2(buf2_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_910) { node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result529__;
            come_call_finalizer3(fun_name_908,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_909 = come_decrement_ref_count2(buf2_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_910) { node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_811) {
            node_911=(struct sNode*)come_increment_ref_count(parse_function_call(buf_802,info,(_Bool)0));
            info->sline_real=sline_real_801;
            __result530__ = gComeFunResultObject = __result_obj__ = node_911;
            if(node_911) { node_911 = come_decrement_ref_count2(node_911, ((struct sNode*)node_911)->finalize, ((struct sNode*)node_911)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result530__;
            if(node_911) { node_911 = come_decrement_ref_count2(node_911, ((struct sNode*)node_911)->finalize, ((struct sNode*)node_911)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_805&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__803)) {
            node_912=(struct sNode*)come_increment_ref_count(parse_function_call(buf_802,info,(_Bool)0));
            info->sline_real=sline_real_801;
            __result531__ = gComeFunResultObject = __result_obj__ = node_912;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result531__;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_913=(struct sNode*)come_increment_ref_count(string_node_v21(buf_802,head_799,head_sline_800,info));
            info->sline_real=sline_real_801;
            __result532__ = gComeFunResultObject = __result_obj__ = node_913;
            if(node_913) { node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result532__;
            if(node_913) { node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_802 = come_decrement_ref_count2(buf_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_914=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result533__ = gComeFunResultObject = __result_obj__ = node_914;
        if(node_914) { node_914 = come_decrement_ref_count2(node_914, ((struct sNode*)node_914)->finalize, ((struct sNode*)node_914)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result533__;
        if(node_914) { node_914 = come_decrement_ref_count2(node_914, ((struct sNode*)node_914)->finalize, ((struct sNode*)node_914)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result534__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result534__;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result459__;
void* __right_value812 = (void*)0;
struct sOutputNode* result_820;
void* __right_value813 = (void*)0;
char* __dec_obj337;
void* __right_value814 = (void*)0;
char* __dec_obj338;
struct sOutputNode* __result460__;
    if(    self==(void*)0) {
        __result459__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result459__;
    }
    result_820=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_820->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj337=result_820->sname;
        result_820->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_820->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj338=result_820->contents;
        result_820->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result460__ = gComeFunResultObject = __result_obj__ = result_820;
    come_call_finalizer3(result_820,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result464__;
void* __right_value828 = (void*)0;
struct sComeCallNode* result_835;
void* __right_value829 = (void*)0;
char* __dec_obj341;
void* __right_value830 = (void*)0;
struct buffer* __dec_obj342;
struct sComeCallNode* __result465__;
    if(    self==(void*)0) {
        __result464__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result464__;
    }
    result_835=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_835->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj341=result_835->sname;
        result_835->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_835->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj342=result_835->come_block;
        result_835->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj342,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_835->come_block_sline=self->come_block_sline;
    }
    __result465__ = gComeFunResultObject = __result_obj__ = result_835;
    come_call_finalizer3(result_835,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result465__;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result467__;
void* __right_value835 = (void*)0;
struct sComeJoinNode* result_839;
void* __right_value836 = (void*)0;
char* __dec_obj343;
void* __right_value837 = (void*)0;
struct sNode* __dec_obj344;
struct sComeJoinNode* __result468__;
    if(    self==(void*)0) {
        __result467__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result467__;
    }
    result_839=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_839->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj343=result_839->sname;
        result_839->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_839->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj344=result_839->node;
        result_839->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result468__ = gComeFunResultObject = __result_obj__ = result_839;
    come_call_finalizer3(result_839,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result470__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result470__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result470__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value848 = (void*)0;
struct list_item$1sBlockph* litem_846;
struct sBlock* __dec_obj346;
void* __right_value849 = (void*)0;
struct list_item$1sBlockph* litem_847;
struct sBlock* __dec_obj347;
void* __right_value850 = (void*)0;
struct list_item$1sBlockph* litem_848;
struct sBlock* __dec_obj348;
struct list$1sBlockph* __result471__;
    if(    self->len==0) {
        litem_846=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value848=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1220, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_846->prev=((void*)0);
        litem_846->next=((void*)0);
        __dec_obj346=litem_846->item;
        litem_846->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj346,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_846;
        self->head=litem_846;
    }
    else if(    self->len==1) {
        litem_847=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value849=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1230, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_847->prev=self->head;
        litem_847->next=((void*)0);
        __dec_obj347=litem_847->item;
        litem_847->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj347,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_847;
        self->head->next=litem_847;
    }
    else {
        litem_848=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value850=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1240, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_848->prev=self->tail;
        litem_848->next=((void*)0);
        __dec_obj348=litem_848->item;
        litem_848->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj348,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_848;
        self->tail=litem_848;
    }
    self->len++;
    __result471__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result471__;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result472__;
void* __right_value853 = (void*)0;
struct sComePollNode* result_849;
void* __right_value854 = (void*)0;
char* __dec_obj349;
void* __right_value855 = (void*)0;
struct list$1sNodeph* __dec_obj350;
void* __right_value888 = (void*)0;
struct list$1sBlockph* __dec_obj360;
void* __right_value889 = (void*)0;
struct sBlock* __dec_obj361;
struct sComePollNode* __result492__;
    if(    self==(void*)0) {
        __result472__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result472__;
    }
    result_849=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_849->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj349=result_849->sname;
        result_849->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_849->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj350=result_849->vars;
        result_849->vars=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->vars));
        come_call_finalizer3(__dec_obj350,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj360=result_849->blocks;
        result_849->blocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, self->blocks));
        come_call_finalizer3(__dec_obj360,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj361=result_849->else_block;
        result_849->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj361,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_849->time_out=self->time_out;
    }
    __result492__ = gComeFunResultObject = __result_obj__ = result_849;
    come_call_finalizer3(result_849,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result492__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result473__;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct list$1sBlockph* result_850;
struct list_item$1sBlockph* it_851;
void* __right_value887 = (void*)0;
struct list$1sBlockph* __result491__;
    if(    self==((void*)0)) {
        __result473__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result473__;
    }
    result_850=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1206, "struct list$1sBlockph*", (void*)0, (void*)0))));
    it_851=self->head;
    while(it_851!=((void*)0)) {
        list$1sBlockph_add(result_850,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_851->item)));
        it_851=it_851->next;
    }
    __result491__ = gComeFunResultObject = __result_obj__ = result_850;
    come_call_finalizer3(result_850,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result491__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result474__;
void* __right_value858 = (void*)0;
struct sBlock* result_852;
void* __right_value862 = (void*)0;
struct list$1sNodeph* __dec_obj351;
void* __right_value886 = (void*)0;
struct sVarTable* __dec_obj359;
struct sBlock* __result490__;
    if(    self==(void*)0) {
        __result474__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result474__;
    }
    result_852=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj351=result_852->mNodes;
        result_852->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodeph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj351,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj359=result_852->mVarTable;
        result_852->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj359,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_852->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result490__ = gComeFunResultObject = __result_obj__ = result_852;
    come_call_finalizer3(result_852,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result490__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result475__;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct list$1sNodeph* result_853;
struct list_item$1sNodeph* it_854;
void* __right_value861 = (void*)0;
struct list$1sNodeph* __result476__;
    if(    self==((void*)0)) {
        __result475__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result475__;
    }
    result_853=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_854=self->head;
    while(it_854!=((void*)0)) {
        list$1sNodeph_add(result_853,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_854->item)));
        it_854=it_854->next;
    }
    __result476__ = gComeFunResultObject = __result_obj__ = result_853;
    come_call_finalizer3(result_853,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result476__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result477__;
void* __right_value863 = (void*)0;
struct sVarTable* result_855;
void* __right_value885 = (void*)0;
struct map$2charphsVarph* __dec_obj358;
struct sVarTable* __result489__;
    if(    self==(void*)0) {
        __result477__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result477__;
    }
    result_855=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj358=result_855->mVars;
        result_855->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarph_clone, self->mVars));
        come_call_finalizer3(__dec_obj358,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_855->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_855->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_855->mID=self->mID;
    }
    __result489__ = gComeFunResultObject = __result_obj__ = result_855;
    come_call_finalizer3(result_855,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result489__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result478__;
void* __right_value864 = (void*)0;
void* __right_value870 = (void*)0;
struct map$2charphsVarph* result_857;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct list$1charp* __dec_obj353;
char* it_858;
struct sVar* default_value_859;
void* __right_value873 = (void*)0;
struct sVar* it2_862;
void* __right_value884 = (void*)0;
struct map$2charphsVarph* __result488__;
default_value_859 = (void*)0;
    if(    self==((void*)0)) {
        __result478__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result478__;
    }
    result_857=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2536, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj353=result_857->key_list;
    result_857->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2538, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj353,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_858=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_858=map$2charphsVarph_next(self)    ){
        memset(&default_value_859,0,sizeof(struct sVar*));
        it2_862=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_858,default_value_859));
        map$2charphsVarph_put(result_857,it_858,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_862)));
        come_call_finalizer3(it2_862,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result488__ = gComeFunResultObject = __result_obj__ = result_857;
    come_call_finalizer3(result_857,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result488__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
int i_856;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct list$1charp* __dec_obj352;
struct map$2charphsVarph* __result480__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value865=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value866=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2466, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value867=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_856=0;    i_856<128;    i_856++    ){
        self->item_existance[i_856]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj352=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj352,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result480__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result480__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result479__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result479__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result479__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_860;
unsigned int it_861;
struct sVar* __result481__;
struct sVar* __result482__;
struct sVar* __result483__;
struct sVar* __result484__;
    hash_860=charp_get_hash_key(((char*)key))%self->size;
    it_861=hash_860;
    while((_Bool)1) {
        if(        self->item_existance[it_861]) {
            if(            charp_equals(self->keys[it_861],key)) {
                __result481__ = gComeFunResultObject = __result_obj__ = self->items[it_861];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result481__;
            }
            it_861++;
            if(            it_861>=self->size) {
                it_861=0;
            }
            else if(            it_861==hash_860) {
                __result482__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result482__;
            }
        }
        else {
            __result483__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result483__;
        }
    }
    __result484__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_874;
int it_875;
_Bool same_key_exist_876;
char* it2_877;
struct map$2charphsVarph* __result485__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_874=charp_get_hash_key(key)%self->size;
    it_875=hash_874;
    while((_Bool)1) {
        if(        self->item_existance[it_875]) {
            if(            charp_equals(self->keys[it_875],key)) {
                if(                1) {
                    self->keys[it_875] = come_decrement_ref_count2(self->keys[it_875], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_875]);
                    self->keys[it_875]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_875]);
                    self->keys[it_875]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_875],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_875]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_875]=item;
                }
                break;
            }
            it_875++;
            if(            it_875>=self->size) {
                it_875=0;
            }
            else if(            it_875==hash_874) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_875]=(_Bool)1;
            if(            1) {
                self->keys[it_875]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_875]=key;
            }
            if(            1) {
                self->items[it_875]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_875]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_876=(_Bool)0;
    for(    it2_877=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_877=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_877,key)) {
            same_key_exist_876=(_Bool)1;
        }
    }
    if(    !same_key_exist_876) {
        list$1charp_push_back(self->key_list,key);
    }
    __result485__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_863;
void* __right_value874 = (void*)0;
char** keys_864;
void* __right_value875 = (void*)0;
struct sVar** items_865;
void* __right_value876 = (void*)0;
_Bool* item_existance_866;
int len_867;
char* it_868;
struct sVar* default_value_869;
void* __right_value877 = (void*)0;
struct sVar* it2_870;
unsigned int hash_871;
int n_872;
struct sVar* default_value_873;
void* __right_value878 = (void*)0;
default_value_869 = (void*)0;
default_value_873 = (void*)0;
    size_863=self->size*10;
    keys_864=(char**)come_increment_ref_count(((char**)(__right_value874=(char**)come_calloc(1, sizeof(char*)*(1*(size_863)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_865=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value875=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_863)), "./comelang.h", 2694, "struct sVar**", (void*)0, (void*)0))));
    item_existance_866=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value876=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_863)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_867=0;
    for(    it_868=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_868=map$2charphsVarph_next(self)    ){
        memset(&default_value_869,0,sizeof(struct sVar*));
        it2_870=((struct sVar*)(__right_value877=map$2charphsVarph_at(self,it_868,default_value_869)));
        come_call_finalizer3(__right_value877,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_871=charp_get_hash_key(it_868)%size_863;
        n_872=hash_871;
        while((_Bool)1) {
            if(            item_existance_866[n_872]) {
                n_872++;
                if(                n_872>=size_863) {
                    n_872=0;
                }
                else if(                n_872==hash_871) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_866[n_872]=(_Bool)1;
                keys_864[n_872]=it_868;
                items_865[n_872]=((struct sVar*)(__right_value878=map$2charphsVarph_at(self,it_868,default_value_873)));
                come_call_finalizer3(__right_value878,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_867++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_864;
    self->items=items_865;
    self->item_existance=item_existance_866;
    self->size=size_863;
    self->len=len_867;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result486__;
void* __right_value879 = (void*)0;
struct sVar* result_878;
void* __right_value880 = (void*)0;
char* __dec_obj354;
void* __right_value881 = (void*)0;
char* __dec_obj355;
void* __right_value882 = (void*)0;
struct sType* __dec_obj356;
void* __right_value883 = (void*)0;
char* __dec_obj357;
struct sVar* __result487__;
    if(    self==(void*)0) {
        __result486__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result486__;
    }
    result_878=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj354=result_878->mName;
        result_878->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj355=result_878->mCValueName;
        result_878->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj356=result_878->mType;
        result_878->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj356,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_878->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_878->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_878->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_878->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_878->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj357=result_878->mFunName;
        result_878->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result487__ = gComeFunResultObject = __result_obj__ = result_878;
    come_call_finalizer3(result_878,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_879;
int i_880;
    for(    i_879=0;    i_879<self->size;    i_879++    ){
        if(        self->item_existance[i_879]) {
            if(            1) {
                come_call_finalizer3(self->items[i_879],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_880=0;    i_880<self->size;    i_880++    ){
        if(        self->item_existance[i_880]) {
            if(            1) {
                self->keys[i_880] = come_decrement_ref_count2(self->keys[i_880], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result496__;
void* __right_value895 = (void*)0;
struct sFuncNode* result_883;
void* __right_value896 = (void*)0;
char* __dec_obj362;
struct sFuncNode* __result497__;
    if(    self==(void*)0) {
        __result496__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result496__;
    }
    result_883=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_883->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj362=result_883->sname;
        result_883->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_883->sline_real=self->sline_real;
    }
    __result497__ = gComeFunResultObject = __result_obj__ = result_883;
    come_call_finalizer3(result_883,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result497__;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result499__;
void* __right_value900 = (void*)0;
struct sWildCard* result_884;
void* __right_value901 = (void*)0;
char* __dec_obj363;
struct sWildCard* __result500__;
    if(    self==(void*)0) {
        __result499__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result499__;
    }
    result_884=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_884->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_884->sname;
        result_884->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_884->sline_real=self->sline_real;
    }
    __result500__ = gComeFunResultObject = __result_obj__ = result_884;
    come_call_finalizer3(result_884,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result500__;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result502__;
void* __right_value905 = (void*)0;
struct sLineNode* result_885;
void* __right_value906 = (void*)0;
char* __dec_obj364;
struct sLineNode* __result503__;
    if(    self==(void*)0) {
        __result502__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result502__;
    }
    result_885=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_885->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj364=result_885->sname;
        result_885->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_885->sline_real=self->sline_real;
    }
    __result503__ = gComeFunResultObject = __result_obj__ = result_885;
    come_call_finalizer3(result_885,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result503__;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result505__;
void* __right_value910 = (void*)0;
struct sSNameNode* result_886;
void* __right_value911 = (void*)0;
char* __dec_obj365;
struct sSNameNode* __result506__;
    if(    self==(void*)0) {
        __result505__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result505__;
    }
    result_886=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_886->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj365=result_886->sname;
        result_886->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_886->sline_real=self->sline_real;
    }
    __result506__ = gComeFunResultObject = __result_obj__ = result_886;
    come_call_finalizer3(result_886,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result506__;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result508__;
void* __right_value915 = (void*)0;
struct sCallerFuncNode* result_887;
void* __right_value916 = (void*)0;
char* __dec_obj366;
struct sCallerFuncNode* __result509__;
    if(    self==(void*)0) {
        __result508__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result508__;
    }
    result_887=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_887->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj366=result_887->sname;
        result_887->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_887->sline_real=self->sline_real;
    }
    __result509__ = gComeFunResultObject = __result_obj__ = result_887;
    come_call_finalizer3(result_887,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result509__;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result511__;
void* __right_value920 = (void*)0;
struct sCallerLineNode* result_888;
void* __right_value921 = (void*)0;
char* __dec_obj367;
struct sCallerLineNode* __result512__;
    if(    self==(void*)0) {
        __result511__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result511__;
    }
    result_888=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_888->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj367=result_888->sname;
        result_888->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_888->sline_real=self->sline_real;
    }
    __result512__ = gComeFunResultObject = __result_obj__ = result_888;
    come_call_finalizer3(result_888,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result512__;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result514__;
void* __right_value925 = (void*)0;
struct sCallerSNameNode* result_889;
void* __right_value926 = (void*)0;
char* __dec_obj368;
struct sCallerSNameNode* __result515__;
    if(    self==(void*)0) {
        __result514__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result514__;
    }
    result_889=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_889->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj368=result_889->sname;
        result_889->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_889->sline_real=self->sline_real;
    }
    __result515__ = gComeFunResultObject = __result_obj__ = result_889;
    come_call_finalizer3(result_889,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result515__;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result517__;
void* __right_value931 = (void*)0;
struct sVarArgTypeName* result_893;
void* __right_value932 = (void*)0;
char* __dec_obj369;
void* __right_value933 = (void*)0;
struct sType* __dec_obj370;
struct sVarArgTypeName* __result518__;
    if(    self==(void*)0) {
        __result517__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result517__;
    }
    result_893=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_893->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj369=result_893->sname;
        result_893->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_893->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj370=result_893->type;
        result_893->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj370,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result518__ = gComeFunResultObject = __result_obj__ = result_893;
    come_call_finalizer3(result_893,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result518__;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result521__;
void* __right_value945 = (void*)0;
struct sInlineAssembler* result_899;
void* __right_value946 = (void*)0;
char* __dec_obj371;
void* __right_value947 = (void*)0;
char* __dec_obj372;
void* __right_value948 = (void*)0;
struct list$1sNodeph* __dec_obj373;
struct sInlineAssembler* __result522__;
    if(    self==(void*)0) {
        __result521__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result521__;
    }
    result_899=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_899->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj371=result_899->sname;
        result_899->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_899->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj372=result_899->source;
        result_899->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj373=result_899->exps;
        result_899->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj373,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result522__ = gComeFunResultObject = __result_obj__ = result_899;
    come_call_finalizer3(result_899,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result522__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_902;
unsigned int hash_903;
unsigned int it_904;
struct sType* __result524__;
struct sType* __result525__;
struct sType* __result526__;
struct sType* __result527__;
default_value_902 = (void*)0;
    memset(&default_value_902,0,sizeof(struct sType*));
    hash_903=charp_get_hash_key(((char*)key))%self->size;
    it_904=hash_903;
    while((_Bool)1) {
        if(        self->item_existance[it_904]) {
            if(            charp_equals(self->keys[it_904],key)) {
                __result524__ = gComeFunResultObject = __result_obj__ = self->items[it_904];
                come_call_finalizer3(default_value_902,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result524__;
            }
            it_904++;
            if(            it_904>=self->size) {
                it_904=0;
            }
            else if(            it_904==hash_903) {
                __result525__ = gComeFunResultObject = __result_obj__ = default_value_902;
                come_call_finalizer3(default_value_902,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result525__;
            }
        }
        else {
            __result526__ = gComeFunResultObject = __result_obj__ = default_value_902;
            come_call_finalizer3(default_value_902,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result526__;
        }
    }
    __result527__ = gComeFunResultObject = __result_obj__ = default_value_902;
    come_call_finalizer3(default_value_902,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result527__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value971 = (void*)0;
struct sNode* __result535__;
    __result535__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value971=expression_node_v99(info)));
    if(__right_value971) { __right_value971 = come_decrement_ref_count2(__right_value971, ((struct sNode*)__right_value971)->finalize, ((struct sNode*)__right_value971)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result535__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sNode* __dec_obj375;
struct sNode* __result536__;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* __dec_obj376;
struct sNode* __result537__;
struct sNode* __result538__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj375=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj375) { __dec_obj375 = come_decrement_ref_count2(__dec_obj375, ((struct sNode*)__dec_obj375)->finalize, ((struct sNode*)__dec_obj375)->_protocol_obj, 0,0,0, (void*)0); };
        __result536__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result536__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj376=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj376) { __dec_obj376 = come_decrement_ref_count2(__dec_obj376, ((struct sNode*)__dec_obj376)->finalize, ((struct sNode*)__dec_obj376)->_protocol_obj, 0,0,0, (void*)0); };
        __result537__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result537__;
    }
    __result538__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result538__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value976 = (void*)0;
struct sNode* node_915;
void* __right_value977 = (void*)0;
struct sNode* __dec_obj377;
struct sNode* __result539__;
    node_915=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj377=node_915;
    node_915=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_915),info));
    if(__dec_obj377) { __dec_obj377 = come_decrement_ref_count2(__dec_obj377, ((struct sNode*)__dec_obj377)->finalize, ((struct sNode*)__dec_obj377)->_protocol_obj, 0,0,0, (void*)0); };
    __result539__ = gComeFunResultObject = __result_obj__ = node_915;
    if(node_915) { node_915 = come_decrement_ref_count2(node_915, ((struct sNode*)node_915)->finalize, ((struct sNode*)node_915)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result539__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_916;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct buffer* buf_917;
void* __right_value980 = (void*)0;
char* __dec_obj378;
int i_918;
void* __right_value981 = (void*)0;
char* __dec_obj379;
void* __right_value982 = (void*)0;
char* __dec_obj380;
int i_919;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
char* __result540__;
struct_name_916 = (void*)0;
    buf_917=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2600, "struct buffer*", (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj378=struct_name_916;
        struct_name_916=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_918=0;            i_918<obj_type->mOriginalTypeNamePointerNum;            i_918++            ){
                buffer_append_str(buf_917,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj379=struct_name_916;
        struct_name_916=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj380=struct_name_916;
        struct_name_916=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_919=0;        i_919<obj_type->mPointerNum;        i_919++        ){
            buffer_append_str(buf_917,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_917,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_917,"pa");
    }
    __result540__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value984=xsprintf("%s%s_%s",struct_name_916,((char*)(__right_value983=buffer_to_string(buf_917))),fun_name)));
    struct_name_916 = come_decrement_ref_count2(struct_name_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_917,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value984 = come_decrement_ref_count2(__right_value984, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result540__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_920;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct buffer* buf_921;
void* __right_value987 = (void*)0;
char* __dec_obj381;
void* __right_value988 = (void*)0;
char* __dec_obj382;
int i_922;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
char* __result541__;
struct_name_920 = (void*)0;
    buf_921=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2635, "struct buffer*", (void*)0, (void*)0))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj381=struct_name_920;
        struct_name_920=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj382=struct_name_920;
        struct_name_920=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_922=0;        i_922<obj_type->mPointerNum;        i_922++        ){
            buffer_append_str(buf_921,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_921,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_921,"pa");
    }
    __result541__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value990=xsprintf("%s%s_%s",struct_name_920,((char*)(__right_value989=buffer_to_string(buf_921))),fun_name)));
    struct_name_920 = come_decrement_ref_count2(struct_name_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_921,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value989 = come_decrement_ref_count2(__right_value989, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result541__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_923;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct buffer* buf_924;
void* __right_value993 = (void*)0;
char* __dec_obj383;
int i_925;
void* __right_value994 = (void*)0;
char* __dec_obj384;
void* __right_value995 = (void*)0;
char* __dec_obj385;
int i_926;
void* __right_value996 = (void*)0;
int len_928;
void* __right_value997 = (void*)0;
char* __result542__;
struct_name_923 = (void*)0;
    buf_924=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2661, "struct buffer*", (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj383=struct_name_923;
        struct_name_923=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_925=0;            i_925<obj_type->mOriginalTypeNamePointerNum;            i_925++            ){
                buffer_append_str(buf_924,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj384=struct_name_923;
        struct_name_923=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj385=struct_name_923;
        struct_name_923=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_926=0;        i_926<obj_type->mPointerNum;        i_926++        ){
            buffer_append_str(buf_924,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_924,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_924,"pa");
    }
    char none_method_name_927[charp_length(fun_name)+1];
    memset(&none_method_name_927, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_928=string_length(struct_name_923)+string_length(((char*)(__right_value996=buffer_to_string(buf_924))));
    __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_927,fun_name+len_928+1,charp_length(fun_name)-len_928-1);
    none_method_name_927[charp_length(fun_name)-len_928-1]=0;
    __result542__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value997=__builtin_string(none_method_name_927)));
    struct_name_923 = come_decrement_ref_count2(struct_name_923, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result542__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value998 = (void*)0;
char* struct_name_929;
void* __right_value999 = (void*)0;
char* __result543__;
    struct_name_929=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result543__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value999=xsprintf("%s_%s",struct_name_929,fun_name)));
    struct_name_929 = come_decrement_ref_count2(struct_name_929, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result543__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result544__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result544__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result544__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_930;
char* p_931;
int sline_932;
_Bool err_flag_933;
void* __right_value1002 = (void*)0;
char* label_934;
void* __right_value1003 = (void*)0;
char* __dec_obj386;
char* __dec_obj387;
_Bool no_comma_935;
_Bool in_fun_param_936;
void* __right_value1004 = (void*)0;
struct sNode* node_937;
void* __right_value1005 = (void*)0;
struct sNode* __dec_obj388;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1014 = (void*)0;
struct sNode* __result547__;
struct sNode* __result548__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_930=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2724, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_931=info->p;
            sline_932=info->sline;
            err_flag_933=(_Bool)0;
            label_934=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj386=label_934;
                label_934=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj386 = come_decrement_ref_count2(__dec_obj386, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_933=(_Bool)1;
            }
            if(            err_flag_933==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj387=label_934;
                label_934=((void*)0);
                __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_931;
                info->sline=sline_932;
            }
            no_comma_935=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_936=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_937=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj388=node_937;
            node_937=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_937),info));
            if(__dec_obj388) { __dec_obj388 = come_decrement_ref_count2(__dec_obj388, ((struct sNode*)__dec_obj388)->finalize, ((struct sNode*)__dec_obj388)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_935;
            info->in_fun_param=in_fun_param_936;
            list$1tuple2$2charphsNodephph_push_back(params_930,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2767, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(label_934),(struct sNode*)come_increment_ref_count(node_937))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_934 = come_decrement_ref_count2(label_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_937) { node_937 = come_decrement_ref_count2(node_937, ((struct sNode*)node_937)->finalize, ((struct sNode*)node_937)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_934 = come_decrement_ref_count2(label_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_937) { node_937 = come_decrement_ref_count2(node_937, ((struct sNode*)node_937)->finalize, ((struct sNode*)node_937)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2785, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1009=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2785, "struct sLambdaCall*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_930,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result547__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1014=_inf_value21));
        come_call_finalizer3(params_930,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1009,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1014) { __right_value1014 = come_decrement_ref_count2(__right_value1014, ((struct sNode*)__right_value1014)->finalize, ((struct sNode*)__right_value1014)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result547__;
        come_call_finalizer3(params_930,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result548__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result548__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result545__;
void* __right_value1010 = (void*)0;
struct sLambdaCall* result_938;
void* __right_value1011 = (void*)0;
char* __dec_obj389;
void* __right_value1012 = (void*)0;
struct sNode* __dec_obj390;
void* __right_value1013 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj391;
struct sLambdaCall* __result546__;
    if(    self==(void*)0) {
        __result545__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result545__;
    }
    result_938=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_938->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj389=result_938->sname;
        result_938->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_938->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj390=result_938->node;
        result_938->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj390) { __dec_obj390 = come_decrement_ref_count2(__dec_obj390, ((struct sNode*)__dec_obj390)->finalize, ((struct sNode*)__dec_obj390)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj391=result_938->params;
        result_938->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj391,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result546__ = gComeFunResultObject = __result_obj__ = result_938;
    come_call_finalizer3(result_938,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result546__;
}

