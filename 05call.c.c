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
int poll(struct pollfd* anonymous_var_nameX852, unsigned long  int anonymous_var_nameX853, int anonymous_var_nameX854);
int ppoll(struct pollfd* anonymous_var_nameX855, unsigned long  int anonymous_var_nameX856, const struct timespec* anonymous_var_nameX857, const struct __sigset_t* anonymous_var_nameX858);
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
unsigned char* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_114;
struct buffer* __result58__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3794, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_114,self,sizeof(char)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_115;
int i_116;
struct buffer* __result59__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3801, "struct buffer*", (void*)0, (void*)0))));
    for(    i_116=0;    i_116<len;    i_116++    ){
        buffer_append(result_115,self[i_116],strlen(self[i_116]));
    }
    __result59__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_117;
struct buffer* __result60__;
    result_117=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3810, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_117,(char*)self,sizeof(short)*len);
    __result60__ = gComeFunResultObject = __result_obj__ = result_117;
    come_call_finalizer3(result_117,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_118;
struct buffer* __result61__;
    result_118=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3817, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_118,(char*)self,sizeof(int)*len);
    __result61__ = gComeFunResultObject = __result_obj__ = result_118;
    come_call_finalizer3(result_118,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_119;
struct buffer* __result62__;
    result_119=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3824, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_119,(char*)self,sizeof(long)*len);
    __result62__ = gComeFunResultObject = __result_obj__ = result_119;
    come_call_finalizer3(result_119,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_120;
struct buffer* __result63__;
    result_120=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3831, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_120,(char*)self,sizeof(float)*len);
    __result63__ = gComeFunResultObject = __result_obj__ = result_120;
    come_call_finalizer3(result_120,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_121;
struct buffer* __result64__;
    result_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3838, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_121,(char*)self,sizeof(double)*len);
    __result64__ = gComeFunResultObject = __result_obj__ = result_121;
    come_call_finalizer3(result_121,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4166, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4171, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4176, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4181, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4186, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_127;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result75__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4219, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_127,(char*)self,sizeof(char)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4221, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_128;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result77__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4226, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_128,(char*)self,sizeof(char*)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4228, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_128))));
    come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_129;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result78__;
    buf_129=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4233, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_129,(char*)self,sizeof(short)*len);
    __result78__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4235, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_129))));
    come_call_finalizer3(buf_129,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_130;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result79__;
    buf_130=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4240, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_130,(char*)self,sizeof(int)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4242, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_130))));
    come_call_finalizer3(buf_130,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_131;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result80__;
    buf_131=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4247, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_131,(char*)self,sizeof(long)*len);
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4249, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_131))));
    come_call_finalizer3(buf_131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_132;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result82__;
    buf_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4254, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_132,(char*)self,sizeof(float)*len);
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4256, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_132))));
    come_call_finalizer3(buf_132,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_133;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result84__;
    buf_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4261, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_133,(char*)self,sizeof(double)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4263, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_133))));
    come_call_finalizer3(buf_133,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4268, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4273, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4278, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result96__;
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4283, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4288, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4293, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4298, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4303, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result109__;
    __result109__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4308, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result109__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4313, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4318, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result115__;
    __result115__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4323, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4328, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4333, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_191;
int i_192;
    result_191=(_Bool)0;
    for(    i_192=0;    i_192<len;    i_192++    ){
        if(        strncmp(self[i_192],str,strlen(self[i_192]))==0) {
            result_191=(_Bool)1;
            break;
        }
    }
    return result_191;
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
char* __result160__;
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result161__;
    __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result66__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
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
struct smart_pointer$1short* __result69__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
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
struct smart_pointer$1int* __result71__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
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
struct smart_pointer$1long* __result73__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
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
struct smart_pointer$1charp* __result76__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
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
struct smart_pointer$1float* __result81__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
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
struct smart_pointer$1double* __result83__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
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
int i_134;
struct list$1char* __result86__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1char_push_back(self,values[i_134]);
    }
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_135;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_136;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_137;
struct list$1char* __result85__;
    if(    self->len==0) {
        litem_135=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1305, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1315, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1325, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_138;
struct list_item$1char* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        come_call_finalizer3(prev_it_139,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1charp* __result89__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1charp_push_back(self,values[i_140]);
    }
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_141;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_142;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_143;
struct list$1charp* __result88__;
    if(    self->len==0) {
        litem_141=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1305, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1315, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1325, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_144;
struct list_item$1charp* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        come_call_finalizer3(prev_it_145,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1short* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1short_push_back(self,values[i_146]);
    }
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_147;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_148;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_149;
struct list$1short* __result91__;
    if(    self->len==0) {
        litem_147=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1305, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1315, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1325, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_150;
struct list_item$1short* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        come_call_finalizer3(prev_it_151,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1int* __result95__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1int_push_back(self,values[i_152]);
    }
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_153;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_154;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_155;
struct list$1int* __result94__;
    if(    self->len==0) {
        litem_153=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1305, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1315, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1325, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_156;
struct list_item$1int* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1long* __result98__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1long_push_back(self,values[i_158]);
    }
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_159;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_160;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_161;
struct list$1long* __result97__;
    if(    self->len==0) {
        litem_159=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1305, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1315, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1325, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_162;
struct list_item$1long* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1float* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1float_push_back(self,values[i_164]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_165;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_166;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_167;
struct list$1float* __result100__;
    if(    self->len==0) {
        litem_165=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1305, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1315, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1325, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_168;
struct list_item$1float* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_170;
struct list$1double* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0;    i_170<num_value;    i_170++    ){
        list$1double_push_back(self,values[i_170]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_171;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_172;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_173;
struct list$1double* __result103__;
    if(    self->len==0) {
        litem_171=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1305, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1) {
        litem_172=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1315, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1325, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_174;
struct list_item$1double* prev_it_175;
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer3(prev_it_175,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result106__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2097, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result108__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2097, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
            self->items[i_177] = come_decrement_ref_count2(self->items[i_177], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result110__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2097, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_178;
    if(    0) {
        for(        i_178=0;        i_178<self->len;        i_178++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result112__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2097, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_179;
    if(    0) {
        for(        i_179=0;        i_179<self->len;        i_179++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result114__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2097, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_180;
    if(    0) {
        for(        i_180=0;        i_180<self->len;        i_180++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result116__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2097, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_181;
    if(    0) {
        for(        i_181=0;        i_181<self->len;        i_181++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result118__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2097, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_182;
    if(    0) {
        for(        i_182=0;        i_182<self->len;        i_182++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result156__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_214;
struct list_item$1charph* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_219;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_220;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_221;
char* __dec_obj30;
struct list$1charph* __result158__;
    if(    self->len==0) {
        litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1305, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        __dec_obj28=litem_219->item;
        litem_219->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1) {
        litem_220=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1315, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        __dec_obj29=litem_220->item;
        litem_220->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1325, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        __dec_obj30=litem_221->item;
        litem_221->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value250 = (void*)0;
char* __dec_obj33;
struct sReturnNode* __result214__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj33=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sReturnNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_272;
void* __right_value291 = (void*)0;
struct sType* result_type_273;
void* __right_value292 = (void*)0;
struct sType* result_type2_302;
struct sType* result_type3_303;
void* __right_value293 = (void*)0;
_Bool _if_conditional1;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj85;
_Bool Value_304;
_Bool __result233__;
void* __right_value295 = (void*)0;
struct CVALUE* come_value_305;
void* __right_value296 = (void*)0;
struct sType* come_value_type_306;
void* __right_value297 = (void*)0;
struct sType* __dec_obj86;
void* __right_value298 = (void*)0;
char* var_name_308;
int num_result_stack_309;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __if_result__0_310 = (void*)0;
struct list$1sVarph* o2_saved_311;
struct sVar* it_314;
struct list$1sVarph* __dec_obj92;
void* __right_value301 = (void*)0;
struct sFun* come_fun_321;
void* __if_result__1_322 = (void*)0;
struct list$1sVarph* o2_saved_323;
struct sVar* it_324;
struct list$1sVarph* __dec_obj96;
void* __right_value302 = (void*)0;
    if(    self->value) {
        come_fun_272=info->come_fun;
        result_type_273=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_272->mResultType));
        result_type2_302=(struct sType*)come_increment_ref_count(solve_generics(result_type_273,info->generics_type,info));
        result_type3_303=result_type2_302->mNoSolvedGenericsType->v1;
        if(        result_type2_302->mNoSolvedGenericsType->v1) {
            result_type3_303=result_type2_302->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_303=result_type2_302;
        }
        if(        result_type_273->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value293=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj85=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_304=node_compile(self->value,info);
        if(        !Value_304) {
            __result233__ = (_Bool)0;
            come_call_finalizer3(result_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_302,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result233__;
        }
        else {
        }
        come_value_305=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_306=(struct sType*)come_increment_ref_count(solve_generics(come_value_305->type,info->generics_type,info));
        __dec_obj86=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_305->type));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_305->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_272->mBlock,info,come_value_305->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_305->c_value);
        }
        else {
            static int num_result_307=0;
            var_name_308=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_307));
            num_result_stack_309=num_result_307;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_302->mClass->mName)>strlen("tuple")&&memcmp(result_type2_302->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_302,come_value_type_306,come_value_305,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value299=make_define_var(result_type2_302,var_name_308,(_Bool)0,info))));
                __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_308,come_value_305->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value300=make_define_var(result_type2_302,var_name_308,(_Bool)0,info))));
                __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_308,come_value_305->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_272->mBlock,info,come_value_305->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_311=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_314=list$1sVarph_begin((o2_saved_311));                    !list$1sVarph_end((o2_saved_311));                    it_314=list$1sVarph_next((o2_saved_311))                    ){
                        free_object(it_314->mType,it_314->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_311,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj92=info->match_it_var;
                    __if_result__0_310=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj92,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_310,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value301=xsprintf("come_heap_final();\n"))));
                __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_309);
            var_name_308 = come_decrement_ref_count2(var_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_302,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_321=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_321->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_323=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_324=list$1sVarph_begin((o2_saved_323));                !list$1sVarph_end((o2_saved_323));                it_324=list$1sVarph_next((o2_saved_323))                ){
                    free_object(it_324->mType,it_324->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_323,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj96=info->match_it_var;
                __if_result__1_322=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj96,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_322,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value302=xsprintf("come_heap_final();\n"))));
            __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
struct sType* __result216__;
void* __right_value252 = (void*)0;
struct sType* result_274;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value258 = (void*)0;
char* __dec_obj62;
void* __right_value259 = (void*)0;
char* __dec_obj63;
void* __right_value266 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __dec_obj71;
void* __right_value275 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value282 = (void*)0;
struct list$1charph* __dec_obj76;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj77;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value285 = (void*)0;
struct tuple1$1sTypeph* __dec_obj79;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value287 = (void*)0;
char* __dec_obj81;
void* __right_value288 = (void*)0;
char* __dec_obj82;
void* __right_value289 = (void*)0;
char* __dec_obj83;
void* __right_value290 = (void*)0;
char* __dec_obj84;
struct sType* __result232__;
    if(    self==(void*)0) {
        __result216__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_274=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_274->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj59=result_274->mNoSolvedGenericsType;
        result_274->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj60=result_274->mOriginalLoadVarType;
        result_274->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj61=result_274->mRefferenceOriginalType;
        result_274->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj62=result_274->mInterfaceName;
        result_274->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj63=result_274->mGenericsName;
        result_274->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj67=result_274->mGenericsTypes;
        result_274->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj71=result_274->mArrayNum;
        result_274->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_274->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj72=result_274->mParamTypes;
        result_274->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj76=result_274->mParamNames;
        result_274->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj77=result_274->mResultType;
        result_274->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_274->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj78=result_274->mAlignas;
        result_274->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj79=result_274->mChannelType;
        result_274->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_274->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_274->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_274->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_274->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_274->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_274->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_274->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_274->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_274->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_274->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_274->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_274->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_274->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_274->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_274->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_274->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_274->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_274->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_274->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_274->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_274->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_274->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_274->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_274->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_274->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_274->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj80=result_274->mSizeNum;
        result_274->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_274->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj81=result_274->mOriginalTypeName;
        result_274->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_274->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_274->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_274->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_274->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_274->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_274->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_274->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_274->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj82=result_274->mAsmName;
        result_274->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_274->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_274->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_274->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_274->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_274->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_274->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj83=result_274->mTupleName;
        result_274->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj84=result_274->mAttribute;
        result_274->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_274->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_274;
    come_call_finalizer3(result_274,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result217__;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* result_275;
void* __right_value254 = (void*)0;
struct sType* __dec_obj37;
struct tuple1$1sTypeph* __result218__;
    if(    self==(void*)0) {
        __result217__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_275=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj37=result_275->v1;
        result_275->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result218__ = gComeFunResultObject = __result_obj__ = result_275;
    come_call_finalizer3(result_275,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj40;
struct tuple1$1sTypeph* __dec_obj41;
char* __dec_obj42;
char* __dec_obj43;
struct list$1sTypeph* __dec_obj44;
struct list$1sNodeph* __dec_obj46;
struct list$1sTypeph* __dec_obj48;
struct list$1charph* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj51;
struct tuple1$1sTypeph* __dec_obj52;
struct sNode* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
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
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj42=self->mInterfaceName;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj43=self->mGenericsName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj44=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj46=self->mArrayNum;
            come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj48=self->mParamTypes;
            come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj49=self->mParamNames;
            come_call_finalizer3(__dec_obj49,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj50=self->mResultType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj51=self->mAlignas;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj52=self->mChannelType;
            come_call_finalizer3(__dec_obj52,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj53=self->mSizeNum;
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj54=self->mOriginalTypeName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj55=self->mAsmName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj56=self->mTupleName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj57=self->mAttribute;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct list_item$1sTypeph* it_276;
struct list_item$1sTypeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_278;
struct list_item$1sTypeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_280;
struct list_item$1sNodeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_282;
struct list_item$1sNodeph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_284;
struct list_item$1charph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer3(prev_it_285,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj58;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj58=self->v1;
            come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result219__;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1sTypeph* result_286;
struct list_item$1sTypeph* it_287;
void* __right_value265 = (void*)0;
struct list$1sTypeph* __result222__;
    if(    self==((void*)0)) {
        __result219__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_286=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_287=self->head;
    while(it_287!=((void*)0)) {
        list$1sTypeph_add(result_286,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_287->item)));
        it_287=it_287->next;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_286;
    come_call_finalizer3(result_286,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result220__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_288;
struct sType* __dec_obj64;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_289;
struct sType* __dec_obj65;
void* __right_value264 = (void*)0;
struct list_item$1sTypeph* litem_290;
struct sType* __dec_obj66;
struct list$1sTypeph* __result221__;
    if(    self->len==0) {
        litem_288=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_288->prev=((void*)0);
        litem_288->next=((void*)0);
        __dec_obj64=litem_288->item;
        litem_288->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_288;
        self->head=litem_288;
    }
    else if(    self->len==1) {
        litem_289=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_289->prev=self->head;
        litem_289->next=((void*)0);
        __dec_obj65=litem_289->item;
        litem_289->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_289;
        self->head->next=litem_289;
    }
    else {
        litem_290=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value264=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_290->prev=self->tail;
        litem_290->next=((void*)0);
        __dec_obj66=litem_290->item;
        litem_290->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_290;
        self->tail=litem_290;
    }
    self->len++;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result223__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sNodeph* result_291;
struct list_item$1sNodeph* it_292;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __result228__;
    if(    self==((void*)0)) {
        __result223__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_291=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_292=self->head;
    while(it_292!=((void*)0)) {
        list$1sNodeph_add(result_291,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_292->item)));
        it_292=it_292->next;
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result224__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj68;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_294;
struct sNode* __dec_obj69;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_295;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result225__;
    if(    self->len==0) {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_293->prev=((void*)0);
        litem_293->next=((void*)0);
        __dec_obj68=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_293;
        self->head=litem_293;
    }
    else if(    self->len==1) {
        litem_294=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_294->prev=self->head;
        litem_294->next=((void*)0);
        __dec_obj69=litem_294->item;
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_294;
        self->head->next=litem_294;
    }
    else {
        litem_295=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_295->prev=self->tail;
        litem_295->next=((void*)0);
        __dec_obj70=litem_295->item;
        litem_295->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_295;
        self->tail=litem_295;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result226__;
void* __right_value272 = (void*)0;
struct sNode* result_296;
struct sNode* __result227__;
    if(    self==(void*)0) {
        __result226__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_296=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_296->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_296->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_296->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_296->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_296->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_296->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_296->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_296->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_296->kind=self->kind;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_296;
    if(result_296) { result_296 = come_decrement_ref_count2(result_296, ((struct sNode*)result_296)->finalize, ((struct sNode*)result_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result229__;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1charph* result_297;
struct list_item$1charph* it_298;
void* __right_value281 = (void*)0;
struct list$1charph* __result231__;
    if(    self==((void*)0)) {
        __result229__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_297=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_298=self->head;
    while(it_298!=((void*)0)) {
        list$1charph_add(result_297,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_298->item)));
        it_298=it_298->next;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_297;
    come_call_finalizer3(result_297,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_299;
char* __dec_obj73;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_300;
char* __dec_obj74;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_301;
char* __dec_obj75;
struct list$1charph* __result230__;
    if(    self->len==0) {
        litem_299=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj73=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj74=litem_300->item;
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj75=litem_301->item;
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_312;
struct sVar* __result234__;
struct sVar* __result235__;
struct sVar* result_313;
struct sVar* __result236__;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_312,0,sizeof(struct sVar*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_312;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->head;
    if(    self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_313,0,sizeof(struct sVar*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_313;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_315;
struct sVar* __result237__;
struct sVar* __result238__;
struct sVar* result_316;
struct sVar* __result239__;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_315,0,sizeof(struct sVar*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_315;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_316,0,sizeof(struct sVar*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_316;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_317;
struct list_item$1sVarph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj87;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj87=self->item;
            come_call_finalizer3(__dec_obj87,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj88;
char* __dec_obj89;
struct sType* __dec_obj90;
char* __dec_obj91;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj88=self->mName;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj89=self->mCValueName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj90=self->mType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj91=self->mFunName;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_319;
struct list_item$1sVarph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj93;
struct sType* __dec_obj94;
char* __dec_obj95;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj93=self->c_value;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj94=self->type;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj95=self->c_value_without_right_value_objects;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __dec_obj97;
struct sOutputNode* __result240__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result241__;
    __result241__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sOutputNode")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj98=self->sname;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj99=self->contents;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
char* __dec_obj100;
struct list$1sNodeph* __dec_obj101;
struct sInlineAssembler* __result242__;
    ((struct sNodeBase*)(__right_value305=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value305,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj100=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj101=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj101,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
char* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value306=__builtin_string("sInlineAssembler")));
    __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_325;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_326;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct buffer* buf_327;
char* p_328;
_Bool dquort_329;
int num_exp_330;
void* __right_value311 = (void*)0;
struct sNode* node_331;
_Bool Value_335;
_Bool __result246__;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_336;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* __dec_obj105;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj106;
_Bool __result248__;
    source_325=(char*)come_increment_ref_count(self->source);
    come_value_326=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "struct CVALUE*", (void*)0, (void*)0))));
    buf_327=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "struct buffer*", (void*)0, (void*)0))));
    p_328=source_325;
    while(*p_328!=40) {
        buffer_append_char(buf_327,*p_328);
        p_328++;
    }
    if(    *p_328==40) {
        buffer_append_char(buf_327,*p_328);
        p_328++;
        while(*p_328==32||*p_328==9||*p_328==10) {
            buffer_append_char(buf_327,*p_328);
            p_328++;
        }
    }
    dquort_329=(_Bool)0;
    num_exp_330=0;
    while(*p_328) {
        if(        *p_328==34) {
            buffer_append_char(buf_327,*p_328);
            p_328++;
            dquort_329=!dquort_329;
        }
        else if(        dquort_329) {
            buffer_append_char(buf_327,*p_328);
            p_328++;
        }
        else if(        *p_328==40) {
            buffer_append_char(buf_327,*p_328);
            p_328++;
            node_331=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_330++));
            Value_335=node_compile(node_331,info);
            if(            !Value_335) {
                __result246__ = (_Bool)0;
                if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_325 = come_decrement_ref_count2(source_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_326,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_327,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result246__;
            }
            else {
            }
            come_value_336=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_327,come_value_336->c_value);
            if(            *p_328==41) {
                buffer_append_char(buf_327,*p_328);
                p_328++;
            }
            if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_336,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_327,*p_328);
            p_328++;
        }
    }
    __dec_obj105=come_value_326->c_value;
    come_value_326->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value313=buffer_to_string(buf_327)))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj106=come_value_326->type;
    come_value_326->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_326->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_326));
    add_come_last_code(info,"%s",come_value_326->c_value);
    __result248__ = (_Bool)1;
    source_325 = come_decrement_ref_count2(source_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_326,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_327,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result248__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj102;
char* __dec_obj103;
struct list$1sNodeph* __dec_obj104;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj102=self->sname;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj103=self->source;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj104=self->exps;
            come_call_finalizer3(__dec_obj104,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_332;
int i_333;
struct sNode* __result244__;
struct sNode* default_value_334;
struct sNode* __result245__;
default_value_334 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_332=self->head;
    i_333=0;
    while(it_332!=((void*)0)) {
        if(        position==i_333) {
            __result244__ = gComeFunResultObject = __result_obj__ = it_332->item;
            gComeFunResultObject = (void*)0;
            return __result244__;
        }
        it_332=it_332->next;
        i_333++;
    }
    memset(&default_value_334,0,sizeof(struct sNode*));
    __result245__ = gComeFunResultObject = __result_obj__ = default_value_334;
    if(default_value_334) { default_value_334 = come_decrement_ref_count2(default_value_334, ((struct sNode*)default_value_334)->finalize, ((struct sNode*)default_value_334)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
struct list_item$1CVALUEph* litem_337;
struct CVALUE* __dec_obj107;
void* __right_value318 = (void*)0;
struct list_item$1CVALUEph* litem_338;
struct CVALUE* __dec_obj108;
void* __right_value319 = (void*)0;
struct list_item$1CVALUEph* litem_339;
struct CVALUE* __dec_obj109;
struct list$1CVALUEph* __result247__;
    if(    self->len==0) {
        litem_337=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value317=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj107=litem_337->item;
        litem_337->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value318=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj108=litem_338->item;
        litem_338->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value319=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj109=litem_339->item;
        litem_339->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct sCurrentNode2* __result249__;
    ((struct sNodeBase*)(__right_value320=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value320,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value321=__builtin_string(self->sname)));
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value322=__builtin_string("sCurrentNode")));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value323 = (void*)0;
char* class_name_340;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sClass* current_stack_341;
struct sVarTable* vtable_342;
struct map$2charphsVarph* o2_saved_343;
char* it_346;
char* key_349;
void* __right_value326 = (void*)0;
struct sVar* value_350;
void* __right_value327 = (void*)0;
struct sType* type2_354;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct tuple2$2charphsTypeph* item_355;
void* __right_value331 = (void*)0;
struct sType* type3_356;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct tuple2$2charphsTypeph* item2_359;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct map$2charphsVarph* o2_saved_411;
char* it_412;
char* key_413;
void* __right_value348 = (void*)0;
struct sVar* value_414;
void* __right_value349 = (void*)0;
struct sType* type2_415;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple2$2charphsTypeph* item_416;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value354 = (void*)0;
char* __dec_obj128;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* __dec_obj129;
_Bool __result288__;
    info->current_stack_num++;
    class_name_340=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_341=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 457, "struct sClass*", (void*)0, (void*)0)),class_name_340,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_342=info->lv_table;
    while(vtable_342) {
        for(        o2_saved_343=(struct map$2charphsVarph*)come_increment_ref_count((vtable_342->mVars)),it_346=map$2charphsVarph_begin((o2_saved_343));        !map$2charphsVarph_end((o2_saved_343));        it_346=map$2charphsVarph_next((o2_saved_343))        ){
            key_349=it_346;
            value_350=((struct sVar*)come_null_check(((struct sVar*)(__right_value326=map$2charphsVarphp_operator_load_element(vtable_342->mVars,key_349))), "common.h", 464, 1));
            come_call_finalizer3(__right_value326,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_354=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_350->mType));
            type2_354->mPointerNum++;
            item_355=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 470, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_350->mCValueName)),(struct sType*)come_increment_ref_count(type2_354)));
            if(            value_350->mCValueName!=((void*)0)) {
                if(                strcmp(value_350->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_350->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_350->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_350->mType->mClass->mName,"va_list")||string_operator_equals(value_350->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_354->mArrayNum)==1) {
                    type3_356=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_354));
                    list$1sNodeph_reset(type3_356->mArrayNum);
                    type3_356->mPointerNum=1;
                    type3_356->mOriginIsArray=(_Bool)1;
                    item2_359=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 490, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(value_350->mCValueName)),(struct sType*)come_increment_ref_count(type3_356)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_341->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item2_359)));
                    value_350->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_359,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_341->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, item_355)));
                }
            }
            come_call_finalizer3(type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_355,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_343,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_342=vtable_342->mParent;
    }
    output_struct(current_stack_341,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_340),(struct sClass*)come_increment_ref_count(current_stack_341));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_340,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_340);
    vtable_342=info->lv_table;
    while(vtable_342) {
        for(        o2_saved_411=(struct map$2charphsVarph*)come_increment_ref_count((vtable_342->mVars)),it_412=map$2charphsVarph_begin((o2_saved_411));        !map$2charphsVarph_end((o2_saved_411));        it_412=map$2charphsVarph_next((o2_saved_411))        ){
            key_413=it_412;
            value_414=((struct sVar*)come_null_check(((struct sVar*)(__right_value348=map$2charphsVarphp_operator_load_element(vtable_342->mVars,key_413))), "common.h", 515, 2));
            come_call_finalizer3(__right_value348,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_415=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_414->mType));
            item_416=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 519, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(value_414->mCValueName),(struct sType*)come_increment_ref_count(type2_415)));
            if(            value_414->mCValueName!=((void*)0)) {
                if(                strcmp(value_414->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_414->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_414->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_414->mType->mClass->mName,"va_list")||string_operator_equals(value_414->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_415->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_414->mCValueName,value_414->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_414->mCValueName,value_414->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_415,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_416,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_411,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_342=vtable_342->mParent;
    }
    come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 548, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj128=come_value_417->c_value;
    come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj129=come_value_417->type;
    come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 551, "struct sType*", (void*)0, (void*)0)),class_name_340,(_Bool)0,info));
    come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_417->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_417->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
    __result288__ = (_Bool)1;
    class_name_340 = come_decrement_ref_count2(class_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_341,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj110;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj110=self->sname;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_344;
char* __result252__;
char* __result253__;
char* result_345;
char* __result254__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_345,0,sizeof(char*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_347;
char* __result255__;
char* __result256__;
char* result_348;
char* __result257__;
result_347 = (void*)0;
result_348 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_347,0,sizeof(char*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_347;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_348,0,sizeof(char*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_348;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_351;
unsigned int hash_352;
unsigned int it_353;
struct sVar* __result258__;
struct sVar* __result259__;
struct sVar* __result260__;
struct sVar* __result261__;
default_value_351 = (void*)0;
    memset(&default_value_351,0,sizeof(struct sVar*));
    hash_352=charp_get_hash_key(((char*)key))%self->size;
    it_353=hash_352;
    while((_Bool)1) {
        if(        self->item_existance[it_353]) {
            if(            charp_equals(self->keys[it_353],key)) {
                __result258__ = gComeFunResultObject = __result_obj__ = self->items[it_353];
                come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result258__;
            }
            it_353++;
            if(            it_353>=self->size) {
                it_353=0;
            }
            else if(            it_353==hash_352) {
                __result259__ = gComeFunResultObject = __result_obj__ = default_value_351;
                come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
        }
        else {
            __result260__ = gComeFunResultObject = __result_obj__ = default_value_351;
            come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result260__;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = default_value_351;
    come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj111;
struct sType* __dec_obj112;
struct tuple2$2charphsTypeph* __result262__;
    __dec_obj111=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj113;
struct sType* __dec_obj114;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj113=self->v1;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj114=self->v2;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNodeph* it_357;
struct list_item$1sNodeph* prev_it_358;
struct list$1sNodeph* __result263__;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer3(prev_it_358,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_360;
struct tuple2$2charphsTypeph* __dec_obj115;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_361;
struct tuple2$2charphsTypeph* __dec_obj116;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_362;
struct tuple2$2charphsTypeph* __dec_obj117;
struct list$1tuple2$2charphsTypephph* __result264__;
    if(    self->len==0) {
        litem_360=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value335=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1305, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj115=litem_360->item;
        litem_360->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj115,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value336=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1315, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj116=litem_361->item;
        litem_361->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value337=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1325, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj117=litem_362->item;
        litem_362->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result265__;
void* __right_value338 = (void*)0;
struct tuple2$2charphsTypeph* result_363;
void* __right_value339 = (void*)0;
char* __dec_obj118;
void* __right_value340 = (void*)0;
struct sType* __dec_obj119;
struct tuple2$2charphsTypeph* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_363=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj118=result_363->v1;
        result_363->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj119=result_363->v2;
        result_363->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_363;
    come_call_finalizer3(result_363,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj120;
struct sType* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_364;
int i_365;
    for(    i_364=0;    i_364<self->size;    i_364++    ){
        if(        self->item_existance[i_364]) {
            if(            1) {
                come_call_finalizer3(self->items[i_364],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_365=0;    i_365<self->size;    i_365++    ){
        if(        self->item_existance[i_365]) {
            if(            1) {
                self->keys[i_365] = come_decrement_ref_count2(self->keys[i_365], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_387;
unsigned int it_388;
_Bool same_key_exist_405;
char* it2_408;
struct map$2charphsClassph* __result287__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_387=charp_get_hash_key(key)%self->size;
    it_388=hash_387;
    while((_Bool)1) {
        if(        self->item_existance[it_388]) {
            if(            charp_equals(self->keys[it_388],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_388]);
                    self->keys[it_388] = come_decrement_ref_count2(self->keys[it_388], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_388]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_388]);
                    self->keys[it_388]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_388],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_388]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_388]=item;
                }
                break;
            }
            it_388++;
            if(            it_388>=self->size) {
                it_388=0;
            }
            else if(            it_388==hash_387) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_388]=(_Bool)1;
            if(            1) {
                self->keys[it_388]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_388]=key;
            }
            if(            1) {
                self->items[it_388]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_388]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_405=(_Bool)0;
    for(    it2_408=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_408=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_408,key)) {
            same_key_exist_405=(_Bool)1;
        }
    }
    if(    !same_key_exist_405) {
        list$1charp_push_back(self->key_list,key);
    }
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_366;
void* __right_value343 = (void*)0;
char** keys_367;
void* __right_value344 = (void*)0;
struct sClass** items_368;
void* __right_value345 = (void*)0;
_Bool* item_existance_369;
int len_370;
char* it_373;
struct sClass* default_value_376;
void* __right_value346 = (void*)0;
struct sClass* it2_377;
unsigned int hash_384;
int n_385;
struct sClass* default_value_386;
void* __right_value347 = (void*)0;
default_value_376 = (void*)0;
default_value_386 = (void*)0;
    size_366=self->size*10;
    keys_367=(char**)come_increment_ref_count(((char**)(__right_value343=(char**)come_calloc(1, sizeof(char*)*(1*(size_366)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_368=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value344=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_366)), "./comelang.h", 2709, "struct sClass**", (void*)0, (void*)0))));
    item_existance_369=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value345=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_366)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_370=0;
    for(    it_373=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_373=map$2charphsClassph_next(self)    ){
        memset(&default_value_376,0,sizeof(struct sClass*));
        it2_377=((struct sClass*)(__right_value346=map$2charphsClassph_at(self,it_373,default_value_376)));
        come_call_finalizer3(__right_value346,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_384=charp_get_hash_key(it_373)%size_366;
        n_385=hash_384;
        while((_Bool)1) {
            if(            item_existance_369[n_385]) {
                n_385++;
                if(                n_385>=size_366) {
                    n_385=0;
                }
                else if(                n_385==hash_384) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_369[n_385]=(_Bool)1;
                keys_367[n_385]=it_373;
                items_368[n_385]=((struct sClass*)(__right_value347=map$2charphsClassph_at(self,it_373,default_value_386)));
                come_call_finalizer3(__right_value347,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_370++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_367;
    self->items=items_368;
    self->item_existance=item_existance_369;
    self->size=size_366;
    self->len=len_370;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_371;
char* __result267__;
char* __result268__;
char* result_372;
char* __result269__;
result_371 = (void*)0;
result_372 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_371,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_371;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_372,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_372;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_374;
char* __result270__;
char* __result271__;
char* result_375;
char* __result272__;
result_374 = (void*)0;
result_375 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_374,0,sizeof(char*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_374;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_375,0,sizeof(char*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_375;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_378;
unsigned int it_379;
struct sClass* __result273__;
struct sClass* __result274__;
struct sClass* __result275__;
struct sClass* __result276__;
    hash_378=charp_get_hash_key(((char*)key))%self->size;
    it_379=hash_378;
    while((_Bool)1) {
        if(        self->item_existance[it_379]) {
            if(            charp_equals(self->keys[it_379],key)) {
                __result273__ = gComeFunResultObject = __result_obj__ = self->items[it_379];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result273__;
            }
            it_379++;
            if(            it_379>=self->size) {
                it_379=0;
            }
            else if(            it_379==hash_378) {
                __result274__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result274__;
            }
        }
        else {
            __result275__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result275__;
        }
    }
    __result276__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj122;
struct list$1tuple2$2charphsTypephph* __dec_obj123;
char* __dec_obj125;
char* __dec_obj126;
char* __dec_obj127;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj122=self->mName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj123=self->mFields;
            come_call_finalizer3(__dec_obj123,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj125=self->mDeclareSName;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj126=self->mParentClassName;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj127=self->mAttribute;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_380;
struct list_item$1tuple2$2charphsTypephph* prev_it_381;
    it_380=self->head;
    while(it_380!=((void*)0)) {
        prev_it_381=it_380;
        it_380=it_380->next;
        come_call_finalizer3(prev_it_381,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj124;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj124=self->item;
            come_call_finalizer3(__dec_obj124,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_382;
struct list_item$1tuple2$2charphsTypephph* prev_it_383;
    it_382=self->head;
    while(it_382!=((void*)0)) {
        prev_it_383=it_382;
        it_382=it_382->next;
        come_call_finalizer3(prev_it_383,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_389;
struct list_item$1charp* it_390;
struct list$1charp* __result280__;
    it2_389=0;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        if(        charp_equals(it_390->item,item)) {
            list$1charp_delete(self,it2_389,it2_389+1);
            break;
        }
        it2_389++;
        it_390=it_390->next;
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_391;
struct list$1charp* __result277__;
struct list_item$1charp* it_394;
int i_395;
struct list_item$1charp* prev_it_396;
struct list_item$1charp* it_397;
int i_398;
struct list_item$1charp* prev_it_399;
struct list_item$1charp* it_400;
struct list_item$1charp* head_prev_it_401;
struct list_item$1charp* tail_it_402;
int i_403;
struct list_item$1charp* prev_it_404;
struct list$1charp* __result279__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_391=tail;
        tail=head;
        head=tmp_391;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result277__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_394=self->head;
        i_395=0;
        while(it_394!=((void*)0)) {
            if(            i_395<tail) {
                prev_it_396=it_394;
                it_394=it_394->next;
                i_395++;
                come_call_finalizer3(prev_it_396,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_395==tail) {
                self->head=it_394;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_394=it_394->next;
                i_395++;
            }
        }
    }
    else if(    tail==self->len) {
        it_397=self->head;
        i_398=0;
        while(it_397!=((void*)0)) {
            if(            i_398==head) {
                self->tail=it_397->prev;
                self->tail->next=((void*)0);
            }
            if(            i_398>=head) {
                prev_it_399=it_397;
                it_397=it_397->next;
                i_398++;
                come_call_finalizer3(prev_it_399,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_397=it_397->next;
                i_398++;
            }
        }
    }
    else {
        it_400=self->head;
        head_prev_it_401=((void*)0);
        tail_it_402=((void*)0);
        i_403=0;
        while(it_400!=((void*)0)) {
            if(            i_403==head) {
                head_prev_it_401=it_400->prev;
            }
            if(            i_403==tail) {
                tail_it_402=it_400;
            }
            if(            i_403>=head&&i_403<tail) {
                prev_it_404=it_400;
                it_400=it_400->next;
                i_403++;
                come_call_finalizer3(prev_it_404,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_400=it_400->next;
                i_403++;
            }
        }
        if(        head_prev_it_401!=((void*)0)) {
            head_prev_it_401->next=tail_it_402;
        }
        if(        tail_it_402!=((void*)0)) {
            tail_it_402->prev=head_prev_it_401;
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_392;
struct list_item$1charp* prev_it_393;
struct list$1charp* __result278__;
    it_392=self->head;
    while(it_392!=((void*)0)) {
        prev_it_393=it_392;
        it_392=it_392->next;
        come_call_finalizer3(prev_it_393,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_406;
char* __result281__;
char* __result282__;
char* result_407;
char* __result283__;
result_406 = (void*)0;
result_407 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_406,0,sizeof(char*));
        __result281__ = gComeFunResultObject = __result_obj__ = result_406;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    self->it=self->head;
    if(    self->it) {
        __result282__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    memset(&result_407,0,sizeof(char*));
    __result283__ = gComeFunResultObject = __result_obj__ = result_407;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_409;
char* __result284__;
char* __result285__;
char* result_410;
char* __result286__;
result_409 = (void*)0;
result_410 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_409,0,sizeof(char*));
        __result284__ = gComeFunResultObject = __result_obj__ = result_409;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result285__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    memset(&result_410,0,sizeof(char*));
    __result286__ = gComeFunResultObject = __result_obj__ = result_410;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
struct sLineNode* __result289__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sLineNode")));
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value361 = (void*)0;
char* __dec_obj131;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __dec_obj132;
_Bool __result291__;
    come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj131=come_value_418->c_value;
    come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj132=come_value_418->type;
    come_value_418->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_418->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
    add_come_last_code(info,"%s",come_value_418->c_value);
    __result291__ = (_Bool)1;
    come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj130;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj130=self->sname;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
struct sSNameNode* __result292__;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value364,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sSNameNode")));
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value368 = (void*)0;
char* __dec_obj134;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __dec_obj135;
_Bool __result294__;
    come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj134=come_value_419->c_value;
    come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj135=come_value_419->type;
    come_value_419->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_419->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
    add_come_last_code(info,"%s",come_value_419->c_value);
    __result294__ = (_Bool)1;
    come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result294__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj133;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj133=self->sname;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
struct sFuncNode* __result295__;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value371,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sFuncNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value375 = (void*)0;
char* __dec_obj137;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* __dec_obj138;
_Bool __result297__;
    come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj137=come_value_420->c_value;
    come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=come_value_420->type;
    come_value_420->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_420->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_420));
    add_come_last_code(info,"%s",come_value_420->c_value);
    __result297__ = (_Bool)1;
    come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj136;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj136=self->sname;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
struct sWildCard* __result298__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result299__;
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sWildCard")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* value_node_421;
_Bool Value_422;
_Bool __result300__;
_Bool __result301__;
    value_node_421=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value380=xsprintf("Value"))),info));
    __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_422=node_compile(value_node_421,info);
    if(    !Value_422) {
        __result300__ = (_Bool)0;
        if(value_node_421) { value_node_421 = come_decrement_ref_count2(value_node_421, ((struct sNode*)value_node_421)->finalize, ((struct sNode*)value_node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result300__;
    }
    else {
    }
    __result301__ = (_Bool)1;
    if(value_node_421) { value_node_421 = come_decrement_ref_count2(value_node_421, ((struct sNode*)value_node_421)->finalize, ((struct sNode*)value_node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result301__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj139;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
struct sCallerFuncNode* __result302__;
    ((struct sNodeBase*)(__right_value382=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value382,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value383=__builtin_string("sCallerFuncNode")));
    __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value386 = (void*)0;
char* __dec_obj141;
void* __right_value387 = (void*)0;
char* __dec_obj142;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj143;
_Bool __result304__;
    come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "struct CVALUE*", (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj141=come_value_423->c_value;
        come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj142=come_value_423->c_value;
        come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj143=come_value_423->type;
    come_value_423->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_423->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
    add_come_last_code(info,"%s",come_value_423->c_value);
    __result304__ = (_Bool)1;
    come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj140;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj140=self->sname;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
struct sCallerLineNode* __result305__;
    ((struct sNodeBase*)(__right_value390=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value390,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value393 = (void*)0;
char* __dec_obj145;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* __dec_obj146;
_Bool __result306__;
    come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj145=come_value_424->c_value;
    come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj146=come_value_424->type;
    come_value_424->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_424->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
    add_come_last_code(info,"%s",come_value_424->c_value);
    __result306__ = (_Bool)1;
    come_call_finalizer3(come_value_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result306__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value396=__builtin_string("sCallerLineNode")));
    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj144=self->sname;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
struct sCallerSNameNode* __result308__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value400 = (void*)0;
char* __dec_obj148;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __dec_obj149;
_Bool __result309__;
    come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj148=come_value_425->c_value;
    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value_425->type;
    come_value_425->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_425->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
    add_come_last_code(info,"%s",come_value_425->c_value);
    __result309__ = (_Bool)1;
    come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result309__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=__builtin_string("sCallerSNameNode")));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj147;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj147=self->sname;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* fun_name3_427;
struct list$1sTypeph* method_generics_types_before_428;
struct list$1sTypeph* __dec_obj150;
void* __right_value405 = (void*)0;
struct sGenericsFun* generics_fun_429;
void* __right_value406 = (void*)0;
_Bool _if_conditional2;
void* __right_value407 = (void*)0;
char* __result315__;
struct list$1sTypeph* __dec_obj161;
char* __result316__;
    static int num_method_generics_426=0;
    fun_name3_427=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_426++));
    method_generics_types_before_428=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj150=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj150,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_429=((struct sGenericsFun*)(__right_value405=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value405,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_429) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_427)),generics_fun_429,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_427);
            __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value407=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_427 = come_decrement_ref_count2(fun_name3_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_428,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
    }
    __dec_obj161=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_428);
    come_call_finalizer3(__dec_obj161,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result316__ = gComeFunResultObject = __result_obj__ = fun_name3_427;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_427 = come_decrement_ref_count2(fun_name3_427, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_428,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_430;
unsigned int it_431;
struct sGenericsFun* __result311__;
struct sGenericsFun* __result312__;
struct sGenericsFun* __result313__;
struct sGenericsFun* __result314__;
    hash_430=charp_get_hash_key(((char*)key))%self->size;
    it_431=hash_430;
    while((_Bool)1) {
        if(        self->item_existance[it_431]) {
            if(            charp_equals(self->keys[it_431],key)) {
                __result311__ = gComeFunResultObject = __result_obj__ = self->items[it_431];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result311__;
            }
            it_431++;
            if(            it_431>=self->size) {
                it_431=0;
            }
            else if(            it_431==hash_430) {
                __result312__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result312__;
            }
        }
        else {
            __result313__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
    }
    __result314__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj151;
struct list$1charph* __dec_obj152;
struct list$1charph* __dec_obj153;
char* __dec_obj154;
struct sType* __dec_obj155;
struct list$1sTypeph* __dec_obj156;
struct list$1charph* __dec_obj157;
struct list$1charph* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj151=self->mImplType;
            come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj152=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj152,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj153=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj153,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj154=self->mName;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj155=self->mResultType;
            come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj156=self->mParamTypes;
            come_call_finalizer3(__dec_obj156,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj157=self->mParamNames;
            come_call_finalizer3(__dec_obj157,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj158=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj158,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj159=self->mBlock;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj160=self->mGenericsSName;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* __dec_obj162;
void* __right_value419 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj173;
struct list$1sTypeph* __dec_obj174;
struct buffer* __dec_obj175;
struct sFunCallNode* __result323__;
    ((struct sNodeBase*)(__right_value408=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value408,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj162=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj173,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj174=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj174,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj175=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj175,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
char* __result324__;
    __result324__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value420=__builtin_string("sFunCallNode")));
    __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result324__;
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
char* fun_name_442;
struct list$1tuple2$2charphsNodephph* params_443;
struct buffer* method_block_444;
int method_block_sline_445;
struct sVar* var__446;
struct sType* lambda_type_447;
_Bool __result325__;
void* __right_value421 = (void*)0;
struct sType* result_type_448;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUEph* come_params_449;
_Bool __result327__;
int i_452;
struct list$1tuple2$2charphsNodephph* o2_saved_453;
struct tuple2$2charphsNodeph* it_456;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_459=0;
struct sNode* node_460=0;
_Bool Value_461;
_Bool __result334__;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_462;
void* __right_value425 = (void*)0;
_Bool _if_conditional3;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
_Bool _if_conditional4;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* buf_466;
int j_467;
struct list$1CVALUEph* o2_saved_468;
struct CVALUE* it_471;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_474;
void* __right_value436 = (void*)0;
char* __dec_obj182;
void* __right_value437 = (void*)0;
struct sType* __dec_obj183;
_Bool __result343__;
void* __right_value438 = (void*)0;
struct sGenericsFun* generics_fun_475;
_Bool method_generics_476;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1sTypeph* method_generics_types_477;
void* __right_value441 = (void*)0;
char* generics_fun_name_478;
void* __right_value442 = (void*)0;
struct sFun* fun_479;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1CVALUEph* come_params_482;
void* __right_value445 = (void*)0;
struct sFun* fun_483;
_Bool no_output_come_code_484;
_Bool __result348__;
void* __right_value446 = (void*)0;
struct CVALUE* method_block_node_485;
void* __right_value447 = (void*)0;
struct sType* method_block_lambda_type_489;
void* __right_value448 = (void*)0;
struct sType* method_block_result_type_490;
void* __right_value449 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_491;
struct sType* generics_fun_method_block_result_type_492;
int method_generics_num_493;
void* __right_value453 = (void*)0;
int n_502;
struct list$1sTypeph* o2_saved_503;
struct sType* it_506;
int method_generics_num_509;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1CVALUEph* come_params_510;
int i_511;
struct sType* result_type_512;
struct list$1tuple2$2charphsNodephph* o2_saved_513;
struct tuple2$2charphsNodeph* it_514;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_515=0;
struct sNode* node_516=0;
_Bool Value_517;
_Bool __result360__;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_518;
int method_generics_num_522;
void* __right_value462 = (void*)0;
int n_523;
struct list$1sTypeph* o2_saved_524;
struct sType* it_525;
int method_generics_num_526;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
char* __dec_obj208;
void* __right_value466 = (void*)0;
char* __dec_obj209;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1CVALUEph* come_params_529;
struct list$1tuple2$2charphsNodephph* o2_saved_530;
struct tuple2$2charphsNodeph* it_531;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_532=0;
struct sNode* node_533=0;
_Bool Value_534;
_Bool __result363__;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_535;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* buf_536;
int j_537;
struct list$1CVALUEph* o2_saved_538;
struct CVALUE* it_539;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct CVALUE* come_value_540;
void* __right_value474 = (void*)0;
char* __dec_obj210;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj211;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* __dec_obj212;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj213;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj214;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj215;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj216;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj217;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __dec_obj218;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj219;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj220;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj221;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj222;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj223;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj224;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj225;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj226;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj227;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj228;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj229;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj230;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj231;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj232;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj233;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj234;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj235;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj236;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj237;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj238;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj239;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj240;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj241;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj242;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj243;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj244;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj245;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __dec_obj246;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* __dec_obj247;
_Bool __result364__;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1CVALUEph* come_params_541;
int i_542;
struct sType* result_type_543;
struct list$1tuple2$2charphsNodephph* o2_saved_544;
struct tuple2$2charphsNodeph* it_545;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_546=0;
struct sNode* node_547=0;
_Bool Value_548;
_Bool __result365__;
void* __right_value551 = (void*)0;
struct CVALUE* come_value_549;
struct sType* __dec_obj248;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct buffer* buf_550;
int j_551;
struct list$1CVALUEph* o2_saved_552;
struct CVALUE* it_553;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_554;
void* __right_value556 = (void*)0;
char* __dec_obj249;
struct sType* __dec_obj250;
_Bool __result366__;
void* __right_value557 = (void*)0;
char* __dec_obj251;
void* __right_value558 = (void*)0;
char* __dec_obj252;
char* p_555;
int version_556;
char* p2_557;
int i_559;
void* __right_value559 = (void*)0;
char* new_fun_name_560;
void* __right_value560 = (void*)0;
_Bool _if_conditional5;
void* __right_value561 = (void*)0;
char* __dec_obj253;
void* __right_value562 = (void*)0;
char* new_fun_name_564;
void* __right_value563 = (void*)0;
_Bool _if_conditional6;
void* __right_value564 = (void*)0;
char* __dec_obj254;
_Bool __result371__;
int i_565;
void* __right_value565 = (void*)0;
char* new_fun_name_566;
void* __right_value566 = (void*)0;
_Bool _if_conditional7;
void* __right_value567 = (void*)0;
char* __dec_obj255;
void* __right_value568 = (void*)0;
struct sFun* fun_567;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1CVALUEph* come_params_568;
int i_569;
struct sType* result_type_570;
struct list$1tuple2$2charphsNodephph* o2_saved_571;
struct tuple2$2charphsNodeph* it_572;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_573=0;
struct sNode* node_574=0;
_Bool Value_575;
_Bool __result372__;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_576;
struct sType* __dec_obj256;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct buffer* buf_577;
int j_578;
struct list$1CVALUEph* o2_saved_579;
struct CVALUE* it_580;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_581;
void* __right_value576 = (void*)0;
char* __dec_obj257;
struct sType* __dec_obj258;
_Bool __result373__;
void* __right_value577 = (void*)0;
struct sType* result_type_582;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1sTypeph* param_types_583;
struct list$1sTypeph* o2_saved_584;
struct sType* it_585;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* it2_586;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj259;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1CVALUEph* come_params_587;
int i_588;
struct list$1tuple2$2charphsNodephph* o2_saved_589;
struct tuple2$2charphsNodeph* it_590;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_591=0;
struct sNode* node_592=0;
_Bool Value_593;
_Bool __result374__;
void* __right_value586 = (void*)0;
struct CVALUE* come_value_594;
int n_595;
struct list$1charph* o2_saved_596;
char* it_599;
void* __right_value587 = (void*)0;
_Bool _if_conditional8;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
_Bool _if_conditional9;
void* __right_value594 = (void*)0;
int i_607;
struct list$1tuple2$2charphsNodephph* o2_saved_608;
struct tuple2$2charphsNodeph* it_609;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_610=0;
struct sNode* node_611=0;
_Bool Value_612;
_Bool __result383__;
void* __right_value595 = (void*)0;
struct CVALUE* come_value_613;
void* __right_value596 = (void*)0;
_Bool _if_conditional10;
_Bool Value_614;
_Bool __result384__;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value598 = (void*)0;
_Bool _if_conditional11;
void* __right_value599 = (void*)0;
_Bool _if_conditional12;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
_Bool _if_conditional13;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _if_conditional14;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
char* default_param_616;
void* __right_value610 = (void*)0;
char* param_name_620;
void* __right_value611 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_621;
char* p_622;
char* head_623;
int sline_624;
void* __right_value612 = (void*)0;
struct buffer* __dec_obj261;
void* __right_value613 = (void*)0;
struct sNode* node_625;
_Bool Value_626;
_Bool __result387__;
struct buffer* __dec_obj262;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_627;
void* __right_value615 = (void*)0;
_Bool _if_conditional16;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
_Bool _if_conditional17;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
_Bool _if_conditional18;
_Bool __result388__;
_Bool __result389__;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value628 = (void*)0;
struct sNode* current_stack_frame_node_628;
_Bool Value_630;
_Bool __result392__;
void* __right_value629 = (void*)0;
struct CVALUE* come_value_631;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct buffer* method_block2_632;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sType* method_block_type_633;
void* __right_value634 = (void*)0;
char* class_name_634;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sClass* current_stack_frame_struct_638;
void* __right_value637 = (void*)0;
_Bool __result397__;
void* __right_value638 = (void*)0;
struct sType* result_type_639;
void* __right_value639 = (void*)0;
struct list$1sTypeph* param_types_640;
struct list$1charph* param_names_641;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct buffer* all_alhabet_sname_642;
char* p_643;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1sTypeph* o2_saved_644;
struct sType* it_645;
struct sType* param_type_646;
void* __right_value644 = (void*)0;
char* param_name_647;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
char* param_name_648;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
char* param_name_649;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct buffer* source3_650;
char* p_651;
char* head_652;
int sline_653;
struct buffer* __dec_obj264;
void* __right_value651 = (void*)0;
struct sNode* node_654;
_Bool Value_655;
_Bool __result398__;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* method_block_name_656;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct CVALUE* come_value2_657;
void* __right_value656 = (void*)0;
struct sFun* fun2_658;
_Bool __result399__;
struct sType* method_block_type2_659;
void* __right_value657 = (void*)0;
char* __dec_obj265;
void* __right_value658 = (void*)0;
struct sType* __dec_obj266;
struct buffer* __dec_obj267;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct buffer* buf_660;
int j_661;
struct list$1CVALUEph* o2_saved_662;
struct CVALUE* it_663;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* come_value_664;
void* __right_value663 = (void*)0;
char* __dec_obj268;
void* __right_value664 = (void*)0;
struct sType* __dec_obj269;
void* __right_value665 = (void*)0;
char* __dec_obj270;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
char* __dec_obj271;
_Bool __result400__;
memset(&i_559, 0, sizeof(int));
    fun_name_442=(char*)come_increment_ref_count(self->fun_name);
    params_443=self->params;
    method_block_444=self->method_block;
    method_block_sline_445=self->method_block_sline;
    var__446=get_variable_from_table(info->lv_table,fun_name_442);
    if(    var__446==((void*)0)) {
        var__446=get_variable_from_table(info->gv_table,fun_name_442);
    }
    if(    var__446) {
        lambda_type_447=var__446->mType;
        if(        string_operator_not_equals(lambda_type_447->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_442);
            __result325__ = (_Bool)0;
            fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result325__;
        }
        result_type_448=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_447->mResultType->v1));
        result_type_448->mStatic=(_Bool)0;
        come_params_449=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 542, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        if(        list$1sTypeph_length(lambda_type_447->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_443)&&!lambda_type_447->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_442,list$1sTypeph_length(lambda_type_447->mParamTypes),list$1tuple2$2charphsNodephph_length(params_443));
            __result327__ = (_Bool)0;
            come_call_finalizer3(result_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_449,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result327__;
        }
        i_452=0;
        for(        o2_saved_453=(params_443),it_456=list$1tuple2$2charphsNodephph_begin((o2_saved_453));        !list$1tuple2$2charphsNodephph_end((o2_saved_453));        it_456=list$1tuple2$2charphsNodephph_next((o2_saved_453))        ){
            multiple_assign_var1=it_456;
            label_459=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_460=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_461=node_compile(node_460,info);
            if(            !Value_461) {
                __result334__ = (_Bool)0;
                label_459 = come_decrement_ref_count2(label_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_460) { node_460 = come_decrement_ref_count2(node_460, ((struct sNode*)node_460)->finalize, ((struct sNode*)node_460)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_449,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result334__;
            }
            else {
            }
            come_value_462=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_447->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value425=list$1sTypephp_operator_load_element(lambda_type_447->mParamTypes,i_452))), "05call.c", 558, 3))==((void*)0))),            come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value428=xsprintf("\%s calling param #\%s",((char*)(__right_value426=string_to_string(fun_name_442))),((char*)(__right_value427=int_to_string(i_452)))))),((struct sType*)come_null_check(((struct sType*)(__right_value429=list$1sTypephp_operator_load_element(lambda_type_447->mParamTypes,i_452))), "05call.c", 561, 4)),come_value_462->type,come_value_462,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value430=list$1sTypephp_operator_load_element(lambda_type_447->mParamTypes,i_452))), "05call.c", 562, 5))->mHeap&&come_value_462->type->mHeap)),                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value431=list$1sTypephp_operator_load_element(lambda_type_447->mParamTypes,i_452))), "05call.c", 563, 6)),come_value_462->type,come_value_462,info,(_Bool)1);
                    come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_449,(struct CVALUE*)come_increment_ref_count(come_value_462));
            dec_stack_ptr(1,info);
            i_452++;
            label_459 = come_decrement_ref_count2(label_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_460) { node_460 = come_decrement_ref_count2(node_460, ((struct sNode*)node_460)->finalize, ((struct sNode*)node_460)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_466=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 574, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_466,var__446->mCValueName);
        buffer_append_str(buf_466,"(");
        j_467=0;
        for(        o2_saved_468=(struct list$1CVALUEph*)come_increment_ref_count((come_params_449)),it_471=list$1CVALUEph_begin((o2_saved_468));        !list$1CVALUEph_end((o2_saved_468));        it_471=list$1CVALUEph_next((o2_saved_468))        ){
            buffer_append_str(buf_466,it_471->c_value);
            if(            j_467!=list$1CVALUEph_length(come_params_449)-1) {
                buffer_append_str(buf_466,",");
            }
            j_467++;
        }
        come_call_finalizer3(o2_saved_468,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_466,")");
        come_value_474=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 591, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj182=come_value_474->c_value;
        come_value_474->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_466));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj183=come_value_474->type;
        come_value_474->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_448));
        come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_474->type->mStatic=(_Bool)0;
        come_value_474->var=((void*)0);
        if(        lambda_type_447->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_474,(struct sType*)come_increment_ref_count(lambda_type_447->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_474->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_474));
        info->calling_fun=((void*)0);
        __result343__ = (_Bool)1;
        come_call_finalizer3(result_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_449,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_466,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result343__;
        come_call_finalizer3(result_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_449,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_466,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_475=((struct sGenericsFun*)(__right_value438=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_442,((void*)0))));
    come_call_finalizer3(__right_value438,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_476=(_Bool)0;
    if(    generics_fun_475) {
        method_generics_476=list$1charph_length(generics_fun_475->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sTypeph_length(self->method_generics_types)>0||method_generics_476) {
        if(        list$1sTypeph_length(self->method_generics_types)==0) {
            method_generics_types_477=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 616, "struct list$1sTypeph*", (void*)0, (void*)0))));
            generics_fun_name_478=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_442),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_477),info));
            fun_479=((struct sFun*)(__right_value442=map$2charphsFunph_at(info->funcs,generics_fun_name_478,((void*)0))));
            come_call_finalizer3(__right_value442,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_444) {
                come_params_482=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 622, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                fun_483=((struct sFun*)(__right_value445=map$2charphsFunph_at(info->funcs,generics_fun_name_478,((void*)0))));
                come_call_finalizer3(__right_value445,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_484=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_444,(struct list$1CVALUEph*)come_increment_ref_count(come_params_482),fun_483,fun_name_442,method_block_sline_445,info,(_Bool)1)) {
                    __result348__ = (_Bool)0;
                    come_call_finalizer3(come_params_482,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_477,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_478 = come_decrement_ref_count2(generics_fun_name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result348__;
                }
                info->no_output_come_code=no_output_come_code_484;
                method_block_node_485=((struct CVALUE*)(__right_value446=list$1CVALUEphp_operator_load_element(come_params_482,-1)));
                come_call_finalizer3(__right_value446,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_489=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_485->type));
                method_block_result_type_490=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_491=((struct sType*)(__right_value449=list$1sTypephp_operator_load_element(generics_fun_475->mParamTypes,-1)));
                come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_492=generics_fun_method_block_lambda_type_491->mResultType->v1;
                if(                generics_fun_method_block_result_type_492->mClass->mMethodGenerics) {
                    method_generics_num_493=generics_fun_method_block_result_type_492->mClass->mMethodGenericsNum;
                    list$1sTypephp_operator_store_element(method_generics_types_477,method_generics_num_493,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_490)));
                }
                n_502=0;
                for(                o2_saved_503=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_491->mParamTypes)),it_506=list$1sTypeph_begin((o2_saved_503));                !list$1sTypeph_end((o2_saved_503));                it_506=list$1sTypeph_next((o2_saved_503))                ){
                    if(                    it_506->mClass->mMethodGenerics) {
                        method_generics_num_509=it_506->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_477,method_generics_num_509,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value454=list$1sTypephp_operator_load_element(method_block_lambda_type_489->mParamTypes,n_502))), "05call.c", 648, 7)))));
                        come_call_finalizer3(__right_value454,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_502++;
                }
                come_call_finalizer3(o2_saved_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_482,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_489,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_510=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 654, "struct list$1CVALUEph*", (void*)0, (void*)0))));
            i_511=0;
            result_type_512=((void*)0);
            for(            o2_saved_513=(params_443),it_514=list$1tuple2$2charphsNodephph_begin((o2_saved_513));            !list$1tuple2$2charphsNodephph_end((o2_saved_513));            it_514=list$1tuple2$2charphsNodephph_next((o2_saved_513))            ){
                multiple_assign_var2=it_514;
                label_515=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_516=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                Value_517=node_compile(node_516,info);
                if(                !Value_517) {
                    __result360__ = (_Bool)0;
                    label_515 = come_decrement_ref_count2(label_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_477,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_478 = come_decrement_ref_count2(generics_fun_name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_510,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result360__;
                }
                else {
                }
                come_value_518=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_510,(struct CVALUE*)come_increment_ref_count(come_value_518));
                label_515 = come_decrement_ref_count2(label_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_475->mResultType->mClass->mMethodGenerics) {
                method_generics_num_522=generics_fun_475->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sTypephp_operator_store_element(method_generics_types_477,method_generics_num_522,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_523=0;
            for(            o2_saved_524=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_475->mParamTypes)),it_525=list$1sTypeph_begin((o2_saved_524));            !list$1sTypeph_end((o2_saved_524));            it_525=list$1sTypeph_next((o2_saved_524))            ){
                if(                it_525->mClass->mMethodGenerics) {
                    method_generics_num_526=it_525->mClass->mMethodGenericsNum;
                    if(                    n_523<list$1CVALUEph_length(come_params_510)) {
                        list$1sTypephp_operator_store_element(method_generics_types_477,method_generics_num_526,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value463=list$1CVALUEphp_operator_load_element(come_params_510,n_523)))->type)));
                        come_call_finalizer3(__right_value463,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_523++;
            }
            come_call_finalizer3(o2_saved_524,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunph_remove(info->funcs,generics_fun_name_478);
            __dec_obj208=fun_name_442;
            fun_name_442=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_442),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_477),info));
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_477,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_478 = come_decrement_ref_count2(generics_fun_name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_510,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj209=fun_name_442;
            fun_name_442=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_442),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_442,"__builtin_memmove")||string_operator_equals(fun_name_442,"__builtin_memset")||string_operator_equals(fun_name_442,"__builtin_ffs")||string_operator_equals(fun_name_442,"__builtin_ffsl")||string_operator_equals(fun_name_442,"__builtin_ffsll")||string_operator_equals(fun_name_442,"__builtin_bswap16")||string_operator_equals(fun_name_442,"__builtin_bswap32")||string_operator_equals(fun_name_442,"__builtin_bswap64")||string_operator_equals(fun_name_442,"__builtin_constant_p")||string_operator_equals(fun_name_442,"__builtin_expect")||string_operator_equals(fun_name_442,"__builtin___memset_chk")||string_operator_equals(fun_name_442,"__builtin_object_size")||string_operator_equals(fun_name_442,"__builtin___memcpy_chk")||string_operator_equals(fun_name_442,"__builtin___strncpy_chk")||string_operator_equals(fun_name_442,"__builtin___strncat_chk")||string_operator_equals(fun_name_442,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_442,"__builtin_strrchr")||string_operator_equals(fun_name_442,"__builtin_clz")||string_operator_equals(fun_name_442,"__dsb")||string_operator_equals(fun_name_442,"__isb")||string_operator_equals(fun_name_442,"__dmb")||(strlen(fun_name_442)==strlen("__builtin_arm_")&&memcmp(fun_name_442,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_442,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_442,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_442,"__c11_atomic_store")||string_operator_equals(fun_name_442,"__c11_atomic_load")||string_operator_equals(fun_name_442,"__c11_atomic_exchange")||string_operator_equals(fun_name_442,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_442,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_442,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_442,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_442,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_442,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_442,"__c11_atomic_fetch_xor")) {
        come_params_529=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 726, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        for(        o2_saved_530=(params_443),it_531=list$1tuple2$2charphsNodephph_begin((o2_saved_530));        !list$1tuple2$2charphsNodephph_end((o2_saved_530));        it_531=list$1tuple2$2charphsNodephph_next((o2_saved_530))        ){
            multiple_assign_var3=it_531;
            label_532=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_533=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            Value_534=node_compile(node_533,info);
            if(            !Value_534) {
                __result363__ = (_Bool)0;
                label_532 = come_decrement_ref_count2(label_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_533) { node_533 = come_decrement_ref_count2(node_533, ((struct sNode*)node_533)->finalize, ((struct sNode*)node_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_529,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result363__;
            }
            else {
            }
            come_value_535=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(come_params_529,(struct CVALUE*)come_increment_ref_count(come_value_535));
            label_532 = come_decrement_ref_count2(label_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_533) { node_533 = come_decrement_ref_count2(node_533, ((struct sNode*)node_533)->finalize, ((struct sNode*)node_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 740, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_536,fun_name_442);
        buffer_append_str(buf_536,"(");
        j_537=0;
        for(        o2_saved_538=(struct list$1CVALUEph*)come_increment_ref_count((come_params_529)),it_539=list$1CVALUEph_begin((o2_saved_538));        !list$1CVALUEph_end((o2_saved_538));        it_539=list$1CVALUEph_next((o2_saved_538))        ){
            buffer_append_str(buf_536,it_539->c_value);
            if(            j_537!=list$1CVALUEph_length(come_params_529)-1) {
                buffer_append_str(buf_536,",");
            }
            j_537++;
        }
        come_call_finalizer3(o2_saved_538,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_536,")");
        come_value_540=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 757, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj210=come_value_540->c_value;
        come_value_540->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_536));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_442,"__builtin_memmove")||string_operator_equals(fun_name_442,"__builtin_memset")) {
            __dec_obj211=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_ffs")) {
            __dec_obj212=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_ffsl")) {
            __dec_obj213=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_ffsll")) {
            __dec_obj214=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_bswap16")) {
            __dec_obj215=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "struct sType*", (void*)0, (void*)0)),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_bswap32")) {
            __dec_obj216=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_bswap64")) {
            __dec_obj217=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_constant_p")) {
            __dec_obj218=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_expect")) {
            __dec_obj219=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin___memset_chk")) {
            __dec_obj220=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_540->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_object_size")) {
            __dec_obj221=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin___memcpy_chk")) {
            __dec_obj222=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_540->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_442,"__builtin___strncpy_chk")) {
            __dec_obj223=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_540->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_442,"__builtin___strncat_chk")) {
            __dec_obj224=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_540->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_strrchr")) {
            __dec_obj225=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 807, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_540->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_442,"__builtin___vsnprintf_chk")) {
            __dec_obj226=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_clz")) {
            __dec_obj227=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_thread_fence")) {
            __dec_obj228=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 817, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_signal_fence")) {
            __dec_obj229=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_exchange")) {
            __dec_obj230=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value513=list$1CVALUEphp_operator_load_element(come_params_529,1))), "05call.c", 823, 8))->type));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value513,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_exchange_strong")) {
            __dec_obj231=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value515=list$1CVALUEphp_operator_load_element(come_params_529,2))), "05call.c", 826, 9))->type));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value515,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_exchange_weak")) {
            __dec_obj232=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value517=list$1CVALUEphp_operator_load_element(come_params_529,2))), "05call.c", 829, 10))->type));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value517,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_store")) {
            __dec_obj233=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 832, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_load")) {
            __dec_obj234=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value521=list$1CVALUEphp_operator_load_element(come_params_529,0))), "05call.c", 835, 11))->type));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value521,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_540->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_fetch_add")) {
            __dec_obj235=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value523=list$1CVALUEphp_operator_load_element(come_params_529,1))), "05call.c", 839, 12))->type));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value523,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_fetch_sub")) {
            __dec_obj236=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value525=list$1CVALUEphp_operator_load_element(come_params_529,1))), "05call.c", 842, 13))->type));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value525,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_fetch_and")) {
            __dec_obj237=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value527=list$1CVALUEphp_operator_load_element(come_params_529,1))), "05call.c", 845, 14))->type));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value527,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_fetch_or")) {
            __dec_obj238=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value529=list$1CVALUEphp_operator_load_element(come_params_529,1))), "05call.c", 848, 15))->type));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value529,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__c11_atomic_fetch_xor")) {
            __dec_obj239=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value531=list$1CVALUEphp_operator_load_element(come_params_529,1))), "05call.c", 851, 16))->type));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value531,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__dsb")) {
            __dec_obj240=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__isb")) {
            __dec_obj241=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__dmb")) {
            __dec_obj242=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_arm_cdp")) {
            __dec_obj243=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_arm_ldc")) {
            __dec_obj244=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 866, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_arm_stc")) {
            __dec_obj245=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 869, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_arm_stcl")) {
            __dec_obj246=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 872, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_442,"__builtin_arm_ldcl")) {
            __dec_obj247=come_value_540->type;
            come_value_540->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 875, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_540->var=((void*)0);
        add_come_last_code(info,"%s",come_value_540->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_540));
        __result364__ = (_Bool)1;
        come_call_finalizer3(come_params_529,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result364__;
        come_call_finalizer3(come_params_529,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_442,"__builtin_va_arg")) {
        come_params_541=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 887, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_542=0;
        result_type_543=((void*)0);
        for(        o2_saved_544=(params_443),it_545=list$1tuple2$2charphsNodephph_begin((o2_saved_544));        !list$1tuple2$2charphsNodephph_end((o2_saved_544));        it_545=list$1tuple2$2charphsNodephph_next((o2_saved_544))        ){
            multiple_assign_var4=it_545;
            label_546=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_547=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_548=node_compile(node_547,info);
            if(            !Value_548) {
                __result365__ = (_Bool)0;
                label_546 = come_decrement_ref_count2(label_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_547) { node_547 = come_decrement_ref_count2(node_547, ((struct sNode*)node_547)->finalize, ((struct sNode*)node_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result365__;
            }
            else {
            }
            come_value_549=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_541,(struct CVALUE*)come_increment_ref_count(come_value_549));
            __dec_obj248=result_type_543;
            result_type_543=(struct sType*)come_increment_ref_count(come_value_549->type);
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_546 = come_decrement_ref_count2(label_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_547) { node_547 = come_decrement_ref_count2(node_547, ((struct sNode*)node_547)->finalize, ((struct sNode*)node_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 906, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_550,fun_name_442);
        buffer_append_str(buf_550,"(");
        j_551=0;
        for(        o2_saved_552=(struct list$1CVALUEph*)come_increment_ref_count((come_params_541)),it_553=list$1CVALUEph_begin((o2_saved_552));        !list$1CVALUEph_end((o2_saved_552));        it_553=list$1CVALUEph_next((o2_saved_552))        ){
            buffer_append_str(buf_550,it_553->c_value);
            if(            j_551!=list$1CVALUEph_length(come_params_541)-1) {
                buffer_append_str(buf_550,",");
            }
            j_551++;
        }
        come_call_finalizer3(o2_saved_552,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_550,")");
        come_value_554=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 923, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj249=come_value_554->c_value;
        come_value_554->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_550));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj250=come_value_554->type;
        come_value_554->type=(struct sType*)come_increment_ref_count(result_type_543);
        come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_554->var=((void*)0);
        add_come_last_code(info,"%s",come_value_554->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_554));
        __result366__ = (_Bool)1;
        come_call_finalizer3(come_params_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result366__;
        come_call_finalizer3(come_params_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_442,"string")) {
        __dec_obj251=fun_name_442;
        fun_name_442=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_442,"wstring")) {
        __dec_obj252=fun_name_442;
        fun_name_442=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_442,"inherit")) {
        p_555=info->come_fun->mName;
        version_556=0;
        while(*p_555) {
            if(            *p_555==95&&*(p_555+1)==118&&xisdigit(*(p_555+2))) {
                p2_557=p_555+2;
                version_556=0;
                while(xisdigit(*p2_557)) {
                    version_556=version_556*10+(*p2_557-48);
                    p2_557++;
                }
                break;
            }
            else {
                p_555++;
            }
        }
        char real_fun_name_558[2048];
        memset(&real_fun_name_558, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_558,info->come_fun->mName,p_555-info->come_fun->mName);
        real_fun_name_558[p_555-info->come_fun->mName]=0;
        for(        i_559=version_556-1;        i_559>=1;        i_559--        ){
            new_fun_name_560=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_558,i_559));
            if(            (_if_conditional5=(((struct sFun*)(__right_value560=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_560))))),            come_call_finalizer3(__right_value560,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj253=fun_name_442;
                fun_name_442=(char*)come_increment_ref_count(__builtin_string(new_fun_name_560));
                __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_560 = come_decrement_ref_count2(new_fun_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_560 = come_decrement_ref_count2(new_fun_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_559==0) {
            new_fun_name_564=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_558));
            if(            (_if_conditional6=(((struct sFun*)(__right_value563=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_564))))),            come_call_finalizer3(__right_value563,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj254=fun_name_442;
                fun_name_442=(char*)come_increment_ref_count(__builtin_string(new_fun_name_564));
                __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_442,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result371__ = (_Bool)0;
                new_fun_name_564 = come_decrement_ref_count2(new_fun_name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result371__;
            }
            new_fun_name_564 = come_decrement_ref_count2(new_fun_name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_565=128;        i_565>=1;        i_565--        ){
            new_fun_name_566=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_442,i_565));
            if(            (_if_conditional7=(((struct sFun*)(__right_value566=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_566))))),            come_call_finalizer3(__right_value566,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj255=fun_name_442;
                fun_name_442=(char*)come_increment_ref_count(__builtin_string(new_fun_name_566));
                __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_566 = come_decrement_ref_count2(new_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_566 = come_decrement_ref_count2(new_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_567=((struct sFun*)(__right_value568=map$2charphsFunph_at(info->funcs,fun_name_442,((void*)0))));
    come_call_finalizer3(__right_value568,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_567==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_442);
        come_params_568=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1004, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_569=0;
        result_type_570=((void*)0);
        for(        o2_saved_571=(params_443),it_572=list$1tuple2$2charphsNodephph_begin((o2_saved_571));        !list$1tuple2$2charphsNodephph_end((o2_saved_571));        it_572=list$1tuple2$2charphsNodephph_next((o2_saved_571))        ){
            multiple_assign_var5=it_572;
            label_573=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_574=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            Value_575=node_compile(node_574,info);
            if(            !Value_575) {
                __result372__ = (_Bool)0;
                label_573 = come_decrement_ref_count2(label_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_574) { node_574 = come_decrement_ref_count2(node_574, ((struct sNode*)node_574)->finalize, ((struct sNode*)node_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_568,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result372__;
            }
            else {
            }
            come_value_576=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_568,(struct CVALUE*)come_increment_ref_count(come_value_576));
            __dec_obj256=result_type_570;
            result_type_570=(struct sType*)come_increment_ref_count(come_value_576->type);
            come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_573 = come_decrement_ref_count2(label_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_574) { node_574 = come_decrement_ref_count2(node_574, ((struct sNode*)node_574)->finalize, ((struct sNode*)node_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_576,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_577=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1023, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_577,fun_name_442);
        buffer_append_str(buf_577,"(");
        j_578=0;
        for(        o2_saved_579=(struct list$1CVALUEph*)come_increment_ref_count((come_params_568)),it_580=list$1CVALUEph_begin((o2_saved_579));        !list$1CVALUEph_end((o2_saved_579));        it_580=list$1CVALUEph_next((o2_saved_579))        ){
            buffer_append_str(buf_577,it_580->c_value);
            if(            j_578!=list$1CVALUEph_length(come_params_568)-1) {
                buffer_append_str(buf_577,",");
            }
            j_578++;
        }
        come_call_finalizer3(o2_saved_579,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_577,")");
        come_value_581=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1040, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj257=come_value_581->c_value;
        come_value_581->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_577));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj258=come_value_581->type;
        come_value_581->type=(struct sType*)come_increment_ref_count(result_type_570);
        come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_581->var=((void*)0);
        add_come_last_code(info,"%s",come_value_581->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_581));
        __result373__ = (_Bool)1;
        come_call_finalizer3(come_params_568,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_581,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result373__;
        come_call_finalizer3(come_params_568,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_581,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_582=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_567->mResultType));
    result_type_582->mStatic=(_Bool)0;
    param_types_583=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1055, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_584=(struct list$1sTypeph*)come_increment_ref_count((fun_567->mParamTypes)),it_585=list$1sTypeph_begin((o2_saved_584));    !list$1sTypeph_end((o2_saved_584));    it_585=list$1sTypeph_next((o2_saved_584))    ){
        it2_586=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value580=come_call_cloner(sType_clone, it_585))),info->generics_type,info));
        come_call_finalizer3(__right_value580,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(param_types_583,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_586)));
        come_call_finalizer3(it2_586,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_584,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj259=result_type_582;
    result_type_582=(struct sType*)come_increment_ref_count(solve_generics(result_type_582,info->generics_type,info));
    come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_587=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1063, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    i_588=0;    i_588<list$1sTypeph_length(fun_567->mParamTypes)-(((method_block_444)?(2):(0)));    i_588++    ){
        list$1CVALUEph_add(come_params_587,((void*)0));
    }
    for(    o2_saved_589=(params_443),it_590=list$1tuple2$2charphsNodephph_begin((o2_saved_589));    !list$1tuple2$2charphsNodephph_end((o2_saved_589));    it_590=list$1tuple2$2charphsNodephph_next((o2_saved_589))    ){
        multiple_assign_var6=it_590;
        label_591=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_592=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        fun_567->mVarArgs||string_operator_equals(fun_name_442,"__builtin_va_start")) {
        }
        else if(        label_591) {
            Value_593=node_compile(node_592,info);
            if(            !Value_593) {
                __result374__ = (_Bool)0;
                label_591 = come_decrement_ref_count2(label_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_592) { node_592 = come_decrement_ref_count2(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result374__;
            }
            else {
            }
            come_value_594=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_595=0;
            for(            o2_saved_596=(struct list$1charph*)come_increment_ref_count((fun_567->mParamNames)),it_599=list$1charph_begin((o2_saved_596));            !list$1charph_end((o2_saved_596));            it_599=list$1charph_next((o2_saved_596))            ){
                if(                string_operator_equals(label_591,it_599)) {
                    break;
                }
                n_595++;
            }
            come_call_finalizer3(o2_saved_596,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional8=(((struct sType*)(__right_value587=list$1sTypephp_operator_load_element(param_types_583,n_595))))),            come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                check_assign_type(((char*)(__right_value590=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value588=string_to_string(fun_name_442))),((char*)(__right_value589=int_to_string(n_595)))))),((struct sType*)come_null_check(((struct sType*)(__right_value591=list$1sTypephp_operator_load_element(param_types_583,n_595))), "05call.c", 1092, 17)),come_value_594->type,come_value_594,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional9=(((struct sType*)(__right_value592=list$1sTypephp_operator_load_element(param_types_583,n_595)))&&((struct sType*)come_null_check(((struct sType*)(__right_value593=list$1sTypephp_operator_load_element(param_types_583,n_595))), "05call.c", 1094, 18))->mHeap&&come_value_594->type->mHeap)),            come_call_finalizer3(__right_value592,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value594=list$1sTypephp_operator_load_element(param_types_583,n_595))), "05call.c", 1095, 19)),come_value_594->type,come_value_594,info,(_Bool)1);
                come_call_finalizer3(__right_value594,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_587,n_595,(struct CVALUE*)come_increment_ref_count(come_value_594));
            come_call_finalizer3(come_value_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_591 = come_decrement_ref_count2(label_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_592) { node_592 = come_decrement_ref_count2(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_607=0;
    for(    o2_saved_608=(params_443),it_609=list$1tuple2$2charphsNodephph_begin((o2_saved_608));    !list$1tuple2$2charphsNodephph_end((o2_saved_608));    it_609=list$1tuple2$2charphsNodephph_next((o2_saved_608))    ){
        multiple_assign_var7=it_609;
        label_610=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_611=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        fun_567->mVarArgs||string_operator_equals(fun_name_442,"__builtin_va_start")) {
            Value_612=node_compile(node_611,info);
            if(            !Value_612) {
                __result383__ = (_Bool)0;
                label_610 = come_decrement_ref_count2(label_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result383__;
            }
            else {
            }
            come_value_613=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value596=list$1CVALUEphp_operator_load_element(come_params_587,i_607)))==((void*)0))),                come_call_finalizer3(__right_value596,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_607++;
                }
            }
            list$1CVALUEph_replace(come_params_587,i_607,(struct CVALUE*)come_increment_ref_count(come_value_613));
            i_607++;
            come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_610) {
        }
        else {
            Value_614=node_compile(node_611,info);
            if(            !Value_614) {
                __result384__ = (_Bool)0;
                label_610 = come_decrement_ref_count2(label_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result384__;
            }
            else {
            }
            come_value_615=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional11=(((struct CVALUE*)(__right_value598=list$1CVALUEphp_operator_load_element(come_params_587,i_607)))==((void*)0))),                come_call_finalizer3(__right_value598,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    break;
                }
                else {
                    i_607++;
                }
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value599=list$1sTypephp_operator_load_element(param_types_583,i_607))))),            come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                check_assign_type(((char*)(__right_value602=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value600=string_to_string(fun_name_442))),((char*)(__right_value601=int_to_string(i_607)))))),((struct sType*)come_null_check(((struct sType*)(__right_value603=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1146, 20)),come_value_615->type,come_value_615,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional13=(((struct sType*)(__right_value604=list$1sTypephp_operator_load_element(param_types_583,i_607)))&&((struct sType*)come_null_check(((struct sType*)(__right_value605=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1148, 21))->mHeap&&come_value_615->type->mHeap)),            come_call_finalizer3(__right_value604,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value606=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1149, 22)),come_value_615->type,come_value_615,info,(_Bool)1);
                come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_587,i_607,(struct CVALUE*)come_increment_ref_count(come_value_615));
            i_607++;
            come_call_finalizer3(come_value_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_610 = come_decrement_ref_count2(label_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional14=(((struct CVALUE*)(__right_value607=list$1CVALUEphp_operator_load_element(come_params_587,i_607)))==((void*)0))),        come_call_finalizer3(__right_value607,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            break;
        }
        else {
            i_607++;
        }
    }
    if(    list$1tuple2$2charphsNodephph_length(params_443)<list$1sTypeph_length(fun_567->mParamTypes)) {
        for(        ;        i_607<list$1sTypeph_length(fun_567->mParamTypes)-(((method_block_444)?(2):(0)));        i_607++        ){
            default_param_616=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value608=list$1charphp_operator_load_element(fun_567->mParamDefaultParametors,i_607)))));
            __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_620=((char*)come_null_check(((char*)(__right_value610=list$1charphp_operator_load_element(fun_567->mParamNames,i_607))), "05call.c", 1170, 23));
            __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional15=(default_param_616&&string_operator_not_equals(default_param_616,"")&&((struct CVALUE*)(__right_value611=list$1CVALUEphp_operator_load_element(come_params_587,i_607)))==((void*)0))),            come_call_finalizer3(__right_value611,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                source_621=(struct buffer*)come_increment_ref_count(info->source);
                p_622=info->p;
                head_623=info->head;
                sline_624=info->sline;
                __dec_obj261=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_616));
                come_call_finalizer3(__dec_obj261,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_625=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_626=node_compile(node_625,info);
                if(                !Value_626) {
                    __result387__ = (_Bool)0;
                    come_call_finalizer3(source_621,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_616 = come_decrement_ref_count2(default_param_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result387__;
                }
                else {
                }
                __dec_obj262=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_621);
                come_call_finalizer3(__dec_obj262,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_622;
                info->head=head_623;
                info->sline=sline_624;
                come_value_627=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value615=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1194, 24)))),                come_call_finalizer3(__right_value615,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    check_assign_type(((char*)(__right_value618=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value616=string_to_string(fun_name_442))),((char*)(__right_value617=int_to_string(i_607)))))),((struct sType*)come_null_check(((struct sType*)(__right_value619=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1195, 25)),come_value_627->type,come_value_627,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value619,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value620=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1197, 26))&&((struct sType*)come_null_check(((struct sType*)(__right_value621=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1197, 27))->mHeap&&come_value_627->type->mHeap)),                come_call_finalizer3(__right_value620,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value622=list$1sTypephp_operator_load_element(param_types_583,i_607))), "05call.c", 1198, 28)),come_value_627->type,come_value_627,info,(_Bool)1);
                    come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_587,i_607,(struct CVALUE*)come_increment_ref_count(come_value_627));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_621,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional18=(((struct CVALUE*)(__right_value623=list$1CVALUEphp_operator_load_element(come_params_587,i_607)))==((void*)0))),                come_call_finalizer3(__right_value623,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_567->mName,i_607);
                    __result388__ = (_Bool)0;
                    default_param_616 = come_decrement_ref_count2(default_param_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result388__;
                }
            }
            default_param_616 = come_decrement_ref_count2(default_param_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypeph_length(fun_567->mParamTypes)-(((method_block_444)?(2):(0)))!=list$1CVALUEph_length(come_params_587)&&!fun_567->mVarArgs&&string_operator_not_equals(fun_name_442,"__builtin_va_start")&&string_operator_not_equals(fun_name_442,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_442,list$1sTypeph_length(fun_567->mParamTypes),list$1tuple2$2charphsNodephph_length(params_443));
        __result389__ = (_Bool)0;
        fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result389__;
    }
    if(    method_block_444) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1219, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value625=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1219, "struct sCurrentNode2*", (void*)0, (void*)0)),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_628=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value625,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_630=node_compile(current_stack_frame_node_628,info);
        if(        !Value_630) {
            __result392__ = (_Bool)0;
            if(current_stack_frame_node_628) { current_stack_frame_node_628 = come_decrement_ref_count2(current_stack_frame_node_628, ((struct sNode*)current_stack_frame_node_628)->finalize, ((struct sNode*)current_stack_frame_node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result392__;
        }
        else {
        }
        come_value_631=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEph_push_back(come_params_587,(struct CVALUE*)come_increment_ref_count(come_value_631));
        dec_stack_ptr(1,info);
        method_block2_632=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1229, "struct buffer*", (void*)0, (void*)0))));
        method_block_type_633=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value632=list$1sTypephp_operator_load_element(fun_567->mParamTypes,-1))), "05call.c", 1230, 29))));
        come_call_finalizer3(__right_value632,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_634=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)come_null_check(((struct sType*)(__right_value635=list$1sTypephp_operator_load_element(method_block_type_633->mParamTypes,0))), "05call.c", 1234, 30))->mClass=((struct sClass*)(__right_value636=map$2charphsClassphp_operator_load_element(info->classes,class_name_634)));
        come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value636,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_638=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value637=map$2charphsClassphp_operator_load_element(info->classes,class_name_634)));
        come_call_finalizer3(__right_value637,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_633->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_442);
            __result397__ = (_Bool)0;
            if(current_stack_frame_node_628) { current_stack_frame_node_628 = come_decrement_ref_count2(current_stack_frame_node_628, ((struct sNode*)current_stack_frame_node_628)->finalize, ((struct sNode*)current_stack_frame_node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_631,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_634 = come_decrement_ref_count2(class_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result397__;
        }
        result_type_639=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_633->mResultType->v1));
        result_type_639->mStatic=(_Bool)0;
        param_types_640=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, method_block_type_633->mParamTypes));
        param_names_641=method_block_type_633->mParamNames;
        all_alhabet_sname_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1250, "struct buffer*", (void*)0, (void*)0))));
        {
            p_643=info->sname;
            while(*p_643) {
                if(                xisalnum(*p_643)) {
                    buffer_append_char(all_alhabet_sname_642,*p_643++);
                }
                else {
                    p_643++;
                }
            }
        }
        buffer_append_format(method_block2_632,"%s fun_block%d_%s(",((char*)(__right_value642=make_type_name_string(result_type_639,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value643=buffer_to_string(all_alhabet_sname_642))));
        __right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_607=0;
        for(        o2_saved_644=(struct list$1sTypeph*)come_increment_ref_count((param_types_640)),it_645=list$1sTypeph_begin((o2_saved_644));        !list$1sTypeph_end((o2_saved_644));        it_645=list$1sTypeph_next((o2_saved_644))        ){
            param_type_646=it_645;
            if(            i_607==0) {
                param_name_647=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_632,"%s",((char*)(__right_value645=make_define_var(param_type_646,param_name_647,(_Bool)0,info))));
                __right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_647 = come_decrement_ref_count2(param_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_607==1) {
                param_name_648=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_632,"%s",((char*)(__right_value647=make_define_var_no_solved(param_type_646,param_name_648,(_Bool)0,(_Bool)1,info))));
                __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_648 = come_decrement_ref_count2(param_name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_649=(char*)come_increment_ref_count(xsprintf("it%d",i_607));
                buffer_append_format(method_block2_632,"%s",((char*)(__right_value649=make_define_var_no_solved(param_type_646,param_name_649,(_Bool)0,(_Bool)1,info))));
                __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_649 = come_decrement_ref_count2(param_name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_607!=list$1sTypeph_length(param_types_640)-1) {
                buffer_append_str(method_block2_632,",");
            }
            i_607++;
        }
        come_call_finalizer3(o2_saved_644,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_632,")\n");
        buffer_append_str(method_block2_632,((char*)(__right_value650=buffer_to_string(method_block_444))));
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_650=(struct buffer*)come_increment_ref_count(info->source);
        p_651=info->p;
        head_652=info->head;
        sline_653=info->sline;
        __dec_obj264=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_632);
        come_call_finalizer3(__dec_obj264,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_445;
        node_654=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_655=node_compile(node_654,info);
        if(        !Value_655) {
            __result398__ = (_Bool)0;
            if(current_stack_frame_node_628) { current_stack_frame_node_628 = come_decrement_ref_count2(current_stack_frame_node_628, ((struct sNode*)current_stack_frame_node_628)->finalize, ((struct sNode*)current_stack_frame_node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_631,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_634 = come_decrement_ref_count2(class_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result398__;
        }
        else {
        }
        method_block_name_656=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value652=buffer_to_string(all_alhabet_sname_642)))));
        __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_657=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1315, "struct CVALUE*", (void*)0, (void*)0))));
        fun2_658=((struct sFun*)(__right_value656=map$2charphsFunph_at(info->funcs,method_block_name_656,((void*)0))));
        come_call_finalizer3(__right_value656,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_658==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_656);
            __result399__ = (_Bool)1;
            if(current_stack_frame_node_628) { current_stack_frame_node_628 = come_decrement_ref_count2(current_stack_frame_node_628, ((struct sNode*)current_stack_frame_node_628)->finalize, ((struct sNode*)current_stack_frame_node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_631,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_634 = come_decrement_ref_count2(class_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_656 = come_decrement_ref_count2(method_block_name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result399__;
        }
        method_block_type2_659=fun2_658->mLambdaType;
        __dec_obj265=come_value2_657->c_value;
        come_value2_657->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_656));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj266=come_value2_657->type;
        come_value2_657->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_659));
        come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_657->var=((void*)0);
        list$1CVALUEph_push_back(come_params_587,(struct CVALUE*)come_increment_ref_count(come_value2_657));
        __dec_obj267=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_650);
        come_call_finalizer3(__dec_obj267,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_651;
        info->head=head_652;
        info->sline=sline_653;
        info->current_stack_frame_struct=current_stack_frame_struct_638;
        if(current_stack_frame_node_628) { current_stack_frame_node_628 = come_decrement_ref_count2(current_stack_frame_node_628, ((struct sNode*)current_stack_frame_node_628)->finalize, ((struct sNode*)current_stack_frame_node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_631,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_634 = come_decrement_ref_count2(class_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_656 = come_decrement_ref_count2(method_block_name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_660=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1340, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_660,fun_name_442);
    buffer_append_str(buf_660,"(");
    j_661=0;
    for(    o2_saved_662=(struct list$1CVALUEph*)come_increment_ref_count((come_params_587)),it_663=list$1CVALUEph_begin((o2_saved_662));    !list$1CVALUEph_end((o2_saved_662));    it_663=list$1CVALUEph_next((o2_saved_662))    ){
        buffer_append_str(buf_660,it_663->c_value);
        if(        j_661!=list$1CVALUEph_length(come_params_587)-1) {
            buffer_append_str(buf_660,",");
        }
        j_661++;
    }
    come_call_finalizer3(o2_saved_662,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_660,")");
    come_value_664=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1357, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj268=come_value_664->c_value;
    come_value_664->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_660));
    __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj269=come_value_664->type;
    come_value_664->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_582));
    come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_664->type->mStatic=(_Bool)0;
    come_value_664->var=((void*)0);
    if(    fun_567->mResultType->mHeap) {
        append_object_to_right_values2(come_value_664,(struct sType*)come_increment_ref_count(result_type_582),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_442,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_442,"null_check")&&string_operator_not_equals(fun_name_442,"come_push_stackframe")&&string_operator_not_equals(fun_name_442,"come_pop_stackframe")) {
            __dec_obj270=come_value_664->c_value;
            come_value_664->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_664->c_value,come_value_664->type,info));
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_582->mGuardValue&&result_type_582->mPointerNum>0) {
        __dec_obj271=come_value_664->c_value;
        come_value_664->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value666=make_type_name_string(result_type_582,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_664->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_664->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_664));
    info->calling_fun=fun_567;
    __result400__ = (_Bool)1;
    fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result400__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result317__;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_434;
struct list_item$1tuple2$2charphsNodephph* it_435;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result322__;
    if(    self==((void*)0)) {
        __result317__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_434=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1221, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_435=self->head;
    while(it_435!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_434,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodephp_clone, it_435->item)));
        it_435=it_435->next;
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_434;
    come_call_finalizer3(result_434,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result318__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_432;
struct list_item$1tuple2$2charphsNodephph* prev_it_433;
    it_432=self->head;
    while(it_432!=((void*)0)) {
        prev_it_433=it_432;
        it_432=it_432->next;
        come_call_finalizer3(prev_it_433,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj163;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj163=self->item;
            come_call_finalizer3(__dec_obj163,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj164;
struct sNode* __dec_obj165;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj164=self->v1;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj165=self->v2;
            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_436;
struct tuple2$2charphsNodeph* __dec_obj166;
void* __right_value413 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_437;
struct tuple2$2charphsNodeph* __dec_obj167;
void* __right_value414 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_438;
struct tuple2$2charphsNodeph* __dec_obj168;
struct list$1tuple2$2charphsNodephph* __result319__;
    if(    self->len==0) {
        litem_436=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value412=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1235, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_436->prev=((void*)0);
        litem_436->next=((void*)0);
        __dec_obj166=litem_436->item;
        litem_436->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj166,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_436;
        self->head=litem_436;
    }
    else if(    self->len==1) {
        litem_437=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value413=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1245, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_437->prev=self->head;
        litem_437->next=((void*)0);
        __dec_obj167=litem_437->item;
        litem_437->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj167,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_437;
        self->head->next=litem_437;
    }
    else {
        litem_438=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value414=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1255, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_438->prev=self->tail;
        litem_438->next=((void*)0);
        __dec_obj168=litem_438->item;
        litem_438->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj168,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_438;
        self->tail=litem_438;
    }
    self->len++;
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result320__;
void* __right_value415 = (void*)0;
struct tuple2$2charphsNodeph* result_439;
void* __right_value416 = (void*)0;
char* __dec_obj169;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj170;
struct tuple2$2charphsNodeph* __result321__;
    if(    self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_439=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj169=result_439->v1;
        result_439->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj170=result_439->v2;
        result_439->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_439;
    come_call_finalizer3(result_439,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj171;
struct sNode* __dec_obj172;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj171=self->v1;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj172=self->v2;
            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_440;
struct list_item$1tuple2$2charphsNodephph* prev_it_441;
    it_440=self->head;
    while(it_440!=((void*)0)) {
        prev_it_441=it_440;
        it_440=it_440->next;
        come_call_finalizer3(prev_it_441,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj176;
char* __dec_obj177;
struct list$1tuple2$2charphsNodephph* __dec_obj178;
struct list$1sTypeph* __dec_obj179;
struct buffer* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj176=self->sname;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj177=self->fun_name;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj178=self->params;
            come_call_finalizer3(__dec_obj178,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj179=self->method_generics_types;
            come_call_finalizer3(__dec_obj179,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj180=self->method_block;
            come_call_finalizer3(__dec_obj180,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result326__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_450;
struct list_item$1CVALUEph* prev_it_451;
    it_450=self->head;
    while(it_450!=((void*)0)) {
        prev_it_451=it_450;
        it_450=it_450->next;
        come_call_finalizer3(prev_it_451,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj181;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj181=self->item;
            come_call_finalizer3(__dec_obj181,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_454;
struct tuple2$2charphsNodeph* __result328__;
struct tuple2$2charphsNodeph* __result329__;
struct tuple2$2charphsNodeph* result_455;
struct tuple2$2charphsNodeph* __result330__;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_454,0,sizeof(struct tuple2$2charphsNodeph*));
        __result328__ = gComeFunResultObject = __result_obj__ = result_454;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    self->it=self->head;
    if(    self->it) {
        __result329__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    memset(&result_455,0,sizeof(struct tuple2$2charphsNodeph*));
    __result330__ = gComeFunResultObject = __result_obj__ = result_455;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_457;
struct tuple2$2charphsNodeph* __result331__;
struct tuple2$2charphsNodeph* __result332__;
struct tuple2$2charphsNodeph* result_458;
struct tuple2$2charphsNodeph* __result333__;
result_457 = (void*)0;
result_458 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_457,0,sizeof(struct tuple2$2charphsNodeph*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_457;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_458,0,sizeof(struct tuple2$2charphsNodeph*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_458;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_463;
int i_464;
struct sType* __result335__;
struct sType* default_value_465;
struct sType* __result336__;
default_value_465 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_463=self->head;
    i_464=0;
    while(it_463!=((void*)0)) {
        if(        position==i_464) {
            __result335__ = gComeFunResultObject = __result_obj__ = it_463->item;
            gComeFunResultObject = (void*)0;
            return __result335__;
        }
        it_463=it_463->next;
        i_464++;
    }
    memset(&default_value_465,0,sizeof(struct sType*));
    __result336__ = gComeFunResultObject = __result_obj__ = default_value_465;
    come_call_finalizer3(default_value_465,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_469;
struct CVALUE* __result337__;
struct CVALUE* __result338__;
struct CVALUE* result_470;
struct CVALUE* __result339__;
result_469 = (void*)0;
result_470 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_469,0,sizeof(struct CVALUE*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_469;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->it=self->head;
    if(    self->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_470,0,sizeof(struct CVALUE*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_470;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_472;
struct CVALUE* __result340__;
struct CVALUE* __result341__;
struct CVALUE* result_473;
struct CVALUE* __result342__;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_472,0,sizeof(struct CVALUE*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_472;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_473,0,sizeof(struct CVALUE*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_473;
    gComeFunResultObject = (void*)0;
    return __result342__;
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
unsigned int hash_480;
unsigned int it_481;
struct sFun* __result344__;
struct sFun* __result345__;
struct sFun* __result346__;
struct sFun* __result347__;
    hash_480=charp_get_hash_key(((char*)key))%self->size;
    it_481=hash_480;
    while((_Bool)1) {
        if(        self->item_existance[it_481]) {
            if(            charp_equals(self->keys[it_481],key)) {
                __result344__ = gComeFunResultObject = __result_obj__ = self->items[it_481];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result344__;
            }
            it_481++;
            if(            it_481>=self->size) {
                it_481=0;
            }
            else if(            it_481==hash_480) {
                __result345__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result345__;
            }
        }
        else {
            __result346__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result346__;
        }
    }
    __result347__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj184;
struct sType* __dec_obj185;
struct list$1sTypeph* __dec_obj186;
struct list$1charph* __dec_obj187;
struct list$1charph* __dec_obj188;
struct sType* __dec_obj189;
struct sBlock* __dec_obj190;
struct buffer* __dec_obj193;
struct buffer* __dec_obj194;
struct buffer* __dec_obj195;
struct buffer* __dec_obj196;
char* __dec_obj197;
char* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj184=self->mName;
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj185=self->mResultType;
            come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj186=self->mParamTypes;
            come_call_finalizer3(__dec_obj186,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj187=self->mParamNames;
            come_call_finalizer3(__dec_obj187,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj188=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj188,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj189=self->mLambdaType;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj190=self->mBlock;
            come_call_finalizer3(__dec_obj190,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj193=self->mSource;
            come_call_finalizer3(__dec_obj193,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj194=self->mSourceHead;
            come_call_finalizer3(__dec_obj194,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj195=self->mSourceHead2;
            come_call_finalizer3(__dec_obj195,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj196=self->mSourceDefer;
            come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj197=self->mComeHeader;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj198=self->mDeclareSName;
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj199=self->mAttribute;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj200=self->mFunAttribute;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj191;
struct sVarTable* __dec_obj192;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj191=self->mNodes;
            come_call_finalizer3(__dec_obj191,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj192=self->mVarTable;
            come_call_finalizer3(__dec_obj192,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_486;
int i_487;
struct CVALUE* __result349__;
struct CVALUE* default_value_488;
struct CVALUE* __result350__;
default_value_488 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_486=self->head;
    i_487=0;
    while(it_486!=((void*)0)) {
        if(        position==i_487) {
            __result349__ = gComeFunResultObject = __result_obj__ = it_486->item;
            gComeFunResultObject = (void*)0;
            return __result349__;
        }
        it_486=it_486->next;
        i_487++;
    }
    memset(&default_value_488,0,sizeof(struct CVALUE*));
    __result350__ = gComeFunResultObject = __result_obj__ = default_value_488;
    come_call_finalizer3(default_value_488,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_494;
int i_495;
struct sType* default_value_496;
struct list$1sTypeph* __result352__;
struct list_item$1sTypeph* it_500;
int i_501;
struct sType* __dec_obj204;
struct list$1sTypeph* __result353__;
default_value_496 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_494=self->len;
        for(        i_495=0;        i_495<position-len_494;        i_495++        ){
            memset(&default_value_496,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_496));
            come_call_finalizer3(default_value_496,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result352__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    it_500=self->head;
    i_501=0;
    while(it_500!=((void*)0)) {
        if(        position==i_501) {
            __dec_obj204=it_500->item;
            it_500->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_500=it_500->next;
        i_501++;
    }
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value450 = (void*)0;
struct list_item$1sTypeph* litem_497;
struct sType* __dec_obj201;
void* __right_value451 = (void*)0;
struct list_item$1sTypeph* litem_498;
struct sType* __dec_obj202;
void* __right_value452 = (void*)0;
struct list_item$1sTypeph* litem_499;
struct sType* __dec_obj203;
struct list$1sTypeph* __result351__;
    if(    self->len==0) {
        litem_497=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value450=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1305, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_497->prev=((void*)0);
        litem_497->next=((void*)0);
        __dec_obj201=litem_497->item;
        litem_497->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_497;
        self->head=litem_497;
    }
    else if(    self->len==1) {
        litem_498=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value451=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1315, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_498->prev=self->head;
        litem_498->next=((void*)0);
        __dec_obj202=litem_498->item;
        litem_498->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_498;
        self->head->next=litem_498;
    }
    else {
        litem_499=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value452=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1325, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_499->prev=self->tail;
        litem_499->next=((void*)0);
        __dec_obj203=litem_499->item;
        litem_499->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_499;
        self->tail=litem_499;
    }
    self->len++;
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_504;
struct sType* __result354__;
struct sType* __result355__;
struct sType* result_505;
struct sType* __result356__;
result_504 = (void*)0;
result_505 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_504,0,sizeof(struct sType*));
        __result354__ = gComeFunResultObject = __result_obj__ = result_504;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    self->it=self->head;
    if(    self->it) {
        __result355__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    memset(&result_505,0,sizeof(struct sType*));
    __result356__ = gComeFunResultObject = __result_obj__ = result_505;
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_507;
struct sType* __result357__;
struct sType* __result358__;
struct sType* result_508;
struct sType* __result359__;
result_507 = (void*)0;
result_508 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_507,0,sizeof(struct sType*));
        __result357__ = gComeFunResultObject = __result_obj__ = result_507;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result358__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    memset(&result_508,0,sizeof(struct sType*));
    __result359__ = gComeFunResultObject = __result_obj__ = result_508;
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value459 = (void*)0;
struct list_item$1CVALUEph* litem_519;
struct CVALUE* __dec_obj205;
void* __right_value460 = (void*)0;
struct list_item$1CVALUEph* litem_520;
struct CVALUE* __dec_obj206;
void* __right_value461 = (void*)0;
struct list_item$1CVALUEph* litem_521;
struct CVALUE* __dec_obj207;
struct list$1CVALUEph* __result361__;
    if(    self->len==0) {
        litem_519=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value459=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1235, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_519->prev=((void*)0);
        litem_519->next=((void*)0);
        __dec_obj205=litem_519->item;
        litem_519->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_519;
        self->head=litem_519;
    }
    else if(    self->len==1) {
        litem_520=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value460=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1245, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_520->prev=self->head;
        litem_520->next=((void*)0);
        __dec_obj206=litem_520->item;
        litem_520->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_520;
        self->head->next=litem_520;
    }
    else {
        litem_521=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value461=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1255, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_521->prev=self->tail;
        litem_521->next=((void*)0);
        __dec_obj207=litem_521->item;
        litem_521->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_521;
        self->tail=litem_521;
    }
    self->len++;
    __result361__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_527;
unsigned int it_528;
struct map$2charphsFunph* __result362__;
    hash_527=charp_get_hash_key(((char*)key))%self->size;
    it_528=hash_527;
    while((_Bool)1) {
        if(        self->item_existance[it_528]) {
            if(            charp_equals(self->keys[it_528],key)) {
                list$1charp_remove(self->key_list,self->keys[it_528]);
                self->item_existance[it_528]=(_Bool)0;
                if(                1) {
                    self->keys[it_528] = come_decrement_ref_count2(self->keys[it_528], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_528]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_528],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_528]=((void*)0);
                self->len--;
                break;
            }
            it_528++;
            if(            it_528>=self->size) {
                it_528=0;
            }
            else if(            it_528==hash_527) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_561;
unsigned int hash_562;
unsigned int it_563;
struct sFun* __result367__;
struct sFun* __result368__;
struct sFun* __result369__;
struct sFun* __result370__;
default_value_561 = (void*)0;
    memset(&default_value_561,0,sizeof(struct sFun*));
    hash_562=charp_get_hash_key(((char*)key))%self->size;
    it_563=hash_562;
    while((_Bool)1) {
        if(        self->item_existance[it_563]) {
            if(            charp_equals(self->keys[it_563],key)) {
                __result367__ = gComeFunResultObject = __result_obj__ = self->items[it_563];
                come_call_finalizer3(default_value_561,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result367__;
            }
            it_563++;
            if(            it_563>=self->size) {
                it_563=0;
            }
            else if(            it_563==hash_562) {
                __result368__ = gComeFunResultObject = __result_obj__ = default_value_561;
                come_call_finalizer3(default_value_561,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result368__;
            }
        }
        else {
            __result369__ = gComeFunResultObject = __result_obj__ = default_value_561;
            come_call_finalizer3(default_value_561,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result369__;
        }
    }
    __result370__ = gComeFunResultObject = __result_obj__ = default_value_561;
    come_call_finalizer3(default_value_561,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_597;
char* __result375__;
char* __result376__;
char* result_598;
char* __result377__;
result_597 = (void*)0;
result_598 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_597,0,sizeof(char*));
        __result375__ = gComeFunResultObject = __result_obj__ = result_597;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    self->it=self->head;
    if(    self->it) {
        __result376__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    memset(&result_598,0,sizeof(char*));
    __result377__ = gComeFunResultObject = __result_obj__ = result_598;
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_600;
char* __result378__;
char* __result379__;
char* result_601;
char* __result380__;
result_600 = (void*)0;
result_601 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_600,0,sizeof(char*));
        __result378__ = gComeFunResultObject = __result_obj__ = result_600;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result379__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    memset(&result_601,0,sizeof(char*));
    __result380__ = gComeFunResultObject = __result_obj__ = result_601;
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_602;
int i_603;
struct CVALUE* default_value_604;
struct list$1CVALUEph* __result381__;
struct list_item$1CVALUEph* it_605;
int i_606;
struct CVALUE* __dec_obj260;
struct list$1CVALUEph* __result382__;
default_value_604 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_602=self->len;
        for(        i_603=0;        i_603<position-len_602;        i_603++        ){
            memset(&default_value_604,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_604));
            come_call_finalizer3(default_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result381__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    it_605=self->head;
    i_606=0;
    while(it_605!=((void*)0)) {
        if(        position==i_606) {
            __dec_obj260=it_605->item;
            it_605->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj260,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_605=it_605->next;
        i_606++;
    }
    __result382__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_617;
int i_618;
char* __result385__;
char* default_value_619;
char* __result386__;
default_value_619 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_617=self->head;
    i_618=0;
    while(it_617!=((void*)0)) {
        if(        position==i_618) {
            __result385__ = gComeFunResultObject = __result_obj__ = it_617->item;
            gComeFunResultObject = (void*)0;
            return __result385__;
        }
        it_617=it_617->next;
        i_618++;
    }
    memset(&default_value_619,0,sizeof(char*));
    __result386__ = gComeFunResultObject = __result_obj__ = default_value_619;
    default_value_619 = come_decrement_ref_count2(default_value_619, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result390__;
void* __right_value626 = (void*)0;
struct sCurrentNode2* result_629;
void* __right_value627 = (void*)0;
char* __dec_obj263;
struct sCurrentNode2* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_629=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_629->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_629->sname;
        result_629->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_629->sline_real=self->sline_real;
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_629;
    come_call_finalizer3(result_629,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_635;
unsigned int hash_636;
unsigned int it_637;
struct sClass* __result393__;
struct sClass* __result394__;
struct sClass* __result395__;
struct sClass* __result396__;
default_value_635 = (void*)0;
    memset(&default_value_635,0,sizeof(struct sClass*));
    hash_636=charp_get_hash_key(((char*)key))%self->size;
    it_637=hash_636;
    while((_Bool)1) {
        if(        self->item_existance[it_637]) {
            if(            charp_equals(self->keys[it_637],key)) {
                __result393__ = gComeFunResultObject = __result_obj__ = self->items[it_637];
                come_call_finalizer3(default_value_635,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result393__;
            }
            it_637++;
            if(            it_637>=self->size) {
                it_637=0;
            }
            else if(            it_637==hash_636) {
                __result394__ = gComeFunResultObject = __result_obj__ = default_value_635;
                come_call_finalizer3(default_value_635,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result394__;
            }
        }
        else {
            __result395__ = gComeFunResultObject = __result_obj__ = default_value_635;
            come_call_finalizer3(default_value_635,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result395__;
        }
    }
    __result396__ = gComeFunResultObject = __result_obj__ = default_value_635;
    come_call_finalizer3(default_value_635,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value668 = (void*)0;
struct buffer* __dec_obj272;
struct sComeCallNode* __result401__;
    ((struct sNodeBase*)(__right_value668=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value668,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj272=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result401__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value669 = (void*)0;
char* __result402__;
    __result402__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value669=__builtin_string("sComeCallNode")));
    __right_value669 = come_decrement_ref_count2(__right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_665;
struct buffer* come_block_666;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct list$1CVALUEph* come_params_667;
void* __right_value672 = (void*)0;
char* var_name_669;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* type__670;
_Bool __result407__;
void* __right_value675 = (void*)0;
struct sNode* var_node_673;
_Bool Value_674;
_Bool __result408__;
void* __right_value676 = (void*)0;
struct CVALUE* thread_var_value_675;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct CVALUE* come_value_676;
void* __right_value679 = (void*)0;
char* __dec_obj275;
struct sType* __dec_obj276;
void* __right_value680 = (void*)0;
struct sNode* null_node_677;
_Bool Value_678;
_Bool __result409__;
void* __right_value681 = (void*)0;
struct CVALUE* __dec_obj277;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value684 = (void*)0;
struct sNode* current_stack_frame_node_679;
_Bool Value_680;
_Bool __result410__;
void* __right_value685 = (void*)0;
struct CVALUE* current_stack_frame_value_681;
void* __right_value686 = (void*)0;
char* fun_name_682;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct buffer* come_block2_683;
void* __right_value689 = (void*)0;
char* class_name_684;
void* __right_value690 = (void*)0;
struct sClass* current_stack_frame_struct_685;
void* __right_value691 = (void*)0;
struct buffer* source3_686;
char* p_687;
char* head_688;
int sline_689;
struct buffer* __dec_obj278;
void* __right_value692 = (void*)0;
struct sNode* node_690;
_Bool Value_691;
_Bool __result411__;
struct buffer* __dec_obj279;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct CVALUE* fun_value_692;
void* __right_value695 = (void*)0;
char* __dec_obj280;
struct sType* __dec_obj281;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct buffer* buf_693;
void* __right_value698 = (void*)0;
char* fun_name_694;
int j_695;
struct list$1CVALUEph* o2_saved_696;
struct CVALUE* it_697;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct CVALUE* come_value_698;
void* __right_value701 = (void*)0;
char* __dec_obj282;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sType* type_699;
_Bool __result412__;
struct sType* __dec_obj283;
_Bool __result413__;
    come_block_sline_665=self->come_block_sline;
    come_block_666=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_667=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1412, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    static int thread_num_668=0;
    thread_num_668++;
    var_name_669=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_668));
    type__670=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value673=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value673,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__670==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result407__ = (_Bool)0;
        come_call_finalizer3(come_block_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_669 = come_decrement_ref_count2(var_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__670,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result407__;
    }
    var_node_673=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_669),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__670),(_Bool)1,((void*)0),info));
    Value_674=node_compile(var_node_673,info);
    if(    !Value_674) {
        __result408__ = (_Bool)0;
        come_call_finalizer3(come_block_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_669 = come_decrement_ref_count2(var_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__670,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_673) { var_node_673 = come_decrement_ref_count2(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result408__;
    }
    else {
    }
    thread_var_value_675=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_676=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1435, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj275=come_value_676->c_value;
    come_value_676->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_675->c_value));
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj276=come_value_676->type;
    come_value_676->type=(struct sType*)come_increment_ref_count(thread_var_value_675->type);
    come_call_finalizer3(__dec_obj276,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_676->var=((void*)0);
    list$1CVALUEph_push_back(come_params_667,(struct CVALUE*)come_increment_ref_count(come_value_676));
    null_node_677=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_678=node_compile(null_node_677,info);
    if(    !Value_678) {
        __result409__ = (_Bool)0;
        come_call_finalizer3(come_block_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_669 = come_decrement_ref_count2(var_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__670,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_673) { var_node_673 = come_decrement_ref_count2(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_677) { null_node_677 = come_decrement_ref_count2(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result409__;
    }
    else {
    }
    __dec_obj277=come_value_676;
    come_value_676=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_667,(struct CVALUE*)come_increment_ref_count(come_value_676));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1453, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value683=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1453, "struct sCurrentNode2*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_679=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value683,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_680=node_compile(current_stack_frame_node_679,info);
    if(    !Value_680) {
        __result410__ = (_Bool)0;
        come_call_finalizer3(come_block_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_669 = come_decrement_ref_count2(var_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__670,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_673) { var_node_673 = come_decrement_ref_count2(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_677) { null_node_677 = come_decrement_ref_count2(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_679) { current_stack_frame_node_679 = come_decrement_ref_count2(current_stack_frame_node_679, ((struct sNode*)current_stack_frame_node_679)->finalize, ((struct sNode*)current_stack_frame_node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result410__;
    }
    else {
    }
    current_stack_frame_value_681=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_682=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_668));
    come_block2_683=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1464, "struct buffer*", (void*)0, (void*)0))));
    class_name_684=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_683,"void* %s(%s* parent)\n",fun_name_682,class_name_684);
    buffer_append_str(come_block2_683,((char*)(__right_value690=buffer_to_string(come_block_666))));
    __right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_685=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value691=map$2charphsClassphp_operator_load_element(info->classes,class_name_684)));
    come_call_finalizer3(__right_value691,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_686=(struct buffer*)come_increment_ref_count(info->source);
    p_687=info->p;
    head_688=info->head;
    sline_689=info->sline;
    __dec_obj278=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_683);
    come_call_finalizer3(__dec_obj278,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_665;
    node_690=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_691=node_compile(node_690,info);
    if(    !Value_691) {
        __result411__ = (_Bool)0;
        come_call_finalizer3(come_block_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_669 = come_decrement_ref_count2(var_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__670,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_673) { var_node_673 = come_decrement_ref_count2(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_677) { null_node_677 = come_decrement_ref_count2(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_679) { current_stack_frame_node_679 = come_decrement_ref_count2(current_stack_frame_node_679, ((struct sNode*)current_stack_frame_node_679)->finalize, ((struct sNode*)current_stack_frame_node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_682 = come_decrement_ref_count2(fun_name_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_684 = come_decrement_ref_count2(class_name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_686,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result411__;
    }
    else {
    }
    __dec_obj279=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_686);
    come_call_finalizer3(__dec_obj279,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_687;
    info->head=head_688;
    info->sline=sline_689;
    info->current_stack_frame_struct=current_stack_frame_struct_685;
    fun_value_692=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1498, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj280=fun_value_692->c_value;
    fun_value_692->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_682));
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=come_value_676->type;
    come_value_676->type=((void*)0);
    come_call_finalizer3(__dec_obj281,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_676->var=((void*)0);
    list$1CVALUEph_add(come_params_667,(struct CVALUE*)come_increment_ref_count(fun_value_692));
    list$1CVALUEph_add(come_params_667,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_681));
    buf_693=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1508, "struct buffer*", (void*)0, (void*)0))));
    fun_name_682 = come_decrement_ref_count2(fun_name_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_694=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_693,"(");
    buffer_append_str(buf_693,fun_name_694);
    buffer_append_str(buf_693,"(");
    j_695=0;
    for(    o2_saved_696=(struct list$1CVALUEph*)come_increment_ref_count((come_params_667)),it_697=list$1CVALUEph_begin((o2_saved_696));    !list$1CVALUEph_end((o2_saved_696));    it_697=list$1CVALUEph_next((o2_saved_696))    ){
        buffer_append_str(buf_693,it_697->c_value);
        if(        j_695!=list$1CVALUEph_length(come_params_667)-1) {
            buffer_append_str(buf_693,",");
        }
        j_695++;
    }
    come_call_finalizer3(o2_saved_696,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_693,")");
    buffer_append_str(buf_693,", ");
    buffer_append_str(buf_693,thread_var_value_675->c_value);
    buffer_append_str(buf_693,")");
    come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_698=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1531, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj282=come_value_698->c_value;
    come_value_698->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_693));
    __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_699=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value702=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value702,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_699==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result412__ = (_Bool)0;
        come_call_finalizer3(come_block_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_669 = come_decrement_ref_count2(var_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__670,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_673) { var_node_673 = come_decrement_ref_count2(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_677) { null_node_677 = come_decrement_ref_count2(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_679) { current_stack_frame_node_679 = come_decrement_ref_count2(current_stack_frame_node_679, ((struct sNode*)current_stack_frame_node_679)->finalize, ((struct sNode*)current_stack_frame_node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_684 = come_decrement_ref_count2(class_name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_686,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_692,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_694 = come_decrement_ref_count2(fun_name_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_699,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result412__;
    }
    __dec_obj283=come_value_698->type;
    come_value_698->type=(struct sType*)come_increment_ref_count(type_699);
    come_call_finalizer3(__dec_obj283,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_698->var=((void*)0);
    add_come_last_code(info,"%s",come_value_698->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_698));
    __result413__ = (_Bool)1;
    come_call_finalizer3(come_block_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_669 = come_decrement_ref_count2(var_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__670,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_673) { var_node_673 = come_decrement_ref_count2(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_677) { null_node_677 = come_decrement_ref_count2(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_679) { current_stack_frame_node_679 = come_decrement_ref_count2(current_stack_frame_node_679, ((struct sNode*)current_stack_frame_node_679)->finalize, ((struct sNode*)current_stack_frame_node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_684 = come_decrement_ref_count2(class_name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_686,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_692,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_694 = come_decrement_ref_count2(fun_name_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_699,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result413__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj273;
struct buffer* __dec_obj274;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj273=self->sname;
            __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj274=self->come_block;
            come_call_finalizer3(__dec_obj274,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_671;
unsigned int it_672;
struct sType* __result403__;
struct sType* __result404__;
struct sType* __result405__;
struct sType* __result406__;
    hash_671=charp_get_hash_key(((char*)key))%self->size;
    it_672=hash_671;
    while((_Bool)1) {
        if(        self->item_existance[it_672]) {
            if(            charp_equals(self->keys[it_672],key)) {
                __result403__ = gComeFunResultObject = __result_obj__ = self->items[it_672];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result403__;
            }
            it_672++;
            if(            it_672>=self->size) {
                it_672=0;
            }
            else if(            it_672==hash_671) {
                __result404__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result404__;
            }
        }
        else {
            __result405__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result405__;
        }
    }
    __result406__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj284;
struct sComeJoinNode* __result414__;
    ((struct sNodeBase*)(__right_value704=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value704,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj284=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    __result414__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result414__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value705 = (void*)0;
char* __result415__;
    __result415__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value705=__builtin_string("sComeJoinNode")));
    __right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_700;
_Bool Value_701;
_Bool __result416__;
void* __right_value706 = (void*)0;
struct CVALUE* come_value_702;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct buffer* buf_703;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct CVALUE* come_value_704;
void* __right_value711 = (void*)0;
char* __dec_obj287;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sType* __dec_obj288;
_Bool __result417__;
    node_700=(struct sNode*)come_increment_ref_count(self->node);
    Value_701=node_compile(node_700,info);
    if(    !Value_701) {
        __result416__ = (_Bool)0;
        if(node_700) { node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result416__;
    }
    else {
    }
    come_value_702=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_703=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1579, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_703,"pthread_join(");
    buffer_append_str(buf_703,come_value_702->c_value);
    buffer_append_str(buf_703,", 0)");
    come_call_finalizer3(come_value_702,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_704=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1584, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj287=come_value_704->c_value;
    come_value_704->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_703));
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj288=come_value_704->type;
    come_value_704->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1586, "struct sType*", (void*)0, (void*)0)),"void",info,info));
    come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_704->var=((void*)0);
    add_come_last_code(info,"%s",come_value_704->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_704));
    __result417__ = (_Bool)1;
    if(node_700) { node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_703,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_704,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result417__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj285;
struct sNode* __dec_obj286;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj285=self->sname;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj286=self->node;
            if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value714 = (void*)0;
struct list$1sNodeph* __dec_obj289;
struct list$1sBlockph* __dec_obj290;
struct sBlock* __dec_obj292;
struct sComePollNode* __result418__;
    ((struct sNodeBase*)(__right_value714=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value714,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj289=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj289,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj290=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj290,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj292=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj292,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result418__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value715 = (void*)0;
char* __result419__;
    __result419__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value715=__builtin_string("sComePollNode")));
    __right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result419__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_709;
struct list$1sBlockph* blocks_710;
int time_out_711;
int n_713;
struct list$1sNodeph* o2_saved_714;
struct sNode* it_717;
_Bool Value_720;
_Bool __result426__;
void* __right_value716 = (void*)0;
struct CVALUE* come_value_721;
int n_722;
struct list$1sNodeph* o2_saved_723;
struct sNode* it_724;
void* __right_value717 = (void*)0;
_Bool __result429__;
    vars_709=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_710=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_711=self->time_out;
    static int var_num_712=0;
    var_num_712++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_712,list$1sNodeph_length(vars_709));
    n_713=0;
    for(    o2_saved_714=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_717=list$1sNodeph_begin((o2_saved_714));    !list$1sNodeph_end((o2_saved_714));    it_717=list$1sNodeph_next((o2_saved_714))    ){
        Value_720=node_compile(it_717,info);
        if(        !Value_720) {
            __result426__ = (_Bool)0;
            come_call_finalizer3(o2_saved_714,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_710,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result426__;
        }
        else {
        }
        come_value_721=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_712,n_713,come_value_721->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_712,n_713,1);
        n_713++;
        come_call_finalizer3(come_value_721,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_714,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_712,var_num_712,list$1sNodeph_length(vars_709),time_out_711);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_712);
    n_722=0;
    for(    o2_saved_723=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_724=list$1sNodeph_begin((o2_saved_723));    !list$1sNodeph_end((o2_saved_723));    it_724=list$1sNodeph_next((o2_saved_723))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_712,n_722,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value717=list$1sBlockphp_operator_load_element(blocks_710,n_722))), "05call.c", 1650, 31)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value717,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_722++;
    }
    come_call_finalizer3(o2_saved_723,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_712);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result429__ = (_Bool)1;
    come_call_finalizer3(vars_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_710,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result429__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_705;
struct list_item$1sBlockph* prev_it_706;
    it_705=self->head;
    while(it_705!=((void*)0)) {
        prev_it_706=it_705;
        it_705=it_705->next;
        come_call_finalizer3(prev_it_706,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj291;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj291=self->item;
            come_call_finalizer3(__dec_obj291,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj293;
struct list$1sNodeph* __dec_obj294;
struct list$1sBlockph* __dec_obj295;
struct sBlock* __dec_obj296;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj294=self->vars;
            come_call_finalizer3(__dec_obj294,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj295=self->blocks;
            come_call_finalizer3(__dec_obj295,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj296=self->else_block;
            come_call_finalizer3(__dec_obj296,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_707;
struct list_item$1sBlockph* prev_it_708;
    it_707=self->head;
    while(it_707!=((void*)0)) {
        prev_it_708=it_707;
        it_707=it_707->next;
        come_call_finalizer3(prev_it_708,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_715;
struct sNode* __result420__;
struct sNode* __result421__;
struct sNode* result_716;
struct sNode* __result422__;
result_715 = (void*)0;
result_716 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_715,0,sizeof(struct sNode*));
        __result420__ = gComeFunResultObject = __result_obj__ = result_715;
        gComeFunResultObject = (void*)0;
        return __result420__;
    }
    self->it=self->head;
    if(    self->it) {
        __result421__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result421__;
    }
    memset(&result_716,0,sizeof(struct sNode*));
    __result422__ = gComeFunResultObject = __result_obj__ = result_716;
    gComeFunResultObject = (void*)0;
    return __result422__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_718;
struct sNode* __result423__;
struct sNode* __result424__;
struct sNode* result_719;
struct sNode* __result425__;
result_718 = (void*)0;
result_719 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_718,0,sizeof(struct sNode*));
        __result423__ = gComeFunResultObject = __result_obj__ = result_718;
        gComeFunResultObject = (void*)0;
        return __result423__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result424__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result424__;
    }
    memset(&result_719,0,sizeof(struct sNode*));
    __result425__ = gComeFunResultObject = __result_obj__ = result_719;
    gComeFunResultObject = (void*)0;
    return __result425__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_725;
int i_726;
struct sBlock* __result427__;
struct sBlock* default_value_727;
struct sBlock* __result428__;
default_value_727 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_725=self->head;
    i_726=0;
    while(it_725!=((void*)0)) {
        if(        position==i_726) {
            __result427__ = gComeFunResultObject = __result_obj__ = it_725->item;
            gComeFunResultObject = (void*)0;
            return __result427__;
        }
        it_725=it_725->next;
        i_726++;
    }
    memset(&default_value_727,0,sizeof(struct sBlock*));
    __result428__ = gComeFunResultObject = __result_obj__ = default_value_727;
    come_call_finalizer3(default_value_727,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value726 = (void*)0;
struct sNode* node_728;
void* __right_value727 = (void*)0;
struct sNode* __dec_obj302;
struct sNode* __result432__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value719=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1670, "struct sFunCallNode*", (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_728=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value719,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj302=node_728;
    node_728=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_728),info));
    if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    __result432__ = gComeFunResultObject = __result_obj__ = node_728;
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_728) { node_728 = come_decrement_ref_count2(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result432__;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result430__;
void* __right_value720 = (void*)0;
struct sFunCallNode* result_729;
void* __right_value721 = (void*)0;
char* __dec_obj297;
void* __right_value722 = (void*)0;
char* __dec_obj298;
void* __right_value723 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj299;
void* __right_value724 = (void*)0;
struct list$1sTypeph* __dec_obj300;
void* __right_value725 = (void*)0;
struct buffer* __dec_obj301;
struct sFunCallNode* __result431__;
    if(    self==(void*)0) {
        __result430__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result430__;
    }
    result_729=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_729->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_729->sname;
        result_729->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_729->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj298=result_729->fun_name;
        result_729->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj299=result_729->params;
        result_729->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj299,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_729->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj300=result_729->method_generics_types;
        result_729->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj300,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj301=result_729->method_block;
        result_729->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_729->method_block_sline=self->method_block_sline;
    }
    __result431__ = gComeFunResultObject = __result_obj__ = result_729;
    come_call_finalizer3(result_729,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result431__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value728 = (void*)0;
struct sNode* __dec_obj303;
void* __right_value729 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj304;
struct sLambdaCall* __result433__;
    ((struct sNodeBase*)(__right_value728=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value728,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj303=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj304=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj304,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result433__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result433__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value730 = (void*)0;
char* __result434__;
    __result434__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value730=__builtin_string("sLambdaCall")));
    __right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result434__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_730;
struct list$1tuple2$2charphsNodephph* params_731;
_Bool Value_732;
_Bool __result435__;
void* __right_value731 = (void*)0;
struct CVALUE* come_value_733;
struct sType* lambda_type_734;
_Bool __result436__;
void* __right_value732 = (void*)0;
struct sType* result_type_735;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct list$1CVALUEph* come_params_736;
_Bool __result437__;
int i_737;
struct list$1tuple2$2charphsNodephph* o2_saved_738;
struct tuple2$2charphsNodeph* it_739;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_740=0;
struct sNode* node_741=0;
_Bool Value_742;
_Bool __result438__;
void* __right_value735 = (void*)0;
struct CVALUE* come_value_743;
void* __right_value736 = (void*)0;
_Bool _if_conditional19;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
_Bool _if_conditional20;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct buffer* buf_744;
int j_745;
struct list$1CVALUEph* o2_saved_746;
struct CVALUE* it_747;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct CVALUE* come_value2_748;
void* __right_value746 = (void*)0;
char* __dec_obj308;
void* __right_value747 = (void*)0;
struct sType* __dec_obj309;
_Bool __result439__;
    node_730=(struct sNode*)come_increment_ref_count(self->node);
    params_731=self->params;
    Value_732=node_compile(node_730,info);
    if(    !Value_732) {
        __result435__ = (_Bool)0;
        if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result435__;
    }
    else {
    }
    come_value_733=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_734=come_value_733->type;
    if(    lambda_type_734->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result436__ = (_Bool)0;
        if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result436__;
    }
    result_type_735=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_734->mResultType->v1));
    result_type_735->mStatic=(_Bool)0;
    come_params_736=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1714, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    list$1sTypeph_length(lambda_type_734->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_731)&&!lambda_type_734->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_734->mParamTypes),list$1tuple2$2charphsNodephph_length(params_731));
        __result437__ = (_Bool)0;
        if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_735,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_736,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result437__;
    }
    i_737=0;
    for(    o2_saved_738=(params_731),it_739=list$1tuple2$2charphsNodephph_begin((o2_saved_738));    !list$1tuple2$2charphsNodephph_end((o2_saved_738));    it_739=list$1tuple2$2charphsNodephph_next((o2_saved_738))    ){
        multiple_assign_var8=it_739;
        label_740=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_741=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        Value_742=node_compile(node_741,info);
        if(        !Value_742) {
            __result438__ = (_Bool)0;
            label_740 = come_decrement_ref_count2(label_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_735,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_736,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result438__;
        }
        else {
        }
        come_value_743=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_734->mVarArgs&&((struct sType*)(__right_value736=list$1sTypephp_operator_load_element(lambda_type_734->mParamTypes,i_737)))==((void*)0))),        come_call_finalizer3(__right_value736,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value738=xsprintf("calling param #\%s",((char*)(__right_value737=int_to_string(i_737)))))),((struct sType*)come_null_check(((struct sType*)(__right_value739=list$1sTypephp_operator_load_element(lambda_type_734->mParamTypes,i_737))), "05call.c", 1733, 32)),come_value_743->type,come_value_743,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value739,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value740=list$1sTypephp_operator_load_element(lambda_type_734->mParamTypes,i_737))), "05call.c", 1734, 33))->mHeap&&come_value_743->type->mHeap)),            come_call_finalizer3(__right_value740,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value741=list$1sTypephp_operator_load_element(lambda_type_734->mParamTypes,i_737))), "05call.c", 1735, 34)),come_value_743->type,come_value_743,info,(_Bool)1);
                come_call_finalizer3(__right_value741,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_736,(struct CVALUE*)come_increment_ref_count(come_value_743));
        dec_stack_ptr(1,info);
        i_737++;
        label_740 = come_decrement_ref_count2(label_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_743,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_744=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1745, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_744,"(");
    buffer_append_str(buf_744,come_value_733->c_value);
    buffer_append_str(buf_744,")");
    buffer_append_str(buf_744,"(");
    j_745=0;
    for(    o2_saved_746=(struct list$1CVALUEph*)come_increment_ref_count((come_params_736)),it_747=list$1CVALUEph_begin((o2_saved_746));    !list$1CVALUEph_end((o2_saved_746));    it_747=list$1CVALUEph_next((o2_saved_746))    ){
        buffer_append_str(buf_744,it_747->c_value);
        if(        j_745!=list$1CVALUEph_length(come_params_736)-1) {
            buffer_append_str(buf_744,",");
        }
        j_745++;
    }
    come_call_finalizer3(o2_saved_746,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_744,")");
    come_value2_748=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1764, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj308=come_value2_748->c_value;
    come_value2_748->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_744));
    __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_734->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_748,(struct sType*)come_increment_ref_count(lambda_type_734->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj309=come_value2_748->type;
    come_value2_748->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_735));
    come_call_finalizer3(__dec_obj309,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_748->type->mStatic=(_Bool)0;
    come_value2_748->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_748->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_748));
    __result439__ = (_Bool)1;
    if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_735,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_736,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_748,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result439__;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj305;
struct sNode* __dec_obj306;
struct list$1tuple2$2charphsNodephph* __dec_obj307;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj305=self->sname;
            __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj306=self->node;
            if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj307=self->params;
            come_call_finalizer3(__dec_obj307,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value748 = (void*)0;
struct sType* __dec_obj310;
struct sVarArgTypeName* __result440__;
    ((struct sNodeBase*)(__right_value748=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value748,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj310=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj310,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result440__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result440__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value749 = (void*)0;
char* __result441__;
    __result441__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value749=__builtin_string("sVarArgTypeName")));
    __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result441__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_749;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct CVALUE* come_value_750;
void* __right_value752 = (void*)0;
char* __dec_obj313;
struct sType* __dec_obj314;
_Bool __result442__;
    type_749=(struct sType*)come_increment_ref_count(self->type);
    come_value_750=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1801, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj313=come_value_750->c_value;
    come_value_750->c_value=(char*)come_increment_ref_count(make_type_name_string(type_749,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj314=come_value_750->type;
    come_value_750->type=(struct sType*)come_increment_ref_count(type_749);
    come_call_finalizer3(__dec_obj314,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_750->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_750));
    __result442__ = (_Bool)1;
    come_call_finalizer3(type_749,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_750,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result442__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj311;
struct sType* __dec_obj312;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj311=self->sname;
            __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj312=self->type;
            come_call_finalizer3(__dec_obj312,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct list$1sTypeph* method_generics_types_751;
void* __right_value755 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_752=0;
char* name_753=0;
_Bool err_754=0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_755;
_Bool _va_arg_756;
char* p_757;
int sline_758;
_Bool err_flag_759;
void* __right_value759 = (void*)0;
char* label_760;
void* __right_value760 = (void*)0;
char* __dec_obj317;
char* __dec_obj318;
_Bool no_comma_761;
_Bool in_fun_param_762;
void* __right_value761 = (void*)0;
struct sNode* node_763;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
_Bool guard_break_767;
struct buffer* method_block_768;
int method_block_sline_769;
char* head_770;
void* __right_value768 = (void*)0;
char* tail_771;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct buffer* __dec_obj325;
int len_772;
void* __right_value771 = (void*)0;
char* mem_773;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value774 = (void*)0;
struct sNode* node_774;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj326;
struct sNode* __result445__;
    method_generics_types_751=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1815, "struct list$1sTypeph*", (void*)0, (void*)0))));
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value755=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_752=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_753=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_754=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value755,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_754) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_751,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_752)));
                come_call_finalizer3(type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_753 = come_decrement_ref_count2(name_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_755=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1853, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    _va_arg_756=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_757=info->p;
        sline_758=info->sline;
        err_flag_759=(_Bool)0;
        label_760=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj317=label_760;
            label_760=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_759=(_Bool)1;
        }
        if(        err_flag_759==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj318=label_760;
            label_760=((void*)0);
            __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_757;
            info->sline=sline_758;
        }
        no_comma_761=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_762=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_763=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj319=node_763;
        node_763=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_763),info));
        if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_761;
        info->in_fun_param=in_fun_param_762;
        list$1tuple2$2charphsNodephph_push_back(params_755,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1901, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(label_760),(struct sNode*)come_increment_ref_count(node_763))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_760 = come_decrement_ref_count2(label_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_760 = come_decrement_ref_count2(label_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_756;
    guard_break_767=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_767=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_768=((void*)0);
    method_block_sline_769=0;
    if(    *info->p==123) {
        head_770=info->p;
        method_block_sline_769=info->sline;
        ((char*)(__right_value768=skip_block(info)));
        __right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_771=info->p;
        __dec_obj325=method_block_768;
        method_block_768=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1938, "struct buffer*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_772=tail_771-head_770;
        mem_773=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_772+1)), "05call.c", 1941, "char*", (void*)0, (void*)0));
        memcpy(mem_773,head_770,len_772);
        mem_773[len_772]=0;
        buffer_append_str(method_block_768,mem_773);
        buffer_append_str(method_block_768,"\n");
        mem_773 = come_decrement_ref_count2(mem_773, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1951, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value773=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1951, "struct sFunCallNode*", (void*)0, (void*)0)),fun_name,params_755,guard_break_767,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_751),(struct buffer*)come_increment_ref_count(method_block_768),method_block_sline_769,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_774=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value773,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj326=node_774;
    node_774=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_774),info));
    if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    __result445__ = gComeFunResultObject = __result_obj__ = node_774;
    come_call_finalizer3(method_generics_types_751,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_755,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_768,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_774) { node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj315;
char* __dec_obj316;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj315=self->v1;
            come_call_finalizer3(__dec_obj315,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj316=self->v2;
            __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value763 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_764;
struct tuple2$2charphsNodeph* __dec_obj320;
void* __right_value764 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_765;
struct tuple2$2charphsNodeph* __dec_obj321;
void* __right_value765 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_766;
struct tuple2$2charphsNodeph* __dec_obj322;
struct list$1tuple2$2charphsNodephph* __result443__;
    if(    self->len==0) {
        litem_764=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value763=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1305, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_764->prev=((void*)0);
        litem_764->next=((void*)0);
        __dec_obj320=litem_764->item;
        litem_764->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj320,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_764;
        self->head=litem_764;
    }
    else if(    self->len==1) {
        litem_765=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value764=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1315, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_765->prev=self->head;
        litem_765->next=((void*)0);
        __dec_obj321=litem_765->item;
        litem_765->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj321,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_765;
        self->head->next=litem_765;
    }
    else {
        litem_766=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value765=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1325, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_766->prev=self->tail;
        litem_766->next=((void*)0);
        __dec_obj322=litem_766->item;
        litem_766->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj322,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_766;
        self->tail=litem_766;
    }
    self->len++;
    __result443__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result443__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj323;
struct sNode* __dec_obj324;
struct tuple2$2charphsNodeph* __result444__;
    __dec_obj323=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj324=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
    __result444__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result444__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result446__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result446__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result446__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value782 = (void*)0;
struct sNode* __result449__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value777=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "struct sReturnNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result449__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value782=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value777,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value782) { __right_value782 = come_decrement_ref_count2(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result449__;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result447__;
void* __right_value778 = (void*)0;
struct sReturnNode* result_775;
void* __right_value779 = (void*)0;
char* __dec_obj327;
void* __right_value780 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value781 = (void*)0;
char* __dec_obj329;
struct sReturnNode* __result448__;
    if(    self==(void*)0) {
        __result447__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result447__;
    }
    result_775=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_775->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_775->sname;
        result_775->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_775->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj328=result_775->value;
        result_775->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj329=result_775->value_source;
        result_775->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result448__ = gComeFunResultObject = __result_obj__ = result_775;
    come_call_finalizer3(result_775,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value786 = (void*)0;
struct sNode* __result450__;
char* head_776;
void* __right_value787 = (void*)0;
struct sNode* value_777;
char* tail_778;
void* __right_value788 = (void*)0;
struct sNode* __dec_obj330;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value792 = (void*)0;
struct sNode* __result451__;
int nest_780;
char* head_781;
int head_sline_782;
int sline_real_783;
void* __right_value793 = (void*)0;
char* buf_784;
_Bool is_type_name__785;
_Bool is_special_word_787;
_Bool define_function_pointer_flag_788;
void* __right_value794 = (void*)0;
_Bool lambda_flag_789;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
char* word2_790;
_Bool fun_name_with_type_name_791;
void* __right_value797 = (void*)0;
char* word2_792;
_Bool call_method_generics_fun_call_793;
void* __right_value798 = (void*)0;
char* __dec_obj331;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
_Bool _if_conditional21;
int nest_794;
_Bool inline_asm_795;
void* __right_value801 = (void*)0;
char* __dec_obj332;
void* __right_value802 = (void*)0;
char* __dec_obj333;
void* __right_value803 = (void*)0;
char* __dec_obj334;
void* __right_value804 = (void*)0;
struct sNode* node_796;
struct sNode* __result452__;
_Bool no_comma_797;
void* __right_value805 = (void*)0;
struct sNode* exp_798;
void* __right_value806 = (void*)0;
struct sNode* exp2_799;
void* __right_value807 = (void*)0;
struct sNode* __result453__;
void* __right_value808 = (void*)0;
char* block_text_800;
char* contents_801;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value814 = (void*)0;
struct sNode* __result456__;
void* __right_value815 = (void*)0;
struct sNode* node_803;
struct sNode* __result457__;
void* __right_value816 = (void*)0;
struct sNode* node_804;
struct sNode* __result458__;
struct buffer* come_block_805;
int come_block_sline_806;
char* head_807;
void* __right_value817 = (void*)0;
char* tail_808;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct buffer* __dec_obj337;
int len_809;
void* __right_value820 = (void*)0;
char* mem_810;
char* head_811;
_Bool no_output_come_code_812;
void* __right_value821 = (void*)0;
char* tail_813;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct buffer* __dec_obj338;
int len_814;
void* __right_value824 = (void*)0;
char* mem_815;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value830 = (void*)0;
struct sNode* node_816;
struct sNode* __result461__;
struct buffer* come_block_818;
int come_block_sline_819;
void* __right_value831 = (void*)0;
struct sNode* node_820;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value837 = (void*)0;
struct sNode* __result464__;
int time_out_822;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct list$1sNodeph* vars_823;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct list$1sBlockph* blocks_824;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sBlock* else_block_825;
void* __right_value844 = (void*)0;
struct sBlock* __dec_obj343;
void* __right_value845 = (void*)0;
struct sNode* var_name_826;
void* __right_value846 = (void*)0;
struct sBlock* block_827;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value889 = (void*)0;
struct sNode* __result488__;
void* __right_value890 = (void*)0;
struct sNode* node_863;
struct sNode* __result489__;
void* __right_value891 = (void*)0;
struct sNode* node_864;
struct sNode* __result490__;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value896 = (void*)0;
struct sNode* __result493__;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value901 = (void*)0;
struct sNode* __result496__;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value906 = (void*)0;
struct sNode* __result499__;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value911 = (void*)0;
struct sNode* __result502__;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value916 = (void*)0;
struct sNode* __result505__;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value921 = (void*)0;
struct sNode* __result508__;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value926 = (void*)0;
struct sNode* __result511__;
void* __right_value927 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_872=0;
char* name_873=0;
_Bool err_874=0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value933 = (void*)0;
struct sNode* __result514__;
void* __right_value934 = (void*)0;
struct sNode* node_876;
struct sNode* __result515__;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct buffer* buf2_877;
void* __right_value937 = (void*)0;
char* word_878;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct list$1sNodeph* exps_879;
void* __right_value940 = (void*)0;
struct sNode* exp_880;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value948 = (void*)0;
struct sNode* __result518__;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct buffer* fun_name_882;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct sType* type_883;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sClass* klass_887;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sType* __dec_obj372;
void* __right_value958 = (void*)0;
char* buf2_888;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* node_889;
struct sNode* __result523__;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct buffer* fun_name_890;
void* __right_value963 = (void*)0;
char* buf2_891;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* node_892;
struct sNode* __result524__;
void* __right_value966 = (void*)0;
struct sNode* node_893;
struct sNode* __result525__;
void* __right_value967 = (void*)0;
struct sNode* node_894;
struct sNode* __result526__;
void* __right_value968 = (void*)0;
struct sNode* node_895;
struct sNode* __result527__;
void* __right_value969 = (void*)0;
struct sNode* node_896;
struct sNode* __result528__;
struct sNode* __result529__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value785=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1985, "struct sReturnNode*", (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result450__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value786=_inf_value6));
            come_call_finalizer3(__right_value785,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value786) { __right_value786 = come_decrement_ref_count2(__right_value786, ((struct sNode*)__right_value786)->finalize, ((struct sNode*)__right_value786)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result450__;
        }
        else {
            head_776=info->p;
            value_777=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_778=info->p;
            __dec_obj330=value_777;
            value_777=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_777),info));
            if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_779[tail_778-head_776+1];
            memset(&buf_779, 0, sizeof(char)            *(tail_778-head_776+1)            );
            memcpy(buf_779,head_776,tail_778-head_776);
            buf_779[tail_778-head_776]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1997, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value791=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1997, "struct sReturnNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_777),(char*)come_increment_ref_count(__builtin_string(buf_779)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value792=_inf_value7));
            if(value_777) { value_777 = come_decrement_ref_count2(value_777, ((struct sNode*)value_777)->finalize, ((struct sNode*)value_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value791,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value792) { __right_value792 = come_decrement_ref_count2(__right_value792, ((struct sNode*)__right_value792)->finalize, ((struct sNode*)__right_value792)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result451__;
            if(value_777) { value_777 = come_decrement_ref_count2(value_777, ((struct sNode*)value_777)->finalize, ((struct sNode*)value_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_780=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_780++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_780--;
                if(                nest_780==0) {
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
        head_781=info->p;
        head_sline_782=info->sline;
        sline_real_783=info->sline_real;
        info->sline_real=info->sline;
        buf_784=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__785=is_type_name(buf_784,info);
        static char* is_special_word_array_786[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_787=charppa_contained(is_special_word_array_786,19,buf_784);
        define_function_pointer_flag_788=(_Bool)0;
        if(        !is_special_word_787&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value794=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value794,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_788=(_Bool)1;
                }
            }
            info->p=head_781;
            info->sline=head_sline_782;
        }
        lambda_flag_789=(_Bool)0;
        if(        !is_special_word_787&&is_type_name__785) {
            info->p=head_781;
            info->sline=head_sline_782;
            ((struct tuple3$3sTypephcharphbool*)(__right_value795=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value795,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_790=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_790,"lambda")) {
                lambda_flag_789=(_Bool)1;
            }
            info->p=head_781;
            info->sline=head_sline_782;
            word2_790 = come_decrement_ref_count2(word2_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_791=(_Bool)0;
        if(        !is_special_word_787) {
            info->p=head_781;
            info->sline=head_sline_782;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_792=(char*)come_increment_ref_count(parse_word(info));
                word2_792 = come_decrement_ref_count2(word2_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_791=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_781;
            info->sline=head_sline_782;
        }
        call_method_generics_fun_call_793=(_Bool)0;
        {
            info->p=head_781;
            info->sline=head_sline_782;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj331=buf_784;
                buf_784=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_784,info)&&((struct sVar*)(__right_value799=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_784)))==((void*)0)&&((struct sVar*)(__right_value800=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_784)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value799,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value800,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_794=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_794++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_794==0) {
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
                    call_method_generics_fun_call_793=(_Bool)1;
                }
            }
            info->p=head_781;
            info->sline=head_sline_782;
        }
        inline_asm_795=(_Bool)0;
        {
            info->p=head_781;
            info->sline=head_sline_782;
            __dec_obj332=buf_784;
            buf_784=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_784,"asm")||string_operator_equals(buf_784,"__asm")||string_operator_equals(buf_784,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_795=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj333=buf_784;
                        buf_784=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_795=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_781;
            info->sline=head_sline_782;
        }
        parse_sharp_v5(info);
        __dec_obj334=buf_784;
        buf_784=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_789) {
            info->p=head_781;
            info->sline=head_sline_782;
            node_796=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_783;
            __result452__ = gComeFunResultObject = __result_obj__ = node_796;
            if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result452__;
            if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_784,"_Static_assert")||string_operator_equals(buf_784,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_797=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_798=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_797;
            expected_next_character(44,info);
            exp2_799=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result453__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value807=static_assert_node((struct sNode*)come_increment_ref_count(exp_798),(struct sNode*)come_increment_ref_count(exp2_799),info)));
            if(exp_798) { exp_798 = come_decrement_ref_count2(exp_798, ((struct sNode*)exp_798)->finalize, ((struct sNode*)exp_798)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_799) { exp2_799 = come_decrement_ref_count2(exp2_799, ((struct sNode*)exp2_799)->finalize, ((struct sNode*)exp2_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value807) { __right_value807 = come_decrement_ref_count2(__right_value807, ((struct sNode*)__right_value807)->finalize, ((struct sNode*)__right_value807)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result453__;
            if(exp_798) { exp_798 = come_decrement_ref_count2(exp_798, ((struct sNode*)exp_798)->finalize, ((struct sNode*)exp_798)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_799) { exp2_799 = come_decrement_ref_count2(exp2_799, ((struct sNode*)exp2_799)->finalize, ((struct sNode*)exp2_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_784,"output")&&*info->p==123) {
            block_text_800=(char*)come_increment_ref_count(skip_block(info));
            contents_801=(char*)come_increment_ref_count(block_text_800);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2235, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value810=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2235, "struct sOutputNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_801),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result456__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value814=_inf_value8));
            block_text_800 = come_decrement_ref_count2(block_text_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_801 = come_decrement_ref_count2(contents_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value810,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value814) { __right_value814 = come_decrement_ref_count2(__right_value814, ((struct sNode*)__right_value814)->finalize, ((struct sNode*)__right_value814)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result456__;
            block_text_800 = come_decrement_ref_count2(block_text_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_801 = come_decrement_ref_count2(contents_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_784,"extern")) {
            node_803=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result457__ = gComeFunResultObject = __result_obj__ = node_803;
            if(node_803) { node_803 = come_decrement_ref_count2(node_803, ((struct sNode*)node_803)->finalize, ((struct sNode*)node_803)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result457__;
            if(node_803) { node_803 = come_decrement_ref_count2(node_803, ((struct sNode*)node_803)->finalize, ((struct sNode*)node_803)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_784,"string")||string_operator_equals(buf_784,"wstring"))&&*info->p==40) {
            node_804=(struct sNode*)come_increment_ref_count(parse_function_call(buf_784,info,(_Bool)0));
            info->sline_real=sline_real_783;
            __result458__ = gComeFunResultObject = __result_obj__ = node_804;
            if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result458__;
            if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_784,"come")) {
            come_block_805=((void*)0);
            come_block_sline_806=0;
            if(            *info->p==123) {
                head_807=info->p;
                come_block_sline_806=info->sline;
                ((char*)(__right_value817=skip_block(info)));
                __right_value817 = come_decrement_ref_count2(__right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_808=info->p;
                __dec_obj337=come_block_805;
                come_block_805=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2260, "struct buffer*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj337,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_809=tail_808-head_807;
                mem_810=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_809+1)), "05call.c", 2263, "char*", (void*)0, (void*)0));
                memcpy(mem_810,head_807,len_809);
                mem_810[len_809]=0;
                buffer_append_str(come_block_805,mem_810);
                buffer_append_str(come_block_805,"\n");
                mem_810 = come_decrement_ref_count2(mem_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_811=info->p;
                come_block_sline_806=info->sline;
                no_output_come_code_812=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value821=expression_v13(info)));
                if(__right_value821) { __right_value821 = come_decrement_ref_count2(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_812;
                tail_813=info->p;
                __dec_obj338=come_block_805;
                come_block_805=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2281, "struct buffer*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_814=tail_813-head_811;
                mem_815=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_814+1)), "05call.c", 2284, "char*", (void*)0, (void*)0));
                memcpy(mem_815,head_811,len_814);
                mem_815[len_814]=0;
                buffer_append_str(come_block_805,"{");
                buffer_append_str(come_block_805,mem_815);
                buffer_append_str(come_block_805,"; }");
                buffer_append_str(come_block_805,"}");
                buffer_append_str(come_block_805,"\n");
                mem_815 = come_decrement_ref_count2(mem_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value826=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2295, "struct sComeCallNode*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_805),come_block_sline_806,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_816=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value826,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_783;
            __result461__ = gComeFunResultObject = __result_obj__ = node_816;
            come_call_finalizer3(come_block_805,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_816) { node_816 = come_decrement_ref_count2(node_816, ((struct sNode*)node_816)->finalize, ((struct sNode*)node_816)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result461__;
            come_call_finalizer3(come_block_805,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_816) { node_816 = come_decrement_ref_count2(node_816, ((struct sNode*)node_816)->finalize, ((struct sNode*)node_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_784,"come_join")&&*info->p==40) {
            come_block_818=((void*)0);
            come_block_sline_819=0;
            expected_next_character(40,info);
            node_820=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_783;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2309, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value833=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2309, "struct sComeJoinNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_820),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value837=_inf_value10));
            come_call_finalizer3(come_block_818,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value833,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value837) { __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result464__;
            come_call_finalizer3(come_block_818,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_784,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_822=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_822=time_out_822*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_823=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2327, "struct list$1sNodeph*", (void*)0, (void*)0))));
            blocks_824=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2328, "struct list$1sBlockph*", (void*)0, (void*)0))));
            else_block_825=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2329, "struct sBlock*", (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj343=else_block_825;
                    else_block_825=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj343,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_826=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_827=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_823,(struct sNode*)come_increment_ref_count(var_name_826));
                    list$1sBlockph_add(blocks_824,(struct sBlock*)come_increment_ref_count(block_827));
                    if(                    *info->p==125) {
                        if(var_name_826) { var_name_826 = come_decrement_ref_count2(var_name_826, ((struct sNode*)var_name_826)->finalize, ((struct sNode*)var_name_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_827,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_826) { var_name_826 = come_decrement_ref_count2(var_name_826, ((struct sNode*)var_name_826)->finalize, ((struct sNode*)var_name_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_827,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_783;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value851=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2359, "struct sComePollNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(vars_823),(struct list$1sBlockph*)come_increment_ref_count(blocks_824),(struct sBlock*)come_increment_ref_count(else_block_825),time_out_822,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result488__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value889=_inf_value11));
            come_call_finalizer3(vars_823,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_824,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_825,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value851,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value889) { __right_value889 = come_decrement_ref_count2(__right_value889, ((struct sNode*)__right_value889)->finalize, ((struct sNode*)__right_value889)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result488__;
            come_call_finalizer3(vars_823,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_824,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_825,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_784,"none")&&*info->p==40) {
            node_863=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_783;
            __result489__ = gComeFunResultObject = __result_obj__ = node_863;
            if(node_863) { node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result489__;
            if(node_863) { node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_784,"some")&&*info->p==40) {
            node_864=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_783;
            __result490__ = gComeFunResultObject = __result_obj__ = node_864;
            if(node_864) { node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result490__;
            if(node_864) { node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_784,"__func__")||string_operator_equals(buf_784,"__FUNCTION__")) {
            info->sline_real=sline_real_783;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value893=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2376, "struct sFuncNode*", (void*)0, (void*)0)),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result493__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value896=_inf_value12));
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value893,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value896) { __right_value896 = come_decrement_ref_count2(__right_value896, ((struct sNode*)__right_value896)->finalize, ((struct sNode*)__right_value896)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result493__;
        }
        else if(        !gComeC&&string_operator_equals(buf_784,"wildcard")) {
            info->sline_real=sline_real_783;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value898=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2380, "struct sWildCard*", (void*)0, (void*)0)),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result496__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value901=_inf_value13));
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value898,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value901) { __right_value901 = come_decrement_ref_count2(__right_value901, ((struct sNode*)__right_value901)->finalize, ((struct sNode*)__right_value901)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result496__;
        }
        else if(        string_operator_equals(buf_784,"__line__")||string_operator_equals(buf_784,"__LINE__")) {
            info->sline_real=sline_real_783;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value903=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2384, "struct sLineNode*", (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result499__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value906=_inf_value14));
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value903,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value906) { __right_value906 = come_decrement_ref_count2(__right_value906, ((struct sNode*)__right_value906)->finalize, ((struct sNode*)__right_value906)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result499__;
        }
        else if(        string_operator_equals(buf_784,"__sname__")) {
            info->sline_real=sline_real_783;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value908=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2388, "struct sSNameNode*", (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result502__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value911=_inf_value15));
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value908,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value911) { __right_value911 = come_decrement_ref_count2(__right_value911, ((struct sNode*)__right_value911)->finalize, ((struct sNode*)__right_value911)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result502__;
        }
        else if(        string_operator_equals(buf_784,"__caller_func__")) {
            info->sline_real=sline_real_783;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value913=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2392, "struct sCallerFuncNode*", (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result505__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value916=_inf_value16));
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value913,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value916) { __right_value916 = come_decrement_ref_count2(__right_value916, ((struct sNode*)__right_value916)->finalize, ((struct sNode*)__right_value916)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result505__;
        }
        else if(        string_operator_equals(buf_784,"__caller_line__")) {
            info->sline_real=sline_real_783;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value918=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2396, "struct sCallerLineNode*", (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result508__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value921=_inf_value17));
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value918,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value921) { __right_value921 = come_decrement_ref_count2(__right_value921, ((struct sNode*)__right_value921)->finalize, ((struct sNode*)__right_value921)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result508__;
        }
        else if(        string_operator_equals(buf_784,"__caller_sname__")) {
            info->sline_real=sline_real_783;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value923=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2400, "struct sCallerSNameNode*", (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result511__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value926=_inf_value18));
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value923,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value926) { __right_value926 = come_decrement_ref_count2(__right_value926, ((struct sNode*)__right_value926)->finalize, ((struct sNode*)__right_value926)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result511__;
        }
        else if(        info->va_arg&&is_type_name(buf_784,info)) {
            info->p=head_781;
            info->sline=head_sline_782;
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value927=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_872=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_873=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_874=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value927,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_783;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value929=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2409, "struct sVarArgTypeName*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_872),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result514__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value933=_inf_value19));
            come_call_finalizer3(type_872,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_873 = come_decrement_ref_count2(name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value929,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value933) { __right_value933 = come_decrement_ref_count2(__right_value933, ((struct sNode*)__right_value933)->finalize, ((struct sNode*)__right_value933)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result514__;
            come_call_finalizer3(type_872,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_873 = come_decrement_ref_count2(name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_784,"sizeof")||string_operator_equals(buf_784,"_Alignof")||string_operator_equals(buf_784,"_Alignas")||string_operator_equals(buf_784,"__alignof__")) {
            node_876=(struct sNode*)come_increment_ref_count(string_node_v21(buf_784,head_781,head_sline_782,info));
            info->sline_real=sline_real_783;
            __result515__ = gComeFunResultObject = __result_obj__ = node_876;
            if(node_876) { node_876 = come_decrement_ref_count2(node_876, ((struct sNode*)node_876)->finalize, ((struct sNode*)node_876)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result515__;
            if(node_876) { node_876 = come_decrement_ref_count2(node_876, ((struct sNode*)node_876)->finalize, ((struct sNode*)node_876)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_795) {
            buf2_877=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2418, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p!=40) {
                word_878=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_877,word_878);
                word_878 = come_decrement_ref_count2(word_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_877,40);
            exps_879=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2429, "struct list$1sNodeph*", (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_877,40);
                    info->p++;
                    exp_880=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_879,(struct sNode*)come_increment_ref_count(exp_880));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_877,41);
                    if(exp_880) { exp_880 = come_decrement_ref_count2(exp_880, ((struct sNode*)exp_880)->finalize, ((struct sNode*)exp_880)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_877,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_877,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_877,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_783;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2466, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value943=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2466, "struct sInlineAssembler*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_877)),(struct list$1sNodeph*)come_increment_ref_count(exps_879),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result518__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value948=_inf_value20));
            come_call_finalizer3(buf2_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_879,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value943,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value948) { __right_value948 = come_decrement_ref_count2(__right_value948, ((struct sNode*)__right_value948)->finalize, ((struct sNode*)__right_value948)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result518__;
            come_call_finalizer3(buf2_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_879,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_791) {
            fun_name_882=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2469, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(fun_name_882,buf_784);
            type_883=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value952=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value951=buffer_to_string(fun_name_882))))))));
            __right_value951 = come_decrement_ref_count2(__right_value951, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value952,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_883==((void*)0)) {
                klass_887=((struct sClass*)(__right_value955=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value954=buffer_to_string(fun_name_882))))));
                __right_value954 = come_decrement_ref_count2(__right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value955,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_887) {
                    __dec_obj372=type_883;
                    type_883=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2479, "struct sType*", (void*)0, (void*)0)),buf_784,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj372,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_784);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_883->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_882,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_882,"_");
            buf2_888=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_882,buf2_888);
            node_889=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value959=buffer_to_string(fun_name_882))),info,(_Bool)0));
            __right_value959 = come_decrement_ref_count2(__right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_783;
            __result523__ = gComeFunResultObject = __result_obj__ = node_889;
            come_call_finalizer3(fun_name_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_883,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_888 = come_decrement_ref_count2(buf2_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_889) { node_889 = come_decrement_ref_count2(node_889, ((struct sNode*)node_889)->finalize, ((struct sNode*)node_889)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result523__;
            come_call_finalizer3(fun_name_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_883,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_888 = come_decrement_ref_count2(buf2_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_889) { node_889 = come_decrement_ref_count2(node_889, ((struct sNode*)node_889)->finalize, ((struct sNode*)node_889)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_890=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2514, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(fun_name_890,buf_784);
            buffer_append_str(fun_name_890,"_");
            buf2_891=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_890,buf2_891);
            node_892=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value964=buffer_to_string(fun_name_890))),info,(_Bool)0));
            __right_value964 = come_decrement_ref_count2(__right_value964, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_783;
            __result524__ = gComeFunResultObject = __result_obj__ = node_892;
            come_call_finalizer3(fun_name_890,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_891 = come_decrement_ref_count2(buf2_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_892) { node_892 = come_decrement_ref_count2(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result524__;
            come_call_finalizer3(fun_name_890,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_891 = come_decrement_ref_count2(buf2_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_892) { node_892 = come_decrement_ref_count2(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_793) {
            node_893=(struct sNode*)come_increment_ref_count(parse_function_call(buf_784,info,(_Bool)0));
            info->sline_real=sline_real_783;
            __result525__ = gComeFunResultObject = __result_obj__ = node_893;
            if(node_893) { node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result525__;
            if(node_893) { node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_787&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__785)) {
            node_894=(struct sNode*)come_increment_ref_count(parse_function_call(buf_784,info,(_Bool)0));
            info->sline_real=sline_real_783;
            __result526__ = gComeFunResultObject = __result_obj__ = node_894;
            if(node_894) { node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result526__;
            if(node_894) { node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_895=(struct sNode*)come_increment_ref_count(string_node_v21(buf_784,head_781,head_sline_782,info));
            info->sline_real=sline_real_783;
            __result527__ = gComeFunResultObject = __result_obj__ = node_895;
            if(node_895) { node_895 = come_decrement_ref_count2(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result527__;
            if(node_895) { node_895 = come_decrement_ref_count2(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_784 = come_decrement_ref_count2(buf_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_896=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result528__ = gComeFunResultObject = __result_obj__ = node_896;
        if(node_896) { node_896 = come_decrement_ref_count2(node_896, ((struct sNode*)node_896)->finalize, ((struct sNode*)node_896)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result528__;
        if(node_896) { node_896 = come_decrement_ref_count2(node_896, ((struct sNode*)node_896)->finalize, ((struct sNode*)node_896)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result529__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result529__;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result454__;
void* __right_value811 = (void*)0;
struct sOutputNode* result_802;
void* __right_value812 = (void*)0;
char* __dec_obj335;
void* __right_value813 = (void*)0;
char* __dec_obj336;
struct sOutputNode* __result455__;
    if(    self==(void*)0) {
        __result454__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result454__;
    }
    result_802=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_802->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj335=result_802->sname;
        result_802->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_802->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj336=result_802->contents;
        result_802->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result455__ = gComeFunResultObject = __result_obj__ = result_802;
    come_call_finalizer3(result_802,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result455__;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result459__;
void* __right_value827 = (void*)0;
struct sComeCallNode* result_817;
void* __right_value828 = (void*)0;
char* __dec_obj339;
void* __right_value829 = (void*)0;
struct buffer* __dec_obj340;
struct sComeCallNode* __result460__;
    if(    self==(void*)0) {
        __result459__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result459__;
    }
    result_817=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_817->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj339=result_817->sname;
        result_817->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_817->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj340=result_817->come_block;
        result_817->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj340,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_817->come_block_sline=self->come_block_sline;
    }
    __result460__ = gComeFunResultObject = __result_obj__ = result_817;
    come_call_finalizer3(result_817,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result462__;
void* __right_value834 = (void*)0;
struct sComeJoinNode* result_821;
void* __right_value835 = (void*)0;
char* __dec_obj341;
void* __right_value836 = (void*)0;
struct sNode* __dec_obj342;
struct sComeJoinNode* __result463__;
    if(    self==(void*)0) {
        __result462__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result462__;
    }
    result_821=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_821->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj341=result_821->sname;
        result_821->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_821->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj342=result_821->node;
        result_821->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj342) { __dec_obj342 = come_decrement_ref_count2(__dec_obj342, ((struct sNode*)__dec_obj342)->finalize, ((struct sNode*)__dec_obj342)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result463__ = gComeFunResultObject = __result_obj__ = result_821;
    come_call_finalizer3(result_821,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result463__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result465__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result465__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result465__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value847 = (void*)0;
struct list_item$1sBlockph* litem_828;
struct sBlock* __dec_obj344;
void* __right_value848 = (void*)0;
struct list_item$1sBlockph* litem_829;
struct sBlock* __dec_obj345;
void* __right_value849 = (void*)0;
struct list_item$1sBlockph* litem_830;
struct sBlock* __dec_obj346;
struct list$1sBlockph* __result466__;
    if(    self->len==0) {
        litem_828=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value847=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1235, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_828->prev=((void*)0);
        litem_828->next=((void*)0);
        __dec_obj344=litem_828->item;
        litem_828->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj344,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_828;
        self->head=litem_828;
    }
    else if(    self->len==1) {
        litem_829=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value848=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1245, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_829->prev=self->head;
        litem_829->next=((void*)0);
        __dec_obj345=litem_829->item;
        litem_829->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj345,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_829;
        self->head->next=litem_829;
    }
    else {
        litem_830=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value849=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1255, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_830->prev=self->tail;
        litem_830->next=((void*)0);
        __dec_obj346=litem_830->item;
        litem_830->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj346,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_830;
        self->tail=litem_830;
    }
    self->len++;
    __result466__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result467__;
void* __right_value852 = (void*)0;
struct sComePollNode* result_831;
void* __right_value853 = (void*)0;
char* __dec_obj347;
void* __right_value854 = (void*)0;
struct list$1sNodeph* __dec_obj348;
void* __right_value887 = (void*)0;
struct list$1sBlockph* __dec_obj358;
void* __right_value888 = (void*)0;
struct sBlock* __dec_obj359;
struct sComePollNode* __result487__;
    if(    self==(void*)0) {
        __result467__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result467__;
    }
    result_831=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_831->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj347=result_831->sname;
        result_831->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_831->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj348=result_831->vars;
        result_831->vars=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->vars));
        come_call_finalizer3(__dec_obj348,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj358=result_831->blocks;
        result_831->blocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, self->blocks));
        come_call_finalizer3(__dec_obj358,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj359=result_831->else_block;
        result_831->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj359,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_831->time_out=self->time_out;
    }
    __result487__ = gComeFunResultObject = __result_obj__ = result_831;
    come_call_finalizer3(result_831,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result468__;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct list$1sBlockph* result_832;
struct list_item$1sBlockph* it_833;
void* __right_value886 = (void*)0;
struct list$1sBlockph* __result486__;
    if(    self==((void*)0)) {
        __result468__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    result_832=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1221, "struct list$1sBlockph*", (void*)0, (void*)0))));
    it_833=self->head;
    while(it_833!=((void*)0)) {
        list$1sBlockph_add(result_832,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_833->item)));
        it_833=it_833->next;
    }
    __result486__ = gComeFunResultObject = __result_obj__ = result_832;
    come_call_finalizer3(result_832,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result469__;
void* __right_value857 = (void*)0;
struct sBlock* result_834;
void* __right_value861 = (void*)0;
struct list$1sNodeph* __dec_obj349;
void* __right_value885 = (void*)0;
struct sVarTable* __dec_obj357;
struct sBlock* __result485__;
    if(    self==(void*)0) {
        __result469__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    result_834=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj349=result_834->mNodes;
        result_834->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodeph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj349,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj357=result_834->mVarTable;
        result_834->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj357,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_834->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result485__ = gComeFunResultObject = __result_obj__ = result_834;
    come_call_finalizer3(result_834,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result470__;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct list$1sNodeph* result_835;
struct list_item$1sNodeph* it_836;
void* __right_value860 = (void*)0;
struct list$1sNodeph* __result471__;
    if(    self==((void*)0)) {
        __result470__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result470__;
    }
    result_835=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_836=self->head;
    while(it_836!=((void*)0)) {
        list$1sNodeph_add(result_835,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_836->item)));
        it_836=it_836->next;
    }
    __result471__ = gComeFunResultObject = __result_obj__ = result_835;
    come_call_finalizer3(result_835,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result471__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result472__;
void* __right_value862 = (void*)0;
struct sVarTable* result_837;
void* __right_value884 = (void*)0;
struct map$2charphsVarph* __dec_obj356;
struct sVarTable* __result484__;
    if(    self==(void*)0) {
        __result472__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result472__;
    }
    result_837=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj356=result_837->mVars;
        result_837->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarph_clone, self->mVars));
        come_call_finalizer3(__dec_obj356,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_837->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_837->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_837->mID=self->mID;
    }
    __result484__ = gComeFunResultObject = __result_obj__ = result_837;
    come_call_finalizer3(result_837,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result473__;
void* __right_value863 = (void*)0;
void* __right_value869 = (void*)0;
struct map$2charphsVarph* result_839;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct list$1charp* __dec_obj351;
char* it_840;
struct sVar* default_value_841;
void* __right_value872 = (void*)0;
struct sVar* it2_844;
void* __right_value883 = (void*)0;
struct map$2charphsVarph* __result483__;
default_value_841 = (void*)0;
    if(    self==((void*)0)) {
        __result473__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result473__;
    }
    result_839=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2551, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj351=result_839->key_list;
    result_839->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2553, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj351,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_840=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_840=map$2charphsVarph_next(self)    ){
        memset(&default_value_841,0,sizeof(struct sVar*));
        it2_844=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_840,default_value_841));
        map$2charphsVarph_put(result_839,it_840,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_844)));
        come_call_finalizer3(it2_844,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result483__ = gComeFunResultObject = __result_obj__ = result_839;
    come_call_finalizer3(result_839,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result483__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
int i_838;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct list$1charp* __dec_obj350;
struct map$2charphsVarph* __result475__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value864=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2480, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value865=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2481, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value866=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2482, "_Bool*", (void*)0, (void*)0))));
    for(    i_838=0;    i_838<128;    i_838++    ){
        self->item_existance[i_838]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj350=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2492, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj350,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result475__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result474__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result474__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result474__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_842;
unsigned int it_843;
struct sVar* __result476__;
struct sVar* __result477__;
struct sVar* __result478__;
struct sVar* __result479__;
    hash_842=charp_get_hash_key(((char*)key))%self->size;
    it_843=hash_842;
    while((_Bool)1) {
        if(        self->item_existance[it_843]) {
            if(            charp_equals(self->keys[it_843],key)) {
                __result476__ = gComeFunResultObject = __result_obj__ = self->items[it_843];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result476__;
            }
            it_843++;
            if(            it_843>=self->size) {
                it_843=0;
            }
            else if(            it_843==hash_842) {
                __result477__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result477__;
            }
        }
        else {
            __result478__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result478__;
        }
    }
    __result479__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result479__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_856;
int it_857;
_Bool same_key_exist_858;
char* it2_859;
struct map$2charphsVarph* __result480__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_856=charp_get_hash_key(key)%self->size;
    it_857=hash_856;
    while((_Bool)1) {
        if(        self->item_existance[it_857]) {
            if(            charp_equals(self->keys[it_857],key)) {
                if(                1) {
                    self->keys[it_857] = come_decrement_ref_count2(self->keys[it_857], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_857]);
                    self->keys[it_857]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_857]);
                    self->keys[it_857]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_857],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_857]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_857]=item;
                }
                break;
            }
            it_857++;
            if(            it_857>=self->size) {
                it_857=0;
            }
            else if(            it_857==hash_856) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_857]=(_Bool)1;
            if(            1) {
                self->keys[it_857]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_857]=key;
            }
            if(            1) {
                self->items[it_857]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_857]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_858=(_Bool)0;
    for(    it2_859=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_859=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_859,key)) {
            same_key_exist_858=(_Bool)1;
        }
    }
    if(    !same_key_exist_858) {
        list$1charp_push_back(self->key_list,key);
    }
    __result480__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result480__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_845;
void* __right_value873 = (void*)0;
char** keys_846;
void* __right_value874 = (void*)0;
struct sVar** items_847;
void* __right_value875 = (void*)0;
_Bool* item_existance_848;
int len_849;
char* it_850;
struct sVar* default_value_851;
void* __right_value876 = (void*)0;
struct sVar* it2_852;
unsigned int hash_853;
int n_854;
struct sVar* default_value_855;
void* __right_value877 = (void*)0;
default_value_851 = (void*)0;
default_value_855 = (void*)0;
    size_845=self->size*10;
    keys_846=(char**)come_increment_ref_count(((char**)(__right_value873=(char**)come_calloc(1, sizeof(char*)*(1*(size_845)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_847=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value874=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_845)), "./comelang.h", 2709, "struct sVar**", (void*)0, (void*)0))));
    item_existance_848=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value875=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_845)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_849=0;
    for(    it_850=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_850=map$2charphsVarph_next(self)    ){
        memset(&default_value_851,0,sizeof(struct sVar*));
        it2_852=((struct sVar*)(__right_value876=map$2charphsVarph_at(self,it_850,default_value_851)));
        come_call_finalizer3(__right_value876,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_853=charp_get_hash_key(it_850)%size_845;
        n_854=hash_853;
        while((_Bool)1) {
            if(            item_existance_848[n_854]) {
                n_854++;
                if(                n_854>=size_845) {
                    n_854=0;
                }
                else if(                n_854==hash_853) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_848[n_854]=(_Bool)1;
                keys_846[n_854]=it_850;
                items_847[n_854]=((struct sVar*)(__right_value877=map$2charphsVarph_at(self,it_850,default_value_855)));
                come_call_finalizer3(__right_value877,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_849++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_846;
    self->items=items_847;
    self->item_existance=item_existance_848;
    self->size=size_845;
    self->len=len_849;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result481__;
void* __right_value878 = (void*)0;
struct sVar* result_860;
void* __right_value879 = (void*)0;
char* __dec_obj352;
void* __right_value880 = (void*)0;
char* __dec_obj353;
void* __right_value881 = (void*)0;
struct sType* __dec_obj354;
void* __right_value882 = (void*)0;
char* __dec_obj355;
struct sVar* __result482__;
    if(    self==(void*)0) {
        __result481__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result481__;
    }
    result_860=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj352=result_860->mName;
        result_860->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj353=result_860->mCValueName;
        result_860->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj354=result_860->mType;
        result_860->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj354,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_860->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_860->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_860->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_860->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_860->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj355=result_860->mFunName;
        result_860->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result482__ = gComeFunResultObject = __result_obj__ = result_860;
    come_call_finalizer3(result_860,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result482__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_861;
int i_862;
    for(    i_861=0;    i_861<self->size;    i_861++    ){
        if(        self->item_existance[i_861]) {
            if(            1) {
                come_call_finalizer3(self->items[i_861],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_862=0;    i_862<self->size;    i_862++    ){
        if(        self->item_existance[i_862]) {
            if(            1) {
                self->keys[i_862] = come_decrement_ref_count2(self->keys[i_862], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result491__;
void* __right_value894 = (void*)0;
struct sFuncNode* result_865;
void* __right_value895 = (void*)0;
char* __dec_obj360;
struct sFuncNode* __result492__;
    if(    self==(void*)0) {
        __result491__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result491__;
    }
    result_865=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_865->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj360=result_865->sname;
        result_865->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_865->sline_real=self->sline_real;
    }
    __result492__ = gComeFunResultObject = __result_obj__ = result_865;
    come_call_finalizer3(result_865,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result492__;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result494__;
void* __right_value899 = (void*)0;
struct sWildCard* result_866;
void* __right_value900 = (void*)0;
char* __dec_obj361;
struct sWildCard* __result495__;
    if(    self==(void*)0) {
        __result494__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result494__;
    }
    result_866=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_866->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj361=result_866->sname;
        result_866->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_866->sline_real=self->sline_real;
    }
    __result495__ = gComeFunResultObject = __result_obj__ = result_866;
    come_call_finalizer3(result_866,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result495__;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result497__;
void* __right_value904 = (void*)0;
struct sLineNode* result_867;
void* __right_value905 = (void*)0;
char* __dec_obj362;
struct sLineNode* __result498__;
    if(    self==(void*)0) {
        __result497__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result497__;
    }
    result_867=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_867->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj362=result_867->sname;
        result_867->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_867->sline_real=self->sline_real;
    }
    __result498__ = gComeFunResultObject = __result_obj__ = result_867;
    come_call_finalizer3(result_867,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result498__;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result500__;
void* __right_value909 = (void*)0;
struct sSNameNode* result_868;
void* __right_value910 = (void*)0;
char* __dec_obj363;
struct sSNameNode* __result501__;
    if(    self==(void*)0) {
        __result500__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result500__;
    }
    result_868=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_868->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_868->sname;
        result_868->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_868->sline_real=self->sline_real;
    }
    __result501__ = gComeFunResultObject = __result_obj__ = result_868;
    come_call_finalizer3(result_868,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result501__;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result503__;
void* __right_value914 = (void*)0;
struct sCallerFuncNode* result_869;
void* __right_value915 = (void*)0;
char* __dec_obj364;
struct sCallerFuncNode* __result504__;
    if(    self==(void*)0) {
        __result503__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result503__;
    }
    result_869=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_869->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj364=result_869->sname;
        result_869->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_869->sline_real=self->sline_real;
    }
    __result504__ = gComeFunResultObject = __result_obj__ = result_869;
    come_call_finalizer3(result_869,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result504__;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result506__;
void* __right_value919 = (void*)0;
struct sCallerLineNode* result_870;
void* __right_value920 = (void*)0;
char* __dec_obj365;
struct sCallerLineNode* __result507__;
    if(    self==(void*)0) {
        __result506__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result506__;
    }
    result_870=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_870->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj365=result_870->sname;
        result_870->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_870->sline_real=self->sline_real;
    }
    __result507__ = gComeFunResultObject = __result_obj__ = result_870;
    come_call_finalizer3(result_870,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result507__;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result509__;
void* __right_value924 = (void*)0;
struct sCallerSNameNode* result_871;
void* __right_value925 = (void*)0;
char* __dec_obj366;
struct sCallerSNameNode* __result510__;
    if(    self==(void*)0) {
        __result509__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result509__;
    }
    result_871=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_871->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj366=result_871->sname;
        result_871->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_871->sline_real=self->sline_real;
    }
    __result510__ = gComeFunResultObject = __result_obj__ = result_871;
    come_call_finalizer3(result_871,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result510__;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result512__;
void* __right_value930 = (void*)0;
struct sVarArgTypeName* result_875;
void* __right_value931 = (void*)0;
char* __dec_obj367;
void* __right_value932 = (void*)0;
struct sType* __dec_obj368;
struct sVarArgTypeName* __result513__;
    if(    self==(void*)0) {
        __result512__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result512__;
    }
    result_875=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_875->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj367=result_875->sname;
        result_875->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_875->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj368=result_875->type;
        result_875->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj368,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result513__ = gComeFunResultObject = __result_obj__ = result_875;
    come_call_finalizer3(result_875,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result513__;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result516__;
void* __right_value944 = (void*)0;
struct sInlineAssembler* result_881;
void* __right_value945 = (void*)0;
char* __dec_obj369;
void* __right_value946 = (void*)0;
char* __dec_obj370;
void* __right_value947 = (void*)0;
struct list$1sNodeph* __dec_obj371;
struct sInlineAssembler* __result517__;
    if(    self==(void*)0) {
        __result516__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result516__;
    }
    result_881=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_881->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj369=result_881->sname;
        result_881->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_881->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj370=result_881->source;
        result_881->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj371=result_881->exps;
        result_881->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj371,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result517__ = gComeFunResultObject = __result_obj__ = result_881;
    come_call_finalizer3(result_881,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result517__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_884;
unsigned int hash_885;
unsigned int it_886;
struct sType* __result519__;
struct sType* __result520__;
struct sType* __result521__;
struct sType* __result522__;
default_value_884 = (void*)0;
    memset(&default_value_884,0,sizeof(struct sType*));
    hash_885=charp_get_hash_key(((char*)key))%self->size;
    it_886=hash_885;
    while((_Bool)1) {
        if(        self->item_existance[it_886]) {
            if(            charp_equals(self->keys[it_886],key)) {
                __result519__ = gComeFunResultObject = __result_obj__ = self->items[it_886];
                come_call_finalizer3(default_value_884,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result519__;
            }
            it_886++;
            if(            it_886>=self->size) {
                it_886=0;
            }
            else if(            it_886==hash_885) {
                __result520__ = gComeFunResultObject = __result_obj__ = default_value_884;
                come_call_finalizer3(default_value_884,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result520__;
            }
        }
        else {
            __result521__ = gComeFunResultObject = __result_obj__ = default_value_884;
            come_call_finalizer3(default_value_884,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result521__;
        }
    }
    __result522__ = gComeFunResultObject = __result_obj__ = default_value_884;
    come_call_finalizer3(default_value_884,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result522__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value970 = (void*)0;
struct sNode* __result530__;
    __result530__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value970=expression_node_v99(info)));
    if(__right_value970) { __right_value970 = come_decrement_ref_count2(__right_value970, ((struct sNode*)__right_value970)->finalize, ((struct sNode*)__right_value970)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result530__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sNode* __dec_obj373;
struct sNode* __result531__;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* __dec_obj374;
struct sNode* __result532__;
struct sNode* __result533__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj373=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj373) { __dec_obj373 = come_decrement_ref_count2(__dec_obj373, ((struct sNode*)__dec_obj373)->finalize, ((struct sNode*)__dec_obj373)->_protocol_obj, 0,0,0, (void*)0); };
        __result531__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result531__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj374=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj374) { __dec_obj374 = come_decrement_ref_count2(__dec_obj374, ((struct sNode*)__dec_obj374)->finalize, ((struct sNode*)__dec_obj374)->_protocol_obj, 0,0,0, (void*)0); };
        __result532__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result532__;
    }
    __result533__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result533__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value975 = (void*)0;
struct sNode* node_897;
void* __right_value976 = (void*)0;
struct sNode* __dec_obj375;
struct sNode* __result534__;
    node_897=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj375=node_897;
    node_897=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_897),info));
    if(__dec_obj375) { __dec_obj375 = come_decrement_ref_count2(__dec_obj375, ((struct sNode*)__dec_obj375)->finalize, ((struct sNode*)__dec_obj375)->_protocol_obj, 0,0,0, (void*)0); };
    __result534__ = gComeFunResultObject = __result_obj__ = node_897;
    if(node_897) { node_897 = come_decrement_ref_count2(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result534__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_898;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct buffer* buf_899;
void* __right_value979 = (void*)0;
char* __dec_obj376;
int i_900;
void* __right_value980 = (void*)0;
char* __dec_obj377;
void* __right_value981 = (void*)0;
char* __dec_obj378;
int i_901;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
char* __result535__;
struct_name_898 = (void*)0;
    buf_899=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2600, "struct buffer*", (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj376=struct_name_898;
        struct_name_898=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_900=0;            i_900<obj_type->mOriginalTypeNamePointerNum;            i_900++            ){
                buffer_append_str(buf_899,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj377=struct_name_898;
        struct_name_898=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj378=struct_name_898;
        struct_name_898=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_901=0;        i_901<obj_type->mPointerNum;        i_901++        ){
            buffer_append_str(buf_899,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_899,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_899,"pa");
    }
    __result535__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value983=xsprintf("%s%s_%s",struct_name_898,((char*)(__right_value982=buffer_to_string(buf_899))),fun_name)));
    struct_name_898 = come_decrement_ref_count2(struct_name_898, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_899,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result535__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_902;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct buffer* buf_903;
void* __right_value986 = (void*)0;
char* __dec_obj379;
void* __right_value987 = (void*)0;
char* __dec_obj380;
int i_904;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
char* __result536__;
struct_name_902 = (void*)0;
    buf_903=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2635, "struct buffer*", (void*)0, (void*)0))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj379=struct_name_902;
        struct_name_902=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj380=struct_name_902;
        struct_name_902=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_904=0;        i_904<obj_type->mPointerNum;        i_904++        ){
            buffer_append_str(buf_903,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_903,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_903,"pa");
    }
    __result536__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value989=xsprintf("%s%s_%s",struct_name_902,((char*)(__right_value988=buffer_to_string(buf_903))),fun_name)));
    struct_name_902 = come_decrement_ref_count2(struct_name_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_903,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value988 = come_decrement_ref_count2(__right_value988, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value989 = come_decrement_ref_count2(__right_value989, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result536__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_905;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct buffer* buf_906;
void* __right_value992 = (void*)0;
char* __dec_obj381;
int i_907;
void* __right_value993 = (void*)0;
char* __dec_obj382;
void* __right_value994 = (void*)0;
char* __dec_obj383;
int i_908;
void* __right_value995 = (void*)0;
int len_910;
void* __right_value996 = (void*)0;
char* __result537__;
struct_name_905 = (void*)0;
    buf_906=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2661, "struct buffer*", (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj381=struct_name_905;
        struct_name_905=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_907=0;            i_907<obj_type->mOriginalTypeNamePointerNum;            i_907++            ){
                buffer_append_str(buf_906,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj382=struct_name_905;
        struct_name_905=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj383=struct_name_905;
        struct_name_905=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_908=0;        i_908<obj_type->mPointerNum;        i_908++        ){
            buffer_append_str(buf_906,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_906,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_906,"pa");
    }
    char none_method_name_909[charp_length(fun_name)+1];
    memset(&none_method_name_909, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_910=string_length(struct_name_905)+string_length(((char*)(__right_value995=buffer_to_string(buf_906))));
    __right_value995 = come_decrement_ref_count2(__right_value995, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_909,fun_name+len_910+1,charp_length(fun_name)-len_910-1);
    none_method_name_909[charp_length(fun_name)-len_910-1]=0;
    __result537__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value996=__builtin_string(none_method_name_909)));
    struct_name_905 = come_decrement_ref_count2(struct_name_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_906,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result537__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value997 = (void*)0;
char* struct_name_911;
void* __right_value998 = (void*)0;
char* __result538__;
    struct_name_911=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result538__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value998=xsprintf("%s_%s",struct_name_911,fun_name)));
    struct_name_911 = come_decrement_ref_count2(struct_name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result538__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result539__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result539__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result539__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_912;
char* p_913;
int sline_914;
_Bool err_flag_915;
void* __right_value1001 = (void*)0;
char* label_916;
void* __right_value1002 = (void*)0;
char* __dec_obj384;
char* __dec_obj385;
_Bool no_comma_917;
_Bool in_fun_param_918;
void* __right_value1003 = (void*)0;
struct sNode* node_919;
void* __right_value1004 = (void*)0;
struct sNode* __dec_obj386;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1013 = (void*)0;
struct sNode* __result542__;
struct sNode* __result543__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_912=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2724, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_913=info->p;
            sline_914=info->sline;
            err_flag_915=(_Bool)0;
            label_916=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj384=label_916;
                label_916=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_915=(_Bool)1;
            }
            if(            err_flag_915==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj385=label_916;
                label_916=((void*)0);
                __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_913;
                info->sline=sline_914;
            }
            no_comma_917=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_918=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_919=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj386=node_919;
            node_919=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_919),info));
            if(__dec_obj386) { __dec_obj386 = come_decrement_ref_count2(__dec_obj386, ((struct sNode*)__dec_obj386)->finalize, ((struct sNode*)__dec_obj386)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_917;
            info->in_fun_param=in_fun_param_918;
            list$1tuple2$2charphsNodephph_push_back(params_912,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2767, "struct tuple2$2charphsNodeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(label_916),(struct sNode*)come_increment_ref_count(node_919))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_916 = come_decrement_ref_count2(label_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_919) { node_919 = come_decrement_ref_count2(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_916 = come_decrement_ref_count2(label_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_919) { node_919 = come_decrement_ref_count2(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2785, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1008=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2785, "struct sLambdaCall*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_912,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result542__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1013=_inf_value21));
        come_call_finalizer3(params_912,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1008,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1013) { __right_value1013 = come_decrement_ref_count2(__right_value1013, ((struct sNode*)__right_value1013)->finalize, ((struct sNode*)__right_value1013)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result542__;
        come_call_finalizer3(params_912,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result543__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result543__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result540__;
void* __right_value1009 = (void*)0;
struct sLambdaCall* result_920;
void* __right_value1010 = (void*)0;
char* __dec_obj387;
void* __right_value1011 = (void*)0;
struct sNode* __dec_obj388;
void* __right_value1012 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj389;
struct sLambdaCall* __result541__;
    if(    self==(void*)0) {
        __result540__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result540__;
    }
    result_920=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_920->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj387=result_920->sname;
        result_920->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_920->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj388=result_920->node;
        result_920->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj388) { __dec_obj388 = come_decrement_ref_count2(__dec_obj388, ((struct sNode*)__dec_obj388)->finalize, ((struct sNode*)__dec_obj388)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj389=result_920->params;
        result_920->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj389,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result541__ = gComeFunResultObject = __result_obj__ = result_920;
    come_call_finalizer3(result_920,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result541__;
}

